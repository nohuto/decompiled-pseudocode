/*
 * XREFs of EtwpQueueNotification @ 0x14058E080
 * Callers:
 *     EtwpSendDataBlock @ 0x14058DED0 (EtwpSendDataBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PsChargeProcessWakeCounter @ 0x14057FFB0 (PsChargeProcessWakeCounter.c)
 *     EtwpReleaseQueueEntry @ 0x14058DCDC (EtwpReleaseQueueEntry.c)
 *     EtwpAddDataSource @ 0x14058E2E0 (EtwpAddDataSource.c)
 */

__int64 __fastcall EtwpQueueNotification(__int64 Object, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int16 v5; // r12
  char v8; // r13
  __int64 v9; // r14
  PVOID PoolWithTag; // rax
  signed __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r9
  _QWORD *v14; // rdx
  _QWORD *v15; // r8
  signed __int64 *v16; // rax
  struct _KEVENT *v18; // rcx
  void *v19; // rbx
  unsigned int v20; // edx

  v3 = 0;
  v5 = *(_WORD *)(a3 + 98) & 0x100;
  v8 = 1;
  v9 = EtwpAddDataSource();
  if ( v9
    && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72777445u),
        (v11 = (signed __int64)PoolWithTag) != 0) )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    *(_QWORD *)(v11 + 16) = a2;
    *(_QWORD *)(v11 + 24) = a3;
    *(_WORD *)(v11 + 48) = *(_WORD *)(a3 + 96);
    *(_DWORD *)(v11 + 52) = 1;
    if ( !*(_BYTE *)(a2 + 12) )
      goto LABEL_4;
    v19 = *(void **)(a2 + 24);
    *(_DWORD *)(v11 + 52) |= 2u;
    ObfReferenceObject(v19);
    *(_QWORD *)(v11 + 32) = v19;
    *(_QWORD *)(v11 + 40) = PsChargeProcessWakeCounter(Object, 1, 3u, a3);
    v20 = 0;
    v3 = -1073741823;
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8LL * v20 + 48), v11, 0LL) )
    {
      if ( ++v20 >= 4 )
        goto LABEL_20;
    }
    *(_WORD *)(v11 + 50) = v20;
    v3 = 0;
LABEL_20:
    if ( v3 < 0 )
    {
      EtwpReleaseQueueEntry((char *)v11, 3);
    }
    else
    {
LABEL_4:
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
      v14 = (_QWORD *)(v9 + 24);
      v15 = *(_QWORD **)(v9 + 24);
      if ( v15 != (_QWORD *)(v9 + 24) )
      {
        LOBYTE(v13) = v5 != 0;
        while ( (v5 != 0) != (*(_BYTE *)(v15[3] + 99LL) & 1) )
        {
          v15 = (_QWORD *)*v15;
          if ( v15 == v14 )
            goto LABEL_8;
        }
        v8 = 0;
      }
LABEL_8:
      v16 = *(signed __int64 **)(v9 + 32);
      if ( (_QWORD *)*v16 != v14 )
        __fastfail(3u);
      *(_QWORD *)v11 = v14;
      *(_QWORD *)(v11 + 8) = v16;
      *v16 = v11;
      *(_QWORD *)(v9 + 32) = v11;
      if ( v8 )
      {
        if ( v5 )
          v18 = *(struct _KEVENT **)(v9 + 8);
        else
          v18 = *(struct _KEVENT **)v9;
        if ( v18 )
          KeSetEvent(v18, 1, 0);
      }
      ExReleasePushLockEx(v9 + 16, 0LL, (__int64)v15, v13);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
