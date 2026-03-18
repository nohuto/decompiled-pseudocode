/*
 * XREFs of ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F0F24
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01F0580 (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01F470C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragInThresholdAlways(struct _MOVESIZEDATA *a1)
{
  unsigned int v1; // edx
  int v2; // eax

  v1 = *((_DWORD *)a1 + 45);
  if ( (((v1 & 0x38000) - 0x10000) & 0xFFFF7FFF) != 0 )
  {
    if ( (((v1 & 0x38000) - 0x20000) & 0xFFFF7FFF) != 0 )
      return;
    v2 = (v1 >> 15) - 4;
  }
  else
  {
    v2 = (v1 >> 15) - 2;
  }
  *((_DWORD *)a1 + 45) = v1 ^ (v1 ^ (v2 << 15)) & 0x38000;
}
