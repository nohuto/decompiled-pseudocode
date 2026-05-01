/*
 * XREFs of ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x1801A38E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI@Z @ 0x1801997BC (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A0734 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801A11DC (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801A13E8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x1801A432C (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1801A7C44 (-StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x1801AB230 (-VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedHide(
        KeyboardHosting::TabTipAdapterPolicy **this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  bool v8; // dl
  unsigned __int8 v10[4]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v11; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned int v12[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-D0h]
  _QWORD v14[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h]
  int *v16; // [rsp+70h] [rbp-98h]
  int *v17; // [rsp+78h] [rbp-90h]
  int v18; // [rsp+80h] [rbp-88h] BYREF
  char v19; // [rsp+84h] [rbp-84h]
  int v20; // [rsp+A8h] [rbp-60h] BYREF
  const char *v21; // [rsp+B0h] [rbp-58h]
  __int64 v22; // [rsp+B8h] [rbp-50h]
  char v23; // [rsp+C0h] [rbp-48h]
  __int64 v24; // [rsp+C8h] [rbp-40h]
  _BYTE v25[144]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v26; // [rsp+160h] [rbp+58h]
  __int64 v27; // [rsp+168h] [rbp+60h]
  __int64 v28; // [rsp+170h] [rbp+68h]
  __int64 v29; // [rsp+178h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v13 = -2LL;
  v14[1] = 0LL;
  v14[2] = v14;
  v14[3] = 0LL;
  LODWORD(v15) = 0;
  v16 = &v20;
  v17 = &v18;
  v18 = 0;
  v19 = 0;
  v23 = 0;
  v20 = 0;
  v21 = "OnInputAppRequestedHideActivity";
  v22 = 0LL;
  v24 = 1LL;
  v26 = 0LL;
  v27 = 0LL;
  memset(v25, 0, sizeof(v25));
  v28 = 0LL;
  v29 = 0LL;
  v14[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v14);
  v11 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v10[0] = 0;
    v5 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedHide(this[12], v11, v12, v10);
    v6 = v5;
    if ( v5 >= 0 )
    {
      if ( v10[0] )
      {
        v5 = TouchKeyboardExperienceManager::OnInputAppRequestedHide(this[7], v11);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 447LL;
          goto LABEL_10;
        }
        v5 = KeyboardHosting::TabTipAdapter::SetTrackPosition((KeyboardHosting::TabTipAdapter *)this, v8, 0);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 451LL;
          goto LABEL_10;
        }
      }
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        (__int64)v14,
        0);
      v6 = 0;
      goto LABEL_12;
    }
    v7 = 444LL;
  }
  else
  {
    v7 = 440LL;
  }
LABEL_10:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
LABEL_12:
  v14[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v14);
  return v6;
}
