/*
 * XREFs of _TTLimitDeepTargetingPoint @ 0x1C023BD68
 * Callers:
 *     TouchTargetingRankForRectDeep @ 0x1C023B4FC (TouchTargetingRankForRectDeep.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TTLimitDeepTargetingPoint(int a1, int a2, int *a3)
{
  int v3; // r11d
  __int64 v5; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  int v10; // r8d
  int v11; // r9d

  v3 = *a3;
  v5 = a2;
  v7 = (__int64)((unsigned __int128)(a2 * (__int64)(int)abs32(a1 - *a3) * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 7;
  v8 = (v7 >> 63) + v7;
  result = v8 + 0x80000000;
  if ( v8 + 0x80000000 > 0xFFFFFFFF || (int)v8 > 200 )
  {
    v10 = 0x7FFFFFFF;
    result = 200000 / v5;
    if ( (unsigned __int64)(200000 / v5 + 0x80000000LL) <= 0xFFFFFFFF )
      v10 = 200000 / v5;
    if ( a1 <= v3 )
      v11 = v10 + a1;
    else
      v11 = a1 - v10;
    *a3 = v11;
  }
  return result;
}
