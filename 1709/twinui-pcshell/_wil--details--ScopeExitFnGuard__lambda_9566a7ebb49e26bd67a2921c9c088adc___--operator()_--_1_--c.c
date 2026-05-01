/*
 * XREFs of _wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()_::_1_::catch$1 @ 0x1801EC0F2
 * Callers:
 *     <none>
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800061E4 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180026834 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18008CE68 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800DDBC0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()_::_1_::catch_1(
        wil *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax

  LOBYTE(a1) = *(_BYTE *)(*(_QWORD *)(a2 + 64) + 8LL);
  if ( (_BYTE)a1 == 2 )
  {
    v4 = wil::ResultFromCaughtException(a1, (void *)a2, a3);
    v5 = wil::verify_hresult<long>(v4);
    wil::details::in1diag3::FailFast_Hr(
      *(wil::details::in1diag3 **)(a2 + 56),
      (void *)0x8B6,
      (__int64)"wil",
      (const char *)v5);
    __debugbreak();
  }
  if ( (_BYTE)a1 == 1 )
  {
    v6 = wil::ResultFromCaughtException(a1, (void *)a2, a3);
    wil::details::in1diag3::Log_Hr(
      *(wil::details::in1diag3 **)(a2 + 56),
      (void *)0x8BA,
      (__int64)"wil",
      (const char *)v6);
  }
  return &loc_1800DD4B8;
}
