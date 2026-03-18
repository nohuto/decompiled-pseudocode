/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x1402215A8
 * Callers:
 *     MiInsertUnusedSubsection @ 0x140016540 (MiInsertUnusedSubsection.c)
 *     MiAppendSubsectionChain @ 0x14005E4A0 (MiAppendSubsectionChain.c)
 *     MiConvertStaticSubsections @ 0x140098A60 (MiConvertStaticSubsections.c)
 *     MiIncrementSubsectionViewCount @ 0x14009A170 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8E30 (MiDecrementSubsectionViewCount.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUpdateSubsectionCrossPartitionRefs(_DWORD *a1, int a2)
{
  unsigned __int64 result; // rax

  result = (a2 ^ a1[12]) & 0x3FFFFFFF ^ (unsigned __int64)(unsigned int)a1[12];
  *((_QWORD *)a1 + 6) = result;
  if ( a2 == 0x3FFFFFFF )
  {
    result = *(_QWORD *)a1;
    *(_BYTE *)(*(_QWORD *)a1 + 62LL) |= 2u;
  }
  return result;
}
