/*
 * XREFs of _o_wmemcpy_s_0 @ 0x1801E2E7C
 * Callers:
 *     ?GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAGI@Z @ 0x1801125B0 (-GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAGI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl o_wmemcpy_s_0(wchar_t *S1, rsize_t N1, const wchar_t *S2, rsize_t N)
{
  return wmemcpy_s(S1, N1, S2, N);
}
