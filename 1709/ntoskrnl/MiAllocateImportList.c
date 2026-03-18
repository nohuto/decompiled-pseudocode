/*
 * XREFs of MiAllocateImportList @ 0x1405921C0
 * Callers:
 *     MiCompressImportList @ 0x1405920C0 (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x14059216C (MiPrepareImportList.c)
 *     MiApplyDriverHotPatch @ 0x1406E15C8 (MiApplyDriverHotPatch.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 *__fastcall MiAllocateImportList(unsigned __int64 a1)
{
  SIZE_T v2; // rsi
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v4; // rbx

  if ( a1 > 0x1FFFFFFE )
    return 0LL;
  v2 = (unsigned int)(8 * a1 + 8);
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, v2, 0x54446D4Du);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v2);
    *v4 = a1;
  }
  return v4;
}
