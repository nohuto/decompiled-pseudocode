/*
 * XREFs of _FillAPOInitSystemEffectsStructure_::_1_::dtor$16 @ 0x1400207F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FillAPOInitSystemEffectsStructure_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(a2 + 104);
}
