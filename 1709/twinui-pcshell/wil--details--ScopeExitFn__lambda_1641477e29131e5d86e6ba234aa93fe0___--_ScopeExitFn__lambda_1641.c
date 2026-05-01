/*
 * XREFs of wil::details::ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___::_ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___ @ 0x18015C9AC
 * Callers:
 *     _XamlAllUpViewHost::Show_::_1_::dtor$2 @ 0x1801F1294 (_XamlAllUpViewHost--Show_--_1_--dtor$2.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18015CB30 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___::_ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___(
        _BYTE *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = *(_QWORD *)a1;
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 216LL);
    if ( v3 )
    {
      *(_QWORD *)(v2 + 216) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(*(_QWORD *)a1);
  }
}
