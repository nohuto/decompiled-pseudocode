/*
 * XREFs of ?ndisBindInitialize@@YAJXZ @ 0x1C011B70C
 * Callers:
 *     DriverEntry @ 0x1C011A0D0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C00F9C84 (--0KPushLock@@QEAA@XZ.c)
 */

__int64 ndisBindInitialize(void)
{
  PVOID PoolWithTag; // rax
  __int64 v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x6762444Eu);
  v1 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    KPushLock::KPushLock((KPushLock *)v1);
    KPushLock::KPushLock((KPushLock *)(v1 + 8));
    KPushLock::KPushLock((KPushLock *)(v1 + 16));
    *(_DWORD *)(v1 + 24) = 0;
    *(_DWORD *)(v1 + 28) = 0;
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_DWORD *)(v1 + 40) = 0;
    *(_DWORD *)(v1 + 44) = 0;
    *(_QWORD *)(v1 + 48) = 0LL;
  }
  else
  {
    v1 = 0LL;
  }
  qword_1C0098800 = v1;
  return v1 == 0 ? 0xC000009A : 0;
}
