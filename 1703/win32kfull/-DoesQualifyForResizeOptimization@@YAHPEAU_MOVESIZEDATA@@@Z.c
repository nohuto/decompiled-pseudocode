/*
 * XREFs of ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C01F01BC
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall DoesQualifyForResizeOptimization(struct _MOVESIZEDATA *a1)
{
  __int64 v2; // r10
  _QWORD *v3; // r11
  __int64 v4; // rdx

  if ( (unsigned int)IsTopLevelWindow(*(_QWORD *)a1) && (*((_DWORD *)a1 + 46) & 2) == 0 )
  {
    v4 = v3[16] - v3[18];
    if ( !v4 )
      v4 = v3[17] - v3[19];
    if ( v4 && v3[27] == v2 )
      LODWORD(v2) = 1;
  }
  return (unsigned int)v2;
}
