/*
 * XREFs of wil::details::ScopeExitFn__lambda_a047454074d8556c86caf24d936bfd4b___::_ScopeExitFn__lambda_a047454074d8556c86caf24d936bfd4b___ @ 0x1802073EC
 * Callers:
 *     _MonitorFrame::Initialize_::_1_::dtor$1 @ 0x18020BD79 (_MonitorFrame--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x18020A708 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_a047454074d8556c86caf24d936bfd4b___::_ScopeExitFn__lambda_a047454074d8556c86caf24d936bfd4b___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    MonitorFrame::DestroyInternal(*(MonitorFrame **)a1);
  }
}
