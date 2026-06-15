/*
 * XREFs of ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x18005789C
 * Callers:
 *     ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x18005528C (-CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x180057950 (-InitTopologyIdInfo@EndpointDevice@@AEAAJXZ.c)
 *     ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x180057C90 (-InitAdapterInformation@EndpointDevice@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointDevice::Initialize(EndpointDevice *this, struct IUnknown *a2)
{
  struct IUnknown **v4; // rcx
  int inited; // ebx
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = (struct IUnknown **)((char *)this + 32);
  if ( *v4 != a2 )
    ATL::AtlComPtrAssign(v4, a2);
  inited = EndpointDevice::InitAdapterInformation(this);
  if ( inited >= 0 )
  {
    inited = EndpointDevice::InitTopologyIdInfo(this);
    if ( inited >= 0 )
    {
      inited = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
                 a2,
                 &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                 &v8);
      if ( inited >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL))(v8, (char *)this + 72);
        inited = 0;
        if ( v6 < 0 )
          inited = v6;
      }
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)inited;
}
