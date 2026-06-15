/*
 * XREFs of ??1SendCommandAsyncOperation@Devices@Media@Windows@@UEAA@XZ @ 0x140049910
 * Callers:
 *     ??_GSendCommandAsyncOperation@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x14004A030 (--_GSendCommandAsyncOperation@Devices@Media@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Media::Devices::SendCommandAsyncOperation::~SendCommandAsyncOperation(
        Windows::Media::Devices::SendCommandAsyncOperation *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &Windows::Media::Devices::SendCommandAsyncOperation::`vftable'{for `Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>'};
  *((_QWORD *)this + 1) = &Windows::Media::Devices::SendCommandAsyncOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil>>,1,0>'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::SendCommandAsyncOperation::`vftable'{for `Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>'};
  *((_QWORD *)this + 10) = &Windows::Media::Devices::SendCommandAsyncOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 20);
  v2 = *((_QWORD *)this + 19);
  if ( v2 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  WindowsDeleteString(*((HSTRING *)this + 18));
  *((_QWORD *)this + 18) = 0LL;
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>((__int64 *)this);
}
