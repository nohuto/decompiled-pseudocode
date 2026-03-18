/*
 * XREFs of EtwpEventTracingCounterSetCallback @ 0x140749D60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     WmiQueryTraceInformation @ 0x140467C00 (WmiQueryTraceInformation.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     PcwAddInstance @ 0x140548F20 (PcwAddInstance.c)
 *     EtwpGetNextGuidEntry @ 0x140552724 (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpEventTracingCounterSetCallback(int a1, __int64 a2, __int64 a3)
{
  struct _PCW_BUFFER *v5; // r15
  _DWORD *v6; // rsi
  signed __int64 *v7; // rdx
  signed __int64 *NextGuidEntry; // rax
  NTSTATUS v9; // r14d
  unsigned int v10; // edi
  unsigned int *v11; // rbx
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
    LODWORD(v16) = v6[1273];
    LODWORD(v17) = v6[1272];
    HIDWORD(v16) = v6[1271];
    Data.Data = &v16;
    Data.Size = 24;
    return (unsigned int)PcwAddInstance(v5, &Name, 0, 1u, &Data);
  }
  else
  {
    v9 = 0;
    v10 = 0;
    Buffer = 0;
    do
    {
      v11 = EtwpAcquireLoggerContextByLoggerId((__int64)v6, v10, 0);
      if ( v11 )
      {
        v19 = 0LL;
        TraceInformation = 0LL;
        v21 = 0LL;
        if ( v11[75] == 1 )
          LODWORD(v19) = v11[1] * v11[58];
        else
          HIDWORD(v19) = v11[1] * v11[58];
        LODWORD(v21) = v11[60];
        HIDWORD(v21) = v11[86];
        WmiQueryTraceInformation(LoggerEventsLoggedClass, &TraceInformation, 8u, 0LL, &Buffer);
        v10 = Buffer;
        v15.Data = &v19;
        v15.Size = 24;
        v9 = PcwAddInstance(v5, (PCUNICODE_STRING)(v11 + 34), Buffer, 1u, &v15);
        EtwpReleaseLoggerContext(v11, 0);
        if ( v9 < 0 )
          break;
      }
      Buffer = ++v10;
    }
    while ( v10 < 0x40 );
  }
  return (unsigned int)v9;
}
