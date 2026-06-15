/*
 * XREFs of _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$8 @ 0x1800AD2DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 240));
}
