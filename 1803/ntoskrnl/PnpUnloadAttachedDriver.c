/*
 * XREFs of PnpUnloadAttachedDriver @ 0x1405F5E0C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140144EC4 (PnpRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140061AF0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IopUnloadDriver @ 0x1405F5EC0 (IopUnloadDriver.c)
 */

__int64 __fastcall PnpUnloadAttachedDriver(_QWORD *a1)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  wchar_t *PoolWithTag; // rdi
  __int64 v5; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( !a1[5] || a1[1] )
    return 0LL;
  v2 = a1[6];
  v3 = CmRegistryMachineSystemCurrentControlSetServices.Length + 6 + *(unsigned __int16 *)(v2 + 24);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v3, 0x65647050u);
  if ( PoolWithTag )
  {
    RtlStringCbPrintfW(
      PoolWithTag,
      v3,
      L"%s\\%s",
      CmRegistryMachineSystemCurrentControlSetServices.Buffer,
      *(_QWORD *)(v2 + 32));
    RtlInitUnicodeString(&DestinationString, PoolWithTag);
    LOBYTE(v5) = 1;
    IopUnloadDriver(&DestinationString, v5);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return 0LL;
  }
  return 3221225626LL;
}
