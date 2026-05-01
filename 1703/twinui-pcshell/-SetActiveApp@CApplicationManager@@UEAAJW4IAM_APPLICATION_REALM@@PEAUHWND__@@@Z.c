/*
 * XREFs of ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x18000C370
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800151F8 (-_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x180015364 (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x18002A680 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x18002B1D4 (-CanChangeForeground@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetActiveApp(__int64 a1, int a2, HWND a3)
{
  int v6; // r9d
  signed int LastActiveModernWindowForActivation; // esi
  __int64 v8; // rcx
  FILETIME v9; // rdi
  int LastActiveModernApp; // r12d
  struct IImmersiveApplicationInternal *v11; // rbx
  HWND v12; // rdx
  int v13; // r14d
  int v14; // r14d
  HWND LastActiveVisiblePopupOrSelf; // rax
  HWND v16; // rax
  FILETIME FileTime2; // [rsp+20h] [rbp-20h] BYREF
  FILETIME FileTime1; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  _BYTE v21[8]; // [rsp+38h] [rbp-8h] BYREF
  HWND v22; // [rsp+80h] [rbp+40h] BYREF
  struct IImmersiveApplicationInternal *v23; // [rsp+98h] [rbp+58h] BYREF

  v20 = -2LL;
  v22 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = *(_DWORD *)(a1 + 560);
  LastActiveModernWindowForActivation = v6 != 2 ? 0x80070005 : 0;
  if ( v6 == 2 )
  {
    v8 = *(_QWORD *)(a1 + 272);
    if ( v8 )
    {
      if ( a2 == 2 )
      {
        LastActiveModernWindowForActivation = (*(__int64 (__fastcall **)(__int64, FILETIME *))(*(_QWORD *)v8 + 96LL))(
                                                v8,
                                                &FileTime1);
        if ( LastActiveModernWindowForActivation < 0 )
          goto LABEL_12;
        v9 = 0LL;
        v23 = 0LL;
        LastActiveModernApp = CApplicationManager::_GetLastActiveModernApp((CApplicationManager *)(a1 - 200), &v23);
        v11 = v23;
        if ( LastActiveModernApp >= 0 )
          v9 = *(FILETIME *)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, _BYTE *))(*(_QWORD *)v23 + 288LL))(
                              v23,
                              v21);
        FileTime2 = v9;
        if ( v11 )
          (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v11 + 16LL))(v11);
        if ( LastActiveModernApp < 0 || CompareFileTime(&FileTime1, &FileTime2) >= 0 )
LABEL_12:
          (*(void (__fastcall **)(_QWORD, _QWORD, HWND *))(**(_QWORD **)(a1 + 272) + 104LL))(
            *(_QWORD *)(a1 + 272),
            0LL,
            &v22);
        else
          CApplicationManager::_GetLastActiveModernWindowForActivation((CApplicationManager *)(a1 - 200), &v22);
      }
      else if ( a2 == 8 )
      {
        v22 = a3;
      }
      else
      {
        LastActiveModernWindowForActivation = CApplicationManager::_GetLastActiveModernWindowForActivation(
                                                (CApplicationManager *)(a1 - 200),
                                                &v22);
      }
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( LastActiveModernWindowForActivation >= 0 && *(_QWORD *)(a1 + 272) )
  {
    v13 = a2 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(
                                         (CApplicationManagerUtility *)v22,
                                         v12);
        SwitchToThisWindow(LastActiveVisiblePopupOrSelf, 1);
        return (unsigned int)LastActiveModernWindowForActivation;
      }
      if ( v14 != 6 )
        return (unsigned int)LastActiveModernWindowForActivation;
    }
    if ( v22 )
    {
      v16 = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf((CApplicationManagerUtility *)v22, v12);
      return !SetForegroundWindow(v16) ? 0x80070005 : 0;
    }
    else
    {
      LastActiveModernWindowForActivation = CanChangeForeground();
      if ( LastActiveModernWindowForActivation >= 0 )
        return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 304) + 40LL))(*(_QWORD *)(a1 + 304));
    }
  }
  return (unsigned int)LastActiveModernWindowForActivation;
}
