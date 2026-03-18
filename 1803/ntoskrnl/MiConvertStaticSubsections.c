/*
 * XREFs of MiConvertStaticSubsections @ 0x1400E3F54
 * Callers:
 *     MiInsertUnusedSegment @ 0x1400E44A8 (MiInsertUnusedSegment.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x1400E503C (MiRemoveViewsFromSection.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140268404 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiConvertStaticSubsections(__int64 a1)
{
  __int64 v1; // rdi
  ULONG_PTR v2; // rbx
  __int16 v3; // cx

  v1 = 0LL;
  v2 = a1 + 128;
  do
  {
    v3 = *(_WORD *)(v2 + 34);
    if ( (v3 & 8) == 0 )
    {
      if ( (v3 & 1) != 0 )
      {
        if ( (*(_DWORD *)(v2 + 48) & 0x3FFFFFFF) != 0 )
        {
          MiUpdateSubsectionCrossPartitionRefs(v2, 0x3FFFFFFFLL);
          v3 = *(_WORD *)(v2 + 34);
        }
        *(_QWORD *)(v2 + 96) = 1LL;
        *(_WORD *)(v2 + 34) = v3 & 0xFFFE;
        v1 += MiRemoveViewsFromSection(v2);
      }
      else if ( *(_QWORD *)(v2 + 8) && !*(_QWORD *)(v2 + 96) )
      {
        KeBugCheckEx(0x1Au, 0x42003uLL, v2, 0LL, 0LL);
      }
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v2 );
  return v1;
}
