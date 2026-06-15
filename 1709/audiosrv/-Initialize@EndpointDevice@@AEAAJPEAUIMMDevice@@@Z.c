/*
 * XREFs of ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x1800E9EAC
 * Callers:
 *     ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x1800E9320 (-CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x1800E96C8 (-InitAdapterInformation@EndpointDevice@@AEAAJXZ.c)
 *     ?InitBusTypeAndRank@EndpointDevice@@AEAAJXZ @ 0x1800E99E4 (-InitBusTypeAndRank@EndpointDevice@@AEAAJXZ.c)
 *     ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x1800E9BE4 (-InitTopologyIdInfo@EndpointDevice@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointDevice::Initialize(BSTR *this, struct IUnknown *a2)
{
  struct IUnknown **v4; // rcx
  int inited; // ebx
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = (struct IUnknown **)(this + 4);
  if ( *v4 != a2 )
    ATL::AtlComPtrAssign(v4, a2);
  inited = EndpointDevice::InitAdapterInformation(this);
  if ( inited >= 0 )
  {
    inited = EndpointDevice::InitTopologyIdInfo(this);
    if ( inited >= 0 )
    {
      inited = EndpointDevice::InitBusTypeAndRank((EndpointDevice *)this);
      if ( inited >= 0 )
      {
        inited = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
                   a2,
                   &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                   &v8);
        if ( inited >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL))(v8, (char *)this + 80);
          inited = 0;
          if ( v6 < 0 )
            inited = v6;
        }
      }
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)inited;
}
