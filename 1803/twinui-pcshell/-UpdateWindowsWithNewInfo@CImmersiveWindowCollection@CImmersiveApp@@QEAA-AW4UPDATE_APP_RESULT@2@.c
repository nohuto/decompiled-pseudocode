/*
 * XREFs of ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005D820
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x18004C210 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800F1CE4 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1800170E0 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180047C10 (-SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?GetView@CTaskWindow@@UEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047DD0 (-GetView@CTaskWindow@@UEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetImageLocation@UAPViewWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x18005B4E0 (-SetImageLocation@UAPViewWrapper@@UEAAJURect@Foundation@Windows@@@Z.c)
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18005BBCC (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     McTemplateU0qq @ 0x180060F5C (McTemplateU0qq.c)
 *     McTemplateU0q @ 0x1800610F8 (McTemplateU0q.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(__int64 a1, __int64 a2, char a3)
{
  CFrameApplicationPresentation *v6; // rcx
  __int64 (__fastcall *v7)(CFrameApplicationPresentation *, struct tagRECT *); // rax
  signed int v8; // eax
  RECT *p_rc; // rdx
  unsigned __int64 v10; // r14
  RECT *v11; // rsi
  const struct APPLICATION_VIEW_DATA *v12; // r8
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rbx
  CTaskWindow **v17; // r15
  CTaskWindow **v18; // r12
  __int128 v19; // xmm6
  CTaskWindow *v20; // rbx
  __int64 (__fastcall *v21)(CTaskWindow *, const struct _GUID *, void **); // rax
  int View; // eax
  __int64 (__fastcall *v23)(__int64, const struct Windows::Foundation::Rect *); // rax
  void *v24; // rcx
  CTaskWindow *v25; // rcx
  __int64 (__fastcall *v26)(CTaskWindow *, struct tagRECT *, const struct APPLICATION_VIEW_DATA *); // rax
  CTaskWindow *v27; // rcx
  __int64 (__fastcall *v28)(CTaskWindow *); // rax
  unsigned int v29; // eax
  __int64 v30; // rcx
  CTaskWindow *v31; // rcx
  __int64 (*v32)(void); // rax
  int NativeWindow; // eax
  __int64 v34; // rcx
  unsigned int v35; // ebx
  __int64 v36; // rcx
  void *v37; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+28h] [rbp-A0h]
  __int128 v39; // [rsp+30h] [rbp-98h] BYREF
  __int64 v40[2]; // [rsp+40h] [rbp-88h] BYREF
  RECT rc; // [rsp+50h] [rbp-78h] BYREF
  _OWORD v42[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v43; // [rsp+80h] [rbp-48h]

  v40[1] = -2LL;
  v6 = *(CFrameApplicationPresentation **)(a1 + 136);
  v7 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct tagRECT *))(*(_QWORD *)v6 + 120LL);
  if ( v7 == CFrameApplicationPresentation::GetDesiredApplicationRect )
  {
    rc = *(RECT *)((char *)v6 + 136);
    v8 = IsRectEmpty(&rc) ? 0x80070490 : 0;
  }
  else
  {
    v8 = v7(v6, &rc);
  }
  p_rc = &rc;
  v10 = 0LL;
  if ( v8 < 0 )
    p_rc = 0LL;
  if ( p_rc )
    CopyRect((LPRECT)(a1 + 16), p_rc);
  if ( a2 )
  {
    *(_OWORD *)(a1 + 68) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 84) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 100) = *(_QWORD *)(a2 + 32);
  }
  if ( !*(_QWORD *)(a1 + 160) || (a3 & 1) == 0 )
    return 2LL;
  v11 = (RECT *)(a1 + 16);
  if ( (EqualRect((const RECT *)a1, (const RECT *)(a1 + 16))
     || v11->left > *(_DWORD *)(a1 + 24)
     || *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28))
    && ImmersiveApplicationLayout::AreAppViewDataEqual(
         (ImmersiveApplicationLayout *)(a1 + 32),
         (const struct APPLICATION_VIEW_DATA *)(a1 + 68),
         v12)
    || v11->left > *(_DWORD *)(a1 + 24)
    || *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28) )
  {
    return 0LL;
  }
  if ( !EqualRect((const RECT *)a1, (const RECT *)(a1 + 16)) && v11->left <= *(_DWORD *)(a1 + 24) )
  {
    v14 = *(_DWORD *)(a1 + 20);
    v15 = *(_DWORD *)(a1 + 28);
    if ( v14 <= v15 )
    {
      v16 = *(_QWORD *)(a1 + 232);
      *(float *)(v16 + 136) = (float)(v15 - v14);
      *(float *)(v16 + 132) = (float)(*(_DWORD *)(a1 + 24) - v11->left);
      CSplashScreen::_get_ImageLocationInternal(v16, (__int64)&v39);
      v17 = *(CTaskWindow ***)(v16 + 96);
      v18 = *(CTaskWindow ***)(v16 + 104);
      if ( v17 != v18 )
      {
        v19 = v39;
        do
        {
          v20 = *v17;
          v40[0] = (__int64)v20;
          if ( v20 )
            (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v20 + 8LL))(v20);
          v37 = 0LL;
          v21 = *(__int64 (__fastcall **)(CTaskWindow *, const struct _GUID *, void **))(*(_QWORD *)v20 + 40LL);
          if ( v21 == CTaskWindow::GetView )
            View = CTaskWindow::GetView(v20, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, &v37);
          else
            View = v21(v20, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, &v37);
          if ( View >= 0 )
          {
            v39 = v19;
            v23 = *(__int64 (__fastcall **)(__int64, const struct Windows::Foundation::Rect *))(*(_QWORD *)v37 + 48LL);
            if ( v23 == UAPViewWrapper::SetImageLocation )
              UAPViewWrapper::SetImageLocation((__int64)v37, (const struct Windows::Foundation::Rect *)&v39);
            else
              v23((__int64)v37, (const struct Windows::Foundation::Rect *)&v39);
          }
          v24 = v37;
          if ( v37 )
          {
            v37 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 16LL))(v24);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v40);
          ++v17;
        }
        while ( v17 != v18 );
        v11 = (RECT *)(a1 + 16);
      }
    }
  }
  v42[0] = *(_OWORD *)(a1 + 68);
  v42[1] = *(_OWORD *)(a1 + 84);
  v43 = *(_QWORD *)(a1 + 100);
  if ( *(_QWORD *)(a1 + 160) )
  {
    do
    {
      v25 = *(CTaskWindow **)(*(_QWORD *)(a1 + 152) + 8 * v10);
      v26 = *(__int64 (__fastcall **)(CTaskWindow *, struct tagRECT *, const struct APPLICATION_VIEW_DATA *))(*(_QWORD *)v25 + 64LL);
      if ( v26 == CTaskWindow::SetPositionAndViewData )
        CTaskWindow::SetPositionAndViewData(v25, v11, (const struct APPLICATION_VIEW_DATA *)v42);
      else
        v26(v25, v11, (const struct APPLICATION_VIEW_DATA *)v42);
      if ( !EqualRect((const RECT *)a1, v11)
        && v11->left <= v11->right
        && v11->top <= v11->bottom
        && (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
      {
        v27 = *(CTaskWindow **)(*(_QWORD *)(a1 + 152) + 8 * v10);
        v28 = *(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)v27 + 32LL);
        v29 = v28 == CTaskWindow::GetNativeWindow ? CTaskWindow::GetNativeWindow(v27) : ((__int64 (*)(void))v28)();
        McTemplateU0q(v30, &WindowLayoutChange_Start, v29);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
        {
          v31 = *(CTaskWindow **)(*(_QWORD *)(a1 + 152) + 8 * v10);
          v32 = *(__int64 (**)(void))(*(_QWORD *)v31 + 32LL);
          if ( (char *)v32 == (char *)CTaskWindow::GetNativeWindow )
            NativeWindow = CTaskWindow::GetNativeWindow(v31);
          else
            NativeWindow = v32();
          v35 = ~NativeWindow;
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
          {
            McTemplateU0qq(
              v34,
              &PerfTrack_ModernApp_ResizeVisibleComplete_Start,
              0LL,
              v35,
              v37,
              v38,
              v39,
              *((_QWORD *)&v39 + 1),
              v40[0]);
            if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
              McTemplateU0qq(
                v36,
                &PerfTrack_ModernApp_ResizeResponsive_Start,
                0LL,
                v35,
                v37,
                v38,
                v39,
                *((_QWORD *)&v39 + 1),
                v40[0]);
          }
        }
      }
      ++v10;
    }
    while ( v10 < *(_QWORD *)(a1 + 160) );
  }
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a1 + 68);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a1 + 84);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 100);
  CopyRect((LPRECT)a1, v11);
  return 1LL;
}
