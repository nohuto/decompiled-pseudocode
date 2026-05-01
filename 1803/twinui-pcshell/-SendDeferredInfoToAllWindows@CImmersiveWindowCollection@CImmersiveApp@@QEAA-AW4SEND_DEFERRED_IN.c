/*
 * XREFs of ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005D748
 * Callers:
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180049130 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180049A20 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C300 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800F1CE4 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x1800F91C8 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x18012EB20 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1801303A0 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x1801321F4 (-_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z.c)
 * Callees:
 *     McTemplateU0qq @ 0x180060F5C (McTemplateU0qq.c)
 *     McTemplateU0q @ 0x1800610F8 (McTemplateU0q.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x1800EFFD0 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800F94D0 (-HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(__int64 a1)
{
  unsigned int v1; // r15d
  const RECT *v3; // rdi
  char v4; // al
  unsigned __int64 v6; // rsi
  __int128 v7; // xmm1
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // r14d
  __int64 v15; // rcx
  int v16; // r8d
  __int128 v17; // xmm1
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int128 i; // [rsp+30h] [rbp-38h]
  __int64 v20; // [rsp+40h] [rbp-28h]

  v1 = 0;
  if ( *(_QWORD *)(a1 + 160) )
  {
    if ( (v3 = (const RECT *)(a1 + 16), !EqualRect((const RECT *)a1, (const RECT *)(a1 + 16)))
      && v3->left <= v3->right
      && v3->top <= v3->bottom
      || (*(_DWORD *)(a1 + 32) != *(_DWORD *)(a1 + 68)
       || *(_DWORD *)(a1 + 36) != *(_DWORD *)(a1 + 72)
       || *(_DWORD *)(a1 + 40) != *(_DWORD *)(a1 + 76)
       || *(_DWORD *)(a1 + 44) != *(_DWORD *)(a1 + 80)
       || *(_DWORD *)(a1 + 52) != *(_DWORD *)(a1 + 88)
       || *(_DWORD *)(a1 + 48) != *(_DWORD *)(a1 + 84)
       || *(_DWORD *)(a1 + 56) != *(_DWORD *)(a1 + 92)
       || *(_DWORD *)(a1 + 60) != *(_DWORD *)(a1 + 96)
       || *(_DWORD *)(a1 + 64) != *(_DWORD *)(a1 + 100)
        ? (v4 = 1)
        : (v4 = 0),
          v4) )
    {
      if ( v3->left <= v3->right && v3->top <= v3->bottom )
      {
        v1 = 1;
        if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1) )
          CSplashScreen::OnSizeChanged(*(CSplashScreen **)(a1 + 232), v3);
        v6 = 0LL;
        v7 = *(_OWORD *)(a1 + 84);
        v18 = *(_OWORD *)(a1 + 68);
        v20 = *(_QWORD *)(a1 + 100);
        for ( i = v7; v6 < *(_QWORD *)(a1 + 160); ++v6 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v6);
          (*(void (__fastcall **)(__int64, const RECT *, __int128 *))(*(_QWORD *)v8 + 64LL))(v8, v3, &v18);
          if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1)
            && (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
          {
            v9 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v6);
            v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
            McTemplateU0q(v11, &WindowLayoutChange_Start, v10);
            if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
            {
              v12 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v6);
              v14 = ~(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
              if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
              {
                McTemplateU0qq(
                  v13,
                  &PerfTrack_ModernApp_ResizeVisibleComplete_Start,
                  0LL,
                  v14,
                  v18,
                  *((_QWORD *)&v18 + 1),
                  i,
                  *((_QWORD *)&i + 1),
                  v20);
                if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
                  McTemplateU0qq(
                    v15,
                    &PerfTrack_ModernApp_ResizeResponsive_Start,
                    0LL,
                    v14,
                    v18,
                    *((_QWORD *)&v18 + 1),
                    i,
                    *((_QWORD *)&i + 1),
                    v20);
              }
            }
          }
        }
        v16 = *(_DWORD *)(a1 + 100);
        v17 = *(_OWORD *)(a1 + 84);
        *(_OWORD *)(a1 + 32) = *(_OWORD *)(a1 + 68);
        *(_OWORD *)(a1 + 48) = v17;
        *(_DWORD *)(a1 + 64) = v16;
        CopyRect((LPRECT)a1, v3);
      }
    }
  }
  return v1;
}
