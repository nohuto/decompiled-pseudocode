/*
 * XREFs of ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJI@Z @ 0x18024BAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@QEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x1800F3ADC (-GetInputAppState@TouchKeyboardExperienceManager@@QEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18023B800 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180241D84 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ??1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802477F4 (--1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180248C98 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x18024D640 (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18024DD6C (-StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@PEAW4ShellRequestType@5Shell@68@@Z @ 0x1802523B0 (-HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellRequestedShow(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // esi
  int IsReady; // edi
  __int64 v6; // rdx
  bool v8; // dl
  __int64 v9; // rax
  RTL_SRWLOCK *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  int v17[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v19[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v4 = a2;
  IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady((RTL_SRWLOCK **)this - 1, a2, a3);
  if ( IsReady < 0 )
  {
    v6 = 979LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)IsReady);
    return (unsigned int)IsReady;
  }
  if ( (unsigned int)TouchKeyboardExperienceManager::GetInputAppState(*((_QWORD *)this + 6)) != 1
    || !*((_BYTE *)this + 288) )
  {
    v10 = (RTL_SRWLOCK *)((char *)this + 328);
    AcquireSRWLockExclusive((PSRWLOCK)this + 41);
    if ( *((_BYTE *)this + 292) )
    {
      *((_WORD *)this + 146) = 0;
      *((_DWORD *)this + 74) = 0;
      *((_DWORD *)this + 75) = 6;
    }
    *((_BYTE *)this + 292) = 1;
    *((_DWORD *)this + 74) = v4;
LABEL_31:
    if ( v10 )
      ReleaseSRWLockExclusive(v10);
    return 0LL;
  }
  v9 = *((_QWORD *)this + 11);
  if ( *(_BYTE *)(v9 + 507) || !*(_BYTE *)(v9 + 503) )
  {
    *(_QWORD *)v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
    v15 = KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(*((_QWORD *)this + 11) + 16LL, v4, v17, &v18);
    IsReady = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3DD,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v15);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
      return (unsigned int)IsReady;
    }
    if ( v18 == 1 )
    {
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v19,
        (__int64)"OnShellRequestedShowActivity");
      v19[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::`vftable';
      TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v19);
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 384LL))(
              *((_QWORD *)this + 2),
              *(_QWORD *)v17,
              v4);
      IsReady = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E3,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v16);
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v19);
        goto LABEL_25;
      }
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        (__int64)v19,
        0);
      TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v19);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
    return 0LL;
  }
  IsReady = KeyboardHosting::TabTipAdapter::SetTrackPosition(
              (KeyboardHosting::TabTipAdapter *)((char *)this - 8),
              v8,
              1);
  if ( IsReady < 0 )
  {
    v6 = 1003LL;
    goto LABEL_3;
  }
  v10 = (RTL_SRWLOCK *)((char *)this + 336);
  AcquireSRWLockExclusive((PSRWLOCK)this + 42);
  if ( *((_BYTE *)this + 308) )
  {
    *((_WORD *)this + 154) = 0;
    *((_DWORD *)this + 78) = 0;
    *((_DWORD *)this + 79) = 6;
  }
  v11 = *((_QWORD *)this + 10);
  *((_BYTE *)this + 308) = 1;
  *((_DWORD *)this + 78) = v4;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 10) + 80LL))(
            *((_QWORD *)this + 10),
            500000LL,
            0LL);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 1018LL;
      goto LABEL_17;
    }
    goto LABEL_31;
  }
  v14 = 1016LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v12);
  if ( this != (KeyboardHosting::TabTipAdapter *)-336LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 42);
  return v13;
}
