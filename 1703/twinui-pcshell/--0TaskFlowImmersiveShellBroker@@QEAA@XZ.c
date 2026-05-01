/*
 * XREFs of ??0TaskFlowImmersiveShellBroker@@QEAA@XZ @ 0x1800D33CC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTaskFlowImmersiveShellBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D5250 (-CreateInstance@-$SimpleClassFactory@VTaskFlowImmersiveShellBroker@@$0A@@WRL@Microsoft@@UEAAJPEA.c)
 * Callees:
 *     ??0CImmersiveShellComponentWithGITSite@@QEAA@XZ @ 0x180017500 (--0CImmersiveShellComponentWithGITSite@@QEAA@XZ.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@$00$00@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006FEEC (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@VFtmBase@WRL@Micr.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

TaskFlowImmersiveShellBroker *__fastcall TaskFlowImmersiveShellBroker::TaskFlowImmersiveShellBroker(
        TaskFlowImmersiveShellBroker *this)
{
  _QWORD *v1; // rdi
  signed __int32 v3; // eax

  v1 = (_QWORD *)((char *)this + 24);
  CImmersiveShellComponentWithGITSite::CImmersiveShellComponentWithGITSite((TaskFlowImmersiveShellBroker *)((char *)this + 24));
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>((Microsoft::WRL::FtmBase *)(v1 + 10));
  *((_QWORD *)this + 17) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)this + 1) = &TaskFlowImmersiveShellBroker::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *v1 = &TaskFlowImmersiveShellBroker::`vftable'{for `CImmersiveShellComponentWithGITSite'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 8) = &TaskFlowImmersiveShellBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 13) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &TaskFlowImmersiveShellBroker::`vftable';
  *((_QWORD *)this + 1) = &TaskFlowImmersiveShellBroker::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &TaskFlowImmersiveShellBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *v1 = &TaskFlowImmersiveShellBroker::`vftable'{for `CImmersiveShellComponentWithGITSite'};
  *((_QWORD *)this + 7) = &TaskFlowImmersiveShellBroker::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 8) = &TaskFlowImmersiveShellBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 13) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  v3 = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  *((_BYTE *)this + 212) = 1;
  *((_DWORD *)this + 52) = v3;
  return this;
}
