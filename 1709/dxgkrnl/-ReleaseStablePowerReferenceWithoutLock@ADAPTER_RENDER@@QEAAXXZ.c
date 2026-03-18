/*
 * XREFs of ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001F6B8
 * Callers:
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C0089158 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01713EC (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C017798C (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(ADAPTER_RENDER *this)
{
  char *v2; // rdi

  v2 = (char *)this + 1208;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  ADAPTER_RENDER::ReleaseStablePowerReference(this);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
