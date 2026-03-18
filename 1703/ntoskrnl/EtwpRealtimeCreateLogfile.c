/*
 * XREFs of EtwpRealtimeCreateLogfile @ 0x14054FF60
 * Callers:
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1404C1CA0 (RtlCreateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     EtwpSendSessionNotification @ 0x140551BF8 (EtwpSendSessionNotification.c)
 *     EtwpDelayCreate @ 0x1405585E8 (EtwpDelayCreate.c)
 *     EtwpExpandFileName @ 0x1405588EC (EtwpExpandFileName.c)
 *     EtwpRealtimeRestoreState @ 0x1405CF3FC (EtwpRealtimeRestoreState.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1405D0660 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1405D3DAC (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1407135A8 (EtwpRealtimeResetReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeCreateLogfile(__int64 a1)
{
  __int64 v1; // r14
  __int64 v4; // rax
  SIZE_T v5; // rbp
  wchar_t *PoolWithTag; // rax
  WCHAR *v7; // rdi
  NTSTATUS v8; // eax
  WCHAR *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int updated; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF

  v1 = a1 + 360;
  if ( *(_QWORD *)(a1 + 360) )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 368) )
    goto LABEL_20;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 144) + 2 * v4) );
  v5 = 2LL * (unsigned int)(v4 + 9) + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x50777445u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v8 = RtlStringCbPrintfW(PoolWithTag, v5, L"EtwRT%ws.etl", *(_QWORD *)(a1 + 144));
  v9 = v7;
  if ( !v8 )
  {
    if ( *v7 )
    {
      do
      {
        v10 = *v9;
        if ( v10 == 34 || v10 == 47 || v10 == 58 || v10 == 60 || v10 > 0x3D && (v10 <= 0x3F || v10 == 92 || v10 == 124) )
          *v9 = 95;
        ++v9;
      }
      while ( *v9 );
    }
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(a1 + 368), EtwpRTBacklogFileRoot) )
    {
      RtlInitUnicodeString(&DestinationString, v7);
      LOBYTE(v11) = 1;
      updated = EtwpExpandFileName(v11, a1 + 368, 0LL, &DestinationString);
      if ( updated >= 0 )
      {
LABEL_20:
        updated = EtwpDelayCreate(v1, 1, 1);
        if ( updated >= 0 )
        {
          *(_QWORD *)(a1 + 392) = 72LL;
          *(_QWORD *)(a1 + 384) = 72LL;
          *(_QWORD *)(a1 + 400) = 72LL;
          if ( (*(_BYTE *)(a1 + 816) & 1) != 0 )
          {
            updated = EtwpRealtimeRestoreState(a1);
            if ( updated < 0 )
              goto LABEL_31;
            if ( *(_DWORD *)(a1 + 424) )
              updated = EtwpRealtimeUpdateReferenceTime(a1, a1 + 304);
            if ( updated < 0 )
            {
LABEL_31:
              EtwpRealtimeZeroTruncateLogfile(a1);
              EtwpRealtimeResetReferenceTime(a1);
              *(_DWORD *)(a1 + 260) += *(_DWORD *)(a1 + 424);
              *(_DWORD *)(a1 + 448) = 3;
              *(_DWORD *)(a1 + 424) = 0;
              EtwpSendSessionNotification(a1, 4LL);
              updated = 0;
            }
          }
        }
      }
    }
    else
    {
      updated = -1073741801;
    }
    RtlFreeUnicodeString(&DestinationString);
    return (unsigned int)updated;
  }
  ExFreePoolWithTag(v7, 0);
  return 3221225485LL;
}
