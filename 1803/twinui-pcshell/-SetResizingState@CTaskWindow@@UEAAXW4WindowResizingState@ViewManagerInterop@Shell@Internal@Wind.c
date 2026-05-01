/*
 * XREFs of ?SetResizingState@CTaskWindow@@UEAAXW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800474D0
 * Callers:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18005DD40 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?put_WindowResizingState@ViewWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180050A50 (-put_WindowResizingState@ViewWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@In.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::SetResizingState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rcx
  __int64 (*v6)(void); // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    v6 = *(__int64 (**)(void))(*(_QWORD *)v5 + 496LL);
    if ( v6 == ViewWrapperBase::put_WindowResizingState )
      v7 = ViewWrapperBase::put_WindowResizingState();
    else
      v7 = v6();
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3DB,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
        (const char *)(unsigned int)v7,
        a5);
  }
}
