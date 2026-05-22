/*
 * XREFs of _InputAttemptedTargetManager::InputAttemptedTargetManager_::_1_::dtor$38 @ 0x1800D0697
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIHidGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180004B10 (--1-$ComPtr@UIHidGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@QE.c)
 */

void __fastcall InputAttemptedTargetManager::InputAttemptedTargetManager_::_1_::dtor_38(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IHidGameControllerProviderPrivate>::~ComPtr<Windows::Gaming::Input::Internal::IHidGameControllerProviderPrivate>((__int64 *)(a2 + 120));
  }
}
