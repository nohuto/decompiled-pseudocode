/*
 * XREFs of sub_1800F5F7C @ 0x1800F5F7C
 * Callers:
 *     sub_1800694C8 @ 0x1800694C8 (sub_1800694C8.c)
 *     sub_180069548 @ 0x180069548 (sub_180069548.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F5F7C(__int64 a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)(a2 + (a2 >> 3));
  if ( (int)result < 64 )
  {
    result = (unsigned int)(a2 * *(_DWORD *)(a1 + 24));
    if ( (int)result > 64 )
      return 64LL;
  }
  return result;
}
