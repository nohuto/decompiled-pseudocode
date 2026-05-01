/*
 * XREFs of ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x18024B390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18023B800 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x18023FB50 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z.c)
 *     ??1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18024777C (--1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??4OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x180247B1C (--4OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x18024D640 (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x18024DAD0 (-StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIAEAURect@Foundation@Windows@@@Z @ 0x18024E3CC (-Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIAEAURect@Fou.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180253660 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  bool v7; // di
  int v8; // eax
  bool v9; // dl
  __int64 v10; // rdx
  __int64 v12; // [rsp+30h] [rbp-D8h]
  _BYTE v13[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  struct tagRECT v15; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+50h] [rbp-B8h]
  int v17; // [rsp+54h] [rbp-B4h]
  _QWORD v18[2]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v19[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+88h] [rbp-80h]
  int v21; // [rsp+90h] [rbp-78h]
  __int64 v22; // [rsp+98h] [rbp-70h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-68h]
  __int128 v24; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v25; // [rsp+B8h] [rbp-50h]
  __int64 v26; // [rsp+C8h] [rbp-40h]
  int v27; // [rsp+D0h] [rbp-38h]
  _QWORD v28[40]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v29[40]; // [rsp+218h] [rbp+110h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+380h] [rbp+278h]

  v18[1] = -2LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *, __int128 *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v24);
  if ( v5 >= 0 )
  {
    v14 = 0;
    v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *, unsigned int *))(*(_QWORD *)a3 + 56LL))(
           a3,
           &v14);
    if ( v5 < 0 )
    {
      v6 = 566LL;
      goto LABEL_3;
    }
    v7 = v14 == 0;
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v29,
      (__int64)"OnInputAppRequestedShowActivity");
    v29[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
    if ( v7 )
    {
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v28,
        (__int64)"OnInputAppRequestedShowActivity");
      v28[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::StartActivity(
        (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v28,
        v14);
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::operator=((__int64)v29, (__int64)v28);
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::~OnInputAppRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v28);
    }
    v22 = 0LL;
    v23 = 0LL;
    v13[0] = 0;
    v19[0] = v24;
    v19[1] = v25;
    v20 = v26;
    v21 = v27;
    v8 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedShow(
           *((_QWORD *)this + 12),
           v19,
           v14,
           v18,
           &v22,
           v13);
    v5 = v8;
    if ( v8 >= 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 12) + 507LL)
        || (v8 = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, v9, 1), v5 = v8, v8 >= 0) )
      {
        if ( !v13[0]
          || (v15.right = (int)*(float *)&v22,
              v15.bottom = (int)*((float *)&v22 + 1),
              v16 = (int)(float)(*(float *)&v23 + *(float *)&v22),
              v17 = (int)(float)(*((float *)&v22 + 1) + *((float *)&v23 + 1)),
              LOBYTE(v12) = BYTE10(v25) != 0,
              v8 = TouchKeyboardExperienceManager::OnInputAppRequestedShow(
                     *((TouchKeyboardExperienceManager **)this + 7),
                     v14,
                     (struct tagRECT *)&v15.right,
                     BYTE8(v25) != 0,
                     BYTE9(v25) != 0,
                     v12),
              v5 = v8,
              v8 >= 0) )
        {
          if ( v7 )
            TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::Stop(
              (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v29,
              v14,
              (struct Windows::Foundation::Rect *)&v22);
          v5 = 0;
          goto LABEL_20;
        }
        v10 = 595LL;
      }
      else
      {
        v10 = 585LL;
      }
    }
    else
    {
      v10 = 580LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v8);
LABEL_20:
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::~OnInputAppRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v29);
    return (unsigned int)v5;
  }
  v6 = 563LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
