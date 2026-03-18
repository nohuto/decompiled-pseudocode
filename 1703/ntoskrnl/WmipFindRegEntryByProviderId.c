/*
 * XREFs of WmipFindRegEntryByProviderId @ 0x14006E798
 * Callers:
 *     WmipForwardWmiIrp @ 0x1404BEDA0 (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x14055C374 (IoWMISystemControl.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByProviderId @ 0x14006E818 (WmipDoFindRegEntryByProviderId.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

__int64 __fastcall WmipFindRegEntryByProviderId(unsigned int a1)
{
  KIRQL v2; // di
  __int64 RegEntryByProviderId; // rax
  __int64 v4; // rbx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(a1);
  v4 = RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByProviderId + 48));
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  __writecr8(v2);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v4;
}
