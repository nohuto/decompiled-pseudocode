/*
 * XREFs of RtlEqualLuid @ 0x1800E5240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlEqualLuid(_DWORD *a1, _DWORD *a2)
{
  return a1[1] == a2[1] && *a1 == *a2;
}
