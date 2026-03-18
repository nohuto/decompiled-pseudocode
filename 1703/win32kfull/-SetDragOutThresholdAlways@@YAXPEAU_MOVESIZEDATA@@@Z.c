/*
 * XREFs of ?SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F0FB0
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01F470C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragOutThresholdAlways(struct _MOVESIZEDATA *a1)
{
  unsigned int v1; // edx
  int v2; // eax

  v1 = *((_DWORD *)a1 + 45);
  if ( (v1 & 0x30000) != 0 )
  {
    if ( (((*((_DWORD *)a1 + 45) & 0x38000) - 0x20000) & 0xFFFF7FFF) != 0 )
      return;
    v2 = ((v1 >> 15) - 2) << 15;
  }
  else
  {
    v2 = (v1 & 0xFFFF8000) + 0x10000;
  }
  *((_DWORD *)a1 + 45) = v1 ^ (v1 ^ v2) & 0x38000;
}
