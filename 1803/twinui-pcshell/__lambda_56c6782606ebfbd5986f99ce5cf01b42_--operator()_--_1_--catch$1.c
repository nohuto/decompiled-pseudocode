/*
 * XREFs of __lambda_56c6782606ebfbd5986f99ce5cf01b42_::operator()_::_1_::catch$1 @ 0x1801F025F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_56c6782606ebfbd5986f99ce5cf01b42_::operator()_::_1_::catch_1(wil *a1, __int64 a2)
{
  __int64 v3; // rbx
  const char *v4; // r9

  v3 = *(_QWORD *)(a2 + 80);
  **(_DWORD **)(v3 + 8) = wil::ResultFromCaughtException(a1);
  v4 = (const char *)**(unsigned int **)(v3 + 8);
  *(_DWORD *)(a2 + 80) = (_DWORD)v4;
  if ( (int)v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      *(wil::details::in1diag3 **)(a2 + 72),
      (void *)0x7E,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v4);
  return &loc_1801F0247;
}
