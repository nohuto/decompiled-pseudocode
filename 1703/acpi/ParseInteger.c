/*
 * XREFs of ParseInteger @ 0x1C002887C
 * Callers:
 *     ParseArg @ 0x1C001681C (ParseArg.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 * Callees:
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall ParseInteger(const void **a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx

  v3 = a3;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)(a2 + 2) = 1;
  memmove((void *)(a2 + 16), *a1, a3);
  *a1 = (char *)*a1 + v3;
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf("0x%I64x");
  return 0LL;
}
