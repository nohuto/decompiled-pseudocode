/*
 * XREFs of ?AddRef@CAccentTransitionAnimatedVisual@@UEAAKXZ @ 0x18003D050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAccentTransitionAnimatedVisual::AddRef(CAccentTransitionAnimatedVisual *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
