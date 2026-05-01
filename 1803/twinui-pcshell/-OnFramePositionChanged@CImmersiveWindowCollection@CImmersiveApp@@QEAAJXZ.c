/*
 * XREFs of ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C300
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18005E0C8 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?IsPillarBoxed@CFrameApplicationPresentation@@UEAAJPEA_N@Z @ 0x180013710 (-IsPillarBoxed@CFrameApplicationPresentation@@UEAAJPEA_N@Z.c)
 *     ?IsPresentationMinimized@CFrameApplicationPresentation@@UEBA_NXZ @ 0x180013800 (-IsPresentationMinimized@CFrameApplicationPresentation@@UEBA_NXZ.c)
 *     ?GetDesiredApplicationRect@CFrameApplicationPresentation@@UEAAJPEAUtagRECT@@@Z @ 0x180013FA0 (-GetDesiredApplicationRect@CFrameApplicationPresentation@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800483C4 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18005D0A0 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005D748 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18012D79C (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1801308E0 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  HWND *v2; // rcx
  __int64 (*v3)(void); // rax
  char IsPresentationMinimized; // al
  __int64 v5; // r8
  int v6; // esi
  __int64 (__fastcall *v7)(CFrameApplicationPresentation *, bool *); // rax
  CFrameApplicationPresentation *v8; // rcx
  int IsPillarBoxed; // eax
  CFrameApplicationPresentation *v10; // rcx
  int v11; // edi
  __int64 (__fastcall *v12)(CFrameApplicationPresentation *, struct tagRECT *); // rax
  int DesiredApplicationRect; // eax
  struct tagRECT *v14; // rdx
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  int v18; // eax
  int v19; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v20; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v21[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v2 = (HWND *)*((_QWORD *)this + 17);
  v3 = (__int64 (*)(void))*((_QWORD *)*v2 + 27);
  if ( (char *)v3 == (char *)CFrameApplicationPresentation::IsPresentationMinimized )
    IsPresentationMinimized = CFrameApplicationPresentation::IsPresentationMinimized(v2);
  else
    IsPresentationMinimized = v3();
  if ( IsPresentationMinimized != *((_BYTE *)this + 185) )
  {
    *((_BYTE *)this + 185) = IsPresentationMinimized;
    if ( IsPresentationMinimized )
      CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(this, 0LL, 0LL);
    else
      CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(this, 0LL, v5);
    CImmersiveApp::_UpdateAppStateAndSendNotifications(*((CImmersiveApp **)this + 18));
  }
  v6 = CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
         this,
         (struct APPLICATION_VIEW_DATA_UPDATE *)v21);
  if ( v6 >= 0 )
  {
    v7 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, bool *))(**((_QWORD **)this + 17) + 240LL);
    v8 = (CFrameApplicationPresentation *)*((_QWORD *)this + 17);
    if ( v7 == CFrameApplicationPresentation::IsPillarBoxed )
      IsPillarBoxed = CFrameApplicationPresentation::IsPillarBoxed(v8, (bool *)&v19);
    else
      IsPillarBoxed = v7(v8, (bool *)&v19);
    if ( IsPillarBoxed >= 0 && (_BYTE)v19 != *((_BYTE *)this + 186) )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 17) + 232LL))(
              *((_QWORD *)this + 17),
              (unsigned int)-((_BYTE)v19 == 0));
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D1B,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v18,
          v19);
      *((_BYTE *)this + 186) = v19;
    }
    v10 = (CFrameApplicationPresentation *)*((_QWORD *)this + 17);
    v11 = *((_DWORD *)this + 49) & 2;
    v12 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct tagRECT *))(*(_QWORD *)v10 + 120LL);
    if ( v12 == CFrameApplicationPresentation::GetDesiredApplicationRect )
      DesiredApplicationRect = CFrameApplicationPresentation::GetDesiredApplicationRect(v10, &v20);
    else
      DesiredApplicationRect = v12(v10, &v20);
    v14 = &v20;
    if ( DesiredApplicationRect < 0 )
      v14 = 0LL;
    if ( v14 )
      CopyRect((LPRECT)this + 1, v14);
    v15 = v21[1];
    *(_OWORD *)((char *)this + 68) = v21[0];
    v16 = v22;
    *(_OWORD *)((char *)this + 84) = v15;
    *(_QWORD *)((char *)this + 100) = v16;
    if ( *((_QWORD *)this + 20) && !v11 )
      CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(this);
  }
  return (unsigned int)v6;
}
