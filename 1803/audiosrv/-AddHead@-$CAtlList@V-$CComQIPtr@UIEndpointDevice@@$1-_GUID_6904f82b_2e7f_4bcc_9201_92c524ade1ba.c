/*
 * XREFs of ?AddHead@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIEndpointDevice@@@Z @ 0x180057714
 * Callers:
 *     ?AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x1800566C0 (-AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1800188D0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AddRef@EndpointCollection@@UEAAKXZ @ 0x180056820 (-AddRef@EndpointCollection@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct ATL::CAtlPlex *__fastcall ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>>::AddHead(
        struct ATL::CAtlPlex **a1,
        EndpointCollection *a2)
{
  struct ATL::CAtlPlex *v3; // r14
  struct ATL::CAtlPlex *v5; // r8
  int v6; // edx
  struct ATL::CAtlPlex *i; // rcx
  struct ATL::CAtlPlex *v8; // rdi
  struct ATL::CAtlPlex *v9; // rbp
  __int64 (__fastcall *v10)(EndpointCollection *); // rax
  struct ATL::CAtlPlex *result; // rax

  v3 = *a1;
  if ( !a1[4] )
  {
    v5 = ATL::CAtlPlex::Create(a1 + 3, *((unsigned int *)a1 + 10), 0x18uLL);
    if ( !v5 )
      ATL::AtlThrowImpl(-2147024882);
    v6 = *((_DWORD *)a1 + 10);
    for ( i = (struct ATL::CAtlPlex *)((char *)v5 + 16 * (v6 - 1) + 8 * (unsigned int)(v6 - 1) + 8);
          --v6 >= 0;
          i = (struct ATL::CAtlPlex *)((char *)i - 24) )
    {
      *(_QWORD *)i = a1[4];
      a1[4] = i;
    }
  }
  v8 = a1[4];
  v9 = *(struct ATL::CAtlPlex **)v8;
  *((_QWORD *)v8 + 2) = a2;
  if ( a2 )
  {
    v10 = *(__int64 (__fastcall **)(EndpointCollection *))(*(_QWORD *)a2 + 8LL);
    if ( v10 == EndpointCollection::AddRef )
      EndpointCollection::AddRef(a2);
    else
      v10(a2);
  }
  a1[4] = v9;
  *((_QWORD *)v8 + 1) = 0LL;
  *(_QWORD *)v8 = v3;
  a1[2] = (struct ATL::CAtlPlex *)((char *)a1[2] + 1);
  if ( *a1 )
    *((_QWORD *)*a1 + 1) = v8;
  else
    a1[1] = v8;
  result = v8;
  *a1 = v8;
  return result;
}
