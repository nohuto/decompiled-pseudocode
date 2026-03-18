/*
 * XREFs of RtlInternTableInitialize @ 0x140727668
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
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
