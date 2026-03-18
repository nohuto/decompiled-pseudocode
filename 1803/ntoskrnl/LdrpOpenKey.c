/*
 * XREFs of LdrpOpenKey @ 0x140635FD8
 * Callers:
 *     _RtlpRemovePendingDeleteLanguages @ 0x140179A88 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140179BE8 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 */

NTSTATUS __fastcall LdrpOpenKey(UNICODE_STRING *a1, void *a2, ACCESS_MASK a3, HANDLE *a4)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  *a4 = 0LL;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a4, a3, &ObjectAttributes);
}
