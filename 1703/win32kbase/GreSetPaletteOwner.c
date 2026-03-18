/*
 * XREFs of GreSetPaletteOwner @ 0x1C008C910
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 */

__int64 __fastcall GreSetPaletteOwner(void *a1, int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a1 != gahStockObjects[15] )
    return (unsigned int)HmgSetOwner((__int64)a1, a2, 8);
  return v2;
}
