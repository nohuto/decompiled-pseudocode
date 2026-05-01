/*
 * XREFs of ?Uninitialize@VirtualDesktopDataSource@@UEAAXXZ @ 0x18025EE70
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x18025EEBC (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopDataSource::Uninitialize(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v2, this + 37);
  VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)&this[-3]);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v2);
}
