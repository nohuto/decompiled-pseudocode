/*
 * XREFs of ?get_WindowTitle@ViewWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801E7F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ViewWrapperBase::get_WindowTitle(ViewWrapperBase *this, HSTRING *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x63E,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
