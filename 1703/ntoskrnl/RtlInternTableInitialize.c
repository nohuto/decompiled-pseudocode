/*
 * XREFs of RtlInternTableInitialize @ 0x1406EF2E8
 * Callers:
 *     PopEtInit @ 0x140826858 (PopEtInit.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall RtlInternTableInitialize(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = a2;
  return result;
}
