/*
 * XREFs of ndisUnloadPeriodicReceives @ 0x1C011DE44
 * Callers:
 *     ndisInitializePeriodicReceives @ 0x1C011C448 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     NdisFreeNetBufferListPool @ 0x1C0002250 (NdisFreeNetBufferListPool.c)
 *     NdisReleaseRWLock @ 0x1C000F620 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C000F6A0 (NdisAcquireRWLockWrite.c)
 *     NdisFreeRWLock @ 0x1C001E4D0 (NdisFreeRWLock.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

void ndisUnloadPeriodicReceives()
{
  void *v0; // rbx
  NDIS_HANDLE v1; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  if ( Lock )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    v1 = PoolHandle;
    if ( PoolHandle )
    {
      PoolHandle = 0LL;
      v0 = v1;
    }
    if ( ndisPeriodicReceives == 1 )
    {
      ndisPeriodicReceives = 0;
      ExDeleteNPagedLookasideList(&Lookaside);
      ExDeleteNPagedLookasideList(&stru_1C0098000);
      memset(&Lookaside, 0, 0x100uLL);
    }
    NdisReleaseRWLock(Lock, &LockState);
    NdisFreeRWLock(Lock);
    if ( v0 )
      NdisFreeNetBufferListPool(v0);
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    ExFreePoolWithTag(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 0);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0LL;
  }
  if ( qword_1C0097F48 )
  {
    ExFreePoolWithTag(qword_1C0097F48, 0);
    qword_1C0097F48 = 0LL;
  }
  if ( qword_1C0097F40 )
  {
    ExFreePoolWithTag(qword_1C0097F40, 0);
    qword_1C0097F40 = 0LL;
  }
  if ( qword_1C0097F38 )
  {
    ExFreePoolWithTag(qword_1C0097F38, 0);
    qword_1C0097F38 = 0LL;
  }
  if ( qword_1C0097F30 )
  {
    ExFreePoolWithTag(qword_1C0097F30, 0);
    qword_1C0097F30 = 0LL;
  }
}
