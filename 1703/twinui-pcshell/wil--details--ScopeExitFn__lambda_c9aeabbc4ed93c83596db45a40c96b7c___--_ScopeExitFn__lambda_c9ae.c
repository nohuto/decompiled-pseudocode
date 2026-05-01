/*
 * XREFs of wil::details::ScopeExitFn__lambda_c9aeabbc4ed93c83596db45a40c96b7c___::_ScopeExitFn__lambda_c9aeabbc4ed93c83596db45a40c96b7c___ @ 0x1800FAEDC
 * Callers:
 *     _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$4 @ 0x18019EA90 (_ViewEventDispatcher--_PerformCrashRecovery_--_1_--dtor$4.c)
 * Callees:
 *     ??$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z @ 0x1800FEF98 (--$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_c9aeabbc4ed93c83596db45a40c96b7c___::_ScopeExitFn__lambda_c9aeabbc4ed93c83596db45a40c96b7c___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return ViewManagerInteropTraceLogging::ViewRecovered<unsigned long const &,int &,unsigned long &>(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16));
  }
  return result;
}
