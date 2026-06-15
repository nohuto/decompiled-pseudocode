/*
 * XREFs of ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FCC4
 * Callers:
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140002080 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005420 (-RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400054F0 (-AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005A10 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005F00 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140009AE0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000EB40 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140014090 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019960 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     _CSubmixImpl::UpdateActiveStreamCount_::_1_::dtor$0 @ 0x14001F5E0 (_CSubmixImpl--UpdateActiveStreamCount_--_1_--dtor$0.c)
 *     _CStreamInstance::ConnectToRightSubmix_::_1_::dtor$0 @ 0x14001F5F0 (_CStreamInstance--ConnectToRightSubmix_--_1_--dtor$0.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$7 @ 0x14001F844 (_CSubmixImpl--CreateStream_--_1_--dtor$7.c)
 *     _CSubmixImpl::Initialize_::_1_::dtor$1 @ 0x14001F8A0 (_CSubmixImpl--Initialize_--_1_--dtor$1.c)
 *     _CPipeInstance::ActivateAPOs_::_1_::dtor$1 @ 0x14001FD4C (_CPipeInstance--ActivateAPOs_--_1_--dtor$1.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$1 @ 0x1400202DC (_CAudioDeviceGraph--Initialize_--_1_--dtor$1.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$0 @ 0x140020750 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$0.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$1 @ 0x14002075C (_FillAPOInitSystemEffectsStructure_--_1_--dtor$1.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$2 @ 0x140020768 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$2.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$4 @ 0x140020780 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$4.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$11 @ 0x1400207C8 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$11.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$16 @ 0x1400207F8 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$16.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$19 @ 0x140020810 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$19.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$1 @ 0x140020ABC (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$1.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$2 @ 0x140020AC8 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$2.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$3 @ 0x140020AD4 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$3.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$4 @ 0x140020AE0 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$4.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$5 @ 0x140020AEC (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$5.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$6 @ 0x140020AF8 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$6.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$9 @ 0x140020B1C (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$9.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$10 @ 0x140020B28 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$10.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$13 @ 0x140020B40 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$13.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x14002FC4C (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140042C60 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$3 @ 0x140043153 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$3.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$4 @ 0x14004315F (_CStreamGroup--CreateBridgeStream_--_1_--dtor$4.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$6 @ 0x140043177 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$6.c)
 *     ?Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z @ 0x140043B50 (-Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z.c)
 *     _CVpoContext::Initialize_::_1_::dtor$0 @ 0x140043C78 (_CVpoContext--Initialize_--_1_--dtor$0.c)
 *     AudioDGGetVpoFromVpoContext @ 0x140043EE0 (AudioDGGetVpoFromVpoContext.c)
 *     ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140044264 (-GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 *     _CStreamInstance::GetOta_::_1_::dtor$0 @ 0x140044414 (_CStreamInstance--GetOta_--_1_--dtor$0.c)
 *     _CStreamInstance::GetOta_::_1_::dtor$1 @ 0x140044420 (_CStreamInstance--GetOta_--_1_--dtor$1.c)
 *     ?SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z @ 0x140044680 (-SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
