/*
 * XREFs of _MPCGestureHandlerManager::MapGestureHandlerToWorkspace_::_1_::dtor$20 @ 0x1800CF1CF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIHidGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180004B10 (--1-$ComPtr@UIHidGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@QE.c)
 */

void __fastcall MPCGestureHandlerManager::MapGestureHandlerToWorkspace_::_1_::dtor_20(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IHidGameControllerProviderPrivate>::~ComPtr<Windows::Gaming::Input::Internal::IHidGameControllerProviderPrivate>((__int64 *)(a2 + 136));
  }
}
