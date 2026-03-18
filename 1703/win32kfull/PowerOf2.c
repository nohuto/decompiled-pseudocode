/*
 * XREFs of PowerOf2 @ 0x1C02BD448
 * Callers:
 *     fsc_CalcSpline @ 0x1C02CE6F4 (fsc_CalcSpline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PowerOf2(int a1)
{
  int v1; // eax

  v1 = abs32(a1);
  if ( v1 >= 0x10000 )
  {
    if ( v1 >= 0x1000000 )
    {
      if ( v1 >= 0x10000000 )
        return dword_1C02F4500[(__int64)v1 >> 28] + 28;
      else
        return dword_1C02F4500[(__int64)v1 >> 24] + 24;
    }
    else if ( v1 >= 0x100000 )
    {
      return dword_1C02F4500[(__int64)v1 >> 20] + 20;
    }
    else
    {
      return dword_1C02F4500[(__int64)v1 >> 16] + 16;
    }
  }
  else if ( v1 >= 256 )
  {
    if ( v1 >= 4096 )
      return dword_1C02F4500[(__int64)v1 >> 12] + 12;
    else
      return dword_1C02F4500[(__int64)v1 >> 8] + 8;
  }
  else if ( v1 >= 16 )
  {
    return dword_1C02F4500[(__int64)v1 >> 4] + 4;
  }
  else
  {
    return dword_1C02F4500[v1];
  }
}
