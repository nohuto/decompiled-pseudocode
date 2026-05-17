/*
 * XREFs of LdrFindEntryForAddress @ 0x180054400
 * Callers:
 *     sub_180054094 @ 0x180054094 (sub_180054094.c)
 *     sub_1800541C8 @ 0x1800541C8 (sub_1800541C8.c)
 *     LdrInitShimEngineDynamic @ 0x1800CC730 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_180054448 @ 0x180054448 (sub_180054448.c)
 */

__int64 __fastcall LdrFindEntryForAddress(__int64 a1, unsigned __int64 *a2)
{
  int v3; // ebx
  unsigned __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    v3 = sub_180054448(a1, &v7, &v6);
    if ( v3 >= 0 )
    {
      v4 = v7;
      *a2 = v7;
      sub_18001F5FC(v4);
    }
  }
  else
  {
    return (unsigned int)-1073741515;
  }
  return (unsigned int)v3;
}
