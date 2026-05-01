/*
 * XREFs of ?HasFullScreenViewVisible@FullScreenPositioner@@UEAAJPEAH@Z @ 0x18014D9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::HasFullScreenViewVisible(FullScreenPositioner *this, int *a2)
{
  *a2 = *((_QWORD *)this + 12) != 0LL;
  return 0LL;
}
