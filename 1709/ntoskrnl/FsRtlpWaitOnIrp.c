/*
 * XREFs of FsRtlpWaitOnIrp @ 0x14000E0E8
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400868E0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1401278C4 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14013065C (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakNotify @ 0x1406B0CA8 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14000EFA8 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     IoCancelIrp @ 0x140108640 (IoCancelIrp.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     FsRtlpCancelWaitingIrp @ 0x1401E80A8 (FsRtlpCancelWaitingIrp.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x1404F4C60 (FsRtlCancellableWaitForSingleObject.c)
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
  __int64 v15; // rax
  bool v16; // cl
  _QWORD **v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // edi
  NTSTATUS v21; // eax
  _QWORD *i; // rax
  _BYTE v24[7]; // [rsp+31h] [rbp-37h] BYREF
  _QWORD *v25; // [rsp+38h] [rbp-30h]
  _BYTE *v26; // [rsp+A8h] [rbp+40h]

  v12 = 1;
  v13 = v24;
  if ( a8 )
    v13 = a8;
  v26 = v13;
  *v13 = 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x40uLL, 0x6F725346u);
  v25 = PoolWithTag;
  memset(PoolWithTag, 0, 0x40uLL);
  if ( a2 )
  {
    v15 = *(_QWORD *)(a2 + 184);
    PoolWithTag[2] = a2;
    *((_DWORD *)PoolWithTag + 12) = *(_DWORD *)(a2 + 56);
    v16 = *(_BYTE *)v15 == 13 && *(_DWORD *)(v15 + 24) == 589844;
    *((_BYTE *)PoolWithTag + 53) = v16;
    PoolWithTag[7] = *(_QWORD *)(v15 + 48);
  }
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
  v17 = (_QWORD **)(a1 + 88);
  v18 = *(_QWORD **)(a1 + 96);
  if ( *v18 != a1 + 88 )
    __fastfail(3u);
  *PoolWithTag = v17;
  PoolWithTag[1] = v18;
  *v18 = PoolWithTag;
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
        v20 = 259;
      }
      else
      {
        v20 = -1073741536;
      }
      *(_DWORD *)&v24[3] = v20;
      LOBYTE(v19) = 1;
      FsRtlpCancelWaitingIrp(a2, v19);
      goto LABEL_41;
    }
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpWaitingIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
    v12 = 1;
    PoolWithTag = v25;
  }
  if ( a4 )
  {
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v20 = 259;
    *(_DWORD *)&v24[3] = 259;
  }
  else
  {
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
    v12 = 0;
    v21 = FsRtlCancellableWaitForSingleObject(Object, 0LL, (PIRP)a2);
    v20 = v21;
    *(_DWORD *)&v24[3] = v21;
    if ( v21 == -1073741749 || v21 == -1073741536 )
    {
      if ( a2 )
      {
        IoCancelIrp((PIRP)a2);
      }
      else
      {
        ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 152));
        for ( i = *v17; i != v17; i = (_QWORD *)*i )
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
      *v26 = 0;
    }
    else
    {
      if ( a2 )
      {
        v20 = *(_DWORD *)(a2 + 48);
        *(_DWORD *)&v24[3] = v20;
      }
      *v26 = 1;
    }
  }
LABEL_41:
  if ( v12 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v20;
}
