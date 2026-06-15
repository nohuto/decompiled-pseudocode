/*
 * XREFs of ??0?$CComQIPtr@UIAudioProcessingObject@@$1?_GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180008E14
 * Callers:
 *     ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180009A20 (-InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x180065EE0 (-GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, a1);
  return a1;
}
