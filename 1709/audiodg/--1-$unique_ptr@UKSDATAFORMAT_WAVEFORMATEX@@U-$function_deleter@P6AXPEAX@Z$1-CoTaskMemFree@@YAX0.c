/*
 * XREFs of ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x140030090
 * Callers:
 *     _CSubmixImpl::_CSubmixImpl_::_1_::dtor$0 @ 0x140021570 (_CSubmixImpl--_CSubmixImpl_--_1_--dtor$0.c)
 *     _CSubmixImpl::_CSubmixImpl_::_1_::dtor$5 @ 0x1400215C3 (_CSubmixImpl--_CSubmixImpl_--_1_--dtor$5.c)
 *     _CSubmixImpl::_CSubmixImpl_::_1_::dtor$6 @ 0x1400215D6 (_CSubmixImpl--_CSubmixImpl_--_1_--dtor$6.c)
 *     _CSubmixImpl::CSubmixImpl_::_1_::dtor$0 @ 0x140021622 (_CSubmixImpl--CSubmixImpl_--_1_--dtor$0.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$6 @ 0x1400217C8 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$6.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$8 @ 0x1400217D4 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$8.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$9 @ 0x1400217E0 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$9.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$10 @ 0x1400217EC (_FillAPOInitSystemEffectsStructure_--_1_--dtor$10.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$14 @ 0x140021810 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$14.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$15 @ 0x14002181C (_FillAPOInitSystemEffectsStructure_--_1_--dtor$15.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$7 @ 0x140021BD4 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$7.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$8 @ 0x140021BE0 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
