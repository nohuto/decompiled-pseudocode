/*
 * XREFs of WmipFindRegEntryByProviderId @ 0x1400739DC
 * Callers:
 *     WmipForwardWmiIrp @ 0x14051BADC (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x140589B0C (IoWMISystemControl.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByProviderId @ 0x140073A60 (WmipDoFindRegEntryByProviderId.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
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
