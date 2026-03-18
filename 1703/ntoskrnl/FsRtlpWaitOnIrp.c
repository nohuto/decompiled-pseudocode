/*
 * XREFs of FsRtlpWaitOnIrp @ 0x140136678
 * Callers:
 *     FsRtlpOplockBreakToII @ 0x14002FB30 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14003BE58 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14004E3D0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakNotify @ 0x1406858A8 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     IoCancelIrp @ 0x140018D10 (IoCancelIrp.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140136A3C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     FsRtlpCancelWaitingIrp @ 0x1401E3C78 (FsRtlpCancelWaitingIrp.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x1404AE970 (FsRtlCancellableWaitForSingleObject.c)
 */

__int64 __fastcall FsRtlpWaitOnIrp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, __int64),
        char *Object,
        char a7,
        _BYTE *a8)
{
  char v12; // r12
  _BYTE *v13; // rcx
  _QWORD *PoolWithTag; // rsi
  int v15; // eax
  _QWORD **v16; // r15
  _QWORD *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // edi
  NTSTATUS v20; // eax
  _QWORD *i; // rax
  _BYTE v23[7]; // [rsp+31h] [rbp-37h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-30h]
  _BYTE *v25; // [rsp+A8h] [rbp+40h]

  v12 = 1;
  v13 = v23;
  if ( a8 )
    v13 = a8;
  v25 = v13;
  *v13 = 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x38uLL, 0x6F725346u);
  v24 = PoolWithTag;
  PoolWithTag[2] = a2;
  if ( a2 )
    v15 = *(_DWORD *)(a2 + 56);
  else
    v15 = 0;
  *((_DWORD *)PoolWithTag + 12) = v15;
  *((_BYTE *)PoolWithTag + 52) = a7;
  if ( a4 )
  {
    PoolWithTag[3] = a4;
    PoolWithTag[4] = a3;
  }
  else
  {
    PoolWithTag[3] = FsRtlpOplockWaitCompleteRoutine;
    PoolWithTag[4] = Object;
    *(_WORD *)Object = 0;
    Object[2] = 6;
    *((_DWORD *)Object + 1) = 0;
    *((_QWORD *)Object + 2) = Object + 8;
    *((_QWORD *)Object + 1) = Object + 8;
  }
  if ( a5 )
    a5(a3, a2);
  v16 = (_QWORD **)(a1 + 88);
  v17 = *(_QWORD **)(a1 + 96);
  if ( *v17 != a1 + 88 )
    __fastfail(3u);
  *PoolWithTag = v16;
  PoolWithTag[1] = v17;
  *v17 = PoolWithTag;
  *(_QWORD *)(a1 + 96) = PoolWithTag;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 48) = 0;
    *(_BYTE *)(a2 + 69) = KeAcquireQueuedSpinLock(7uLL);
    *(_QWORD *)(a2 + 56) = a1;
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( a4 )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
        v19 = 259;
      }
      else
      {
        v19 = -1073741536;
      }
      *(_DWORD *)&v23[3] = v19;
      LOBYTE(v18) = 1;
      FsRtlpCancelWaitingIrp(a2, v18);
      goto LABEL_38;
    }
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpWaitingIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
    v12 = 1;
    PoolWithTag = v24;
  }
  if ( a4 )
  {
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v19 = 259;
    *(_DWORD *)&v23[3] = 259;
  }
  else
  {
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
    v12 = 0;
    v20 = FsRtlCancellableWaitForSingleObject(Object, 0LL, (PIRP)a2);
    v19 = v20;
    *(_DWORD *)&v23[3] = v20;
    if ( v20 == -1073741749 || v20 == -1073741536 )
    {
      if ( a2 )
      {
        IoCancelIrp((PIRP)a2);
      }
      else
      {
        ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 152));
        for ( i = *v16; i != v16; i = (_QWORD *)*i )
        {
          if ( PoolWithTag == i )
          {
            FsRtlpRemoveAndCompleteWaitingIrp(i);
            break;
          }
        }
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 152));
        v12 = 0;
      }
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      *v25 = 0;
    }
    else
    {
      if ( a2 )
      {
        v19 = *(_DWORD *)(a2 + 48);
        *(_DWORD *)&v23[3] = v19;
      }
      *v25 = 1;
    }
  }
LABEL_38:
  if ( v12 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v19;
}
