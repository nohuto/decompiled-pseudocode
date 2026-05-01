/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800F7BC4
 * Callers:
 *     ??_ETaskFlowImmersiveShellBroker@@UEAAPEAXI@Z @ 0x1800F6EAC (--_ETaskFlowImmersiveShellBroker@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800F7FCC (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIUserActivityMonitor@UserActivities@.c)
 * Callees:
 *     ??1ACTIVATION_STACK_DATA@CApplicationManager@@QEAA@XZ @ 0x1800059F4 (--1ACTIVATION_STACK_DATA@CApplicationManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>(
        _QWORD *a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = a1[22];
  if ( v2 < 0 )
  {
    v3 = (volatile signed __int32 *)(2 * v2);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v3 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  CApplicationManager::ACTIVATION_STACK_DATA::~ACTIVATION_STACK_DATA((CApplicationManager::ACTIVATION_STACK_DATA *)(a1 + 16));
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite((CImmersiveShellComponentWithGITSite *)(a1 + 3));
}
