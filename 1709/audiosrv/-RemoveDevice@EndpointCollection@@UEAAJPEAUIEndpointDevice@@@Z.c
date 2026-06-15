/*
 * XREFs of ?RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x1800E8EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800A696C (-RemoveAt@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_149a920f_402c_418b_8687_6fa74df4953.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIEndpointDevice@@PEAU3@@Z @ 0x1800E86B8 (-Find@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3.c)
 */

__int64 __fastcall EndpointCollection::RemoveDevice(struct _RTL_CRITICAL_SECTION *this, struct IEndpointDevice *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v4 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  if ( a2
    && (v5 = ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>>::Find(
               &this->SpinCount,
               (__int64)a2)) != 0LL )
  {
    ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>>::RemoveAt(
      &this->SpinCount,
      v5);
  }
  else
  {
    v4 = -2147024809;
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
