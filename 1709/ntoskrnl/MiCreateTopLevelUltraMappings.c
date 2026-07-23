/*
 * XREFs of MiCreateTopLevelUltraMappings @ 0x1408525F8
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiInitializeUltraSpace @ 0x14085270C (MiInitializeUltraSpace.c)
 */

__int64 MiCreateTopLevelUltraMappings()
{
  __int64 v0; // rbx
  unsigned int v1; // edi
  PVOID PoolWithTag; // rax
  __int64 v3; // rsi
  __int16 v4; // bx
  __int64 v5; // rbp
  _SLIST_HEADER *v6; // rbx

  v0 = qword_140389B10;
  v1 = 0;
  if ( !(unsigned int)MiMakeZeroedPageTables(
                        (((unsigned __int64)qword_140389B10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                        (((unsigned __int64)qword_140389B10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 0x7FFFFFFF8LL,
                        6,
                        3) )
    return 0LL;
  if ( !(unsigned int)MiInitializeUltraSpace(&qword_140389038, v0) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNxCacheAligned,
                  (unsigned __int64)(unsigned __int16)KeNumberNodes << 9,
                  0x20206D4Du);
  v3 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  v4 = KeNumberNodes;
  memset(PoolWithTag, 0, (unsigned __int64)(unsigned __int16)KeNumberNodes << 9);
  if ( v4 )
  {
    do
    {
      v5 = 8LL;
      v6 = (_SLIST_HEADER *)(v3 + ((unsigned __int64)v1 << 9));
      do
      {
        InitializeSListHead(v6);
        v6 += 4;
        --v5;
      }
      while ( v5 );
      ++v1;
    }
    while ( v1 < (unsigned __int16)KeNumberNodes );
  }
  qword_140389080 = v3;
  return 1LL;
}
