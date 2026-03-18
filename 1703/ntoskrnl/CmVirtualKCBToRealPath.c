/*
 * XREFs of CmVirtualKCBToRealPath @ 0x140666C60
 * Callers:
 *     CmpQueryKeyName @ 0x1404FC190 (CmpQueryKeyName.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmpVEExecuteOpenLogic @ 0x140538520 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140667D78 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140668668 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall CmVirtualKCBToRealPath(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS appended; // ebx
  UNICODE_STRING *v5; // rdi
  unsigned int v6; // ebp
  int v7; // edx
  unsigned __int64 v8; // rcx
  unsigned __int16 v9; // r14
  wchar_t *PoolWithTag; // rax
  UNICODE_STRING Source; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  appended = -1073741670;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  P = 0LL;
  CmpConstructNameWithStatus(a1, &P);
  v5 = (UNICODE_STRING *)P;
  if ( P )
  {
    v6 = 0;
    v7 = 5;
    v8 = 0LL;
    while ( *(_WORD *)(*((_QWORD *)P + 1) + v8) != 92 || --v7 )
    {
      v8 = 2LL * ++v6;
      if ( v8 >= *(unsigned __int16 *)P )
      {
        appended = -1073741811;
        goto LABEL_14;
      }
    }
    v9 = *(_WORD *)P + 2 * (9 - v6);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)P + 2 * (9 - v6), 0x624E4D43u);
    a2->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      a2->MaximumLength = v9;
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
        RtlFreeUnicodeString(a2);
      }
    }
LABEL_14:
    CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
  }
  return (unsigned int)appended;
}
