/*
 * XREFs of MiInitializeColorTable @ 0x14016228C
 * Callers:
 *     MiCreateZeroThreadContext @ 0x14016FEEC (MiCreateZeroThreadContext.c)
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 *     MiInitializeLargePageNodeLists @ 0x14061C24C (MiInitializeLargePageNodeLists.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeColorTable(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = a1;
  a1[3] = dword_1403CB6D8 & ExGenRandom(1) | (a2 << byte_1403CB699);
  v3 = 3LL;
  do
  {
    result = ExGenRandom(1);
    *v2++ = result;
    --v3;
  }
  while ( v3 );
  return result;
}
