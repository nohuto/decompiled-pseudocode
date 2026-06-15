/*
 * XREFs of _CPipeInstance::FixupStreamPipe_::_1_::dtor$1 @ 0x1400210D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::FixupStreamPipe_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>(a2 + 176);
}
