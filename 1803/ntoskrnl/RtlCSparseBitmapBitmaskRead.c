/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x14029D380
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x140294984 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpFreeHeap @ 0x140294A24 (RtlpHpFreeHeap.c)
 *     RtlpHpGetOwnerHeap @ 0x140294C68 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpMetadataCommit @ 0x140295C40 (RtlpHpMetadataCommit.c)
 *     RtlpHpSizeHeapInternal @ 0x140295F94 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( _bittest64((const signed __int64 *)a1, a2 >> 30) )
    v2 = (_bittest64(*(const signed __int64 **)(a1 + 8), a2 >> 15) != 0) + 1;
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
