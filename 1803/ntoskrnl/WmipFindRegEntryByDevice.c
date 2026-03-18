/*
 * XREFs of WmipFindRegEntryByDevice @ 0x140161EC8
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x140589E50 (WmipQueryWmiDataBlock.c)
 *     WmipDeregisterDevice @ 0x1406007DC (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x140600880 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x140600958 (WmipRegisterDevice.c)
 *     WmipUpdateRegistration @ 0x140651638 (WmipUpdateRegistration.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     WmipDoFindRegEntryByDevice @ 0x140161F4C (WmipDoFindRegEntryByDevice.c)
 */

__int64 __fastcall WmipFindRegEntryByDevice(__int64 a1)
{
  KIRQL v2; // di
  __int64 RegEntryByDevice; // rax
  __int64 v4; // rbx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(a1);
  v4 = RegEntryByDevice;
  if ( RegEntryByDevice )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByDevice + 48));
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  __writecr8(v2);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v4;
}
