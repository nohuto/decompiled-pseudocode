/*
 * XREFs of _lambda_e5d643bc643c8a09454132ff8d011188_::__lambda_e5d643bc643c8a09454132ff8d011188_ @ 0x180153050
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___ @ 0x180153FE8 (CreationThreadDispatcher--RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___.c)
 *     _lambda_4e6ec5e621d214863c0330f55e9deefa_::__lambda_4e6ec5e621d214863c0330f55e9deefa_ @ 0x180154214 (_lambda_4e6ec5e621d214863c0330f55e9deefa_--__lambda_4e6ec5e621d214863c0330f55e9deefa_.c)
 *     CreationThreadDispatcher::RunSync__lambda_e5d643bc643c8a09454132ff8d011188___ @ 0x180154A60 (CreationThreadDispatcher--RunSync__lambda_e5d643bc643c8a09454132ff8d011188___.c)
 *     ??_E?$CAsyncCallbackWithLambda@V_lambda_955195b19bdf183231ed606863dab04a_@@@@UEAAPEAXI@Z @ 0x180155030 (--_E-$CAsyncCallbackWithLambda@V_lambda_955195b19bdf183231ed606863dab04a_@@@@UEAAPEAXI@Z.c)
 *     ??_G?$CTaskWrapper@V_lambda_4e6ec5e621d214863c0330f55e9deefa_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180155090 (--_G-$CTaskWrapper@V_lambda_4e6ec5e621d214863c0330f55e9deefa_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188____::_1_::dtor$0 @ 0x1801F0BA2 (_CreationThreadDispatcher--RunAsync__lambda_e5d643bc643c8a09454132ff8d011188____--_1_--dtor$0.c)
 *     _CreationThreadDispatcher::RunSync__lambda_e5d643bc643c8a09454132ff8d011188____::_1_::dtor$0 @ 0x1801F0C1A (_CreationThreadDispatcher--RunSync__lambda_e5d643bc643c8a09454132ff8d011188____--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_e5d643bc643c8a09454132ff8d011188_::__lambda_e5d643bc643c8a09454132ff8d011188_(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *(volatile signed __int32 **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 13, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
