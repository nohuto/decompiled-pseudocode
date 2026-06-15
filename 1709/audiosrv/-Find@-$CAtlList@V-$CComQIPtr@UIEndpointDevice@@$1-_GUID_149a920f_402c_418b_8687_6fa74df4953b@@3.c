/*
 * XREFs of ?Find@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIEndpointDevice@@PEAU3@@Z @ 0x1800E86B8
 * Callers:
 *     ?RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x1800E8EF0 (-RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z.c)
 *     ?ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z @ 0x1800E8F70 (-ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>>::Find(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *i; // rbx
  __int64 v4; // rsi

  for ( i = (_QWORD *)*a1; ; i = (_QWORD *)*i )
  {
    if ( !i )
      return 0LL;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = i[2];
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v4 == a2 )
      break;
  }
  return i;
}
