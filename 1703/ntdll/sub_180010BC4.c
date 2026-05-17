/*
 * XREFs of sub_180010BC4 @ 0x180010BC4
 * Callers:
 *     sub_18001094C @ 0x18001094C (sub_18001094C.c)
 * Callees:
 *     sub_180010B8C @ 0x180010B8C (sub_180010B8C.c)
 */

__int64 __fastcall sub_180010BC4(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  BOOL v3; // eax
  __int64 v4; // rdx

  if ( a3 >= *(unsigned __int16 *)(a2 + 12) + (unsigned int)*(unsigned __int16 *)(a2 + 14) )
    return 0LL;
  v3 = sub_180010B8C(a1, a2 + 8LL * a3 + 16, 8LL);
  return v4 & -(__int64)v3;
}
