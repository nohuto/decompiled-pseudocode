/*
 * XREFs of ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x180188AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18008A018 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18009CBFC (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800F5DFC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18013C4E8 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x180188350 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RealtimeEnticement@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180188820 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RealtimeEnticement@@@wil@@CAX_NW4Rep.c)
 *     ?UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z @ 0x180188E28 (-UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::SubscribeToWNF(
        TwinUI::Cortana::CCortanaWNFService *this,
        struct TwinUI::Cortana::ICortanaWNFNotification *a2,
        bool a3)
{
  __int64 *v6; // rax
  int v7; // esi
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  int v16[2]; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+4Ch] [rbp-24h]
  unsigned int v18[2]; // [rsp+50h] [rbp-20h] BYREF
  const char *v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  __int16 v21; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 *v23; // [rsp+A0h] [rbp+30h] BYREF

  (*(void (__fastcall **)(TwinUI::Cortana::CCortanaWNFService *))(*(_QWORD *)this + 8LL))(this);
  v23 = (__int64 *)((char *)this + 56);
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v23);
  v7 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2, v6);
  if ( v7 < 0 )
  {
    v8 = 17LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = RtlSubscribeWnfStateChangeNotification(
          (char *)this + 8,
          WNF_TMCN_ISTABLETMODE,
          0LL,
          TwinUI::Cortana::CCortanaWNFService::ShellModeWNFCallback,
          this,
          0LL,
          0,
          1);
  if ( v10 < 0 )
  {
    v11 = 28LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v11,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
             (const char *)(unsigned int)v10);
  }
  if ( !a3 )
  {
    v10 = RtlSubscribeWnfStateChangeNotification(
            (char *)this + 16,
            WNF_SHEL_LOGON_COMPLETE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::ShellReadyWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v10 < 0 )
    {
      v11 = 42LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    v10 = RtlSubscribeWnfStateChangeNotification(
            (char *)this + 24,
            WNF_SHEL_LOCKSCREEN_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::LockScreenActiveWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v10 < 0 )
    {
      v11 = 53LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    v10 = RtlSubscribeWnfStateChangeNotification(
            (char *)this + 32,
            WNF_SHEL_ABOVE_LOCK_APP_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::AboveLockAppActiveWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v10 < 0 )
    {
      v11 = 64LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    v10 = RtlSubscribeWnfStateChangeNotification(
            (char *)this + 40,
            WNF_SHEL_ABOVE_LOCK_BIO_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::WindowsHelloActiveWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v10 < 0 )
    {
      v11 = 75LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    *(_QWORD *)v18 = retaddr;
    v19 = "pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp";
    v21 = 91;
    v20 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_RealtimeEnticement>::ReportUsageToService(v13, v12, v14);
    wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v16);
    v15 = RtlSubscribeWnfStateChangeNotification(
            (char *)this + 48,
            WNF_SHEL_APPLICATION_STARTED,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::ShellAppLaunchWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v15 >= 0 )
      v7 = 0;
    else
      v7 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x5B,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
             (const char *)(unsigned int)v15);
    if ( v7 < 0 )
      wil::details::ReportFeatureError(
        (wil::details *)(unsigned int)v7,
        (__int64)v16,
        (struct wil::ThreadErrorContext *)0x9853BD,
        (__int64)v18);
    if ( *(_QWORD *)v16 )
      *(_DWORD *)(*(_QWORD *)v16 + 16LL) = v17;
    if ( v7 < 0 )
    {
      v8 = 91LL;
      goto LABEL_3;
    }
  }
  TwinUI::Cortana::CCortanaWNFService::UpdateFromCurrentWNFState(this, a3);
  return 0LL;
}
