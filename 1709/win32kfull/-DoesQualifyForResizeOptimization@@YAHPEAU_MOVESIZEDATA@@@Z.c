/*
 * XREFs of ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C01D7ED0
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 */

__int64 __fastcall DoesQualifyForResizeOptimization(struct _MOVESIZEDATA *a1)
{
  __int64 v1; // r9
  _QWORD *v2; // r10
  __int64 v3; // r11
  __int64 v4; // rdx

  if ( (unsigned int)IsTopLevelWindow(*((_QWORD *)a1 + 2)) && (*(_DWORD *)(v3 + 200) & 2) == 0 )
  {
    v4 = v2[16] - v2[18];
    if ( !v4 )
      v4 = v2[17] - v2[19];
    if ( v4 && v2[27] == v1 )
      LODWORD(v1) = 1;
  }
  return (unsigned int)v1;
}
