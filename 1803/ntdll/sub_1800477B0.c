/*
 * XREFs of sub_1800477B0 @ 0x1800477B0
 * Callers:
 *     sub_1800477EC @ 0x1800477EC (sub_1800477EC.c)
 * Callees:
 *     sub_180047A28 @ 0x180047A28 (sub_180047A28.c)
 */

__int64 __fastcall sub_1800477B0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  __int64 v4; // rdx

  if ( a3 >= *(unsigned __int16 *)(a2 + 12) + (unsigned int)*(unsigned __int16 *)(a2 + 14) )
    return 0LL;
  v3 = sub_180047A28(a1, a2 + 8LL * a3 + 16, 8LL);
  return v4 & -(__int64)(v3 != 0);
}
