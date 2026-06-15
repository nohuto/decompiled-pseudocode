/*
 * XREFs of ?NewNode@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@2@@ATL@@AEAAPEAVCNode@12@PEAUIEndpointDevice@@PEAV312@1@Z @ 0x1800E8CE8
 * Callers:
 *     ?AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x1800E8440 (-AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180013260 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>>::NewNode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct ATL::CAtlPlex *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rbp
  _QWORD *result; // rax

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v7 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = *(_DWORD *)(a1 + 40);
    for ( i = (_QWORD *)((char *)v7 + 16 * (v8 - 1) + 8 * (unsigned int)(v8 - 1) + 8); --v8 >= 0; i -= 3 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  v10 = *(_QWORD **)(a1 + 32);
  v11 = *v10;
  if ( v10 )
  {
    v10[2] = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  *(_QWORD *)(a1 + 32) = v11;
  result = v10;
  v10[1] = 0LL;
  *v10 = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
