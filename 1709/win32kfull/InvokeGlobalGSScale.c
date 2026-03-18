/*
 * XREFs of InvokeGlobalGSScale @ 0x1C02B7B40
 * Callers:
 *     fs__Contour @ 0x1C02B60DC (fs__Contour.c)
 *     scl_CalcComponentOffset @ 0x1C02B7E88 (scl_CalcComponentOffset.c)
 *     itrp_Execute @ 0x1C02CB118 (itrp_Execute.c)
 *     itrp_LSW @ 0x1C02CE910 (itrp_LSW.c)
 *     itrp_MD @ 0x1C02CEC40 (itrp_MD.c)
 *     itrp_MDRP @ 0x1C02CF350 (itrp_MDRP.c)
 *     itrp_WCVTFOD @ 0x1C02D4CD0 (itrp_WCVTFOD.c)
 * Callees:
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 */

__int64 __fastcall InvokeGlobalGSScale(int a1, int *a2, int a3)
{
  int v3; // ecx
  int v4; // ecx
  int v6; // r9d

  v3 = a1 - 1;
  if ( !v3 )
    return (unsigned int)(((a2[1] >> 1) + a3 * a2[2]) >> a2[3]);
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      return FixMul(a3, *a2);
    }
    else
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      return 0LL;
    }
  }
  else
  {
    v6 = a2[1];
    if ( a3 >= 0 )
      return (unsigned int)(((v6 >> 1) + a3 * a2[2]) / v6);
    else
      return (unsigned int)-(((v6 >> 1) - a3 * a2[2]) / v6);
  }
}
