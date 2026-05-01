/*
 * XREFs of ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18000614C
 * Callers:
 *     ?GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x1800069E0 (-GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAP.c)
 *     ?GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z @ 0x180006A90 (-GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x1800061F8 (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicW.c)
 *     ?GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z @ 0x1800080C0 (-GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2,
        struct IClassicWindow **a3)
{
  CClassicWindow *v6; // rbx
  __int64 (__fastcall *v7)(CClassicWindow *__hidden, HWND *, int *); // rax
  int v8; // eax
  unsigned int v9; // edi
  HWND v11[2]; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+40h] BYREF
  CClassicWindow *v13; // [rsp+78h] [rbp+48h] BYREF

  v11[1] = (HWND)-2LL;
  v13 = 0LL;
  *a3 = 0LL;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v13);
    CClassicWindowManager::_GetLastActiveClassicWindow(this, a2, &v13);
    v6 = v13;
    v7 = *(__int64 (__fastcall **)(CClassicWindow *__hidden, HWND *, int *))(*(_QWORD *)v13 + 40LL);
    v8 = v7 == CClassicWindow::GetWindowForActivation
       ? CClassicWindow::GetWindowForActivation(v13, v11, &v12)
       : v7(v13, v11, &v12);
    v9 = v8;
    if ( v8 < 0 )
      break;
    if ( v12 )
    {
      v13 = 0LL;
      *a3 = v6;
      break;
    }
    (*(void (__fastcall **)(char *, HWND))(*((_QWORD *)this + 9) + 72LL))((char *)this + 72, v11[0]);
  }
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v13);
  return v9;
}
