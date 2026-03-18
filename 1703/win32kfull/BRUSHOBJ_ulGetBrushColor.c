/*
 * XREFs of BRUSHOBJ_ulGetBrushColor @ 0x1C009B500
 * Callers:
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C009B400 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall BRUSHOBJ_ulGetBrushColor(BRUSHOBJ *pbo)
{
  FLONG flColorType; // eax

  if ( ((__int64)pbo[5].pvRbrush & 0x10) == 0 )
    return -1;
  flColorType = pbo->flColorType;
  if ( (flColorType & 8) != 0 && (pbo->flColorType = flColorType & 0xFFFFFFF7, (pbo[3].iSolidColor & 1) != 0) )
    return *(&pbo[5].flColorType + 1);
  else
    return pbo[1].iSolidColor;
}
