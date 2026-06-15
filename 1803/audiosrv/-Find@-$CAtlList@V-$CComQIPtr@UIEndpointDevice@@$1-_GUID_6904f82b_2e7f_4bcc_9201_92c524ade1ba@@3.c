/*
 * XREFs of ?Find@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIEndpointDevice@@PEAU3@@Z @ 0x1801176C4
 * Callers:
 *     ?RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x180117EB0 (-RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z.c)
 *     ?ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z @ 0x180117F30 (-ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z.c)
 * Callees:
 *     ?AddRef@EndpointCollection@@UEAAKXZ @ 0x180056820 (-AddRef@EndpointCollection@@UEAAKXZ.c)
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba>>::Find(
        _QWORD *a1,
        EndpointCollection *a2)
{
  _QWORD *i; // rdi
  __int64 (__fastcall *v4)(EndpointCollection *); // rax
  EndpointCollection *v5; // rsi
  __int64 (__fastcall *v6)(EndpointDevice *); // rax

  for ( i = (_QWORD *)*a1; ; i = (_QWORD *)*i )
  {
    if ( !i )
      return 0LL;
    if ( a2 )
    {
      v4 = *(__int64 (__fastcall **)(EndpointCollection *))(*(_QWORD *)a2 + 8LL);
      if ( v4 == EndpointCollection::AddRef )
        EndpointCollection::AddRef(a2);
      else
        v4(a2);
    }
    v5 = (EndpointCollection *)i[2];
    if ( a2 )
    {
      v6 = *(__int64 (__fastcall **)(EndpointDevice *))(*(_QWORD *)a2 + 16LL);
      if ( v6 == EndpointDevice::Release )
        EndpointDevice::Release(a2);
      else
        v6(a2);
    }
    if ( v5 == a2 )
      break;
  }
  return i;
}
