/*
 * XREFs of wil::details::ScopeExitFn__lambda_06b355fbbfb5a9a7b28b3275f4a25847___::_ScopeExitFn__lambda_06b355fbbfb5a9a7b28b3275f4a25847___ @ 0x18012F760
 * Callers:
 *     _MonitorFrame::Initialize_::_1_::dtor$1 @ 0x1801A0C3B (_MonitorFrame--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x18012C720 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_06b355fbbfb5a9a7b28b3275f4a25847___::_ScopeExitFn__lambda_06b355fbbfb5a9a7b28b3275f4a25847___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    MonitorFrame::DestroyInternal(*(MonitorFrame **)a1);
  }
}
