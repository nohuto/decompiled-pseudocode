/*
 * XREFs of ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x1800C37C4
 * Callers:
 *     ?WorkCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800C4BF0 (-WorkCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800450C8 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??4?$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C1FD4 (--4-$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetWorkItem@CWorkFifo@@AEAA?AV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ @ 0x1800C2DCC (-GetWorkItem@CWorkFifo@@AEAA-AV-$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800C4620 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWorkFifo::ProcessWorkItem(CWorkFifo *this)
{
  void *v2; // rdx
  __int64 *WorkItem; // rax
  __int64 *v4; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v5; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v7; // [rsp+40h] [rbp-18h]

  CWorkFifo::GetWorkItem((__int64)this, &v4);
  while ( !*((_BYTE *)this + 136) && v4 )
  {
    std::_Func_class<void,>::operator()(*v4);
    WorkItem = CWorkFifo::GetWorkItem((__int64)this, &v6);
    std::shared_ptr<CWorkFifo::WorkItem>::operator=(&v4, WorkItem);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  if ( !*((_BYTE *)this + 136) && !*((_BYTE *)this + 137) )
    wil::details::SetEvent(*((wil::details **)this + 28), v2);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
