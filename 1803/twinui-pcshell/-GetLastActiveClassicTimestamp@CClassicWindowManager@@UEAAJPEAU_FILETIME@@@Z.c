/*
 * XREFs of ?GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z @ 0x180006A90
 * Callers:
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x1800446F0 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18000614C (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 *     ?GetActivationTime@CClassicWindow@@UEAAJPEAU_FILETIME@@@Z @ 0x180007FE0 (-GetActivationTime@CClassicWindow@@UEAAJPEAU_FILETIME@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::GetLastActiveClassicTimestamp(
        CClassicWindowManager *this,
        struct _FILETIME *a2)
{
  int LastActiveClassicWindowWithValidation; // ebx
  __int64 (__fastcall *v5)(CClassicWindow *__hidden, struct _FILETIME *); // rax
  CClassicWindow *v7; // [rsp+40h] [rbp+8h] BYREF
  struct _FILETIME v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v7);
  LastActiveClassicWindowWithValidation = CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
                                            (CClassicWindowManager *)((char *)this - 72),
                                            0LL,
                                            &v7);
  if ( LastActiveClassicWindowWithValidation >= 0 )
  {
    v5 = *(__int64 (__fastcall **)(CClassicWindow *__hidden, struct _FILETIME *))(*(_QWORD *)v7 + 64LL);
    if ( v5 == CClassicWindow::GetActivationTime )
      CClassicWindow::GetActivationTime(v7, &v8);
    else
      v5(v7, &v8);
  }
  *a2 = v8;
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v7);
  return (unsigned int)LastActiveClassicWindowWithValidation;
}
