/*
 * XREFs of DpAcquirePostDisplayOwnership2 @ 0x1C01C1490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DpAcquirePostDisplayOwnership2(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  return DpiAcquirePostDisplayOwnership(a1, a2, a3);
}
