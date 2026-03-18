/*
 * XREFs of xxxGetSysMenuHandle @ 0x1C00C2730
 * Callers:
 *     xxxGetSysMenu @ 0x1C00C1A64 (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C00C1FC0 (xxxSetSysMenu.c)
 *     xxxMNCanClose @ 0x1C00C26D0 (xxxMNCanClose.c)
 *     xxxHandleNCMouseGuys @ 0x1C01394E4 (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 * Callees:
 *     xxxLoadSysDesktopMenu @ 0x1C0114BE4 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxGetSysMenuHandle(__int64 a1)
{
  __int64 v1; // r8
  __int64 *v2; // rcx

  if ( (*(_BYTE *)(a1 + 70) & 8) == 0 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 200);
  if ( !v1 )
  {
    v2 = (__int64 *)(*(_QWORD *)(a1 + 24) + 56LL);
    v1 = *v2;
    if ( !*v2 && (*(_DWORD *)(gptiCurrent + 440LL) & 5) == 0 )
      return xxxLoadSysDesktopMenu(v2, 16LL);
  }
  return v1;
}
