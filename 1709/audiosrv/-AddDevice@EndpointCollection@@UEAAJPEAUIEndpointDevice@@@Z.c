/*
 * XREFs of ?AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x1800E8440
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?NewNode@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@2@@ATL@@AEAAPEAVCNode@12@PEAUIEndpointDevice@@PEAV312@1@Z @ 0x1800E8CE8 (-NewNode@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_149a920f_402c_418b_8687_6fa74df4953b.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointCollection::AddDevice(struct _RTL_CRITICAL_SECTION *this, struct IEndpointDevice *a2)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // rax
  ULONG_PTR SpinCount; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]

  v4 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  if ( a2 )
  {
    v6 = ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>>::NewNode(
           &this->SpinCount,
           a2,
           v5,
           this->SpinCount,
           -2LL);
    SpinCount = this->SpinCount;
    if ( SpinCount )
      *(_QWORD *)(SpinCount + 8) = v6;
    else
      this[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)v6;
    this->SpinCount = v6;
  }
  else
  {
    v4 = -2147024809;
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
