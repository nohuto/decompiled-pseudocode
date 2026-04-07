/*
 * XREFs of ?GetTransitionTarget@CAccentTransitionAnimatedVisual@@UEAAJPEAH@Z @ 0x18009CC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAccentTransitionAnimatedVisual::GetTransitionTarget(CAccentTransitionAnimatedVisual *this, int *a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *((_DWORD *)this + 8);
  result = v2 == 0 ? 0x80070057 : 0;
  if ( v2 )
    *a2 = v2;
  return result;
}
