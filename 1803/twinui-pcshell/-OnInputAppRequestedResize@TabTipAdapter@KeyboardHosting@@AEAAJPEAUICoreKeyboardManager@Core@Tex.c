/*
 * XREFs of ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18024AFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18023B800 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?GetViewRect@TouchKeyboardExperienceManager@@QEAAJIPEAUtagRECT@@@Z @ 0x18023E2C4 (-GetViewRect@TouchKeyboardExperienceManager@@QEAAJIPEAUtagRECT@@@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z @ 0x18023FA6C (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z.c)
 *     ??1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180247754 (--1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x18024D9E0 (-StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@.c)
 *     ?Stop@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIUSize@Foundation@Windows@@_N11J@Z @ 0x18024E020 (-Stop@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIUSize@Foun.c)
 *     ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Windows@@URect@45@EEPEAU645@PEAE@Z @ 0x1802533FC (-VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Window.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *a3)
{
  __int64 v5; // rsi
  char v6; // r14
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int ViewRect; // eax
  __int64 v12; // r9
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r9
  int v17; // eax
  int v19; // [rsp+28h] [rbp-E0h]
  int v20; // [rsp+30h] [rbp-D8h]
  char v21; // [rsp+48h] [rbp-C0h] BYREF
  bool v22; // [rsp+49h] [rbp-BFh] BYREF
  char v23; // [rsp+4Ah] [rbp-BEh] BYREF
  char v24; // [rsp+4Bh] [rbp-BDh] BYREF
  unsigned int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  struct tagRECT v26; // [rsp+50h] [rbp-B8h] BYREF
  bool *v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h]
  struct tagRECT v31; // [rsp+80h] [rbp-88h] BYREF
  __int64 v32[2]; // [rsp+90h] [rbp-78h] BYREF
  char v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  _QWORD v35[40]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v34 = -2LL;
  v22 = 0;
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *))(*(_QWORD *)v5 + 8LL))(
      *((_QWORD *)this + 3),
      a2);
  v27 = &v22;
  v32[0] = v5;
  *(_QWORD *)&v26.right = 0LL;
  v32[1] = (__int64)&v22;
  v6 = 1;
  v33 = 1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26.right);
  v25 = 0;
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v25);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 665LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_23;
  }
  v28 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, __int64 *))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v28);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 667LL;
    goto LABEL_11;
  }
  v23 = 0;
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, char *))(*(_QWORD *)a3 + 64LL))(
         a3,
         &v23);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 669LL;
    goto LABEL_11;
  }
  v21 = 0;
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, char *))(*(_QWORD *)a3 + 72LL))(
         a3,
         &v21);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 671LL;
    goto LABEL_11;
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v35,
    (__int64)"OnInputAppRequestedResizeActivity");
  v35[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v35,
    v25);
  *(_QWORD *)&v31.left = 0LL;
  *(_QWORD *)&v31.right = 0LL;
  ViewRect = TouchKeyboardExperienceManager::GetViewRect(*((RTL_SRWLOCK **)this + 7), v25, &v31);
  v8 = ViewRect;
  if ( ViewRect >= 0 )
  {
    v24 = 0;
    v29 = 0LL;
    v30 = 0LL;
    *(float *)&v26.right = (float)v31.left;
    *(float *)&v26.bottom = (float)v31.top;
    *(float *)&v27 = (float)(v31.right - v31.left);
    *((float *)&v27 + 1) = (float)(v31.bottom - v31.top);
    LOBYTE(v12) = v23;
    v15 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
            *((_QWORD *)this + 12),
            v28,
            &v26.right,
            v12,
            v21,
            &v29,
            &v24);
    v8 = v15;
    if ( v15 >= 0 )
    {
      v8 = 0;
      if ( v24 )
      {
        v26.right = (int)*(float *)&v29;
        v26.bottom = (int)*((float *)&v29 + 1);
        LODWORD(v27) = (int)(float)(*(float *)&v30 + *(float *)&v29);
        HIDWORD(v27) = (int)(float)(*((float *)&v29 + 1) + *((float *)&v30 + 1));
        v8 = TouchKeyboardExperienceManager::OnInputAppRequestedResize(
               *((RTL_SRWLOCK **)this + 7),
               v25,
               (struct tagRECT *)&v26.right,
               v21 != 0);
        v22 = v8 == 0;
      }
      else
      {
        v6 = 0;
      }
      LOBYTE(v16) = v23 != 0;
      LOBYTE(v20) = v6;
      LOBYTE(v19) = v21 != 0;
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::Stop(v35, v25, v28, v16, v19, v20, v8);
      if ( v8 >= 0 )
        goto LABEL_22;
      v13 = (unsigned int)v8;
      v14 = 696LL;
    }
    else
    {
      v13 = (unsigned int)v15;
      v14 = 685LL;
    }
  }
  else
  {
    v13 = (unsigned int)ViewRect;
    v14 = 675LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)v13);
LABEL_22:
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::~OnInputAppRequestedResizeActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v35);
LABEL_23:
  v33 = 0;
  LOBYTE(v10) = v22;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 416LL))(v5, v10);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      661LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
  return (unsigned int)v8;
}
