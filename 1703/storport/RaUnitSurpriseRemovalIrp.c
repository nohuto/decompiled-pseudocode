/*
 * XREFs of RaUnitSurpriseRemovalIrp @ 0x1C006566C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0004E20 (RaUnitPnpIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0013028 (RaUnitWaitForRemoveLock.c)
 *     RaidIsUnitControlSupported @ 0x1C0016E04 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0016E8C (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C00355B8 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitCancelPendingRequests @ 0x1C003C82C (RaidUnitCancelPendingRequests.c)
 *     RaidUnitConvertToZombieUnit @ 0x1C003CB1C (RaidUnitConvertToZombieUnit.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C003F5FC (RaidUnitUnRegisterInterfaces.c)
 */

__int64 __fastcall RaUnitSurpriseRemovalIrp(__int64 a1, IRP *a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a1 + 40) - 6;
  *(_DWORD *)(a1 + 40) = 5;
  if ( v2 > 1 )
    RaidUnitUnRegisterInterfaces(a1);
  RaidUnitCancelPendingRequests(a1);
  if ( RaidIsUnitControlSupported(a1, 10) )
    RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
  RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
  RaUnitWaitForRemoveLock(a1);
  RaUnitDeregisterFromIdleDetection(a1);
  RaidUnitConvertToZombieUnit(a1);
  return RaidCompleteRequestEx(a2, 0, 0);
}
