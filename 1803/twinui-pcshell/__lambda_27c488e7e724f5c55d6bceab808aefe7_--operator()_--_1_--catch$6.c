/*
 * XREFs of __lambda_27c488e7e724f5c55d6bceab808aefe7_::operator()_::_1_::catch$6 @ 0x1801EA5AB
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_27c488e7e724f5c55d6bceab808aefe7_::operator()_::_1_::catch_6(wil *a1, __int64 a2)
{
  __int64 v3; // rbx
  const char *v4; // r9

  v3 = *(_QWORD *)(a2 + 144);
  **(_DWORD **)(v3 + 8) = wil::ResultFromCaughtException(a1);
  v4 = (const char *)**(unsigned int **)(v3 + 8);
  *(_DWORD *)(a2 + 144) = (_DWORD)v4;
  if ( (int)v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      *(wil::details::in1diag3 **)(a2 + 136),
      (void *)0xE1,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      v4);
  return &loc_1801EA54E;
}
