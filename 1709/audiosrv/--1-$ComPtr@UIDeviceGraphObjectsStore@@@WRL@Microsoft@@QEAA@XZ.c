/*
 * XREFs of ??1?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAA@XZ @ 0x18005C5CC
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$4 @ 0x180038158 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$4.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$0 @ 0x180038500 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$8 @ 0x18009A68B (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$8.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$1 @ 0x18009B441 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$1.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$2 @ 0x18009C6EF (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::~ComPtr<IDeviceGraphObjectsStore>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(a1);
}
