/*
 * XREFs of ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x18007FDB0
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x18007E124 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18007888C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1801CCF8C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::QuerySizeConstraintsFromApp(CWin32ApplicationView *this)
{
  struct IApplicationView *v2; // rdx
  volatile signed __int32 *v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rdi
  HWND WindowForView; // rax
  unsigned int v7; // ebx
  __int64 *v9; // [rsp+60h] [rbp+18h]
  volatile signed __int32 *v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v10);
  v3 = v10;
  if ( v10 )
  {
    v4 = *(__int64 **)(*((_QWORD *)v10 + 7) + 616LL);
    if ( v4 )
      (*(void (__fastcall **)(__int64 *))(*v4 + 8))(v4);
    v9 = v4;
    if ( _InterlockedExchangeAdd(v3 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 72LL))(v10, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v5 = *v9;
  WindowForView = ApplicationViewHelpers::GetWindowForView(this, v2);
  v7 = (*(__int64 (__fastcall **)(__int64 *, HWND))(v5 + 24))(v9, WindowForView);
  if ( v9 )
    (*(void (__fastcall **)(__int64 *))(*v9 + 16))(v9);
  return v7;
}
