/*
 * XREFs of ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1801A3610
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N1@Z @ 0x1801995CC (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N1@Z.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801A11DC (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801A13E8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x1801A432C (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1801A776C (-StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIAEAURect@Foundation@Windows@@@Z @ 0x1801A9BF4 (-Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIAEAURect@Fou.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1801AACE0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // esi
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  int v11; // eax
  bool v12; // dl
  __int64 v13; // rdx
  _BYTE v14[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+50h] [rbp-B8h]
  int v18; // [rsp+54h] [rbp-B4h]
  _QWORD v19[2]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v20[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+88h] [rbp-80h]
  int v22; // [rsp+90h] [rbp-78h]
  __int64 v23; // [rsp+98h] [rbp-70h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-68h]
  __int128 v25; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C8h] [rbp-40h]
  int v28; // [rsp+D0h] [rbp-38h]
  _QWORD v29[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v30; // [rsp+F8h] [rbp-10h]
  int *v31; // [rsp+100h] [rbp-8h]
  int *v32; // [rsp+108h] [rbp+0h]
  int v33; // [rsp+110h] [rbp+8h] BYREF
  char v34; // [rsp+114h] [rbp+Ch]
  int v35; // [rsp+138h] [rbp+30h] BYREF
  const char *v36; // [rsp+140h] [rbp+38h]
  __int64 v37; // [rsp+148h] [rbp+40h]
  char v38; // [rsp+150h] [rbp+48h]
  __int64 v39; // [rsp+158h] [rbp+50h]
  _BYTE v40[144]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v41; // [rsp+1F0h] [rbp+E8h]
  __int64 v42; // [rsp+1F8h] [rbp+F0h]
  __int64 v43; // [rsp+200h] [rbp+F8h]
  __int64 v44; // [rsp+208h] [rbp+100h]
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v19[1] = -2LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *, __int128 *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v25);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x191,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  v15 = 0;
  v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *, unsigned int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v15);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = v15;
    *((_BYTE *)this + 208) = v15 == 0;
    v29[1] = 0LL;
    v29[2] = v29;
    v29[3] = 0LL;
    v30 = 0;
    v31 = &v35;
    v32 = &v33;
    v33 = 0;
    v34 = 0;
    v38 = 0;
    v35 = 0;
    v36 = "OnInputAppRequestedShowActivity";
    v37 = 0LL;
    v39 = 1LL;
    v41 = 0LL;
    v42 = 0LL;
    memset(v40, 0, sizeof(v40));
    v43 = 0LL;
    v44 = 0LL;
    v29[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::StartActivity(
      (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v29,
      v10);
    v23 = 0LL;
    v24 = 0LL;
    v14[0] = 0;
    v20[0] = v25;
    v20[1] = v26;
    v21 = v27;
    v22 = v28;
    v11 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedShow(
            *((_QWORD *)this + 12),
            v20,
            v15,
            v19,
            &v23,
            v14);
    v9 = v11;
    if ( v11 >= 0 )
    {
      if ( *((_BYTE *)this + 210)
        || (v11 = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, v12, 1), v9 = v11, v11 >= 0) )
      {
        if ( !v14[0]
          || (v16.right = (int)*(float *)&v23,
              v16.bottom = (int)*((float *)&v23 + 1),
              v17 = (int)(float)(*(float *)&v24 + *(float *)&v23),
              v18 = (int)(float)(*((float *)&v23 + 1) + *((float *)&v24 + 1)),
              v11 = TouchKeyboardExperienceManager::OnInputAppRequestedShow(
                      *((TouchKeyboardExperienceManager **)this + 7),
                      v15,
                      (struct tagRECT *)&v16.right,
                      BYTE8(v26) != 0,
                      BYTE9(v26) != 0),
              v9 = v11,
              v11 >= 0) )
        {
          TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::Stop(
            (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v29,
            v15,
            (struct Windows::Foundation::Rect *)&v23);
          v9 = 0;
          goto LABEL_15;
        }
        v13 = 428LL;
      }
      else
      {
        v13 = 419LL;
      }
    }
    else
    {
      v13 = 414LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v11);
LABEL_15:
    v29[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
    return v9;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x194,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
