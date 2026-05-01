/*
 * XREFs of ?GetPropertyAsInt@WindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAH@Z @ 0x1801F2460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::GetPropertyAsInt(WindowWrapperBase *this, HSTRING a2, int *a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x298,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
