/*
 * XREFs of MiFreeLargeZeroPages @ 0x1406BEC28
 * Callers:
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 *     MiMapUserLargePages @ 0x1406BEE28 (MiMapUserLargePages.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x1400B6080 (MiFreeZeroPageSizeIndex.c)
 *     MiUpdateLargePageBitMap @ 0x14012761C (MiUpdateLargePageBitMap.c)
 *     MiInsertUnusedLargePageInNodeList @ 0x140221A88 (MiInsertUnusedLargePageInNodeList.c)
 */

_UNKNOWN **__fastcall MiFreeLargeZeroPages(__int64 a1, _QWORD **a2)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbp
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = 2LL;
  do
  {
    while ( *a2 )
    {
      v6 = *a2;
      *a2 = (_QWORD *)**a2;
      v7 = MiLargePageSizes[(unsigned int)MiFreeZeroPageSizeIndex((__int64)v6)];
      v9 = (v8 + 0x58000000000LL) / 48;
      MiUpdateLargePageBitMap(a1, v9, v7, 0, 1);
      result = (_UNKNOWN **)MiInsertUnusedLargePageInNodeList(v9, v7);
    }
    ++a2;
    --v5;
  }
  while ( v5 );
  return result;
}
