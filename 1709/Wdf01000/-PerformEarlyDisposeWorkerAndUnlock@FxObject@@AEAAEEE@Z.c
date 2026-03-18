/*
 * XREFs of ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C003B710
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000A590 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C000B190 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0024DB0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryClose @ 0x1C0032140 (imp_WdfRegistryClose.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C00650AC (-EarlyDispose@FxObject@@QEAAEXZ.c)
 * Callees:
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001FDCC (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003CF48 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::PerformEarlyDisposeWorkerAndUnlock(
        FxObject *this,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  unsigned __int16 m_ObjectFlags; // ax

  FxObject::SetObjectStateLocked(this, 3u);
  if ( !CanDefer )
    return FxObject::PerformDisposingDisposeChildrenLocked(this, OldIrql, CanDefer);
  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) == 0 && ((m_ObjectFlags & 0x10) == 0 || !OldIrql) )
    return FxObject::PerformDisposingDisposeChildrenLocked(this, OldIrql, CanDefer);
  FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
  return 0;
}
