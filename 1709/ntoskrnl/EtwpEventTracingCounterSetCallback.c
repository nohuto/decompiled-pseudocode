/*
 * XREFs of EtwpEventTracingCounterSetCallback @ 0x14078C4C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpGetNextGuidEntry @ 0x1404EF174 (EtwpGetNextGuidEntry.c)
 *     PcwAddInstance @ 0x140573600 (PcwAddInstance.c)
 *     WmiQueryTraceInformation @ 0x1405EE200 (WmiQueryTraceInformation.c)
 */

__int64 __fastcall EtwpEventTracingCounterSetCallback(int a1, __int64 a2, __int64 a3)
{
  struct _PCW_BUFFER *v5; // r15
  _DWORD *v6; // rsi
  __int64 *v7; // rdx
  signed __int64 *NextGuidEntry; // rax
  NTSTATUS v9; // r14d
  unsigned int v10; // edi
  __int64 v11; // rbx
  ULONG Buffer; // [rsp+38h] [rbp-29h] BYREF
  UNICODE_STRING Name; // [rsp+40h] [rbp-21h] BYREF
  struct _PCW_DATA Data; // [rsp+50h] [rbp-11h] BYREF
  struct _PCW_DATA v15; // [rsp+60h] [rbp-1h] BYREF
  __int64 v16; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+80h] [rbp+1Fh]
  __int64 v19; // [rsp+88h] [rbp+27h] BYREF
  __int64 TraceInformation; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v21; // [rsp+98h] [rbp+37h]

  *(_DWORD *)&Name.Length = 3014700;
  Name.Buffer = L"EventTracingCounterSet";
  if ( (unsigned int)(a1 - 2) >= 2 )
    return 0LL;
  v5 = *(struct _PCW_BUFFER **)(a2 + 24);
  v6 = (_DWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( a3 == 1 )
  {
    v16 = 0LL;
    v7 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    while ( 1 )
    {
      NextGuidEntry = EtwpGetNextGuidEntry((__int64)v6, v7, 0);
      if ( !NextGuidEntry )
        break;
      if ( *((_DWORD *)NextGuidEntry + 20) )
      {
        if ( (signed __int64 *)NextGuidEntry[5] == NextGuidEntry + 5 )
          ++HIDWORD(v18);
        else
          ++HIDWORD(v17);
      }
      else
      {
        LODWORD(v18) = v18 + 1;
      }
      v7 = NextGuidEntry;
    }
    LODWORD(v16) = v6[1023];
    LODWORD(v17) = v6[1022];
    HIDWORD(v16) = v6[1021];
    Data.Data = &v16;
    Data.Size = 24;
    return (unsigned int)PcwAddInstance(v5, &Name, 0, 1u, &Data);
  }
  else
  {
    v10 = 0;
    v9 = 0;
    for ( Buffer = 0; v10 < v6[2]; Buffer = ++v10 )
    {
      v11 = EtwpAcquireLoggerContextByLoggerId((__int64)v6, v10, 0);
      if ( v11 )
      {
        v19 = 0LL;
        TraceInformation = 0LL;
        v21 = 0LL;
        if ( *(_DWORD *)(v11 + 316) == 1 )
          LODWORD(v19) = *(_DWORD *)(v11 + 4) * *(_DWORD *)(v11 + 248);
        else
          HIDWORD(v19) = *(_DWORD *)(v11 + 4) * *(_DWORD *)(v11 + 248);
        LODWORD(v21) = *(_DWORD *)(v11 + 256);
        HIDWORD(v21) = *(_DWORD *)(v11 + 360);
        WmiQueryTraceInformation(LoggerEventsLoggedClass, &TraceInformation, 8u, 0LL, &Buffer);
        v10 = Buffer;
        v15.Data = &v19;
        v15.Size = 24;
        v9 = PcwAddInstance(v5, (PCUNICODE_STRING)(v11 + 152), Buffer, 1u, &v15);
        EtwpReleaseLoggerContext((unsigned int *)v11, 0);
        if ( v9 < 0 )
          break;
      }
    }
  }
  return (unsigned int)v9;
}
