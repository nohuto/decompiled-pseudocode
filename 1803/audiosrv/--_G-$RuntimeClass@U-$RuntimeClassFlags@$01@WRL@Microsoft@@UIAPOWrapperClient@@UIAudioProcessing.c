/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18010A520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[11] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
