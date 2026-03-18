/*
 * XREFs of ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D7E98
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01D8298 (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01DBAC0 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DisableTemporayMetricsOverrides(struct _MOVESIZEDATA *a1)
{
  int v1; // eax
  int v2; // eax

  v1 = *((_DWORD *)a1 + 49);
  if ( (v1 & 0x400000) != 0 )
    *((_DWORD *)a1 + 49) = v1 & 0xFFBFFBFF;
  v2 = *((_DWORD *)a1 + 49);
  if ( (v2 & 0x800000) != 0 )
    *((_DWORD *)a1 + 49) = v2 & 0xFF7FF7FF;
}
