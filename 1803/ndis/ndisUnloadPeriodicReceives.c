/*
 * XREFs of ndisUnloadPeriodicReceives @ 0x1C011F894
 * Callers:
 *     ndisInitializePeriodicReceives @ 0x1C011EDC8 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005220 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C00052A0 (NdisAcquireRWLockWrite.c)
 *     NdisFreeNetBufferListPool @ 0x1C0012DA0 (NdisFreeNetBufferListPool.c)
 *     NdisFreeRWLock @ 0x1C0021BE0 (NdisFreeRWLock.c)
 *     memset @ 0x1C0026180 (memset.c)
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
      ExDeleteNPagedLookasideList(&stru_1C0098EC0);
      memset(&Lookaside, 0, 0x100uLL);
    }
    NdisReleaseRWLock(Lock, &LockState);
    NdisFreeRWLock(Lock);
    if ( v0 )
      NdisFreeNetBufferListPool(v0);
  }
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
  {
    ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
    WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  }
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  if ( qword_1C0098E00 )
  {
    ExFreePoolWithTag(qword_1C0098E00, 0);
    qword_1C0098E00 = 0LL;
  }
  if ( qword_1C0098DF8 )
  {
    ExFreePoolWithTag(qword_1C0098DF8, 0);
    qword_1C0098DF8 = 0LL;
  }
  if ( qword_1C0098DF0 )
  {
    ExFreePoolWithTag(qword_1C0098DF0, 0);
    qword_1C0098DF0 = 0LL;
  }
}
