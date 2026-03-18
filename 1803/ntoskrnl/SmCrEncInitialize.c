/*
 * XREFs of SmCrEncInitialize @ 0x14052B4D0
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14007E138 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void *__fastcall SmCrEncInitialize(_DWORD *a1)
{
  void *result; // rax

  memset(a1, 0, 0x90uLL);
  a1[2] = 1;
  result = memset(a1 + 14, 0, 0x58uLL);
  a1[14] = 88;
  a1[15] = 1;
  return result;
}
