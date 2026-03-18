/*
 * XREFs of xxxGetSysMenuHandle @ 0x1C007BAF0
 * Callers:
 *     xxxGetSysMenu @ 0x1C0046740 (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C007AD30 (xxxSetSysMenu.c)
 *     xxxMNCanClose @ 0x1C007BA94 (xxxMNCanClose.c)
 *     xxxHandleNCMouseGuys @ 0x1C0140028 (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 * Callees:
 *     xxxLoadSysDesktopMenu @ 0x1C011DAE4 (xxxLoadSysDesktopMenu.c)
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
    if ( !*v2 && (*(_DWORD *)(gptiCurrent + 464LL) & 5) == 0 )
      return xxxLoadSysDesktopMenu(v2, 16LL);
  }
  return v1;
}
