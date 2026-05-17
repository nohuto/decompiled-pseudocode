/*
 * XREFs of sub_1800F6A9C @ 0x1800F6A9C
 * Callers:
 *     sub_180069760 @ 0x180069760 (sub_180069760.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F6A9C(unsigned __int16 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (unsigned __int16)(*a1 + 10240) <= 0x7FFu )
    return (unsigned int)a1[1] + (((_DWORD)result - 55287) << 10);
  return result;
}
