/*
 * XREFs of ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0080028
 * Callers:
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C007FEF4 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C0097A28 (MNIsUAHMenu.c)
 */

__int64 __fastcall MNDrawHilite(struct tagMENU *a1, struct tagITEM *a2)
{
  int v2; // r9d
  __int64 v3; // r8
  int v5; // r9d
  __int64 v6; // r10

  v2 = *((_DWORD *)a2 + 1);
  LODWORD(v3) = 0;
  if ( (v2 & 0x80u) != 0
    && (v2 & 0xC0000000) == 0
    && ((unsigned int)MNIsUAHMenu(a1) || (v5 & 0x20000000) == 0 || *(_QWORD *)(v6 + 40) != v3) )
  {
    LODWORD(v3) = 1;
  }
  return (unsigned int)v3;
}
