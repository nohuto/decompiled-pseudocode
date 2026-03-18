/*
 * XREFs of CcGetPartitionFromFileObject @ 0x1400AB504
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x140028FB8 (CcWaitForUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     CcSetFileSizesEx @ 0x1400AA8C0 (CcSetFileSizesEx.c)
 *     CcCanIWriteStream @ 0x1400AE444 (CcCanIWriteStream.c)
 *     CcChangeBackingFileObject @ 0x14014A840 (CcChangeBackingFileObject.c)
 *     CcDeferWrite @ 0x1401DD930 (CcDeferWrite.c)
 * Callees:
 *     <none>
 */

void *__fastcall CcGetPartitionFromFileObject(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  void *result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return &CcSystemPartition;
  v2 = *(_QWORD *)(v1 + 8);
  if ( !v2 )
    return &CcSystemPartition;
  result = *(void **)(v2 + 528);
  if ( !result )
    return &CcSystemPartition;
  return result;
}
