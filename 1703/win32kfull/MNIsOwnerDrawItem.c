/*
 * XREFs of MNIsOwnerDrawItem @ 0x1C0042E88
 * Callers:
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 *     ?MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z @ 0x1C000E718 (-MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0042EB4 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxMNCompute @ 0x1C00439EC (xxxMNCompute.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0118F78 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0217614 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C00429D0 (MNIsUAHMenu.c)
 */

__int64 __fastcall MNIsOwnerDrawItem(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  unsigned int v3; // ecx

  if ( (*a2 & 0x100) != 0 )
    return 1;
  v2 = MNIsUAHMenu(a1);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
