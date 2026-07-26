/*
 * XREFs of nullCreateFilter @ 0x1C00EAC8C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisAllocateRWLock @ 0x1C00033B0 (NdisAllocateRWLock.c)
 *     NdisFreeRWLock @ 0x1C001E4D0 (NdisFreeRWLock.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

char __fastcall nullCreateFilter(_QWORD *a1)
{
  char v2; // bl
  struct _NDIS_RW_LOCK_EX *RWLock; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rsi

  v2 = 0;
  RWLock = NdisAllocateRWLock(&ndisDummyObject);
  if ( RWLock )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x198uLL, 0x6670444Eu);
    *a1 = PoolWithTag;
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x198uLL);
      v5[36] = RWLock;
      return 1;
    }
    else
    {
      NdisFreeRWLock(RWLock);
    }
  }
  return v2;
}
