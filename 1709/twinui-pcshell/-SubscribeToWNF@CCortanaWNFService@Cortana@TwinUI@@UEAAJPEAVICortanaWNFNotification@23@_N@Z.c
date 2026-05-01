/*
 * XREFs of ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x1800DC170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004AC8 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007A1EC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1800A00C8 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z @ 0x1800DC64C (-UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RealtimeEnticement@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800DCB38 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RealtimeEnticement@@@wil@@CA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::SubscribeToWNF(
        struct DiagnosticsInfo *this,
        __int64 (__fastcall ***a2)(struct TwinUI::Cortana::ICortanaWNFNotification *, GUID *, __int64 *),
        bool a3)
{
  struct DiagnosticsInfo v6; // rcx
  __int64 (__fastcall **v7)(struct TwinUI::Cortana::ICortanaWNFNotification *, GUID *, __int64 *); // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // esi
  struct DiagnosticsInfo v11; // rcx
  struct DiagnosticsInfo v12; // rdx
  struct DiagnosticsInfo v13; // rbx
  struct DiagnosticsInfo v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v18; // eax
  __int64 v19; // rdx
  wil::details_abi *v20; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v22; // r14
  int v23; // eax
  struct DiagnosticsInfo v24; // [rsp+40h] [rbp-40h] BYREF
  int v25[2]; // [rsp+48h] [rbp-38h] BYREF
  int v26; // [rsp+50h] [rbp-30h]
  int v27; // [rsp+54h] [rbp-2Ch]
  unsigned int v28[2]; // [rsp+58h] [rbp-28h] BYREF
  const char *v29; // [rsp+60h] [rbp-20h]
  __int64 v30; // [rsp+68h] [rbp-18h]
  __int16 v31; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int16 v33; // [rsp+C4h] [rbp+44h]
  int v34; // [rsp+C8h] [rbp+48h] BYREF
  __int16 v35; // [rsp+CCh] [rbp+4Ch]
  __int64 v36; // [rsp+D8h] [rbp+58h] BYREF

  (*(void (__fastcall **)(struct DiagnosticsInfo *))(*(_QWORD *)this + 8LL))(this);
  v6 = this[7];
  this[7] = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(struct DiagnosticsInfo))(**(_QWORD **)&v6 + 16LL))(v6);
  v7 = *a2;
  v36 = 0LL;
  v8 = (*v7)(
         (struct TwinUI::Cortana::ICortanaWNFNotification *)a2,
         &_uuidof__AUIWeakReferenceSource_Details_Platform__,
         &v36);
  v9 = v36;
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_4;
  v24 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, struct DiagnosticsInfo *))(*(_QWORD *)v36 + 24LL))(v36, &v24);
  if ( v10 < 0 )
  {
    v11 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(struct DiagnosticsInfo))(**(_QWORD **)&v11 + 16LL))(v11);
    }
    v9 = v36;
LABEL_4:
    if ( v9 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_19;
  }
  v12 = v24;
  v13 = v24;
  if ( v24 )
  {
    (*(void (__fastcall **)(struct DiagnosticsInfo))(**(_QWORD **)&v24 + 8LL))(v24);
    v12 = v24;
  }
  v14 = this[7];
  this[7] = v13;
  if ( v14 )
  {
    (*(void (__fastcall **)(struct DiagnosticsInfo))(**(_QWORD **)&v14 + 16LL))(v14);
    v12 = v24;
  }
  if ( v12 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct DiagnosticsInfo))(**(_QWORD **)&v12 + 16LL))(v12);
  }
  v15 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v10 = 0;
LABEL_19:
  if ( v10 < 0 )
  {
    v16 = 17LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v18 = RtlSubscribeWnfStateChangeNotification(
          &this[1],
          WNF_TMCN_ISTABLETMODE,
          0LL,
          TwinUI::Cortana::CCortanaWNFService::ShellModeWNFCallback,
          this,
          0LL,
          0,
          1);
  if ( v18 < 0 )
  {
    v19 = 28LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v19,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
             (const char *)(unsigned int)v18);
  }
  if ( !a3 )
  {
    v18 = RtlSubscribeWnfStateChangeNotification(
            &this[2],
            WNF_SHEL_LOGON_COMPLETE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::ShellReadyWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v18 < 0 )
    {
      v19 = 42LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v19,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v18);
    }
    v18 = RtlSubscribeWnfStateChangeNotification(
            &this[3],
            WNF_SHEL_LOCKSCREEN_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::LockScreenActiveWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v18 < 0 )
    {
      v19 = 53LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v19,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v18);
    }
    v18 = RtlSubscribeWnfStateChangeNotification(
            &this[4],
            WNF_SHEL_ABOVE_LOCK_APP_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::AboveLockAppActiveWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v18 < 0 )
    {
      v19 = 64LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v19,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v18);
    }
    v18 = RtlSubscribeWnfStateChangeNotification(
            &this[5],
            WNF_SHEL_ABOVE_LOCK_BIO_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::WindowsHelloActiveWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v18 < 0 )
    {
      v19 = 75LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v19,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v18);
    }
    *(_QWORD *)v28 = retaddr;
    v29 = "pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp";
    v31 = 91;
    v30 = 0LL;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_RealtimeEnticement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_RealtimeEnticement>::GetCachedFeatureEnabledState();
    LOBYTE(v33) = 3;
    v34 = 0;
    v35 = v33;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_RealtimeEnticement>::GetFeaturePropertyCache'::`2'::data,
      0x9853BDu,
      (const struct FEATURE_LOGGED_TRAITS *)&v34,
      1,
      3);
    LOBYTE(v20) = 1;
    ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v20);
    *(_QWORD *)v25 = ThreadLocalDataCache;
    v22 = ThreadLocalDataCache;
    if ( ThreadLocalDataCache )
    {
      v27 = *((_DWORD *)ThreadLocalDataCache + 4);
      v22 = *(struct wil::details_abi::ThreadLocalData **)v25;
      v26 = **((_DWORD **)ThreadLocalDataCache + 1);
      *((_DWORD *)ThreadLocalDataCache + 4) = v26;
    }
    v23 = RtlSubscribeWnfStateChangeNotification(
            &this[6],
            WNF_SHEL_APPLICATION_STARTED,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::ShellAppLaunchWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v23 >= 0 )
      v10 = 0;
    else
      v10 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x5B,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
              (const char *)(unsigned int)v23);
    if ( v10 < 0 )
      wil::details::ReportFeatureError(
        (wil::details *)(unsigned int)v10,
        (__int64)v25,
        (struct wil::ThreadErrorContext *)0x9853BD,
        (__int64)v28);
    if ( v22 )
      *((_DWORD *)v22 + 4) = v27;
    if ( v10 < 0 )
    {
      v16 = 91LL;
      goto LABEL_21;
    }
  }
  TwinUI::Cortana::CCortanaWNFService::UpdateFromCurrentWNFState((TwinUI::Cortana::CCortanaWNFService *)this, a3);
  return 0LL;
}
