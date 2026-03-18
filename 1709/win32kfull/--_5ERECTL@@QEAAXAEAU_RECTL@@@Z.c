/*
 * XREFs of ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0018388
 * Callers:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C001C99C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     NtGdiPolyPatBlt @ 0x1C001DB00 (NtGdiPolyPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C454 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002C5DC (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00EEE3C (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     GreSetBoundsRect @ 0x1C010359C (GreSetBoundsRect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ERECTL::operator|=(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax
  __int64 result; // rax

  if ( *a2 < *a1 )
    *a1 = *a2;
  v2 = a2[1];
  if ( v2 < a1[1] )
    a1[1] = v2;
  v3 = a2[2];
  if ( v3 > a1[2] )
    a1[2] = v3;
  result = (unsigned int)a2[3];
  if ( (int)result > a1[3] )
    a1[3] = result;
  return result;
}
