/*
 * XREFs of ?ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z @ 0x1800E8F70
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIEndpointDevice@@PEAU3@@Z @ 0x1800E86B8 (-Find@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointCollection::ReplaceDevice(
        struct _RTL_CRITICAL_SECTION *this,
        struct IEndpointDevice *a2,
        struct IUnknown *a3)
{
  unsigned int v6; // ebx
  struct IUnknown **v7; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]

  v6 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  if ( a2
    && (v7 = (struct IUnknown **)ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>>::Find(
                                   &this->SpinCount,
                                   (__int64)a2)) != 0LL )
  {
    if ( v7[2] != a3 )
      ATL::AtlComPtrAssign(v7 + 2, a3);
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
