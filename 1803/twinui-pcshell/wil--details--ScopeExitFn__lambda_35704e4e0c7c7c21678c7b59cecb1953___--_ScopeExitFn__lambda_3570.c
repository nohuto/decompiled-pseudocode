/*
 * XREFs of wil::details::ScopeExitFn__lambda_35704e4e0c7c7c21678c7b59cecb1953___::_ScopeExitFn__lambda_35704e4e0c7c7c21678c7b59cecb1953___ @ 0x1801C84FC
 * Callers:
 *     __lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_::operator()_::_1_::dtor$1 @ 0x1801C93CE (__lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z @ 0x1801C752C (--$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z.c)
 */

TLG_STATUS __fastcall wil::details::ScopeExitFn__lambda_35704e4e0c7c7c21678c7b59cecb1953___::_ScopeExitFn__lambda_35704e4e0c7c7c21678c7b59cecb1953___(
        __int64 a1)
{
  TLG_STATUS result; // eax

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
