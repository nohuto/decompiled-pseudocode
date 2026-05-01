/*
 * XREFs of __lambda_3c23c103e221e9d7edb5a529b76dd87c_::operator()_::_1_::catch$5 @ 0x1801EAAE3
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_3c23c103e221e9d7edb5a529b76dd87c_::operator()_::_1_::catch_5(wil *a1, __int64 a2)
{
  __int64 v3; // rbx
  const char *v4; // r9

  v3 = *(_QWORD *)(a2 + 112);
  **(_DWORD **)(v3 + 8) = wil::ResultFromCaughtException(a1);
  v4 = (const char *)**(unsigned int **)(v3 + 8);
  *(_DWORD *)(a2 + 112) = (_DWORD)v4;
  if ( (int)v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      *(wil::details::in1diag3 **)(a2 + 104),
      (void *)0x2E5,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      v4);
  return &loc_1801EAA9B;
}
