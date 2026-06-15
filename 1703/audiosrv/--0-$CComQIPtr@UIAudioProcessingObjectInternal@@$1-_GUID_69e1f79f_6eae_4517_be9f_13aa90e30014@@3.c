/*
 * XREFs of ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800986B0
 * Callers:
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x18009B0C4 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x1800CE790 (-GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 *     ?GetExtendedProperties@CAPOWrapperClient@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x1800D03C0 (-GetExtendedProperties@CAPOWrapperClient@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014, a1);
  return a1;
}
