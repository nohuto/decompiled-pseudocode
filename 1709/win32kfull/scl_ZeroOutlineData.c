/*
 * XREFs of scl_ZeroOutlineData @ 0x1C02B9C04
 * Callers:
 *     fsg_RunPreProgram @ 0x1C02C2388 (fsg_RunPreProgram.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

_WORD *__fastcall scl_ZeroOutlineData(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // edi
  size_t v4; // rbx
  _WORD *result; // rax

  v2 = a2;
  v4 = 4LL * a2;
  memset(*(void **)a1, 0, v4);
  memset(*(void **)(a1 + 16), 0, v4);
  memset(*(void **)(a1 + 32), 0, v4);
  memset(*(void **)(a1 + 8), 0, v4);
  memset(*(void **)(a1 + 24), 0, v4);
  memset(*(void **)(a1 + 40), 0, v4);
  memset(*(void **)(a1 + 48), 0, v2);
  memset(*(void **)(a1 + 72), 0, v2);
  **(_WORD **)(a1 + 56) = 0;
  result = *(_WORD **)(a1 + 64);
  *result = 0;
  return result;
}
