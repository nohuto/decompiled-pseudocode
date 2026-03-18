/*
 * XREFs of WmipFindRegEntryByProviderId @ 0x1400DEAE4
 * Callers:
 *     WmipForwardWmiIrp @ 0x14051F140 (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x14057070C (IoWMISystemControl.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     WmipDoFindRegEntryByProviderId @ 0x1400DEB70 (WmipDoFindRegEntryByProviderId.c)
 */

__int64 __fastcall WmipFindRegEntryByProviderId(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 RegEntryByProviderId; // rax
  __int64 v4; // rbx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(&WmipRegistrationSpinLock);
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(a1);
  v4 = RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByProviderId + 48));
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  __writecr8(CurrentIrql);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v4;
}
