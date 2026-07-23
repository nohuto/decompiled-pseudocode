/*
 * XREFs of sub_18000C24C @ 0x18000C24C
 * Callers:
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 * Callees:
 *     sub_18000C298 @ 0x18000C298 (sub_18000C298.c)
 *     sub_180089248 @ 0x180089248 (sub_180089248.c)
 */

__int64 __fastcall sub_18000C24C(_DWORD *a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = a1[30];
  if ( (v1 & 0x20000000) != 0 )
  {
    a1[30] = v1 & 0xDFFFFFFF;
    if ( (dword_18015C3B8 & 1) == 0 )
      sub_18000C298(a1);
  }
  result = (unsigned int)a1[30];
  if ( (result & 0x10000000) != 0 )
  {
    a1[30] = result & 0xEFFFFFFF;
    result = sub_180089248(a1);
    a1[30] &= ~0x10000000u;
  }
  return result;
}
