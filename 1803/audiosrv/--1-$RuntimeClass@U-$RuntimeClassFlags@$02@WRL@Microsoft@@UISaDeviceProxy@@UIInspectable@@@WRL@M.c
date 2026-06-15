/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISaDeviceProxy@@UIInspectable@@@WRL@Microsoft@@UEAA@XZ @ 0x180095504
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$0 @ 0x180068DF0 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$0.c)
 *     _CAudioResourceManager::CAudioResourceManager_::_1_::dtor$0 @ 0x180069A29 (_CAudioResourceManager--CAudioResourceManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>(
        __int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>(a1);
}
