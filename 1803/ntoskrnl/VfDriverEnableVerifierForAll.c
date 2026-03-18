/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x140815DC0
 * Callers:
 *     VfAddVerifierEntry @ 0x140837854 (VfAddVerifierEntry.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14003EEE0 (RtlImageNtHeaderEx.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     MmIsSessionAddress @ 0x140103610 (MmIsSessionAddress.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x14080F570 (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x14081403C (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140815C38 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversAllocateEntry @ 0x14082A740 (VfSuspectDriversAllocateEntry.c)
 */

__int64 VfDriverEnableVerifierForAll()
{
  int v0; // edi
  PVOID *i; // rbx
  PVOID v2; // rbp
  int v3; // eax
  __int64 Entry; // rax
  void *v5; // rsi
  int v7; // [rsp+40h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  VfDriverLock();
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = *(PVOID **)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !(unsigned int)VfUtilIsProtectedDriver((PCUNICODE_STRING)(i + 11)) )
    {
      v2 = i[6];
      LOBYTE(v3) = MmIsSessionAddress((unsigned __int64)v2);
      if ( v3 || RtlImageNtHeaderEx(1u, v2, 0LL, &NtHeader) >= 0 )
      {
        Entry = VfSuspectDriversAllocateEntry(i + 11);
        v5 = (void *)Entry;
        if ( !Entry )
        {
          v0 = -1073741670;
          break;
        }
        v7 = 0;
        v0 = VfDriverEnableVerifier(Entry, (__int64)i, &v7);
        if ( !v7 )
          ExFreePoolWithTag(v5, 0);
        if ( v0 < 0 )
          break;
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)v0;
}
