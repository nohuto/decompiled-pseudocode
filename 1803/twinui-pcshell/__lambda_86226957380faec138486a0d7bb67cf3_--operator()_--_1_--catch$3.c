/*
 * XREFs of __lambda_86226957380faec138486a0d7bb67cf3_::operator()_::_1_::catch$3 @ 0x1801F0D75
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

void *__fastcall _lambda_86226957380faec138486a0d7bb67cf3_::operator()_::_1_::catch_3(wil *a1, __int64 a2)
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
      (void *)0x2F1,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v4);
  return &loc_1801F0D50;
}
