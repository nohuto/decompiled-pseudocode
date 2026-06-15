/*
 * XREFs of ??1?$CInterfaceList@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@ATL@@QEAA@XZ @ 0x1800E8314
 * Callers:
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$3 @ 0x1800A2921 (_CMonitorManager--CMonitorManager_--_1_--dtor$3.c)
 *     _CMonitorManager::Initialize_::_1_::dtor$1 @ 0x1800A4D43 (_CMonitorManager--Initialize_--_1_--dtor$1.c)
 *     _EndpointCollection::EndpointCollection_::_1_::dtor$1 @ 0x1800E8301 (_EndpointCollection--EndpointCollection_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CInterfaceList<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>::~CInterfaceList<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>(
        __int64 a1)
{
  return ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>>::RemoveAll(a1);
}
