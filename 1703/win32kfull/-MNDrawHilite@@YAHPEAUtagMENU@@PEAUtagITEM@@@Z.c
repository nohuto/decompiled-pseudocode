/*
 * XREFs of ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C000E1AC
 * Callers:
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C000E078 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C00429D0 (MNIsUAHMenu.c)
 */

__int64 __fastcall MNDrawHilite(struct tagMENU *a1, struct tagITEM *a2)
{
  __int64 v2; // r8
  __int64 v4; // r9
  int v5; // r10d

  LODWORD(v2) = 0;
  if ( (*((_DWORD *)a2 + 1) & 0xC0000080) == 0x80
    && ((unsigned int)MNIsUAHMenu(a1) || (v5 & 0x20000000) == 0 || *(_QWORD *)(v4 + 40) != v2) )
  {
    LODWORD(v2) = 1;
  }
  return (unsigned int)v2;
}
