/*
 * XREFs of ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180057B78
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_3e6e6990ae6602ba2aad8f5a9254f972__2__1_::Invoke @ 0x180001BA0 (Microsoft--WRL--Details--InvokeHelper_Windows--Foundation--ITypedEventHandler_Windows--Applicati.c)
 *     _lambda_bcae059e430ab0425bfd15752f8ec40b_::operator() @ 0x180002688 (_lambda_bcae059e430ab0425bfd15752f8ec40b_--operator().c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18003CFAC (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x18004B870 (-ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 *     ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180057D40 (-StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180001CB0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ@Z @ 0x180025F94 (-TraceResult@AtmosCheck@@AEAAXJ@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180026130 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?CodecStatusChanged@AtmosCheck@@AEAA_N_N00@Z @ 0x18002620C (-CodecStatusChanged@AtmosCheck@@AEAA_N_N00@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800470F0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllo.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9888ee29221e6d6bd53d80d31d373ecc___ @ 0x18004D44C (Windows--Internal--ComTaskPool--QueueTask__lambda_9888ee29221e6d6bd53d80d31d373ecc___.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AtmosCheck::PerformLicenseCheck(AtmosCheck *this, char a2)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax
  unsigned int v8; // ebx
  DWORD CurrentThreadId; // eax
  APTTYPE v10; // edx
  int v11; // ebx
  AtmosCheck *v12; // rcx
  bool v13; // bl
  struct _RTL_CRITICAL_SECTION *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  void (__fastcall ***v18)(_QWORD, __int64, __int64, __int64); // rcx
  bool v19; // [rsp+30h] [rbp-50h] BYREF
  int v20; // [rsp+34h] [rbp-4Ch] BYREF
  APTTYPE pAptType; // [rsp+38h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-38h]
  __int16 v24; // [rsp+4Ch] [rbp-34h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+54h] [rbp-2Ch] BYREF
  _QWORD v26[5]; // [rsp+58h] [rbp-28h] BYREF
  bool v27; // [rsp+B0h] [rbp+30h] BYREF
  bool v28; // [rsp+B8h] [rbp+38h] BYREF

  pAptType = APTTYPE_MTA;
  v20 = 0;
  v27 = 0;
  v28 = 0;
  v19 = 0;
  if ( !AtmosCheck::IsLicenseEvaluationRequired(this) )
    return 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetCachedFeatureEnabledState(v5, v4, v6);
  LOBYTE(v24) = 0;
  LODWORD(lpCriticalSection) = 0;
  WORD2(lpCriticalSection) = v24;
  v23 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data,
    10011581LL,
    (const struct FEATURE_LOGGED_TRAITS *)&lpCriticalSection);
  CoGetApartmentType(&pAptType, &pAptQualifier);
  v8 = 0;
  v26[0] = this;
  if ( pAptType == APTTYPE_MTA )
    v8 = 4;
  v26[1] = &v27;
  v26[2] = &v28;
  v26[3] = &v19;
  v26[4] = &v20;
  CurrentThreadId = GetCurrentThreadId();
  v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_9888ee29221e6d6bd53d80d31d373ecc___(
          v8,
          v10,
          CurrentThreadId,
          (__int64)v26);
  AtmosCheck::Trace(v12, "Queuetask result", v11);
  if ( v11 >= 0 )
  {
    if ( v20 >= 0 )
    {
      v13 = AtmosCheck::CodecStatusChanged(this, v27, v28, v19);
      Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 32, (__int64)&lpCriticalSection);
      v14 = lpCriticalSection;
      LOBYTE(v15) = v27;
      LOBYTE(v16) = v28;
      LOBYTE(v17) = v19;
      *((_BYTE *)this + 73) = v27;
      *((_BYTE *)this + 74) = v16;
      *((_BYTE *)this + 75) = v17;
      if ( v14 )
      {
        LeaveCriticalSection(v14);
        LOBYTE(v15) = v27;
        LOBYTE(v16) = v28;
        LOBYTE(v17) = v19;
      }
      if ( a2 && v13 )
      {
        v18 = (void (__fastcall ***)(_QWORD, __int64, __int64, __int64))*((_QWORD *)this + 2);
        if ( v18 )
          (**v18)(v18, v15, v16, v17);
      }
    }
    v11 = v20;
  }
  AtmosCheck::TraceResult(this, v11);
  result = (unsigned int)v11;
  *((_DWORD *)this + 28) = 5;
  return result;
}
