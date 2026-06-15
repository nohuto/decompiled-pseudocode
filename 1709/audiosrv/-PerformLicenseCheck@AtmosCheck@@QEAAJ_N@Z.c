/*
 * XREFs of ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180004CD0
 * Callers:
 *     ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180001460 (-StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64___::_)(Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_bcae059e430ab0425bfd15752f8ec40b___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64_::Invoke @ 0x180001480 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64___::_)(Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_3e6e6990ae6602ba2aad8f5a9254f972___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64_::Invoke @ 0x180001580 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180001580.c)
 *     ?ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800896C0 (-ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x1800E3C7C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180001B70 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x1800020F0 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180005E94 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180005EC0 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180005EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___::Run @ 0x180005F80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___--Run.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180005FB0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180059EF0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800CE678 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllo.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800E5D58 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 */

__int64 __fastcall AtmosCheck::PerformLicenseCheck(AtmosCheck *this, char a2)
{
  int v2; // esi
  int v3; // r14d
  char v5; // r15
  signed __int32 v6; // ebx
  struct wil_details_RecordUsageResult *v7; // r9
  int v8; // eax
  unsigned int v9; // r12d
  DWORD CurrentThreadId; // eax
  DWORD v11; // r13d
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  CAudioDGProcess *v14; // rcx
  int *v15; // xmm1_8
  __int64 (__fastcall *v16)(); // rax
  void (__fastcall *v17)(_DWORD *); // rax
  struct _RTL_CRITICAL_SECTION *v18; // rcx
  __int64 v19; // r9
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  void (__fastcall ***v23)(_QWORD, _QWORD, _QWORD, __int64); // rcx
  __int64 v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h]
  signed __int32 v27; // [rsp+54h] [rbp-ACh] BYREF
  int v28; // [rsp+58h] [rbp-A8h] BYREF
  signed __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-98h]
  int v31; // [rsp+70h] [rbp-90h]
  __int16 v32; // [rsp+74h] [rbp-8Ch]
  APTTYPE pAptType; // [rsp+78h] [rbp-88h] BYREF
  int v34; // [rsp+80h] [rbp-80h] BYREF
  int v35; // [rsp+88h] [rbp-78h] BYREF
  int v36; // [rsp+90h] [rbp-70h] BYREF
  __int16 v37; // [rsp+94h] [rbp-6Ch]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+98h] [rbp-68h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-60h] BYREF
  int v40; // [rsp+B0h] [rbp-50h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-40h] BYREF
  LPCRITICAL_SECTION v43; // [rsp+C8h] [rbp-38h] BYREF
  __int128 *v44; // [rsp+D0h] [rbp-30h] BYREF
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  _DWORD v47[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int128 v49; // [rsp+F0h] [rbp-10h]
  int *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  _QWORD v52[2]; // [rsp+110h] [rbp+10h] BYREF
  int v53; // [rsp+120h] [rbp+20h]
  __int128 v54; // [rsp+128h] [rbp+28h] BYREF
  int v55; // [rsp+138h] [rbp+38h]
  void *v56; // [rsp+140h] [rbp+40h] BYREF
  int v57; // [rsp+148h] [rbp+48h]
  int v58; // [rsp+14Ch] [rbp+4Ch]
  void *v59; // [rsp+150h] [rbp+50h]
  int v60; // [rsp+158h] [rbp+58h]
  int v61; // [rsp+15Ch] [rbp+5Ch]
  const CHAR *v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+190h] [rbp+90h] BYREF
  int *v66; // [rsp+1A0h] [rbp+A0h]
  __int64 v67; // [rsp+1A8h] [rbp+A8h]

  v2 = 0;
  v3 = 1;
  v28 = 0;
  pAptType = APTTYPE_MTA;
  v29 = 0x8007049080070490uLL;
  v5 = 0;
  v30 = -2147023728;
  if ( AtmosCheck::IsLicenseEvaluationRequired(this) )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetCachedFeatureEnabledState();
    LOBYTE(v32) = 0;
    v36 = 0;
    v37 = v32;
    v39 = 0uLL;
    v40 = 0;
    v44 = &v39;
    v27 = 0x20000;
    v45 = 0x20000;
    v46 = 0;
    v31 = 0;
    v34 = 3;
    do
    {
      v27 = `wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data;
      v6 = `wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data;
      if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v27, &v44) )
      {
        v8 = 1;
        goto LABEL_7;
      }
    }
    while ( v6 != _InterlockedCompareExchange(
                    (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data,
                    v27,
                    v6) );
    v8 = 0;
LABEL_7:
    v40 = v8;
    v55 = v8;
    v54 = v39;
    if ( g_wil_details_recordFeatureUsage )
    {
      if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
        wil::details::RecordFeatureUsageCallback(
          (wil::details *)0x98C3BD,
          (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data,
          (union wil_details_FeaturePropertyCache *)&v54,
          v7);
      else
        g_wil_details_recordFeatureUsage(
          0x98C3BDu,
          (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data,
          (struct wil_details_RecordUsageResult *)&v54);
      if ( (`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
      {
        v52[0] = 0LL;
        v53 = 0;
        v52[1] = 6LL;
        ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10011581LL, 0LL, v52);
      }
    }
    if ( !v55 && g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x98C3BDu,
        (const struct FEATURE_LOGGED_TRAITS *)&v36,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v34,
        0LL,
        0,
        1uLL);
    CoGetApartmentType(&pAptType, &pAptQualifier);
    v9 = 0;
    *(_QWORD *)&v49 = this;
    if ( pAptType == APTTYPE_MTA )
      v9 = 4;
    *((_QWORD *)&v49 + 1) = &v29;
    v50 = &v28;
    CurrentThreadId = GetCurrentThreadId();
    v51 = 0LL;
    v11 = CurrentThreadId;
    v12 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      v14 = Microsoft::WRL::Details::ModuleBase::module_;
      *(_QWORD *)v12 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformationCollection *>::`vftable';
      *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      v12[3] = 1;
      if ( v14 )
        (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v14 + 8LL))(v14);
      v15 = v50;
      *(_QWORD *)v13 = off_1800F2000;
      *((_OWORD *)v13 + 1) = v49;
      *((_QWORD *)v13 + 4) = v15;
      if ( v9 == 4 )
      {
        v16 = off_1800F2000[3];
        if ( (char *)v16 == (char *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___::Run )
          Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___::Run(v13);
        else
          ((void (__fastcall *)(_DWORD *))v16)(v13);
      }
      else
      {
        v42 = 0LL;
        v2 = Windows::Internal::ComTaskPool::s_QueuePoolTask(v9, 32LL, v11, v13);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v42);
      }
      v17 = *(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL);
      if ( (char *)v17 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v13);
      else
        v17(v13);
    }
    else
    {
      v2 = -2147024882;
    }
    v35 = v2;
    if ( v2 )
    {
      if ( (unsigned int)dword_18014A470 > 2 )
      {
        TlgCreateSz(&pDesc, "Queuetask result");
        v67 = 4LL;
        v66 = &v35;
        TlgWrite((TraceLoggingHProvider)&dword_18014A470, &unk_180112861, v21, v22, 4u, &pData);
      }
      if ( v2 < 0 )
        goto LABEL_40;
    }
    else if ( (unsigned int)dword_18014A470 > 5 )
    {
      v63 = 17LL;
      v62 = "Queuetask result";
      v47[1] = 5;
      v56 = off_18014A478;
      v47[0] = ((unsigned int)&unk_180112891 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v48 = 0LL;
      v57 = *(unsigned __int16 *)off_18014A478;
      v59 = &unk_18011289C;
      v58 = 2;
      v60 = 23;
      v61 = 1;
      EtwEventWriteTransfer(qword_18014A490, v47, 0LL, 0LL, 3, &v56, v24, v25);
    }
    if ( v28 >= 0 )
    {
      Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 32, &lpCriticalSection);
      if ( (int)v29 >= 0 != *((_DWORD *)this + 19) >= 0 || v29 >= 0 != *((_DWORD *)this + 20) >= 0 )
        goto LABEL_55;
      if ( *((int *)this + 21) < 0 )
        v3 = 0;
      if ( ((v30 & 0x80000000) == 0) == v3 )
      {
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        v5 = 0;
      }
      else
      {
LABEL_55:
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&lpCriticalSection);
        v5 = 1;
      }
      Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 32, &v43);
      v18 = v43;
      v19 = v30;
      *(_QWORD *)((char *)this + 76) = v29;
      *((_DWORD *)this + 21) = v19;
      if ( v18 )
      {
        LeaveCriticalSection(v18);
        v19 = v30;
      }
      if ( a2 && v5 )
      {
        v23 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD, __int64))*((_QWORD *)this + 2);
        if ( v23 )
          (**v23)(v23, (unsigned int)v29, HIDWORD(v29), v19);
      }
    }
    v2 = v28;
LABEL_40:
    *((_DWORD *)this + 30) = 5;
    AtmosCheck::TraceResult(this, v2, v5);
    return (unsigned int)v2;
  }
  return 0LL;
}
