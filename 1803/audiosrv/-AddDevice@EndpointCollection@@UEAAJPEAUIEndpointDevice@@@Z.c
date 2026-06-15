/*
 * XREFs of ?AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x1800566C0
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180056168 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIEndpointDevice@@@Z @ 0x180057714 (-AddHead@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointCollection::AddDevice(struct _RTL_CRITICAL_SECTION *this, struct IEndpointDevice *a2)
{
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rdi

  v4 = 0;
  v5 = this + 2;
  EnterCriticalSection(this + 2);
  if ( a2 )
    ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>>::AddHead(
      &this->SpinCount,
      a2);
  else
    v4 = -2147024809;
  LeaveCriticalSection(v5);
  return v4;
}
