/*
 * XREFs of wil::details::ScopeExitFn__lambda_abe76fe381029ddc420af44c6a1b9af2___::_ScopeExitFn__lambda_abe76fe381029ddc420af44c6a1b9af2___ @ 0x18014164C
 * Callers:
 *     _XamlSnapAssistViewHost::Show_::_1_::dtor$2 @ 0x1801A3729 (_XamlSnapAssistViewHost--Show_--_1_--dtor$2.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180141830 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_abe76fe381029ddc420af44c6a1b9af2___::_ScopeExitFn__lambda_abe76fe381029ddc420af44c6a1b9af2___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(*(_QWORD *)a1);
  }
  return result;
}
