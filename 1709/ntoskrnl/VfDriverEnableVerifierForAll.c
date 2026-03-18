/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x1407A8D88
 * Callers:
 *     VfAddVerifierEntry @ 0x1407CA2F4 (VfAddVerifierEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     MmIsSessionAddress @ 0x140083FA0 (MmIsSessionAddress.c)
 *     RtlImageNtHeaderEx @ 0x1400AE3E0 (RtlImageNtHeaderEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x1407A2530 (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x1407A6EBC (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x1407A8C08 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversAllocateEntry @ 0x1407BD394 (VfSuspectDriversAllocateEntry.c)
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
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
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
  ExReleaseResourceLite(&PsLoadedModuleResource);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)v0;
}
