/*
 * XREFs of ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180049A20
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x1800709D0 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     ?IsPresentationLayerWindow@CFrameApplicationPresentation@@UEAA_NPEAUHWND__@@@Z @ 0x180013CC0 (-IsPresentationLayerWindow@CFrameApplicationPresentation@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?GetSystemVisual@CFrameApplicationPresentation@@UEBA?AW4FRAME_SYSTEM_VISUAL@@XZ @ 0x180014940 (-GetSystemVisual@CFrameApplicationPresentation@@UEBA-AW4FRAME_SYSTEM_VISUAL@@XZ.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18004829C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800485A0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005C1A8 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CE5C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005D3A0 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005D748 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18012D79C (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x18012F660 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1801308E0 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     WPP_SF_LSdL @ 0x1801326D8 (WPP_SF_LSdL.c)
 */

__int64 __fastcall CImmersiveApp::HandleActivation(CImmersiveApp *this, HWND a2)
{
  HWND *v4; // rcx
  int v5; // r14d
  bool v6; // si
  __int64 (*v7)(void); // rax
  char IsPresentationLayerWindow; // al
  bool v9; // r8
  int v10; // ecx
  __int64 v11; // rcx
  __int64 (*v12)(void); // rax
  int SystemVisual; // eax
  int v14; // r12d
  BOOL inited; // eax
  __int64 v16; // r8
  __int64 v17; // r10
  const WCHAR *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  REGHANDLE v21; // rcx
  bool v22; // dl
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(__int64); // rax
  char *v27; // rcx
  bool v28; // [rsp+40h] [rbp-99h] BYREF
  int v29; // [rsp+44h] [rbp-95h]
  WINBOOL fPending; // [rsp+48h] [rbp-91h] BYREF
  __int64 v31; // [rsp+50h] [rbp-89h] BYREF
  __int64 v32; // [rsp+58h] [rbp-81h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-71h] BYREF
  int v35; // [rsp+78h] [rbp-61h] BYREF
  HWND v36; // [rsp+80h] [rbp-59h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-49h] BYREF
  void *v38; // [rsp+A0h] [rbp-39h]
  int v39; // [rsp+A8h] [rbp-31h]
  int v40; // [rsp+ACh] [rbp-2Dh]
  const WCHAR *v41; // [rsp+B0h] [rbp-29h]
  int v42; // [rsp+B8h] [rbp-21h]
  int v43; // [rsp+BCh] [rbp-1Dh]
  __int64 v44; // [rsp+C0h] [rbp-19h]
  __int64 v45; // [rsp+C8h] [rbp-11h]
  __int64 *v46; // [rsp+D0h] [rbp-9h]
  __int64 v47; // [rsp+D8h] [rbp-1h]
  __int64 *v48; // [rsp+E0h] [rbp+7h]
  __int64 v49; // [rsp+E8h] [rbp+Fh]

  v29 = 0;
  v28 = 0;
  v4 = (HWND *)*((_QWORD *)this + 36);
  v5 = 0;
  v6 = 0;
  v7 = (__int64 (*)(void))*((_QWORD *)*v4 + 20);
  if ( (char *)v7 == (char *)CFrameApplicationPresentation::IsPresentationLayerWindow )
    IsPresentationLayerWindow = CFrameApplicationPresentation::IsPresentationLayerWindow(v4, a2);
  else
    IsPresentationLayerWindow = v7();
  if ( !IsPresentationLayerWindow )
  {
    v5 = CImmersiveApp::CImmersiveWindowCollection::ProcessActivation(
           (CImmersiveApp *)((char *)this + 152),
           a2,
           v9,
           &v28);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v6 = v28;
  }
  v10 = *((_DWORD *)this + 106);
  if ( (v10 & 2) == 0 )
  {
    *((_DWORD *)this + 106) = v10 | 2;
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 532));
    v29 = 2;
  }
  v11 = *((_QWORD *)this + 36);
  v12 = *(__int64 (**)(void))(*(_QWORD *)v11 + 48LL);
  if ( (char *)v12 == (char *)CFrameApplicationPresentation::GetSystemVisual )
    SystemVisual = CFrameApplicationPresentation::GetSystemVisual(v11);
  else
    SystemVisual = v12();
  if ( SystemVisual )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_LSdL(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        23,
        *((_QWORD *)this + 37),
        1,
        *(_QWORD *)(*((_QWORD *)this + 37) + 544LL),
        *(_DWORD *)(*((_QWORD *)this + 37) + 552LL),
        *((_DWORD *)this + 87));
    v14 = *((_DWORD *)this + 87);
    Context = 0LL;
    *((_DWORD *)this + 87) = v14 & 0xFFFFFFFE;
    v32 = *((_QWORD *)this + 37);
    v31 = v32 + 552;
    inited = InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
    v16 = 0LL;
    if ( inited && fPending )
    {
      Context = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
      v16 = 0LL;
    }
    v17 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v17 > 5u )
    {
      v18 = &word_18035ABCC;
      LODWORD(v19) = 0;
      v20 = *(_QWORD *)(v32 + 544);
      if ( v20 )
      {
        v18 = *(const WCHAR **)(v32 + 544);
        v19 = -1LL;
        do
          ++v19;
        while ( *(_WORD *)(v20 + 2 * v19) );
      }
      v41 = v18;
      v42 = 2 * v19 + 2;
      v44 = v31;
      v46 = &v31;
      v48 = &v32;
      v43 = 0;
      v45 = 4LL;
      LODWORD(v31) = v14;
      v47 = 4LL;
      LODWORD(v32) = v14 & 0xFFFFFFFE;
      v49 = 4LL;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v17 + 8);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180388CDF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v21 = *(_QWORD *)(v17 + 32);
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v38 = &unk_180388CEA;
      UserData.Reserved = 2;
      v39 = 77;
      v40 = 1;
      EventWriteTransfer(v21, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
      v6 = v28;
    }
    if ( ((v14 & 0xFE ^ (unsigned __int8)v14) & 2) != 0 )
    {
      v27 = (char *)this + 152;
      if ( (v14 & 2) != 0 )
        CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(v27, 0LL, 2LL);
      else
        CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(v27, 2LL, v16);
    }
    if ( (*((_BYTE *)this + 348) & 2) == 0 )
    {
      CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows((char *)this + 152);
      if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost((CImmersiveApp *)((char *)this + 152)) )
        CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual((CImmersiveApp *)((char *)this + 152), v22);
    }
    *((_BYTE *)this + 632) = 1;
    *((_DWORD *)this + 159) = 1;
  }
  if ( !v6 )
  {
    v23 = *((_QWORD *)this + 36);
    v24 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL);
    if ( v24 == CFrameApplicationPresentation::GetSystemVisual
       ? CFrameApplicationPresentation::GetSystemVisual(v23)
       : ((unsigned int (*)(void))v24)() )
    {
      CImmersiveApp::_SetApplicationForegroundPriority((__int64)this - 112, 0);
    }
  }
  if ( v6 )
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp *)((char *)this + 152));
  if ( v29 )
  {
    v35 = v29;
    v36 = a2;
    CImmersiveApp::_ScheduleApplicationNotifications(
      (RTL_SRWLOCK *)this - 14,
      (const struct APP_CHANGE_INFO *const)&v35,
      1uLL);
  }
  return (unsigned int)v5;
}
