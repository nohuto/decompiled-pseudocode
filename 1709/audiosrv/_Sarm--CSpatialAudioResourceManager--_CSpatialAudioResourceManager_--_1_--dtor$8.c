/*
 * XREFs of _Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor$8 @ 0x1800BF76B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::~com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 576LL));
}
