/*
 * XREFs of ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C00031C8
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C008B2C0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0091590 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C01BF358 (-DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C008A250 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGGLOBAL::FreeHandle(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v4; // rax

  if ( this[18] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 895LL;
    WdLogEvent5_WdAssertion(v4);
  }
  HMGRTABLE::FreeHandle((HMGRTABLE *)(this + 22), a2);
}
