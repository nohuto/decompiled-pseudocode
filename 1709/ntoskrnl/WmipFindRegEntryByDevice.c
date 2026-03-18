/*
 * XREFs of WmipFindRegEntryByDevice @ 0x14012402C
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x140570A50 (WmipQueryWmiDataBlock.c)
 *     WmipDeregisterDevice @ 0x14057F230 (WmipDeregisterDevice.c)
 *     WmipUpdateRegistration @ 0x14057F2D0 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x14057F320 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14057F3F8 (WmipRegisterDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByDevice @ 0x1401240B0 (WmipDoFindRegEntryByDevice.c)
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
