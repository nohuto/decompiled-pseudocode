/*
 * XREFs of __lambda_6d00836a8b084132a7e1fa9e799cd88e_::operator()_::_1_::catch$2 @ 0x1801F059D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_6d00836a8b084132a7e1fa9e799cd88e_::operator()_::_1_::catch_2(wil *a1, __int64 a2)
{
  __int64 v3; // rbx
  const char *v4; // r9

  v3 = *(_QWORD *)(a2 + 64);
  **(_DWORD **)(v3 + 8) = wil::ResultFromCaughtException(a1);
  v4 = (const char *)**(unsigned int **)(v3 + 8);
  *(_DWORD *)(a2 + 64) = (_DWORD)v4;
  if ( (int)v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      *(wil::details::in1diag3 **)(a2 + 56),
      (void *)0x625,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v4);
  return &loc_1801F058E;
}
