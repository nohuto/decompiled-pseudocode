/*
 * XREFs of ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJI@Z @ 0x1801A4AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@QEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x180199D34 (-GetInputAppState@TouchKeyboardExperienceManager@@QEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A0734 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801A11DC (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801A13E8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x1801A432C (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A50C4 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1801A7B18 (-StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x1801AB2A0 (-HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU-$IVectorView@UCoreKe.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellRequestedShow(KeyboardHosting::TabTipAdapter *this, int a2)
{
  int IsReady; // eax
  unsigned int v4; // edi
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v17; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+50h] [rbp-B0h]
  int *v20; // [rsp+58h] [rbp-A8h]
  int *v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+68h] [rbp-98h] BYREF
  char v23; // [rsp+6Ch] [rbp-94h]
  int v24; // [rsp+90h] [rbp-70h] BYREF
  const char *v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  char v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  _BYTE v29[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+148h] [rbp+48h]
  __int64 v31; // [rsp+150h] [rbp+50h]
  __int64 v32; // [rsp+158h] [rbp+58h]
  __int64 v33; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  *((_DWORD *)this + 66) = a2;
  IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady((KeyboardHosting::TabTipAdapter *)((char *)this - 8));
  v4 = IsReady;
  if ( IsReady < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2F2,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)IsReady);
    return v4;
  }
  if ( (unsigned int)TouchKeyboardExperienceManager::GetInputAppState(*((_QWORD *)this + 6)) != 1 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 34);
    if ( *((_BYTE *)this + 240) )
    {
      *((_WORD *)this + 120) = 0;
      *(_QWORD *)((char *)this + 244) = 0LL;
    }
    *((_DWORD *)this + 61) = *((_DWORD *)this + 66);
    *((_BYTE *)this + 240) = 1;
    if ( this != (KeyboardHosting::TabTipAdapter *)-272LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 34);
    return 0LL;
  }
  v18[1] = 0LL;
  v18[2] = v18;
  v18[3] = 0LL;
  v20 = &v24;
  v19 = 0;
  v21 = &v22;
  v22 = 0;
  v25 = "OnShellRequestedShowActivity";
  v23 = 0;
  v27 = 0;
  v24 = 0;
  v26 = 0LL;
  v28 = 1LL;
  v30 = 0LL;
  v31 = 0LL;
  memset(v29, 0, sizeof(v29));
  v32 = 0LL;
  v18[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::`vftable';
  v33 = 0LL;
  TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v18);
  if ( !*((_BYTE *)this + 202) && *((_BYTE *)this + 201) )
  {
    v7 = KeyboardHosting::TabTipAdapter::SetTrackPosition((KeyboardHosting::TabTipAdapter *)((char *)this - 8), v6, 1);
    v4 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x309,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v7);
LABEL_26:
      v18[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::`vftable';
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
      return v4;
    }
    AcquireSRWLockExclusive((PSRWLOCK)this + 35);
    if ( *((_BYTE *)this + 252) )
    {
      *((_WORD *)this + 126) = 0;
      *((_QWORD *)this + 32) = 0LL;
    }
    v8 = *((_QWORD *)this + 10);
    *((_DWORD *)this + 64) = *((_DWORD *)this + 66);
    *((_BYTE *)this + 252) = 1;
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 790LL;
      goto LABEL_15;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 10) + 80LL))(
           *((_QWORD *)this + 10),
           500000LL,
           0LL);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 792LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v9);
      if ( this != (KeyboardHosting::TabTipAdapter *)-280LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 35);
      goto LABEL_26;
    }
    if ( this != (KeyboardHosting::TabTipAdapter *)-280LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 35);
    goto LABEL_29;
  }
  v11 = *((_QWORD *)this + 11) + 16LL;
  *(_QWORD *)v16 = 0LL;
  v12 = KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(v11, v16, &v17);
  v4 = v12;
  if ( v12 < 0 )
  {
    v13 = 765LL;
    goto LABEL_24;
  }
  if ( v17 == 1 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 336LL))(
            *((_QWORD *)this + 2),
            *(_QWORD *)v16,
            *((unsigned int *)this + 66));
    v4 = v12;
    if ( v12 < 0 )
    {
      v13 = 770LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v12);
      v14 = *(_QWORD *)v16;
      if ( *(_QWORD *)v16 )
      {
        *(_QWORD *)v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      goto LABEL_26;
    }
  }
  v15 = *(_QWORD *)v16;
  if ( *(_QWORD *)v16 )
  {
    *(_QWORD *)v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_29:
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v18,
    0);
  v18[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
  return 0LL;
}
