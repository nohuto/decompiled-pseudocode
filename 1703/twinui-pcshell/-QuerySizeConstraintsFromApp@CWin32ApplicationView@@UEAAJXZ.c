/*
 * XREFs of ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x18007CEB0
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x18007B464 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?GetPrivilegedSizeConstraintsOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@XZ @ 0x18007A90C (-GetPrivilegedSizeConstraintsOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPriv.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18017F5E8 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::QuerySizeConstraintsFromApp(CWin32ApplicationView *this)
{
  __int64 *PrivilegedSizeConstraintsOperations; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  struct IApplicationView *v5; // rdx
  HWND WindowForView; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  PrivilegedSizeConstraintsOperations = ApplicationViewManagement::CGlobals::GetPrivilegedSizeConstraintsOperations(&v10);
  v3 = (_QWORD *)*PrivilegedSizeConstraintsOperations;
  v4 = *(_QWORD *)*PrivilegedSizeConstraintsOperations;
  WindowForView = ApplicationViewHelpers::GetWindowForView(this, v5);
  v7 = (*(__int64 (__fastcall **)(_QWORD *, HWND))(v4 + 24))(v3, WindowForView);
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v7;
}
