/*
 * XREFs of ?GetNextDevice@EndpointCollection@@QEAAJPEAPEAU__POSITION@@PEAPEAUIEndpointDevice@@@Z @ 0x180117C3C
 * Callers:
 *     ?GetNextDevice@EndpointIterator@@UEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180117CF0 (-GetNextDevice@EndpointIterator@@UEAAJPEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180116838 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 */

__int64 __fastcall EndpointCollection::GetNextDevice(
        EndpointCollection *this,
        struct __POSITION **a2,
        struct IEndpointDevice **a3)
{
  unsigned int v3; // edi
  struct IUnknown *v5; // rbx
  __int64 v7; // rax
  struct IUnknown *v8; // rdx
  struct __POSITION *v9; // rbp
  ULONG (__stdcall *Release)(IUnknown *); // rax
  struct IUnknown *v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v5 = 0LL;
  v12 = 0LL;
  if ( a2 && a3 )
  {
    *a3 = 0LL;
    v7 = (__int64)*a2;
    if ( *a2 || (v7 = *((_QWORD *)this + 4)) != 0 )
    {
      v8 = *(struct IUnknown **)(v7 + 16);
      v9 = *(struct __POSITION **)v7;
      if ( v8 )
      {
        ATL::AtlComPtrAssign(&v12, v8);
        v5 = v12;
      }
      ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v12, a3);
      *a2 = v9;
      if ( v5 )
      {
        Release = v5->lpVtbl->Release;
        if ( (char *)Release == (char *)EndpointDevice::Release )
          EndpointDevice::Release((EndpointDevice *)v5);
        else
          ((void (__fastcall *)(struct IUnknown *))Release)(v5);
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
