/*
 * XREFs of FracMul @ 0x1C02BD2A4
 * Callers:
 *     mth_FixXYMul @ 0x1C02BD740 (mth_FixXYMul.c)
 *     itrp_Normalize @ 0x1C02D7070 (itrp_Normalize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FracMul(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  bool v4; // sf
  __int64 v5; // rax
  int v6; // ecx
  unsigned __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // edx

  v2 = 0;
  if ( !a1 || !a2 )
    return 0LL;
  v3 = 1;
  v4 = a1 < 0;
  if ( a1 > 0 )
  {
    if ( a2 < 0 )
    {
LABEL_8:
      v2 = 1;
      goto LABEL_9;
    }
    v4 = a1 < 0;
  }
  if ( v4 && a2 > 0 )
    goto LABEL_8;
LABEL_9:
  v5 = a2 * (__int64)a1;
  if ( (v5 & 0x20000000) == 0 || (!v2 ? (v6 = 1) : (v6 = v5 & 0x1FFFFFFF), !v6) )
    v3 = 0;
  v7 = HIDWORD(v5);
  v8 = v3 + (v5 >> 30);
  if ( (v7 & 0xC0000000) != 0 )
  {
    v9 = 0x80000000;
    if ( (v7 & 0xC0000000) == 0xC0000000 )
    {
      if ( v8 <= 0 )
        return (unsigned int)v8;
    }
    else
    {
      return 0x80000000 - ((v7 & 0x80000000) != 0LL);
    }
  }
  else
  {
    v9 = 0x7FFFFFFF;
    if ( v8 >= 0 )
      return (unsigned int)v8;
  }
  return v9;
}
