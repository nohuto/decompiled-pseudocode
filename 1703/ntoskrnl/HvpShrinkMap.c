/*
 * XREFs of HvpShrinkMap @ 0x140676A20
 * Callers:
 *     HvpAddBin @ 0x14043A920 (HvpAddBin.c)
 * Callees:
 *     HvpFreeMap @ 0x140459130 (HvpFreeMap.c)
 */

__int64 __fastcall HvpShrinkMap(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 result; // rax
  unsigned int v8; // r10d
  unsigned int v9; // r9d

  v5 = a3;
  if ( !a4 )
  {
    v6 = 632LL * a2;
    if ( *(_QWORD *)(v6 + a1 + 1416) == *(_QWORD *)(v6 + a1 + 1408) )
      return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(a1 + 32))(
               *(_QWORD *)(v6 + a1 + 1416),
               20480LL,
               v6,
               v5);
  }
  result = 511LL;
  v8 = ((a4 >> 12) + 511) >> 9;
  v9 = (((unsigned int)v5 >> 12) + 511) >> 9;
  if ( v8 < v9 )
    return (__int64)HvpFreeMap(a1, *(_QWORD *)(632LL * a2 + a1 + 1408), v8, v9 - 1);
  return result;
}
