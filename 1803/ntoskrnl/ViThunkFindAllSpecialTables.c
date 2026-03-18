/*
 * XREFs of ViThunkFindAllSpecialTables @ 0x140824188
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140823C64 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkReplaceAllThunkedImports @ 0x14082444C (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ViThunkFindNextSpecialTable @ 0x140824238 (ViThunkFindNextSpecialTable.c)
 */

_QWORD *__fastcall ViThunkFindAllSpecialTables(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 NextSpecialTable; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rsi

  v2 = a2;
  NextSpecialTable = ViThunkFindNextSpecialTable(a1, a2);
  if ( !NextSpecialTable )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(ViVerifierSpecialThunkTables + 1), 0x74566D4Du);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 8LL * (unsigned int)(ViVerifierSpecialThunkTables + 1));
  v8 = 0LL;
  do
  {
    v7[v8] = NextSpecialTable;
    v8 = (unsigned int)(v8 + 1);
    NextSpecialTable = ViThunkFindNextSpecialTable(a1, v2);
  }
  while ( NextSpecialTable );
  return v7;
}
