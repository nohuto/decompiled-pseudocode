/*
 * XREFs of ?PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003C7FC
 * Callers:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C001BAB0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0024DB0 (imp_WdfRegistryOpenKey.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C001B8F0 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 */

void __fastcall FxIoQueue::PostRequestCompletedCallback(FxIoQueue *this, FxRequest *Request, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  unsigned __int16 v5; // r9
  FxRequest *irql; // [rsp+38h] [rbp+10h] BYREF

  irql = Request;
  FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, a3);
  --this->m_TwoPhaseCompletions;
  --this->m_DriverIoCount;
  FxIoQueue::DispatchInternalEvents(this, (unsigned __int8)irql, v4, v5);
}
