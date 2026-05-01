/*
 * XREFs of ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x1800C95E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007759C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z @ 0x1800C99DC (-UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RealtimeEnticement@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800C9E78 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RealtimeEnticement@@@wil@@CA.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::SubscribeToWNF(
        TwinUI::Cortana::CCortanaWNFService *this,
        __int64 (__fastcall ***a2)(struct TwinUI::Cortana::ICortanaWNFNotification *, GUID *, __int64 *),
        bool a3)
{
  __int64 v6; // rcx
  __int64 (__fastcall **v7)(struct TwinUI::Cortana::ICortanaWNFNotification *, GUID *, __int64 *); // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int16 v19; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v21; // [rsp+70h] [rbp+20h] BYREF
  __int64 v22; // [rsp+78h] [rbp+28h] BYREF

  (*(void (__fastcall **)(TwinUI::Cortana::CCortanaWNFService *))(*(_QWORD *)this + 8LL))(this);
  v6 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *a2;
  v21 = 0LL;
  v8 = (*v7)(
         (struct TwinUI::Cortana::ICortanaWNFNotification *)a2,
         &_uuidof__AUIWeakReferenceSource_Details_Platform__,
         &v21);
  v9 = v21;
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_4;
  v22 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, &v22);
  if ( v10 < 0 )
  {
    v11 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v9 = v21;
LABEL_4:
    if ( v9 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_19;
  }
  v12 = v22;
  v13 = v22;
  if ( v22 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v12 = v22;
  }
  v14 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v13;
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v12 = v22;
  }
  if ( v12 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v15 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v10 = 0;
LABEL_19:
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v17 = RtlSubscribeWnfStateChangeNotification(
          (char *)this + 8,
          WNF_TMCN_ISTABLETMODE,
          0LL,
          TwinUI::Cortana::CCortanaWNFService::ShellModeWNFCallback,
          this,
          0LL,
          0,
          1);
  if ( v17 < 0 )
  {
    v18 = 28LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v18,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
             (const char *)(unsigned int)v17);
  }
  if ( !a3 )
  {
    v17 = RtlSubscribeWnfStateChangeNotification(
            (char *)this + 16,
            WNF_SHEL_LOGON_COMPLETE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::ShellReadyWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v17 < 0 )
    {
      v18 = 42LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v18,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v17);
    }
    v17 = RtlSubscribeWnfStateChangeNotification(
            (char *)this + 24,
            WNF_SHEL_LOCKSCREEN_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::LockScreenActiveWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v17 < 0 )
    {
      v18 = 53LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v18,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v17);
    }
    v17 = RtlSubscribeWnfStateChangeNotification(
            (char *)this + 32,
            WNF_SHEL_ABOVE_LOCK_APP_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::AboveLockAppActiveWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v17 < 0 )
    {
      v18 = 64LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v18,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v17);
    }
    v17 = RtlSubscribeWnfStateChangeNotification(
            (char *)this + 40,
            WNF_SHEL_ABOVE_LOCK_BIO_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::WindowsHelloActiveWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v17 < 0 )
    {
      v18 = 75LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v18,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v17);
    }
    if ( (`wil::Feature<__WilFeatureTraits_Feature_RealtimeEnticement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_RealtimeEnticement>::GetCachedFeatureEnabledState();
    LOBYTE(v19) = 0;
    LODWORD(v21) = 0;
    WORD2(v21) = v19;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_RealtimeEnticement>::GetFeaturePropertyCache'::`2'::data,
      0x9853BDu,
      (const struct FEATURE_LOGGED_TRAITS *)&v21,
      0,
      3);
  }
  TwinUI::Cortana::CCortanaWNFService::UpdateFromCurrentWNFState(this, a3);
  return 0LL;
}
