/*
 * XREFs of Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c_____lambda_0a6dfc4b60d4d0baccf5499df5f27c2c__const_&___ptr64_ @ 0x180144C60
 * Callers:
 *     CreateAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c___ @ 0x180144AC8 (CreateAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c___.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180005130 (-Release@-$RuntimeClass@U-$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U-$InterfaceList.c)
 *     _lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_ @ 0x180144794 (_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_--_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c_____lambda_0a6dfc4b60d4d0baccf5499df5f27c2c__const_____ptr64_(
        volatile signed __int32 **a1,
        __int64 *a2)
{
  char *v4; // rax
  _DWORD *v5; // rbx
  _QWORD *v6; // rsi

  *a1 = 0LL;
  v4 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = v4 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 8));
    v5[9] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IAsyncCallback'};
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = off_180241AF0;
    *v6 = off_180241A80;
    lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_((_QWORD *)v5 + 5, a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IPrivilegedWindowOwnershipOperations,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
