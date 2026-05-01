/*
 * XREFs of ??0TaskFlowImmersiveShellBroker@@QEAA@XZ @ 0x1801A2B60
 * Callers:
 *     ??$MakeAndInitialize@VTaskFlowImmersiveShellBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801A1FF8 (--$MakeAndInitialize@VTaskFlowImmersiveShellBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@UISetActivityMonitor@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801A2914 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIUserActivityMonitor@UserActivities@I.c)
 *     ??4?$unique_call@P6AXXZ$1?CDPShutdown@@YAXXZ@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A2FA8 (--4-$unique_call@P6AXXZ$1-CDPShutdown@@YAXXZ@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

TaskFlowImmersiveShellBroker *__fastcall TaskFlowImmersiveShellBroker::TaskFlowImmersiveShellBroker(
        TaskFlowImmersiveShellBroker *this)
{
  TaskFlowImmersiveShellBroker *result; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &TaskFlowImmersiveShellBroker::`vftable'{for `Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor'};
  v3 = 0;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &TaskFlowImmersiveShellBroker::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker'};
  *((_QWORD *)this + 3) = &TaskFlowImmersiveShellBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 4) = &TaskFlowImmersiveShellBroker::`vftable'{for `Windows::Internal::Data::Activities::ISetActivityMonitor'};
  *((_QWORD *)this + 5) = &TaskFlowImmersiveShellBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 10) = &TaskFlowImmersiveShellBroker::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 11) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 18) = &TaskFlowImmersiveShellBroker::`vftable'{for `ICDPUserActivitySettingsCallback'};
  *((_QWORD *)this + 19) = &TaskFlowImmersiveShellBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_BYTE *)this + 288) = 1;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 50) = 0;
  wil::unique_call<void (*)(void),&void CDPShutdown(void)>::operator=((char *)this + 288, &v3);
  if ( v3 )
    CDPShutdown();
  *((_QWORD *)this + 38) = 0LL;
  result = this;
  *((_WORD *)this + 156) = 0;
  return result;
}
