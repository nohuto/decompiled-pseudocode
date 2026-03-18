/*
 * XREFs of ?IsWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEBAEXZ @ 0x1C0016050
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0015818 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsWorkerThreadOfExclusiveOwner(struct _KTHREAD **this)
{
  return KeGetCurrentThread() == this[20];
}
