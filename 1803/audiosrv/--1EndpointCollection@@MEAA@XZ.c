/*
 * XREFs of ??1EndpointCollection@@MEAA@XZ @ 0x180117488
 * Callers:
 *     ??_EEndpointCollection@@MEAAPEAXI@Z @ 0x180117560 (--_EEndpointCollection@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@2@@ATL@@QEAAXXZ @ 0x180117E04 (-RemoveAll@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1.c)
 */

void __fastcall EndpointCollection::~EndpointCollection(struct _RTL_CRITICAL_SECTION *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&EndpointCollection::`vftable'{for `IEndpointCollection'};
  *(_QWORD *)&this->LockCount = &EndpointCollection::`vftable'{for `CUnknown'};
  DeleteCriticalSection(this + 2);
  ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>>::RemoveAll(&this->SpinCount);
  *(_QWORD *)&this->LockCount = &CUnknown::`vftable';
}
