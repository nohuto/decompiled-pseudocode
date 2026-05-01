/*
 * XREFs of ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1801A5378
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x1801A2E80 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppChangedEventArgs@45678@@Z @ 0x1801A3550 (-OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Intern.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A50C4 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@SetInputAppAUMIDActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1801A75D8 (-StartActivity@SetInputAppAUMIDActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A82CC (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801A8AD4 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801A8BE4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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

  v11 = -2LL;
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
  v21 = "SetInputAppAUMIDActivity";
  v22 = 0LL;
  v24 = 1LL;
  v26 = 0LL;
  v27 = 0LL;
  memset(v25, 0, sizeof(v25));
  v28 = 0LL;
  v29 = 0LL;
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
    v7 = 919LL;
  }
  else
  {
    v7 = 915LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)Shared);
LABEL_10:
  MsgRelease(*(_QWORD *)v10);
  v14[0] = &TouchKeyboardExperienceTelemetryLogger::SetInputAppAUMIDActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v14);
  return v6;
}
