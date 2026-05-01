/*
 * XREFs of ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18024D448
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x1800608A0 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18023F1D0 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180248C98 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppChangedEventArgs@45678@@Z @ 0x18024AD40 (-OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Intern.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802466B0 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ??1SetInputAppAUMIDActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18024781C (--1SetInputAppAUMIDActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@SetInputAppAUMIDActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18024DE38 (-StartActivity@SetInputAppAUMIDActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18024DF14 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::SetInputAppAUMID(
        KeyboardHosting::TabTipAdapter *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rdx
  int Shared; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+30h] [rbp-D8h]
  int *v12; // [rsp+38h] [rbp-D0h]
  __int64 v13; // [rsp+40h] [rbp-C8h]
  _QWORD v14[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v11 = -2LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v14,
    (__int64)"SetInputAppAUMIDActivity");
  v14[0] = &TouchKeyboardExperienceTelemetryLogger::SetInputAppAUMIDActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::SetInputAppAUMIDActivity::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::SetInputAppAUMIDActivity *)v14,
    a2);
  *(_QWORD *)v10 = 0LL;
  v12 = v10;
  LOBYTE(v13) = 1;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  Shared = MsgStringCreateShared(a2, v4, v10);
  v6 = Shared;
  if ( Shared >= 0 )
  {
    v8 = *((_QWORD *)this + 5);
    if ( !v8
      || (Shared = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, *(_QWORD *)v10),
          v6 = Shared,
          Shared >= 0) )
    {
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v14);
      v6 = 0;
      goto LABEL_10;
    }
    v7 = 1171LL;
  }
  else
  {
    v7 = 1167LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)Shared);
LABEL_10:
  MsgRelease(*(_QWORD *)v10);
  TouchKeyboardExperienceTelemetryLogger::SetInputAppAUMIDActivity::~SetInputAppAUMIDActivity((TouchKeyboardExperienceTelemetryLogger::SetInputAppAUMIDActivity *)v14);
  return v6;
}
