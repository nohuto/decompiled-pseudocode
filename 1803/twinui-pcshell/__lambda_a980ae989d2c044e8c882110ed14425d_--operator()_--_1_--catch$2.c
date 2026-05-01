/*
 * XREFs of __lambda_a980ae989d2c044e8c882110ed14425d_::operator()_::_1_::catch$2 @ 0x1801F10CE
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_a980ae989d2c044e8c882110ed14425d_::operator()_::_1_::catch_2(wil *a1, __int64 a2)
{
  __int64 v3; // rbx
  const char *v4; // r9

  v3 = *(_QWORD *)(a2 + 80);
  **(_DWORD **)(v3 + 16) = wil::ResultFromCaughtException(a1);
  v4 = (const char *)**(unsigned int **)(v3 + 16);
  *(_DWORD *)(a2 + 80) = (_DWORD)v4;
  if ( (int)v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      *(wil::details::in1diag3 **)(a2 + 72),
      (void *)0x69F,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v4);
  return &loc_1801F10C3;
}
