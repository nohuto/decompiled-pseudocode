/*
 * XREFs of sub_1800F83B8 @ 0x1800F83B8
 * Callers:
 *     sub_18006B0F8 @ 0x18006B0F8 (sub_18006B0F8.c)
 *     sub_18006B178 @ 0x18006B178 (sub_18006B178.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F83B8(__int64 a1, int a2)
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
