/*
 * XREFs of sub_1800F43E0 @ 0x1800F43E0
 * Callers:
 *     sub_180067ACC @ 0x180067ACC (sub_180067ACC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F43E0(unsigned __int16 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (unsigned __int16)(*a1 + 10240) <= 0x7FFu )
    return (unsigned int)a1[1] + (((_DWORD)result - 55287) << 10);
  return result;
}
