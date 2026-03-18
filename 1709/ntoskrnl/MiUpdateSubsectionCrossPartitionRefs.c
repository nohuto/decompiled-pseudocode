/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x14022E260
 * Callers:
 *     MiDeleteControlArea @ 0x14001F4A4 (MiDeleteControlArea.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A1430 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A1FF0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x1400B779C (MiInsertUnusedSubsection.c)
 *     MiAppendSubsectionChain @ 0x140110780 (MiAppendSubsectionChain.c)
 *     MiConvertStaticSubsections @ 0x14011CF9C (MiConvertStaticSubsections.c)
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
