/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001F480
 * Callers:
 *     ?QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EE00 (-QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800376E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPO_ea_1800376E0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800376F0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPO_ea_1800376F0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180037700 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPO_ea_180037700.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180037710 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPO_ea_180037710.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
}
