/*
 * XREFs of ??0?$CComQIPtr@UIAPOAuxiliaryInputConfiguration@@$1?_GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140031460
 * Callers:
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14003FD64 (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAPOAuxiliaryInputConfiguration,&__s_GUID const _GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768>::CComQIPtr<IAPOAuxiliaryInputConfiguration,&__s_GUID const _GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, a1);
  return a1;
}
