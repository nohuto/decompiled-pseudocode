/*
 * XREFs of ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180055340
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     WPP_SF_Sd @ 0x18004FC08 (WPP_SF_Sd.c)
 *     WPP_SF_Sdq @ 0x18004FE3C (WPP_SF_Sdq.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180056304 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1800570C8 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180058298 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800582C4 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x1800583A0 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800587A4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1800589A0 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?ContainsDeferredInfo@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180058C6C (-ContainsDeferredInfo@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180059010 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ??$Start@AEAPEAG@SetApplicationWindow@CImmersiveAppTelemetry@@SA?AV01@AEAPEAG@Z @ 0x18005B790 (--$Start@AEAPEAG@SetApplicationWindow@CImmersiveAppTelemetry@@SA-AV01@AEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::SetApplicationWindow(__int64 a1, HWND a2, int a3, unsigned int a4)
{
  const wchar_t **v7; // rbp
  __int64 v8; // r8
  unsigned int v9; // r15d
  int v10; // ebx
  HWND ApplicationWindow; // r12
  bool v12; // bp
  __int64 v13; // r8
  HWND v14; // rax
  __int64 v15; // r9
  __int64 v17; // [rsp+20h] [rbp-1A8h]
  _QWORD v19[40]; // [rsp+40h] [rbp-188h] BYREF

  v7 = (const wchar_t **)(a1 + 416);
  CImmersiveAppTelemetry::SetApplicationWindow::Start<unsigned short * &>((CImmersiveAppTelemetry::SetApplicationWindow *)v19);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdq(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, v8, *v7, *(_DWORD *)(a1 + 424), a2);
  v9 = *(_BYTE *)(a1 + 560) != 0 ? 0x8007139F : 0;
  v10 = v9;
  if ( !*(_BYTE *)(a1 + 560) )
  {
    ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136));
    if ( a2 != ApplicationWindow
      || CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136)) )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v17) = *(_DWORD *)(a1 + 424);
        WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_62695e9b884c3ff85ccc232e92679a04_Traceguids, *v7, v17);
      }
      v12 = 1;
      if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136)) )
      {
        v14 = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136));
        v12 = a2 != v14;
        if ( a2 != v14 )
        {
          if ( CImmersiveApp::CImmersiveWindowCollection::ContainsDeferredInfo((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136))
            && (*(_DWORD *)(a1 + 332) & 2) != 0 )
          {
            v12 = 0;
          }
          else
          {
            v12 = 1;
            if ( !*(_BYTE *)(a1 + 320) || *(_BYTE *)(a1 + 321) )
              CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(a1 + 136);
          }
        }
      }
      if ( !a3 && a2 == ApplicationWindow && (*(_DWORD *)(a1 + 332) & 0x20) != 0 )
      {
        if ( (*(_BYTE *)(a1 + 332) & 0x20) != 0 )
        {
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v15 = *(_QWORD *)(a1 + 280);
            LODWORD(v17) = *(_DWORD *)(v15 + 512);
            WPP_SF_Sd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x1Bu,
              &WPP_62695e9b884c3ff85ccc232e92679a04_Traceguids,
              *(const wchar_t **)(v15 + 504),
              v17);
          }
          CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(a1 + 136);
        }
        CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)(a1 - 88));
        v10 = v9;
      }
      else
      {
        v10 = v9;
        if ( v12 )
        {
          if ( a3 == 2 )
          {
            v10 = CImmersiveApp::CImmersiveWindowCollection::SetPendingApplicationWindow(a1 + 136, a2, a4);
            if ( v10 >= 0 )
              CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)(a1 - 88));
          }
          else
          {
            v10 = CImmersiveApp::_SetApplicationWindowSynch(a1 - 88, a2, v13, 0LL);
            if ( v10 >= 0 )
              CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136));
          }
        }
      }
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v19, v10);
  v19[0] = &CImmersiveAppTelemetry::SetApplicationWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
  return (unsigned int)v10;
}
