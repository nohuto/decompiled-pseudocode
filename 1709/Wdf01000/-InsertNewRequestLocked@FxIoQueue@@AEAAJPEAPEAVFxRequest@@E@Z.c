/*
 * XREFs of ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0064458
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008210 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0010260 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0026700 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00646D8 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C000D7C8 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C000DB3C (-CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00108F8 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 */

__int64 __fastcall FxIoQueue::InsertNewRequestLocked(FxIoQueue *this, FxRequest **Request, unsigned int *PreviousIrql)
{
  unsigned __int8 v5; // bp
  signed int inserted; // esi
  unsigned __int8 v7; // r8
  FxRequest *v8; // rcx
  __int64 v9; // r8
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // r8
  unsigned __int8 v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = (unsigned __int8)PreviousIrql;
  v5 = (unsigned __int8)PreviousIrql;
  inserted = FxRequest::InsertTailIrpQueue(*Request, &this->m_Queue, PreviousIrql);
  if ( inserted >= 0 )
  {
    (*Request)->m_IoQueue = this;
    FxIoQueue::CheckTransitionFromEmpty(this);
  }
  else
  {
    FxNonPagedObject::Unlock(this, v5, v7);
    v8 = *Request;
    (*Request)->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxRequest::Complete(v8, inserted, v9, v10);
    (*Request)->Release(
      *Request,
      (void *)1886220099,
      2636,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &v13, v11);
  }
  *Request = 0LL;
  return (unsigned int)inserted;
}
