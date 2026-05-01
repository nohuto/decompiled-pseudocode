/*
 * XREFs of wil::details::ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___::_ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___ @ 0x18013F8C4
 * Callers:
 *     _XamlAltTabViewHost::Show_::_1_::dtor$1 @ 0x1801A3582 (_XamlAltTabViewHost--Show_--_1_--dtor$1.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18013FAE0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___::_ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(*(_QWORD *)a1);
  }
  return result;
}
