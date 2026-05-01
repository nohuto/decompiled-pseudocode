/*
 * XREFs of ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x180115AC8
 * Callers:
 *     ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180112D10 (-RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1801130CC (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___ @ 0x180115A00 (wil--details--ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___--_ScopeExitFn__lambda_d52e.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // r15
  __int64 *i; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  volatile signed __int32 *v10; // rsi
  volatile signed __int32 *v11; // rdi
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  for ( i = (__int64 *)(a3 + 16); i != v3; i += 2 )
  {
    v8 = i[1];
    i[1] = 0LL;
    v9 = *i;
    *i = 0LL;
    v10 = (volatile signed __int32 *)*(i - 1);
    *(i - 1) = v8;
    *(i - 2) = v9;
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  v11 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 8) - 8LL);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
