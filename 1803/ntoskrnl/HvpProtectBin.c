/*
 * XREFs of HvpProtectBin @ 0x140566C48
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1404E31E4 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x140566210 (HvpAddBin.c)
 *     HvpMapHiveImage @ 0x1406F8484 (HvpMapHiveImage.c)
 * Callees:
 *     ExProtectPool @ 0x1400BD510 (ExProtectPool.c)
 */

__int64 __fastcall HvpProtectBin(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a4 )
  {
    if ( !(unsigned int)ExProtectPool(a3, a2, 4u) )
      return (unsigned int)-1073741670;
  }
  else
  {
    ExProtectPool(a3, a2, 2u);
  }
  return v4;
}
