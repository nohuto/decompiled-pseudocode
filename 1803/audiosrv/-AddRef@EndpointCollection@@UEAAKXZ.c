/*
 * XREFs of ?AddRef@EndpointCollection@@UEAAKXZ @ 0x180056820
 * Callers:
 *     ?CopyTo@?$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z @ 0x180056644 (-CopyTo@-$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z.c)
 *     ?NonDelegatingQueryInterface@EndpointCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056740 (-NonDelegatingQueryInterface@EndpointCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIEndpointDevice@@@Z @ 0x180057714 (-AddHead@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba.c)
 *     ?NonDelegatingQueryInterface@EndpointDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180057830 (-NonDelegatingQueryInterface@EndpointDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIEndpointDevice@@PEAU3@@Z @ 0x1801176C4 (-Find@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointCollection::AddRef(EndpointCollection *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
}
