/*
 * XREFs of ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005AA60
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180057050 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180057290 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180057780 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180058410 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005962C (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005A9A8 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x18005B664 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 * Callees:
 *     McTemplateU0qq @ 0x180034C9C (McTemplateU0qq.c)
 *     McTemplateU0q @ 0x180034D08 (McTemplateU0q.c)
 *     ?ContainsDeferredInfo@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005B3A8 (-ContainsDeferredInfo@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18007249C (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(__int64 a1)
{
  unsigned int v1; // r14d
  _DWORD *v3; // rdi
  unsigned __int64 v4; // rsi
  __int128 v5; // xmm1
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // r15d
  int v12; // r8d
  __int128 v13; // xmm1
  _OWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]

  v1 = 0;
  if ( *(_QWORD *)(a1 + 160)
    && CImmersiveApp::CImmersiveWindowCollection::ContainsDeferredInfo((CImmersiveApp::CImmersiveWindowCollection *)a1) )
  {
    v3 = (_DWORD *)(a1 + 16);
    v1 = 1;
    if ( !EqualRect((const RECT *)a1, (const RECT *)(a1 + 16))
      && *v3 <= *(_DWORD *)(a1 + 24)
      && *(_DWORD *)(a1 + 20) <= *(_DWORD *)(a1 + 28) )
    {
      CSplashScreen::OnSizeChanged(*(CSplashScreen **)(a1 + 232), (const struct tagRECT *)(a1 + 16));
    }
    v4 = 0LL;
    v5 = *(_OWORD *)(a1 + 84);
    v15[0] = *(_OWORD *)(a1 + 68);
    v16 = *(_QWORD *)(a1 + 100);
    for ( v15[1] = v5; v4 < *(_QWORD *)(a1 + 160); ++v4 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v4);
      (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v6 + 64LL))(v6, a1 + 16, v15);
      if ( !EqualRect((const RECT *)a1, (const RECT *)(a1 + 16))
        && *v3 <= *(_DWORD *)(a1 + 24)
        && *(_DWORD *)(a1 + 20) <= *(_DWORD *)(a1 + 28)
        && (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v4);
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
        McTemplateU0q(v9, &WindowLayoutChange_Start, v8);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v4);
          v11 = ~(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
          {
            McTemplateU0qq(
              (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
              &PerfTrack_ModernApp_ResizeVisibleComplete_Start,
              0,
              v11);
            if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
              McTemplateU0qq(
                (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
                &PerfTrack_ModernApp_ResizeResponsive_Start,
                0,
                v11);
          }
        }
      }
    }
    v12 = *(_DWORD *)(a1 + 100);
    v13 = *(_OWORD *)(a1 + 84);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a1 + 68);
    *(_OWORD *)(a1 + 48) = v13;
    *(_DWORD *)(a1 + 64) = v12;
    CopyRect((LPRECT)a1, (const RECT *)(a1 + 16));
  }
  return v1;
}
