/*
 * XREFs of WmipFindRegEntryByDevice @ 0x14015420C
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x14055C6B0 (WmipQueryWmiDataBlock.c)
 *     WmipDeregisterDevice @ 0x14059962C (WmipDeregisterDevice.c)
 *     WmipUpdateRegistration @ 0x14059FC1C (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x14059FCD0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14059FDA8 (WmipRegisterDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     WmipDoFindRegEntryByDevice @ 0x1401441D8 (WmipDoFindRegEntryByDevice.c)
 */

volatile signed __int32 *__fastcall WmipFindRegEntryByDevice(void *a1)
{
  KIRQL v2; // di
  volatile signed __int32 *RegEntryByDevice; // rax
  volatile signed __int32 *v4; // rbx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = (volatile signed __int32 *)WmipDoFindRegEntryByDevice(a1);
  v4 = RegEntryByDevice;
  if ( RegEntryByDevice )
    _InterlockedIncrement(RegEntryByDevice + 12);
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  __writecr8(v2);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v4;
}
