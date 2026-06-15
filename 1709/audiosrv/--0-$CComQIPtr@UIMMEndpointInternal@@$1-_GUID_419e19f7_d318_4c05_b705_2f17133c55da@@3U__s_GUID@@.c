/*
 * XREFs of ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_419e19f7_d318_4c05_b705_2f17133c55da@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800089A0
 * Callers:
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180020B6C (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x1800E8970 (-GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z.c)
 *     ?InitBusTypeAndRank@EndpointDevice@@AEAAJXZ @ 0x1800E99E4 (-InitBusTypeAndRank@EndpointDevice@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_419e19f7_d318_4c05_b705_2f17133c55da>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_419e19f7_d318_4c05_b705_2f17133c55da>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_419e19f7_d318_4c05_b705_2f17133c55da, a1);
  return a1;
}
