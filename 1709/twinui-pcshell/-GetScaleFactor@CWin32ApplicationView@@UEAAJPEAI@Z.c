/*
 * XREFs of ?GetScaleFactor@CWin32ApplicationView@@UEAAJPEAI@Z @ 0x18007FA00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetScaleFactor(CWin32ApplicationView *this, unsigned int *a2)
{
  __int64 v3; // rax
  int ScaleFactorForWindow; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 100;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24));
  ScaleFactorForWindow = GetScaleFactorForWindow(v3, &v8);
  v5 = ScaleFactorForWindow;
  if ( ScaleFactorForWindow >= 0 )
  {
    *a2 = v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x225,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)ScaleFactorForWindow);
    return v5;
  }
}
