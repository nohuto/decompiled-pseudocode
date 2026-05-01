/*
 * XREFs of ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x180015364
 * Callers:
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x18000C370 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800151F8 (-_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015400 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_GetLastActiveModernWindowForActivation(CApplicationManager *this, HWND *a2)
{
  int LastActiveModernApp; // edi
  struct IImmersiveApplicationInternal *v5; // rbx
  struct IImmersiveApplicationInternal *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  LastActiveModernApp = CApplicationManager::_GetLastActiveModernApp(this, &v7);
  v5 = v7;
  if ( LastActiveModernApp >= 0 )
  {
    LastActiveModernApp = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD, HWND *))(*(_QWORD *)v7 + 312LL))(
                            v7,
                            0LL,
                            a2);
    if ( LastActiveModernApp == -2147023598 )
      CApplicationManager::_ForgetApplicationNoLock(this, v5, 1LL);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)LastActiveModernApp;
}
