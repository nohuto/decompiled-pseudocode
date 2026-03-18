/*
 * XREFs of CmpLogTransactionAbortedWithChildName @ 0x14059E850
 * Callers:
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x14059EFD4 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpSaveBootControlSet @ 0x1405A4B40 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCopy @ 0x1400AF93C (RtlUnicodeStringCopy.c)
 *     TraceLoggingProviderEnabled @ 0x1400BA300 (TraceLoggingProviderEnabled.c)
 *     RtlUnicodeStringCat @ 0x14011F290 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x1401E410C (RtlUnicodeStringCatString.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpConstructAndCacheName @ 0x140598A9C (CmpConstructAndCacheName.c)
 *     CmpLogTransactionAbortedByName @ 0x140695DE4 (CmpLogTransactionAbortedByName.c)
 */

void __fastcall CmpLogTransactionAbortedWithChildName(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  UCHAR v8; // dl
  __int64 v9; // r8
  const UNICODE_STRING *v10; // rdi
  unsigned __int64 v11; // r8
  NTSTRSAFE_PCWSTR v12; // rdx
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+58h] [rbp+28h] BYREF

  SourceString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a5
    || !TraceLoggingProviderEnabled(&stru_1403549F0, v8, 0LL)
    || (int)CmpConstructAndCacheName(a1, &SourceString) < 0 )
  {
    goto LABEL_2;
  }
  if ( a2 )
  {
    v10 = SourceString;
    v11 = SourceString->Length + 2LL + a2->Length;
    if ( v11 > 0xFFFF )
      goto LABEL_2;
    DestinationString.MaximumLength = SourceString->Length + 2 + a2->Length;
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v11, 0x624E4D43u);
    if ( !DestinationString.Buffer )
      return;
    RtlUnicodeStringCopy(&DestinationString, v10);
    RtlUnicodeStringCatString(&DestinationString, v12);
    RtlUnicodeStringCat(&DestinationString, a2);
    p_DestinationString = &DestinationString;
  }
  else
  {
    p_DestinationString = (UNICODE_STRING *)SourceString;
  }
  CmpLogTransactionAbortedByName(p_DestinationString, a3, v9, a5);
LABEL_2:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
