/*
 * XREFs of ??0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ @ 0x1800071F8
 * Callers:
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18000F508 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 *     ?ActivateInstance@?$SimpleActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180027F90 (-ActivateInstance@-$SimpleActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WR.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004064 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

ContentManagement::AppInstallInfoRecordImpl *__fastcall ContentManagement::AppInstallInfoRecordImpl::AppInstallInfoRecordImpl(
        ContentManagement::AppInstallInfoRecordImpl *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  ContentManagement::AppInstallInfoRecordImpl *result; // rax

  v1 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((ContentManagement::AppInstallInfoRecordImpl *)((char *)this + 8));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppInstallInfoRecord>::`vftable'{for `IInspectable'};
  v3 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppInstallInfoRecord>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IAppInstallInfoRecord>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppInstallInfoRecord>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppInstallInfoRecord>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IAppInstallInfoRecord>'};
  if ( !v3 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)this = &ContentManagement::AppInstallInfoRecordImpl::`vftable'{for `IInspectable'};
  *v1 = &ContentManagement::AppInstallInfoRecordImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IAppInstallInfoRecord>'};
  *((_QWORD *)this + 5) = &ContentManagement::AppInstallInfoRecordImpl::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &ContentManagement::AppInstallInfoRecordImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IAppInstallInfoRecord>'};
  *((_QWORD *)this + 9) = 0LL;
  result = this;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = -2147023728;
  return result;
}
