/*
 * XREFs of ?GetVisibility@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x180140420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetVisibility(CWin32ApplicationView *this, int *a2)
{
  int v2; // ebx
  HWND v4; // rax
  HRESULT WindowAttribute; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0;
  v4 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26));
  WindowAttribute = DwmGetWindowAttribute(v4, 0xEu, &pvAttribute, 4u);
  v6 = WindowAttribute;
  if ( WindowAttribute >= 0 )
  {
    LOBYTE(v2) = pvAttribute == 0;
    result = 0LL;
    *a2 = v2;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)WindowAttribute);
    return v6;
  }
  return result;
}
