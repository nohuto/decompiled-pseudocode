/*
 * XREFs of _wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()_::_1_::catch$0 @ 0x180189581
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010894C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180149828 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()_::_1_::catch_0(
        wil *a1,
        __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax

  LOBYTE(a1) = *(_BYTE *)(*(_QWORD *)(a2 + 64) + 8LL);
  if ( (_BYTE)a1 == 2 )
  {
    v3 = wil::ResultFromCaughtException(a1);
    wil::details::in1diag3::FailFast_Hr(*(wil::details::in1diag3 **)(a2 + 56), 2232LL, (__int64)"wil", (const char *)v3);
    __debugbreak();
  }
  if ( (_BYTE)a1 == 1 )
  {
    v4 = wil::ResultFromCaughtException(a1);
    wil::details::in1diag3::Log_Hr(*(wil::details::in1diag3 **)(a2 + 56), 2236LL, (__int64)"wil", (const char *)v4);
  }
  return &loc_18018957C;
}
