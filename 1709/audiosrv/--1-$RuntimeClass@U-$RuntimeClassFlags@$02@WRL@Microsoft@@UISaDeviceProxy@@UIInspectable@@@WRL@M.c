/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISaDeviceProxy@@UIInspectable@@@WRL@Microsoft@@UEAA@XZ @ 0x18005A0FC
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$0 @ 0x18003811C (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$0.c)
 *     _CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor$0 @ 0x180038625 (_CProcessSubmixProxy--_CProcessSubmixProxy_--_1_--dtor$0.c)
 *     _CAudioResourceManager::CAudioResourceManager_::_1_::dtor$0 @ 0x18009885D (_CAudioResourceManager--CAudioResourceManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>(
        __int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>(a1);
}
