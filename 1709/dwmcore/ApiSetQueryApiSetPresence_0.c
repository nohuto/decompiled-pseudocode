/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1800C4A20
 * Callers:
 *     IsRegisterManipulationThreadPresent @ 0x1800C4588 (IsRegisterManipulationThreadPresent.c)
 *     IsCreateAppChromePresent @ 0x1800C4704 (IsCreateAppChromePresent.c)
 *     IsCreateHolographicCompositorPresent @ 0x1800C47C0 (IsCreateHolographicCompositorPresent.c)
 *     IsCreateSystemInputHostPresent @ 0x1800C4894 (IsCreateSystemInputHostPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
