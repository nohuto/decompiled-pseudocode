/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameEventHandler@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@@WRL@Microsoft@@UEAA@XZ @ 0x18004B4E0
 * Callers:
 *     _CApplicationFrameService::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180199F57 (_CApplicationFrameService--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,Microsoft::WRL::ChainInterfaces<IApplicationFrameServiceTestability,IApplicationFrameService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationFrameEventHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,Microsoft::WRL::ChainInterfaces<IApplicationFrameServiceTestability,IApplicationFrameService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationFrameEventHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(
        CWRLObjectWithGITSite *this)
{
  __int64 v2; // rcx

  *((_DWORD *)this + 19) = -1073741823;
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
