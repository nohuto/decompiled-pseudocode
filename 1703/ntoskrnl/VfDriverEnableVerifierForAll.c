/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x1407671E4
 * Callers:
 *     VfAddVerifierEntry @ 0x140787E8C (VfAddVerifierEntry.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14008BA30 (RtlImageNtHeaderEx.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     MmIsSessionAddress @ 0x140112130 (MmIsSessionAddress.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x140762550 (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x1407652EC (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140767064 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversAllocateEntry @ 0x14077B488 (VfSuspectDriversAllocateEntry.c)
 */

__int64 VfDriverEnableVerifierForAll()
{
  int v0; // edi
  PVOID *i; // rbx
  PVOID v2; // rbp
  __int64 Entry; // rax
  void *v4; // rsi
  int v6; // [rsp+40h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  VfDriverLock();
  ExAcquireResourceSharedLite((PERESOURCE)&PsLoadedModuleResource, 1u);
  for ( i = *(PVOID **)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !(unsigned int)VfUtilIsProtectedDriver((PCUNICODE_STRING)(i + 11)) )
    {
      v2 = i[6];
      if ( MmIsSessionAddress((unsigned __int64)v2) || RtlImageNtHeaderEx(1u, v2, 0LL, &NtHeader) >= 0 )
      {
        Entry = VfSuspectDriversAllocateEntry(i + 11);
        v4 = (void *)Entry;
        if ( !Entry )
        {
          v0 = -1073741670;
          break;
        }
        v6 = 0;
        v0 = VfDriverEnableVerifier(Entry, (__int64)i, &v6);
        if ( !v6 )
          ExFreePoolWithTag(v4, 0);
        if ( v0 < 0 )
          break;
      }
    }
  }
  ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)v0;
}
