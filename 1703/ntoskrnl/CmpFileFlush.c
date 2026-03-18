/*
 * XREFs of CmpFileFlush @ 0x14066A86C
 * Callers:
 *     CmpFileFlushAndPurge @ 0x1404DB67C (CmpFileFlushAndPurge.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14066C518 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvWriteExternal @ 0x14066CD24 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x140673320 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x14017E8A0 (ZwFlushBuffersFile.c)
 */

char __fastcall CmpFileFlush(__int64 a1, unsigned int a2)
{
  void *v2; // rbx
  char result; // al
  NTSTATUS v4; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(void **)(a1 + 8LL * a2 + 2664);
  if ( !v2 )
    return 1;
  if ( CmpNoWrite )
    return 1;
  v4 = ZwFlushBuffersFile(v2, &IoStatusBlock);
  if ( v4 >= 0 )
    return 1;
  dword_1407ACDD8 = v4;
  result = 0;
  CmRegistryIODebug = 4;
  qword_1407ACDD0 = (__int64)v2;
  return result;
}
