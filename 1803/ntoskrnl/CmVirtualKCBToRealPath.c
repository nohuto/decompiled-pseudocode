/*
 * XREFs of CmVirtualKCBToRealPath @ 0x1406F456C
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400080A0 (CmpDoQueryKeyName.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     CmpVEExecuteOpenLogic @ 0x140552590 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1406F5AC8 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406F6578 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall CmVirtualKCBToRealPath(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS appended; // ebx
  UNICODE_STRING *v5; // rdi
  unsigned int v6; // ebp
  int v7; // edx
  unsigned __int64 v8; // rcx
  wchar_t v9; // r8
  int v10; // eax
  unsigned __int16 v11; // r14
  wchar_t *PoolWithTag; // rax
  UNICODE_STRING Source; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING *v14; // [rsp+60h] [rbp+18h] BYREF

  appended = -1073741670;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v14 = 0LL;
  CmpConstructNameWithStatus(a1, &v14);
  v5 = v14;
  if ( v14 )
  {
    v6 = 0;
    v7 = 5;
    v8 = 0LL;
    do
    {
      v9 = v14->Buffer[v8 / 2];
      if ( v9 == 92 && v7 == 1 )
        break;
      v10 = v7 - 1;
      if ( v9 != 92 )
        v10 = v7;
      ++v6;
      v7 = v10;
      v8 = 2LL * v6;
      if ( v8 >= v14->Length )
      {
        appended = -1073741811;
        goto LABEL_16;
      }
    }
    while ( v10 );
    v11 = v14->Length + 2 * (9 - v6);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v14->Length + 2 * (9 - v6), 0x624E4D43u);
    a2->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      a2->MaximumLength = v11;
      a2->Length = 0;
      Source = *v5;
      Source.Length = 18;
      appended = RtlAppendUnicodeStringToString(a2, &Source);
      if ( appended < 0
        || (Source.Length = v5->Length - 2 * v6,
            Source.Buffer += v6,
            appended = RtlAppendUnicodeStringToString(a2, &Source),
            appended < 0) )
      {
        RtlFreeAnsiString(a2);
      }
    }
LABEL_16:
    CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
  }
  return (unsigned int)appended;
}
