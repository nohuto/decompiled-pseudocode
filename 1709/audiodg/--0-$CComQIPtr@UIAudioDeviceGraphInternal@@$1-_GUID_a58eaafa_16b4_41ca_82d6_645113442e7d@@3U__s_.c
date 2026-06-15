/*
 * XREFs of ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_a58eaafa_16b4_41ca_82d6_645113442e7d@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400311B0
 * Callers:
 *     ?AddPipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14003A250 (-AddPipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14003A320 (-AddPipeToLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetInterruptPeriodicity@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x14003AA30 (-GetInterruptPeriodicity@CSystemAudioDeviceSharedBase@@UEAA_JXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_a58eaafa_16b4_41ca_82d6_645113442e7d>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_a58eaafa_16b4_41ca_82d6_645113442e7d>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_a58eaafa_16b4_41ca_82d6_645113442e7d, a1);
  return a1;
}
