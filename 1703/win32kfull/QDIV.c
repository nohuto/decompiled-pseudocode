/*
 * XREFs of QDIV @ 0x1C02B1714
 * Callers:
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02B17EC (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall QDIV(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rtt

  v3 = *a2;
  v4 = *a2 >> 63;
  if ( (*a2 & 0x8000000000000000uLL) != 0LL )
    v3 = -(__int64)v3;
  v7 = v3;
  result = v3 / a3;
  v6 = v7 % a3;
  *a1 = result;
  if ( (_DWORD)v4 )
  {
    result = -(__int64)result;
    *a1 = result;
    if ( v6 )
    {
      *a1 = --result;
      a1[1] = a3 - v6;
    }
    else
    {
      a1[1] = 0LL;
    }
  }
  else
  {
    a1[1] = v6;
  }
  return result;
}
