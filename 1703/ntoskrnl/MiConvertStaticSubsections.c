/*
 * XREFs of MiConvertStaticSubsections @ 0x140098A60
 * Callers:
 *     MiInsertUnusedSegment @ 0x140098DC0 (MiInsertUnusedSegment.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x1400A8D90 (MiRemoveViewsFromSection.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1402215A8 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiConvertStaticSubsections(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx

  v1 = a1 + 128;
  v2 = 0LL;
  do
  {
    if ( (*(_WORD *)(v1 + 34) & 8) == 0 && (*(_WORD *)(v1 + 34) & 1) != 0 )
    {
      if ( (*(_DWORD *)(v1 + 48) & 0x3FFFFFFF) != 0 )
      {
        MiUpdateSubsectionCrossPartitionRefs(v1, 0x3FFFFFFFLL);
        v4 = 24LL;
      }
      else
      {
        v4 = 4LL;
      }
      v5 = *(unsigned int *)(v1 + 44);
      *(_WORD *)(v1 + 34) &= ~1u;
      *(_QWORD *)(v1 + 96) = 1LL;
      v2 += MiRemoveViewsFromSection(v1, v5, v4);
    }
    v1 = *(_QWORD *)(v1 + 16);
  }
  while ( v1 );
  return v2;
}
