/*
 * XREFs of ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180057780
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     WPP_SF_Sd @ 0x180052138 (WPP_SF_Sd.c)
 *     WPP_SF_Sdq @ 0x18005236C (WPP_SF_Sdq.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x1800588F4 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1800596D4 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005A958 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005A984 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005AA60 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005AE60 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x18005B05C (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?ContainsDeferredInfo@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005B3A8 (-ContainsDeferredInfo@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005B7EC (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18005FB2C (-StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::SetApplicationWindow(__int64 a1, HWND a2, int a3, unsigned int a4)
{
  __int64 v6; // r8
  unsigned int v7; // r15d
  int v8; // edi
  HWND ApplicationWindow; // r13
  bool v10; // r12
  __int64 v11; // r8
  HWND v12; // rax
  int v13; // eax
  __int64 v14; // r9
  char v16[8]; // [rsp+28h] [rbp-E0h]
  _QWORD v19[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h]
  int *v21; // [rsp+70h] [rbp-98h]
  int *v22; // [rsp+78h] [rbp-90h]
  int v23; // [rsp+80h] [rbp-88h] BYREF
  char v24; // [rsp+84h] [rbp-84h]
  int v25; // [rsp+A8h] [rbp-60h] BYREF
  const char *v26; // [rsp+B0h] [rbp-58h]
  __int64 v27; // [rsp+B8h] [rbp-50h]
  char v28; // [rsp+C0h] [rbp-48h]
  __int64 v29; // [rsp+C8h] [rbp-40h]
  _BYTE v30[144]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+160h] [rbp+58h]
  __int64 v32; // [rsp+168h] [rbp+60h]
  __int64 v33; // [rsp+170h] [rbp+68h]
  __int64 v34; // [rsp+178h] [rbp+70h]

  v19[1] = 0LL;
  v19[2] = v19;
  v19[3] = 0LL;
  LODWORD(v20) = 0;
  v21 = &v25;
  v22 = &v23;
  v23 = 0;
  v24 = 0;
  v28 = 0;
  v25 = 0;
  v26 = "SetApplicationWindow";
  v27 = 0LL;
  v29 = 1LL;
  v31 = 0LL;
  v32 = 0LL;
  memset(v30, 0, sizeof(v30));
  v33 = 0LL;
  v34 = 0LL;
  v19[0] = &CImmersiveAppTelemetry::SetApplicationWindow::`vftable';
  CImmersiveAppTelemetry::SetApplicationWindow::StartActivity(
    (CImmersiveAppTelemetry::SetApplicationWindow *)v19,
    *(const unsigned __int16 **)(a1 + 432));
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdq(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, v6, *(const wchar_t **)(a1 + 432), *(_DWORD *)(a1 + 440), a2);
  v7 = *(_BYTE *)(a1 + 576) != 0 ? 0x8007139F : 0;
  v8 = v7;
  if ( !*(_BYTE *)(a1 + 576) )
  {
    ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152));
    if ( a2 != ApplicationWindow
      || CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152)) )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        *(_DWORD *)v16 = *(_DWORD *)(a1 + 440);
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xBu,
          &WPP_6f54c26325303d06ba2693269ff4d199_Traceguids,
          *(const wchar_t **)(a1 + 432),
          *(_QWORD *)v16);
      }
      v10 = 1;
      if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152)) )
      {
        v12 = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152));
        v10 = a2 != v12;
        if ( a2 != v12 )
        {
          if ( CImmersiveApp::CImmersiveWindowCollection::ContainsDeferredInfo((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152))
            && (*(_DWORD *)(a1 + 348) & 2) != 0 )
          {
            v10 = 0;
          }
          else
          {
            v10 = 1;
            if ( !*(_BYTE *)(a1 + 336) || *(_BYTE *)(a1 + 337) )
              CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(a1 + 152);
          }
        }
      }
      v13 = a3;
      if ( !a3 && a2 == ApplicationWindow )
      {
        if ( (*(_DWORD *)(a1 + 348) & 0x20) != 0 )
        {
          if ( (*(_BYTE *)(a1 + 348) & 0x20) != 0 )
          {
            if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v14 = *(_QWORD *)(a1 + 296);
              *(_DWORD *)v16 = *(_DWORD *)(v14 + 552);
              WPP_SF_Sd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x1Bu,
                &WPP_6f54c26325303d06ba2693269ff4d199_Traceguids,
                *(const wchar_t **)(v14 + 544),
                *(_QWORD *)v16);
            }
            CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(a1 + 152);
          }
          CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)(a1 - 112));
          v8 = v7;
          goto LABEL_34;
        }
        v13 = 0;
      }
      v8 = v7;
      if ( v10 )
      {
        if ( v13 == 2 )
        {
          v8 = CImmersiveApp::CImmersiveWindowCollection::SetPendingApplicationWindow(a1 + 152, a2, a4);
          if ( v8 >= 0 )
            CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)(a1 - 112));
        }
        else
        {
          v8 = CImmersiveApp::_SetApplicationWindowSynch(a1 - 112, a2, v11, 0LL);
          if ( v8 >= 0 )
            CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152));
        }
      }
    }
  }
LABEL_34:
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v19, v8);
  v19[0] = &CImmersiveAppTelemetry::SetApplicationWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
  return (unsigned int)v8;
}
