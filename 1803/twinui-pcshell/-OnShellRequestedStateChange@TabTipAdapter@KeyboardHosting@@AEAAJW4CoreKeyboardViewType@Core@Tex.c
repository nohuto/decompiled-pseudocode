/*
 * XREFs of ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@@Z @ 0x18024BDAC
 * Callers:
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180249038 (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18024B940 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@QEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x1800F3ADC (-GetInputAppState@TouchKeyboardExperienceManager@@QEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802466B0 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ??1OnShellHotKeyActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802477A4 (--1OnShellHotKeyActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180248C98 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NXZ @ 0x180249CB8 (-IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NXZ.c)
 *     ?IsXAMLExperienceDisabled@TabTipAdapter@KeyboardHosting@@AEAA_NXZ @ 0x180249D08 (-IsXAMLExperienceDisabled@TabTipAdapter@KeyboardHosting@@AEAA_NXZ.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x18024D640 (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?StartActivity@OnShellHotKeyActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18024DBC0 (-StartActivity@OnShellHotKeyActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboard.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18024DF14 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@PEAW4ShellRequestType@5Shell@68@@Z @ 0x1802523B0 (-HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18030B910 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int IsReady; // eax
  unsigned int v9; // edi
  bool v11; // dl
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  RTL_SRWLOCK *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r11
  IhmNotification *v20; // rcx
  bool v21; // r8
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v24[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v23[1] = -2LL;
  if ( KeyboardHosting::TabTipAdapter::IsXAMLExperienceDisabled((KeyboardHosting::TabTipAdapter *)a1) )
    return 0LL;
  IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady((RTL_SRWLOCK **)a1, v6, v7);
  v9 = IsReady;
  if ( IsReady < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E1,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)IsReady);
    return v9;
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    (__int64)"OnShellHotKeyActivity");
  v24[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity::StartActivity(v24, a2);
  v22 = 0LL;
  if ( (unsigned int)TouchKeyboardExperienceManager::GetInputAppState(*(_QWORD *)(a1 + 56)) == 1 && *(_BYTE *)(a1 + 296) )
  {
    v12 = *(_QWORD *)(a1 + 96);
    if ( *(_BYTE *)(v12 + 507) || !*(_BYTE *)(v12 + 503) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      v13 = KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(*(_QWORD *)(a1 + 96) + 16LL, a3, &v22, v23);
      v9 = v13;
      if ( v13 < 0 )
      {
        v14 = 1264LL;
        goto LABEL_25;
      }
      KeyboardHosting::TabTipAdapterPolicy::IsHardwareKeyboardAvailable(*(KeyboardHosting::TabTipAdapterPolicy **)(a1 + 96));
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v18 + 400))(v19, v22, a3);
      v9 = v13;
      if ( v13 < 0 )
      {
        v14 = 1273LL;
        goto LABEL_25;
      }
      if ( !a2 )
      {
        LOBYTE(v20) = 1;
        IhmNotification::SendKeyboardSetVisible(v20, 0, v21);
      }
      goto LABEL_34;
    }
    v13 = KeyboardHosting::TabTipAdapter::SetTrackPosition((KeyboardHosting::TabTipAdapter *)a1, v11, 1);
    v9 = v13;
    if ( v13 < 0 )
    {
      v14 = 1286LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v13);
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity::~OnShellHotKeyActivity((TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity *)v24);
      return v9;
    }
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 344));
    v23[0] = a1 + 344;
    if ( *(_BYTE *)(a1 + 316) )
    {
      *(_WORD *)(a1 + 316) = 0;
      *(_DWORD *)(a1 + 320) = 0;
      *(_DWORD *)(a1 + 324) = 6;
    }
    *(_WORD *)(a1 + 316) = 257;
    *(_DWORD *)(a1 + 320) = a3;
    *(_DWORD *)(a1 + 324) = a2;
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 96LL))(*(_QWORD *)(a1 + 88));
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 1302LL;
      goto LABEL_17;
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 88) + 80LL))(
            *(_QWORD *)(a1 + 88),
            500000LL,
            0LL);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 1304LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v15);
      if ( a1 != -344 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 344));
      goto LABEL_26;
    }
    if ( a1 == -344 )
      goto LABEL_34;
    v17 = (RTL_SRWLOCK *)(a1 + 344);
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 336));
    if ( *(_BYTE *)(a1 + 300) )
    {
      *(_WORD *)(a1 + 300) = 0;
      *(_DWORD *)(a1 + 304) = 0;
      *(_DWORD *)(a1 + 308) = 6;
    }
    *(_WORD *)(a1 + 300) = 257;
    *(_DWORD *)(a1 + 304) = a3;
    *(_DWORD *)(a1 + 308) = a2;
    if ( a1 == -336 )
      goto LABEL_34;
    v17 = (RTL_SRWLOCK *)(a1 + 336);
  }
  ReleaseSRWLockExclusive(v17);
LABEL_34:
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity::~OnShellHotKeyActivity((TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity *)v24);
  return 0LL;
}
