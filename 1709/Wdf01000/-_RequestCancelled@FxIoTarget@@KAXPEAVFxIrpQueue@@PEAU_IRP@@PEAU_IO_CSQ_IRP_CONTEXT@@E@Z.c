/*
 * XREFs of ?_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0088CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0064C74 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::_RequestCancelled(
        FxIrpQueue *Queue,
        _IRP *Irp,
        _IO_CSQ_IRP_CONTEXT *CsqContext,
        unsigned __int8 CallerIrql)
{
  FxIoTarget *p_m_RequestCount; // rsi
  FxRequestBase *v7; // rbx
  const void *_a1; // rcx
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  p_m_RequestCount = (FxIoTarget *)&Queue[-7].m_RequestCount;
  FxNonPagedObject::Unlock((FxNonPagedObject *)&Queue[-7].m_RequestCount, CallerIrql, (unsigned __int8)CsqContext);
  v7 = (FxRequestBase *)&CsqContext[-5];
  _a1 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v7->m_ObjectSize )
    _a1 = 0LL;
  if ( !_a1 )
    _a1 = v7;
  WPP_IFR_SF_q(v7->m_Globals, 4u, 0xEu, 0x37u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  v7->m_CsqContext.Irp = (_IRP *)&v7->120;
  v7->m_ListEntry.Flink = (_LIST_ENTRY *)&v7->120;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  FxNonPagedObject::Lock(p_m_RequestCount, &irql, v9);
  v10 = irql;
  v7->m_TargetFlags &= ~2u;
  FxNonPagedObject::Unlock(p_m_RequestCount, v10, v11);
  v7->m_Irp.m_Irp->IoStatus.Status = -1073741536;
  v7->m_Irp.m_Irp->IoStatus.Information = 0LL;
  FxIoTarget::RequestCompletionRoutine(p_m_RequestCount, v7, v12);
}
