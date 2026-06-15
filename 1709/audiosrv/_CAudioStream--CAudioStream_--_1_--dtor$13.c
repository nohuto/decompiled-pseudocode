/*
 * XREFs of _CAudioStream::CAudioStream_::_1_::dtor$13 @ 0x180039542
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::CAudioStream_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  return ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::~CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>(*(_QWORD *)(a2 + 96) + 448LL);
}
