/*
 * XREFs of EtwpRealtimeCreateLogfile @ 0x140532AB0
 * Callers:
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140019294 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1404DF560 (RtlCreateUnicodeString.c)
 *     EtwpSendSessionNotification @ 0x1404EDDD4 (EtwpSendSessionNotification.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     EtwpDelayCreate @ 0x14057836C (EtwpDelayCreate.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1405D9F78 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpExpandFileName @ 0x1405DFEEC (EtwpExpandFileName.c)
 *     EtwpRealtimeRestoreState @ 0x1405E5B60 (EtwpRealtimeRestoreState.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1405EA2EC (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x140752364 (EtwpRealtimeResetReferenceTime.c)
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

  v1 = a1 + 376;
  if ( *(_QWORD *)(a1 + 376) )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 384) )
    goto LABEL_20;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 160) + 2 * v4) );
  v5 = 2LL * (unsigned int)(v4 + 9) + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x50777445u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v8 = RtlStringCbPrintfW(PoolWithTag, v5, L"EtwRT%ws.etl", *(_QWORD *)(a1 + 160));
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
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(a1 + 384), EtwpRTBacklogFileRoot) )
    {
      RtlInitUnicodeString(&DestinationString, v7);
      LOBYTE(v11) = 1;
      updated = EtwpExpandFileName(v11, a1 + 384, 0LL, &DestinationString);
      if ( updated >= 0 )
      {
LABEL_20:
        updated = EtwpDelayCreate(v1, 1, 1);
        if ( updated >= 0 )
        {
          *(_QWORD *)(a1 + 408) = 72LL;
          *(_QWORD *)(a1 + 400) = 72LL;
          *(_QWORD *)(a1 + 416) = 72LL;
          if ( (*(_BYTE *)(a1 + 832) & 1) != 0 )
          {
            updated = EtwpRealtimeRestoreState(a1);
            if ( updated < 0 )
              goto LABEL_31;
            if ( *(_DWORD *)(a1 + 440) )
              updated = EtwpRealtimeUpdateReferenceTime(a1, a1 + 320);
            if ( updated < 0 )
            {
LABEL_31:
              EtwpRealtimeZeroTruncateLogfile(a1);
              EtwpRealtimeResetReferenceTime(a1);
              *(_DWORD *)(a1 + 276) += *(_DWORD *)(a1 + 440);
              *(_DWORD *)(a1 + 464) = 3;
              *(_DWORD *)(a1 + 440) = 0;
              EtwpSendSessionNotification(a1, 4u, 0xC0000102);
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
