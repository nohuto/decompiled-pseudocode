/*
 * XREFs of ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C000E9E8
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0004650 (imp_WdfRequestSend.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000A590 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001FDCC (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0024DB0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryClose @ 0x1C0032140 (imp_WdfRegistryClose.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C006515C (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C0082AC4 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C000A490 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

void __fastcall FxObject::DeletedAndDisposedWorkerLocked(FxObject *this, KIRQL OldIrql, unsigned __int8 Unlock)
{
  FxObject::SetObjectStateLocked(this, FxObjectStateDeletedAndDisposed);
  if ( Unlock )
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
  FxObject::DestroyChildren(this);
  this->Release(this, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
}
