/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x140268404
 * Callers:
 *     MiDeleteControlArea @ 0x14004B068 (MiDeleteControlArea.c)
 *     MiAppendSubsectionChain @ 0x14004D030 (MiAppendSubsectionChain.c)
 *     MiConvertStaticSubsections @ 0x1400E3F54 (MiConvertStaticSubsections.c)
 *     MiInsertUnusedSubsection @ 0x1400E41E4 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400E5400 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x1400E5E20 (MiIncrementSubsectionViewCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateSubsectionCrossPartitionRefs(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = a1[12] ^ (a1[12] ^ a2) & 0x3FFFFFFFu;
  a1[12] = result;
  if ( a2 == 0x3FFFFFFF )
  {
    result = *(_QWORD *)a1;
    *(_BYTE *)(*(_QWORD *)a1 + 62LL) |= 2u;
  }
  return result;
}
