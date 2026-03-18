/*
 * XREFs of _flswbuf @ 0x14016EB24
 * Callers:
 *     _fputwc_nolock @ 0x14016E634 (_fputwc_nolock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall flswbuf(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 24) |= 0x20u;
  return 0xFFFFLL;
}
