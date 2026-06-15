/*
 * XREFs of ??0ModuleCommandResult@Devices@Media@Windows@@QEAA@W4SendCommandStatus@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x140048DB8
 * Callers:
 *     ??$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VModuleCommandResult@Devices@Media@Windows@@@12@$$QEAW4SendCommandStatus@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x14004817C (--$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x140019730 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0IAudioDeviceModule@Devices@Media@Windows@@QEAA@XZ @ 0x1400197C8 (--0IAudioDeviceModule@Devices@Media@Windows@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x1400491B8 (--4-$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@St.c)
 */

__int64 __fastcall Windows::Media::Devices::ModuleCommandResult::ModuleCommandResult(__int64 a1, int a2, __int64 a3)
{
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx

  Windows::Media::Devices::IAudioDeviceModule::IAudioDeviceModule((IUnknown *)a1);
  Windows::Media::Devices::IAudioDeviceModule::IAudioDeviceModule((IUnknown *)(a1 + 8));
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 16));
  v6 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::FtmBase>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 56) = 1LL;
  if ( v6 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
  *(_QWORD *)a1 = &Windows::Media::Devices::ModuleCommandResult::`vftable';
  *(_QWORD *)(a1 + 8) = &Windows::Media::Devices::ModuleCommandResult::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &Windows::Media::Devices::ModuleCommandResult::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 64) = a2;
  Microsoft::WRL::ComPtr<Windows::Storage::Streams::IBuffer>::operator=(a1 + 72, a3);
  return a1;
}
