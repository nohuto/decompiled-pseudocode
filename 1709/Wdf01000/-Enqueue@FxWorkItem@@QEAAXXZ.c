/*
 * XREFs of ?Enqueue@FxWorkItem@@QEAAXXZ @ 0x1C001F810
 * Callers:
 *     imp_WdfWorkItemEnqueue @ 0x1C003A940 (imp_WdfWorkItemEnqueue.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxWorkItem::Enqueue(FxWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char v5; // si
  unsigned __int8 v6; // r8
  unsigned int v7; // ecx
  void (__fastcall *m_Callback)(WDFWORKITEM__ *); // rax
  const void *_a1; // rdx
  const void *v10; // rcx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v5 = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( this->m_Enqueued )
  {
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0x12u, 0xEu, WPP_FxWorkItem_cpp_Traceguids, _a1);
    }
  }
  else if ( this->m_RunningDown )
  {
    v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v10 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxWorkItem_cpp_Traceguids, v10);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    KeClearEvent(&this->m_WorkItemCompleted.m_Event.m_Event);
    this->m_Enqueued = 1;
    v7 = _InterlockedIncrement(&this->m_Refcnt);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      m_Callback = this[-1].m_Callback;
    else
      m_Callback = 0LL;
    if ( m_Callback )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)m_Callback,
        FxWorkItem::WorkItemThunk,
        322,
        "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
        TagAddRef,
        v7);
    _InterlockedIncrement(&m_Globals->Refcnt);
    v5 = 1;
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  if ( v5 )
    IoQueueWorkItem(this->m_WorkItem.m_WorkItem, FxWorkItem::WorkItemThunk, DelayedWorkQueue, this);
}
