/*
 * XREFs of MiDeleteMappedMdls @ 0x140218CF0
 * Callers:
 *     MiMappedPageWriter @ 0x140148710 (MiMappedPageWriter.c)
 *     MiEnablePartitionMappedWrites @ 0x1404F9CA4 (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     MiFreeModWriterEntry @ 0x1400EFDA4 (MiFreeModWriterEntry.c)
 */

void __fastcall MiDeleteMappedMdls(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rcx
  __int64 v3; // rax

  v1 = a1 + 616;
  while ( *(_QWORD *)v1 != v1 )
  {
    v2 = *(_QWORD **)v1;
    if ( *(_QWORD *)(*(_QWORD *)v1 + 8LL) != v1 || (v3 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *(_QWORD *)v1 = v3;
    *(_QWORD *)(v3 + 8) = v1;
    MiFreeModWriterEntry(v2, 1u);
  }
}
