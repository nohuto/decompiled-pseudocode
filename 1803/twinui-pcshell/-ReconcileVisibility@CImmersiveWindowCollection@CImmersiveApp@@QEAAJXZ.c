/*
 * XREFs of ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C8C8
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005CD9C (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18012D79C (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18012ED8C (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&___ptr64_::Invoke @ 0x18012EF00 (CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__-___ptr64_--Invoke.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1801306C4 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1801308E0 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180131984 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?GetSystemVisual@CFrameApplicationPresentation@@UEBA?AW4FRAME_SYSTEM_VISUAL@@XZ @ 0x180014940 (-GetSystemVisual@CFrameApplicationPresentation@@UEBA-AW4FRAME_SYSTEM_VISUAL@@XZ.c)
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800475B0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 *     ?GetPresentationState@CTaskWindow@@UEBA?AW4ViewPresentationState@@XZ @ 0x1800476A0 (-GetPresentationState@CTaskWindow@@UEBA-AW4ViewPresentationState@@XZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005C1A8 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005D3A0 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@W4GHOST_STATUS@@@Z @ 0x18009DED8 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18012D79C (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18012FC14 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1801308E0 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     WPP_SF_LSdL @ 0x1801326D8 (WPP_SF_LSdL.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(
        CImmersiveApp::CImmersiveWindowCollection *this,
        __int64 a2,
        __int64 a3)
{
  char *v4; // rax
  char *v5; // rdx
  char *v6; // rcx
  __int64 (__fastcall *v7)(__int64); // r9
  unsigned int v8; // esi
  __int64 v9; // rcx
  void (__fastcall *v10)(__int64, unsigned __int64, __int64); // rax
  unsigned __int64 i; // r14
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64); // rax
  int v15; // esi
  __int64 v16; // r15
  BOOL inited; // eax
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // rcx
  const WCHAR *v22; // rdx
  __int64 v23; // rax
  REGHANDLE v24; // rcx
  bool v25; // dl
  __int64 v27; // rcx
  __int64 (__fastcall *v28)(__int64); // rax
  int SystemVisual; // eax
  int v30; // r15d
  __int64 v31; // r13
  __int64 v32; // r10
  REGHANDLE v33; // rcx
  ULONGLONG v34; // r11
  __int64 *v35; // r14
  char v36; // r15
  __int64 *v37; // r12
  __int64 (__fastcall *v38)(__int64); // rax
  int v39; // eax
  __int64 (__fastcall *v40)(__int64); // rax
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  WINBOOL v45; // [rsp+40h] [rbp-C0h] BYREF
  int v46; // [rsp+44h] [rbp-BCh] BYREF
  int v47; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL fPending; // [rsp+4Ch] [rbp-B4h] BYREF
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v50; // [rsp+54h] [rbp-ACh] BYREF
  LPVOID v51; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR v53; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v56; // [rsp+A0h] [rbp-60h]
  int v57; // [rsp+A8h] [rbp-58h]
  int v58; // [rsp+ACh] [rbp-54h]
  const WCHAR *v59; // [rsp+B0h] [rbp-50h]
  int v60; // [rsp+B8h] [rbp-48h]
  int v61; // [rsp+BCh] [rbp-44h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  int *v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  unsigned int *v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+F0h] [rbp-10h] BYREF
  void *v69; // [rsp+100h] [rbp+0h]
  int v70; // [rsp+108h] [rbp+8h]
  int v71; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  __int64 v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  int *v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  int *v77; // [rsp+140h] [rbp+40h]
  __int64 v78; // [rsp+148h] [rbp+48h]

  if ( !*((_QWORD *)this + 20) )
    return 0LL;
  v4 = (char *)this + 200;
  v5 = (char *)this + 232;
  v6 = v4;
  v7 = CFrameApplicationPresentation::GetSystemVisual;
  if ( v4 != v5 )
  {
    while ( !*v6 )
    {
      v6 += 8;
      if ( v6 == v5 )
        goto LABEL_5;
    }
    v8 = 2;
    while ( v4 != v5 )
    {
      if ( *v4 )
      {
        if ( !*((_DWORD *)v4 + 1) )
          goto LABEL_27;
        if ( *((_DWORD *)v4 + 1) == 1 )
          v8 = 1;
      }
      v4 += 8;
    }
LABEL_28:
    if ( v8 != 2 )
    {
      v27 = *((_QWORD *)this + 17);
      v28 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 48LL);
      if ( v28 == CFrameApplicationPresentation::GetSystemVisual )
        SystemVisual = CFrameApplicationPresentation::GetSystemVisual(v27);
      else
        SystemVisual = ((__int64 (__fastcall *)(__int64, char *, __int64, __int64 (__fastcall *)(__int64)))v28)(
                         v27,
                         v5,
                         a3,
                         CFrameApplicationPresentation::GetSystemVisual);
      if ( SystemVisual )
      {
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_LSdL(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            22,
            (_DWORD)WPP_GLOBAL_Control,
            16,
            *(_QWORD *)(*((_QWORD *)this + 18) + 544LL),
            *(_DWORD *)(*((_QWORD *)this + 18) + 552LL),
            *((_DWORD *)this + 49));
        v30 = *((_DWORD *)this + 49);
        v51 = 0LL;
        *((_DWORD *)this + 49) = v30 | 0x10;
        v31 = *((_QWORD *)this + 18);
        if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v45, &v51) && v45 )
        {
          v51 = qword_180438670;
          qword_180438670[0] = &LockScreenServiceLogging::`vftable';
          qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
          InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
        }
        if ( **((_DWORD **)v51 + 1) > 5u )
        {
          TlgCreateWsz(&pDesc, *(LPCWSTR *)(v31 + 544));
          v73 = v31 + 552;
          v75 = &v46;
          v77 = &v47;
          v74 = 4LL;
          v46 = v30;
          v76 = 4LL;
          v47 = v30 | 0x10;
          v78 = 4LL;
          *(_DWORD *)&v53.Level = 5;
          v68.Ptr = *(_QWORD *)(v32 + 8);
          *(_DWORD *)&v53.Id = ((unsigned int)&unk_180388CDF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v33 = *(_QWORD *)(v32 + 32);
          v53.Keyword = v34;
          v68.Size = *(unsigned __int16 *)v68.Ptr;
          v69 = &unk_180388CEA;
          v68.Reserved = 2;
          v70 = 77;
          v71 = 1;
          EventWriteTransfer(v33, &v53, 0LL, 0LL, 6u, &v68);
        }
        if ( ((((unsigned __int8)v30 | 0x10) ^ (unsigned __int8)v30) & 2) != 0 )
        {
          if ( (v30 & 2) != 0 )
            CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(this, 0LL, 2LL);
          else
            CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(this, 2LL, a3);
        }
      }
      else
      {
        CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(this, 0LL, 16LL);
      }
      v35 = (__int64 *)*((_QWORD *)this + 19);
      v36 = 1;
      v37 = &v35[*((_QWORD *)this + 20)];
      if ( v35 != v37 )
      {
        while ( 1 )
        {
          v38 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v35 + 216LL);
          v39 = v38 == CTaskWindow::GetPresentationState
              ? CTaskWindow::GetPresentationState(*v35)
              : ((__int64 (*)(void))v38)();
          if ( v39 == 3 )
            break;
          v40 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v35 + 216LL);
          v41 = v40 == CTaskWindow::GetPresentationState
              ? CTaskWindow::GetPresentationState(*v35)
              : ((__int64 (*)(void))v40)();
          if ( v41 == 1 )
            break;
          if ( ++v35 == v37 )
          {
            v36 = 1;
            goto LABEL_48;
          }
        }
        v36 = 0;
      }
LABEL_48:
      if ( !v36 )
      {
        CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(this);
        return 0LL;
      }
    }
    goto LABEL_7;
  }
LABEL_5:
  if ( !*((_BYTE *)this + 184) )
  {
LABEL_27:
    v8 = 0;
    goto LABEL_28;
  }
  v8 = 2;
LABEL_7:
  v9 = **((_QWORD **)this + 19);
  v10 = *(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v9 + 224LL);
  if ( v10 == CTaskWindow::SetVisibility )
    CTaskWindow::SetVisibility(v9, v8, a3);
  else
    ((void (__fastcall *)(__int64, _QWORD, __int64, __int64 (__fastcall *)(__int64)))v10)(v9, v8, a3, v7);
  for ( i = 1LL; i < *((_QWORD *)this + 20); ++i )
  {
    v42 = *(_QWORD *)(*((_QWORD *)this + 19) + 8 * i);
    v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 216LL))(v42);
    v44 = *(_QWORD *)(*((_QWORD *)this + 19) + 8 * i);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v44 + 224LL))(v44, v43 != 0 ? v8 : 0);
  }
  if ( v8 == 2 )
  {
    v12 = *((_QWORD *)this + 17);
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL);
    if ( v13 == CFrameApplicationPresentation::GetSystemVisual
       ? CFrameApplicationPresentation::GetSystemVisual(v12)
       : ((unsigned int (*)(void))v13)() )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_LSdL(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          23,
          (_DWORD)WPP_GLOBAL_Control,
          16,
          *(_QWORD *)(*((_QWORD *)this + 18) + 544LL),
          *(_DWORD *)(*((_QWORD *)this + 18) + 552LL),
          *((_DWORD *)this + 49));
      v15 = *((_DWORD *)this + 49);
      Context = 0LL;
      *((_DWORD *)this + 49) = v15 & 0xFFFFFFEF;
      v16 = *((_QWORD *)this + 18);
      inited = InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
      v19 = 0LL;
      if ( inited && fPending )
      {
        Context = qword_180438670;
        qword_180438670[0] = &LockScreenServiceLogging::`vftable';
        qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
        v19 = 0LL;
      }
      v20 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v20 > 5u )
      {
        v21 = *(_QWORD *)(v16 + 544);
        v22 = &word_18035ABCC;
        LODWORD(v23) = 0;
        if ( v21 )
        {
          v22 = *(const WCHAR **)(v16 + 544);
          v23 = -1LL;
          do
            ++v23;
          while ( *(_WORD *)(v21 + 2 * v23) );
        }
        v59 = v22;
        v60 = 2 * v23 + 2;
        v64 = &v49;
        v66 = &v50;
        v61 = 0;
        v62 = v16 + 552;
        v63 = 4LL;
        v49 = v15;
        v65 = 4LL;
        v50 = v15 & 0xFFFFFFEF;
        v67 = 4LL;
        v24 = *(_QWORD *)(v20 + 32);
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = *(_QWORD *)(v20 + 8);
        EventDescriptor.Keyword = 0LL;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180388CDF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        v56 = &unk_180388CEA;
        UserData.Reserved = 2;
        v57 = 77;
        v58 = 1;
        EventWriteTransfer(v24, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
      }
      if ( ((v15 & 0xEF ^ (unsigned __int8)v15) & 2) != 0 )
      {
        if ( (v15 & 2) != 0 )
          CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(this, 0LL, 2LL);
        else
          CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(this, 2LL, v19);
      }
      if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(this, v18, v19) )
        CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this, v25);
    }
  }
  return 0LL;
}
