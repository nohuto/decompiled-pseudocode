/*
 * XREFs of ?ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z @ 0x180117F30
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIEndpointDevice@@PEAU3@@Z @ 0x1801176C4 (-Find@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3.c)
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
    && (v7 = (struct IUnknown **)ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>>::Find(
                                   &this->SpinCount,
                                   a2)) != 0LL )
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
