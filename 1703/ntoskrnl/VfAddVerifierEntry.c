/*
 * XREFs of VfAddVerifierEntry @ 0x140787E8C
 * Callers:
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmReleaseLoadLock @ 0x1404B2930 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404B2970 (MmAcquireLoadLock.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x140762550 (VfDriverLock.c)
 *     MmEnableVerifierForDriver @ 0x140763C68 (MmEnableVerifierForDriver.c)
 *     VfInitSystemNoRebootNeeded @ 0x140765668 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverEnableVerifierForAll @ 0x1407671E4 (VfDriverEnableVerifierForAll.c)
 *     VfSuspectDriversAllocateEntry @ 0x14077B488 (VfSuspectDriversAllocateEntry.c)
 */

__int64 __fastcall VfAddVerifierEntry(const void **String2)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  struct _KTHREAD *Lock; // rbx
  _DWORD *Entry; // rax
  void *v6; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  if ( VfSafeMode )
  {
    return (unsigned int)-1073740961;
  }
  else
  {
    VfDriverLock();
    VfInitSystemNoRebootNeeded(v3, 0);
    ViDriversLoadLockOwner = 0LL;
    KeReleaseMutex(&ViDriversLoadLock, 0);
    RtlInitUnicodeString(&DestinationString, L"*");
    if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)String2, 1u) )
    {
      Lock = MmAcquireLoadLock();
      v2 = VfDriverEnableVerifierForAll();
      MmReleaseLoadLock((__int64)Lock);
    }
    else
    {
      Entry = VfSuspectDriversAllocateEntry(String2);
      v6 = Entry;
      if ( Entry )
      {
        v2 = MmEnableVerifierForDriver((__int64)Entry, &v9);
        if ( !v9 )
          ExFreePoolWithTag(v6, 0);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v2;
}
