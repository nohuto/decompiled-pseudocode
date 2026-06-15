/*
 * XREFs of ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180029798
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64___::_)(Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_f6dae7814606855f79762b97c09932ee___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64_::Invoke @ 0x180005470 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 *     ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180006300 (-StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18004F5D4 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x180065430 (-StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z.c)
 *     ?ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800BF580 (-ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 *     _lambda_542017e309ca4d856a782ab8a5c25dd9_::operator() @ 0x18010F5A0 (_lambda_542017e309ca4d856a782ab8a5c25dd9_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180015430 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageInstallingEventArgs@23@@Foundation@Windows@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180015494 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHandler@P.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___::Run @ 0x1800154F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___--Run.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180015924 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wi.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180017CB8 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180026400 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800266F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?CodecStatusChanged@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z @ 0x1800267D4 (-CodecStatusChanged@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180026B40 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180112D3C (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 */

__int64 __fastcall AtmosCheck::PerformLicenseCheck(AtmosCheck *this, char a2)
{
  char v4; // r14
  unsigned int v5; // r15d
  DWORD CurrentThreadId; // r13d
  _OWORD *v7; // rax
  AtmosCheck *v8; // rcx
  __int64 v9; // rdi
  _OWORD *v10; // rbx
  int *v11; // xmm1_8
  signed int v12; // ebx
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 (__fastcall *v14)(__int64); // rax
  struct _RTL_CRITICAL_SECTION *v15; // rcx
  __int64 v16; // r9
  __int64 result; // rax
  void (__fastcall ***v18)(_QWORD, _QWORD, _QWORD, __int64); // rcx
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-28h]
  __int128 v23; // [rsp+50h] [rbp-20h]
  int *v24; // [rsp+60h] [rbp-10h]
  int v25; // [rsp+C0h] [rbp+50h] BYREF
  APTTYPE pAptType; // [rsp+C8h] [rbp+58h] BYREF

  v25 = 0;
  v21 = 0x8007049080070490uLL;
  v22 = -2147023728;
  v4 = 0;
  pAptType = APTTYPE_MTA;
  if ( !AtmosCheck::IsLicenseEvaluationRequired(this) )
    return 0LL;
  wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::ReportUsageToService();
  CoGetApartmentType(&pAptType, &pAptQualifier);
  v5 = 0;
  *(_QWORD *)&v23 = this;
  if ( pAptType == APTTYPE_MTA )
    v5 = 4;
  *((_QWORD *)&v23 + 1) = &v21;
  v24 = &v25;
  CurrentThreadId = GetCurrentThreadId();
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  v10 = v7;
  if ( v7 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageInstallingEventArgs *>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageInstallingEventArgs *>>((__int64)v7);
    v8 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( v8 )
      (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = (__int64)v10;
    v11 = v24;
    v10[1] = v23;
    *(_QWORD *)v10 = off_180120418;
    *((_QWORD *)v10 + 4) = v11;
    v10 = 0LL;
  }
  if ( v10 )
    operator delete(v10);
  v12 = v9 == 0 ? 0x8007000E : 0;
  if ( v9 )
  {
    if ( v5 == 4 )
    {
      v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL);
      if ( v13 == Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___::Run )
        Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___::Run(v9);
      else
        v13(v9);
    }
    else
    {
      lpCriticalSection = 0LL;
      v12 = Windows::Internal::ComTaskPool::s_QueuePoolTask(v5, 32LL, CurrentThreadId, v9);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&lpCriticalSection);
    }
    v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL);
    if ( v14 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v9);
    else
      v14(v9);
  }
  AtmosCheck::Trace(v8, "Queuetask result", v12);
  if ( v12 >= 0 )
  {
    if ( v25 >= 0 )
    {
      v4 = AtmosCheck::CodecStatusChanged(this, (struct DolbyLicenseResult *)&v21);
      Microsoft::WRL::Wrappers::CriticalSection::Lock(
        (struct _RTL_CRITICAL_SECTION *)((char *)this + 32),
        &lpCriticalSection);
      v15 = lpCriticalSection;
      v16 = v22;
      *((_QWORD *)this + 12) = v21;
      *((_DWORD *)this + 26) = v16;
      if ( v15 )
      {
        LeaveCriticalSection(v15);
        v16 = v22;
      }
      if ( a2 && v4 )
      {
        v18 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD, __int64))*((_QWORD *)this + 2);
        if ( v18 )
          (**v18)(v18, (unsigned int)v21, HIDWORD(v21), v16);
      }
    }
    v12 = v25;
  }
  AtmosCheck::TraceResult(this, v12, v4);
  result = (unsigned int)v12;
  *((_DWORD *)this + 36) = 5;
  return result;
}
