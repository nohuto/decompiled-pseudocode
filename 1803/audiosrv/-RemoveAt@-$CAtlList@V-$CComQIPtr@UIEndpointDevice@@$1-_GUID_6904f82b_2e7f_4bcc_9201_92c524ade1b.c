/*
 * XREFs of ?RemoveAt@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180117E64
 * Callers:
 *     ?RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x180117EB0 (-RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>>::RemoveAt(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = (__int64)a1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 != (__int64 *)*a1 )
    a1 = (__int64 *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == *(__int64 **)(v2 + 8) )
    *(_QWORD *)(v2 + 8) = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  return ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>>::FreeNode(
           v2,
           a2);
}
