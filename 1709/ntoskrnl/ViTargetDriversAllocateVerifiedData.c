/*
 * XREFs of ViTargetDriversAllocateVerifiedData @ 0x1407B7034
 * Callers:
 *     VfTargetDriversAdd @ 0x1400F9990 (VfTargetDriversAdd.c)
 *     VfTargetDriversEnableVerifier @ 0x1407B6A98 (VfTargetDriversEnableVerifier.c)
 * Callees:
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_SLIST_HEADER *__fastcall ViTargetDriversAllocateVerifiedData(unsigned __int64 a1)
{
  _SLIST_HEADER *PoolWithTag; // rax
  _SLIST_HEADER *v3; // rbx

  PoolWithTag = (_SLIST_HEADER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x44566656u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x120uLL);
    v3->Alignment = a1;
    v3[2].Region = 2557876544LL;
    v3[1].Region = (unsigned __int64)&v3[1];
    v3[1].Alignment = (unsigned __int64)&v3[1];
    InitializeSListHead(v3 + 3);
    InitializeSListHead(v3 + 4);
    v3[15].Alignment = (unsigned __int64)&v3[14].Region;
    v3[14].Region = (unsigned __int64)&v3[14].Region;
  }
  else
  {
    _InterlockedExchange(&ViTargetAllocationFailures, 1);
  }
  return v3;
}
