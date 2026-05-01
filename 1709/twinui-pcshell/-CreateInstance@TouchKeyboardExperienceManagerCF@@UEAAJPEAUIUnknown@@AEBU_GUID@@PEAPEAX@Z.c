/*
 * XREFs of ?CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18019DBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800245AC (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x180198A90 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18019E2B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18019E2B0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18019E370 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18019E370.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManagerCF::CreateInstance(
        TouchKeyboardExperienceManagerCF *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  TouchKeyboardExperienceManager *v7; // rax
  int v8; // ebx
  TouchKeyboardExperienceManager *v9; // rdi
  int v10; // eax
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  int Interface; // eax
  TouchKeyboardExperienceManager *v14; // [rsp+20h] [rbp-60h]
  GUID v15; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  *a4 = 0LL;
  if ( a2 )
    return 2147746064LL;
  v14 = 0LL;
  v7 = (TouchKeyboardExperienceManager *)operator new(0x288uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v9 = TouchKeyboardExperienceManager::TouchKeyboardExperienceManager(v7);
    v15 = GUID_9516d866_ca0f_40ca_8997_efa618b50f99;
    v16 = 0LL;
    v17 = 0LL;
    v10 = CImmersiveShellComponent::RegisterServiceInformation(
            (TouchKeyboardExperienceManager *)((char *)v9 + 48),
            (__int64)&v15,
            1uLL);
    v8 = v10;
    if ( v10 >= 0 )
      v8 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x82,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    if ( v8 >= 0 )
    {
      if ( v9 )
      {
        v11 = *((_QWORD *)v9 + 26);
        while ( v11 >= 0 )
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 26, v11 + 1, v11);
          if ( v12 == v11 )
            goto LABEL_17;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
      }
LABEL_17:
      v14 = v9;
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::Release(v9);
      v8 = 0;
    }
    else if ( v9 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::Release(v9);
    }
    if ( v8 >= 0 )
    {
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::QueryInterface(
                    v14,
                    a3,
                    a4);
      v8 = Interface;
      if ( Interface < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5AF,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)Interface);
      goto LABEL_24;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x5AE,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_24:
  if ( v14 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::Release(v14);
  return (unsigned int)v8;
}
