/*
 * XREFs of ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x1800446F0
 * Callers:
 *     ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x180090200 (-SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z.c)
 * Callees:
 *     ?GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x1800069E0 (-GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAP.c)
 *     ?GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z @ 0x180006A90 (-GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x18000AC94 (-CanChangeForeground@@YAJXZ.c)
 *     ?_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z @ 0x18003D06C (-_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z.c)
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x180096014 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x18010F918 (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x180112AFC (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CApplicationManager::SetActiveApp(__int64 a1, int a2, HWND a3)
{
  int v6; // r9d
  unsigned int LastActiveModernWindowForActivation; // ebx
  CClassicWindowManager *v8; // rcx
  __int64 (__fastcall *v9)(CClassicWindowManager *, struct _FILETIME *); // rax
  int LastActiveClassicTimestamp; // eax
  CClassicWindowManager *v11; // rcx
  __int64 (__fastcall *v12)(CClassicWindowManager *, struct IImmersiveMonitor *, HWND *); // rax
  HWND v13; // rdx
  int v14; // edi
  int v15; // edi
  HWND LastActiveVisiblePopupOrSelf; // rax
  FILETIME FileTime2; // [rsp+20h] [rbp-10h] BYREF
  HWND v20; // [rsp+50h] [rbp+20h] BYREF
  FILETIME FileTime1; // [rsp+68h] [rbp+38h] BYREF

  v20 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = *(_DWORD *)(a1 + 584);
  LastActiveModernWindowForActivation = v6 != 2 ? 0x80070005 : 0;
  if ( v6 == 2 )
  {
    v8 = *(CClassicWindowManager **)(a1 + 288);
    if ( v8 )
    {
      if ( a2 == 2 )
      {
        v9 = *(__int64 (__fastcall **)(CClassicWindowManager *, struct _FILETIME *))(*(_QWORD *)v8 + 96LL);
        if ( v9 == CClassicWindowManager::GetLastActiveClassicTimestamp )
          LastActiveClassicTimestamp = CClassicWindowManager::GetLastActiveClassicTimestamp(v8, &FileTime1);
        else
          LastActiveClassicTimestamp = v9(v8, &FileTime1);
        LastActiveModernWindowForActivation = LastActiveClassicTimestamp;
        if ( LastActiveClassicTimestamp < 0
          || (int)CApplicationManager::_GetLastActiveModernTimestamp((CApplicationManager *)(a1 - 240), &FileTime2) < 0
          || CompareFileTime(&FileTime1, &FileTime2) >= 0 )
        {
          v11 = *(CClassicWindowManager **)(a1 + 288);
          v12 = *(__int64 (__fastcall **)(CClassicWindowManager *, struct IImmersiveMonitor *, HWND *))(*(_QWORD *)v11 + 104LL);
          if ( v12 == CClassicWindowManager::GetLastActiveClassicWindowForActivation )
            CClassicWindowManager::GetLastActiveClassicWindowForActivation(v11, 0LL, &v20);
          else
            v12(v11, 0LL, &v20);
        }
        else
        {
          CApplicationManager::_GetLastActiveModernWindowForActivation((CApplicationManager *)(a1 - 240), &v20);
        }
      }
      else if ( a2 == 8 )
      {
        v20 = a3;
      }
      else
      {
        LastActiveModernWindowForActivation = CApplicationManager::_GetLastActiveModernWindowForActivation(
                                                (CApplicationManager *)(a1 - 240),
                                                &v20);
      }
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (LastActiveModernWindowForActivation & 0x80000000) == 0 && *(_QWORD *)(a1 + 288) )
  {
    v14 = a2 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(
                                         (CApplicationManagerUtility *)v20,
                                         v13);
        SwitchToThisWindow(LastActiveVisiblePopupOrSelf, 1);
        return LastActiveModernWindowForActivation;
      }
      if ( v15 != 6 )
        return LastActiveModernWindowForActivation;
    }
    if ( v20 )
    {
      return (unsigned int)CApplicationManagerUtility::SetForegroundWindow((CApplicationManagerUtility *)v20, v13);
    }
    else
    {
      LastActiveModernWindowForActivation = CanChangeForeground();
      if ( (LastActiveModernWindowForActivation & 0x80000000) != 0 )
        return LastActiveModernWindowForActivation;
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 40LL))(*(_QWORD *)(a1 + 320));
    }
  }
  return LastActiveModernWindowForActivation;
}
