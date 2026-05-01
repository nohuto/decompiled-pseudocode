/*
 * XREFs of ?GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x1800069E0
 * Callers:
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x1800446F0 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18000614C (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 *     ?GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z @ 0x1800080C0 (-GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::GetLastActiveClassicWindowForActivation(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2,
        HWND *a3)
{
  CClassicWindowManager *v5; // rbp
  int LastActiveClassicWindowWithValidation; // ebx
  __int64 (__fastcall *v7)(CClassicWindow *__hidden, HWND *, int *); // rax
  int WindowForActivation; // eax
  int v10; // [rsp+50h] [rbp+8h] BYREF
  CClassicWindow *v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0;
  v5 = (CClassicWindowManager *)((char *)this - 72);
  while ( 1 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v11);
    LastActiveClassicWindowWithValidation = CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
                                              v5,
                                              a2,
                                              &v11);
    if ( LastActiveClassicWindowWithValidation >= 0 )
    {
      v7 = *(__int64 (__fastcall **)(CClassicWindow *__hidden, HWND *, int *))(*(_QWORD *)v11 + 40LL);
      if ( v7 == CClassicWindow::GetWindowForActivation )
        WindowForActivation = CClassicWindow::GetWindowForActivation(v11, a3, &v10);
      else
        WindowForActivation = v7(v11, a3, &v10);
      LastActiveClassicWindowWithValidation = WindowForActivation;
    }
    Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v11);
    if ( LastActiveClassicWindowWithValidation < 0 )
      break;
    if ( v10 )
      return (unsigned int)LastActiveClassicWindowWithValidation;
  }
  *a3 = 0LL;
  return (unsigned int)LastActiveClassicWindowWithValidation;
}
