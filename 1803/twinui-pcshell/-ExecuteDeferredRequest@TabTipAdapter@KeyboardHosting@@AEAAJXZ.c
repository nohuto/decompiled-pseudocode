/*
 * XREFs of ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180248DD0
 * Callers:
 *     ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x18024A660 (-OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core.c)
 *     ?TimerDeferredShowRequestCallback@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z @ 0x18024FCB0 (-TimerDeferredShowRequestCallback@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18023B800 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180241D84 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ??1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802477F4 (--1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NXZ @ 0x180249CB8 (-IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NXZ.c)
 *     ?StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18024DD6C (-StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@PEAW4ShellRequestType@5Shell@68@@Z @ 0x1802523B0 (-HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest(KeyboardHosting::TabTipAdapter *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r11
  int v8; // eax
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v12[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v11[1] = -2LL;
  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 96LL))(*((_QWORD *)this + 11));
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E1,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_17;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 43);
  v11[2] = (char *)this + 344;
  if ( *((_BYTE *)this + 316) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v4 = KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(
           *((_QWORD *)this + 12) + 16LL,
           *((unsigned int *)this + 80),
           &v10,
           v11);
    v3 = v4;
    if ( v4 < 0 )
    {
      v5 = 742LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_15;
    }
    if ( LODWORD(v11[0]) == 1 )
    {
      if ( *((_BYTE *)this + 317) )
      {
        KeyboardHosting::TabTipAdapterPolicy::IsHardwareKeyboardAvailable(*((KeyboardHosting::TabTipAdapterPolicy **)this
                                                                          + 12));
        v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v6 + 400))(v7, v10, *((unsigned int *)this + 80));
        v3 = v4;
        if ( v4 < 0 )
        {
          v5 = 755LL;
          goto LABEL_10;
        }
      }
      else
      {
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v12,
          (__int64)"OnShellRequestedShowActivity");
        v12[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::`vftable';
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v12);
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 384LL))(
               *((_QWORD *)this + 3),
               v10,
               *((unsigned int *)this + 80));
        v3 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2F8,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)v8);
          TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v12);
          goto LABEL_15;
        }
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v12,
          0);
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v12);
      }
    }
  }
  *((_WORD *)this + 158) = 0;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = 6;
  v3 = 0;
LABEL_15:
  if ( this != (KeyboardHosting::TabTipAdapter *)-344LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 43);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v3;
}
