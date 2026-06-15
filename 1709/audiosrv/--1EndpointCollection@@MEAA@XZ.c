/*
 * XREFs of ??1EndpointCollection@@MEAA@XZ @ 0x1800E831C
 * Callers:
 *     ??_EEndpointCollection@@MEAAPEAXI@Z @ 0x1800E83D4 (--_EEndpointCollection@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@2@@ATL@@QEAAXXZ @ 0x1800E8E84 (-RemoveAll@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_149a920f_402c_418b_8687_6fa74df495.c)
 */

void __fastcall EndpointCollection::~EndpointCollection(struct _RTL_CRITICAL_SECTION *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&EndpointCollection::`vftable'{for `IEndpointCollection'};
  *(_QWORD *)&this->LockCount = &EndpointCollection::`vftable'{for `CUnknown'};
  DeleteCriticalSection(this + 2);
  ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>>::RemoveAll(&this->SpinCount);
  *(_QWORD *)&this->LockCount = &CUnknown::`vftable';
}
