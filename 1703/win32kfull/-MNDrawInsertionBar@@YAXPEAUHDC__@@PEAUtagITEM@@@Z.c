/*
 * XREFs of ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C000DE2C
 * Callers:
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0029270 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall MNDrawInsertionBar(HDC a1, struct tagITEM *a2)
{
  if ( *((int *)a2 + 1) < 0 || (*((_DWORD *)a2 + 1) & 0x40000000) != 0 )
    GrePolyPatBlt(a1);
}
