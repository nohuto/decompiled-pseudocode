/*
 * XREFs of ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1802B2110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??1ActivationData@CSwitchController@@QEAA@XZ @ 0x1802B1B4C (--1ActivationData@CSwitchController@@QEAA@XZ.c)
 *     ??1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ @ 0x1802B1B88 (--1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ.c)
 *     ?BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z @ 0x1802B1D18 (-BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1802B2810 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1802B2810.c)
 *     ?_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1802B298C (-_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivationData@1@@Z @ 0x1802B2BD4 (-_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivatio.c)
 *     ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1802B2D20 (-_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     McTemplateU0zzz @ 0x1802B2FA4 (McTemplateU0zzz.c)
 *     McTemplateU0zzzq @ 0x1802B309C (McTemplateU0zzzq.c)
 *     ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x1802FD3C4 (-FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::SwitchToAppByIdWithArguments(
        CallerIdentity **this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        const struct SWITCH_TO_APP_OPTIONS *a5)
{
  const WCHAR *v6; // rdi
  const WCHAR *v9; // r9
  int v10; // edx
  int v11; // ecx
  int MonitorForAppSwitchWithPreference; // ebx
  const struct SWITCH_TO_APP_OPTIONS *v13; // rsi
  struct IImmersiveApplication **v14; // r9
  CSwitchController *v15; // rcx
  __int64 v17; // [rsp+28h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-50h]
  _DWORD v19[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  struct HWND__ v21[4]; // [rsp+60h] [rbp-20h] BYREF
  char v22; // [rsp+70h] [rbp-10h]
  CWinRTApplicationView *v23; // [rsp+78h] [rbp-8h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+30h] BYREF

  v18 = -2LL;
  v6 = a3;
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    LODWORD(v9) = (_DWORD)a3;
    if ( !a3 )
      v9 = &word_18035ABCC;
    McTemplateU0zzz((_DWORD)this, (_DWORD)a2, (_DWORD)a2, (_DWORD)v9, (__int64)a4);
  }
  v24 = 0LL;
  MonitorForAppSwitchWithPreference = CSwitchController::CDetectSwitchReentrancy::BeginSwitchToApp(
                                        (CSwitchController::CDetectSwitchReentrancy *)&v24,
                                        (struct CSwitchController *)(this - 11));
  if ( MonitorForAppSwitchWithPreference >= 0 )
  {
    v20 = 0LL;
    *(_OWORD *)&v21[0].unused = 0LL;
    v22 = 0;
    v23 = 0LL;
    v13 = a5;
    v19[0] = *((_DWORD *)a5 + 4);
    v19[1] = *((_DWORD *)a5 + 5);
    v19[2] = *((_DWORD *)a5 + 6);
    Microsoft::WRL::ComPtr<IUnknown>::operator=(&v23, *((CWinRTApplicationView **)a5 + 5));
    if ( *((_QWORD *)v13 + 4) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21[2].unused);
      CallerIdentity::FindApplication(*(this - 9), *((struct IUnknown **)v13 + 4), &v21[2], v14);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v20);
    MonitorForAppSwitchWithPreference = CSwitchController::_GetMonitorForAppSwitchWithPreference(
                                          this - 11,
                                          *(_QWORD *)v13,
                                          *((unsigned int *)v13 + 2),
                                          a2,
                                          &v20);
    if ( MonitorForAppSwitchWithPreference >= 0 )
    {
      MonitorForAppSwitchWithPreference = CSwitchController::_PrepareAppForActivation(
                                            this - 11,
                                            a2,
                                            v6,
                                            a4,
                                            *((_DWORD *)v13 + 3),
                                            v19,
                                            -2LL);
      if ( MonitorForAppSwitchWithPreference >= 0 )
      {
        MonitorForAppSwitchWithPreference = CSwitchController::_SwitchToApp(
                                              (CSwitchController *)(this - 11),
                                              (struct CSwitchController::ActivationData *)v19);
        if ( MonitorForAppSwitchWithPreference >= 0 )
          MonitorForAppSwitchWithPreference = CSwitchController::_LaunchApp(
                                                v15,
                                                (struct CSwitchController::ActivationData *)v19);
      }
    }
    CSwitchController::ActivationData::~ActivationData((CSwitchController::ActivationData *)v19);
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    if ( !v6 )
      v6 = &word_18035ABCC;
    LODWORD(v17) = MonitorForAppSwitchWithPreference;
    McTemplateU0zzzq(v11, v10, (_DWORD)a2, (_DWORD)v6, (__int64)a4, v17, v18);
  }
  CSwitchController::CDetectSwitchReentrancy::~CDetectSwitchReentrancy((CSwitchController::CDetectSwitchReentrancy *)&v24);
  return (unsigned int)MonitorForAppSwitchWithPreference;
}
