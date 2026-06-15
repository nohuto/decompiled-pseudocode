/*
 * XREFs of ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x14005C7D4
 * Callers:
 *     ?SetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJI_J@Z @ 0x14005CC40 (-SetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJI_J@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@SA?AVSyncLockCriticalSection@Details@234@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x14005C7F4 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@SA-AVSyncLockCriticalSection@Details@234@PEAU_RTL_.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::CriticalSection::Lock(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a2, a1);
  return a2;
}
