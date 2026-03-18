/*
 * XREFs of CmpLogTransactionAbortedWithChildName @ 0x14045E258
 * Callers:
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1404CA598 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1406645C4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140664A64 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x140026D10 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCopy @ 0x14007FB50 (RtlUnicodeStringCopy.c)
 *     TraceLoggingProviderEnabled @ 0x140082CB4 (TraceLoggingProviderEnabled.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCatString @ 0x1401DFFCC (RtlUnicodeStringCatString.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpConstructAndCacheName @ 0x140459200 (CmpConstructAndCacheName.c)
 *     CmpLogTransactionAbortedByName @ 0x14066B778 (CmpLogTransactionAbortedByName.c)
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
    || !TraceLoggingProviderEnabled(&stru_14033C3C0, v8, 0LL)
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
