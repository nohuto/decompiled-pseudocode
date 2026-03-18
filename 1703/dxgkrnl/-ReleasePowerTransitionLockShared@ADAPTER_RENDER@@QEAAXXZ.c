/*
 * XREFs of ?ReleasePowerTransitionLockShared@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00207F8
 * Callers:
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0014404 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::ReleasePowerTransitionLockShared(ADAPTER_RENDER *this)
{
  ExReleasePushLockSharedEx(*((_QWORD *)this + 2) + 96LL, 0LL);
  KeLeaveCriticalRegion();
}
