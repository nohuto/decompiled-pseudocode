/*
 * XREFs of ??$try_copy@UIAPOAuxiliaryInputConfiguration@@@?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAPOAuxiliaryInputConfiguration@@Uerr_returncode_policy@wil@@@1@XZ @ 0x18002E650
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IAPOAuxiliaryInputConfiguration>(
        void (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx

  v2 = *a1;
  if ( v2 )
    (**v2)(v2, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, a2);
  else
    *a2 = 0LL;
  return a2;
}
