/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@UIAudioStreamingResourceRegistration@@@WRL@Microsoft@@UEAA@XZ @ 0x14002FFCC
 * Callers:
 *     _GraphStreamingResourceManager::GraphStreamingResourceManager_::_1_::dtor$0 @ 0x1400203F0 (_GraphStreamingResourceManager--GraphStreamingResourceManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,IAudioStreamingResourceRegistration>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,IAudioStreamingResourceRegistration>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = -1073741823;
}
