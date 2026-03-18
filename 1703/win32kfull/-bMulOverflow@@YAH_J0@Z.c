/*
 * XREFs of ?bMulOverflow@@YAH_J0@Z @ 0x1C02B2A3C
 * Callers:
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02B17EC (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMulOverflow(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  bool v3; // cc
  __int64 v5; // rax

  v2 = a2;
  if ( a1 && a2 )
  {
    if ( (a2 ^ a1) >= 0 )
    {
      if ( a1 <= 0 )
      {
        if ( a1 == 0x8000000000000000uLL || a2 == 0x8000000000000000uLL )
          return 1LL;
        v5 = (__int64)0x8000000000000001uLL / a1;
        v2 = -a2;
      }
      else
      {
        v5 = 0x7FFFFFFFFFFFFFFFLL / a1;
      }
      v3 = v5 < v2;
    }
    else if ( a1 >= 0 )
    {
      v3 = a2 < (__int64)0x8000000000000000uLL / a1;
    }
    else
    {
      v3 = a1 < (__int64)0x8000000000000000uLL / a2;
    }
    if ( v3 )
      return 1LL;
  }
  return 0LL;
}
