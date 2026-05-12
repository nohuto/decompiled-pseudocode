/*
 * XREFs of RaUnitDisableDeviceIrp @ 0x1C003A754
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C00177B0 (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0008488 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaUnitWaitForRemoveLock @ 0x1C001551C (RaUnitWaitForRemoveLock.c)
 *     RaidUnitCancelPendingRequests @ 0x1C0015D84 (RaidUnitCancelPendingRequests.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C00169A0 (RaidUnitUnRegisterInterfaces.c)
 */

__int64 __fastcall RaUnitDisableDeviceIrp(__int64 a1, IRP *a2)
{
  unsigned int v3; // eax
  unsigned int v5; // eax

  v3 = *(_DWORD *)(a1 + 40) - 5;
  *(_DWORD *)(a1 + 40) = 7;
  if ( v3 > 1 )
    RaidUnitUnRegisterInterfaces(a1);
  *(_BYTE *)(a1 + 152) &= ~1u;
  RaidUnitCancelPendingRequests(a1);
  RaUnitReleaseRemoveLock(a1);
  v5 = RaUnitWaitForRemoveLock(a1);
  return RaidCompleteRequestEx(a2, 0, v5);
}
