/*
 * XREFs of CmpFileFlush @ 0x140498590
 * Callers:
 *     HvLoadHive @ 0x140496B18 (HvLoadHive.c)
 *     CmpFileFlushAndPurge @ 0x14049968C (CmpFileFlushAndPurge.c)
 *     HvWriteExternal @ 0x1406FB84C (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x140703540 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileFlush @ 0x140006EB0 (CmpDoFileFlush.c)
 */

NTSTATUS __fastcall CmpFileFlush(__int64 a1, unsigned int a2)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8LL * a2 + 1536);
  if ( v2 )
    return CmpDoFileFlush(v2);
  else
    return 0;
}
