/*
 * XREFs of EtwpQueueNotification @ 0x140553790
 * Callers:
 *     EtwpSendDataBlock @ 0x1405535DC (EtwpSendDataBlock.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PsChargeProcessWakeCounter @ 0x1404C80E0 (PsChargeProcessWakeCounter.c)
 *     EtwpAddDataSource @ 0x140553948 (EtwpAddDataSource.c)
 *     EtwpReleaseQueueEntry @ 0x140553D7C (EtwpReleaseQueueEntry.c)
 */

__int64 __fastcall EtwpQueueNotification(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r13
  char v4; // r15
  int v8; // ebx
  __int64 v9; // r14
  PVOID PoolWithTag; // rax
  _QWORD *v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // rdx
  _QWORD *i; // r8
  _QWORD *v15; // rax
  struct _KEVENT *v16; // rcx
  void *v18; // rbx
  __int64 v19; // rdx

  v3 = 1;
  v4 = *(_BYTE *)(a3 + 99) & 1;
  v8 = 0;
  v9 = EtwpAddDataSource(a1);
  if ( v9 && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72777445u), (v11 = PoolWithTag) != 0LL) )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v11[2] = a2;
    v11[3] = a3;
    *((_WORD *)v11 + 24) = *(_WORD *)(a3 + 96);
    *((_DWORD *)v11 + 13) = 1;
    if ( !*(_BYTE *)(a2 + 12) )
      goto LABEL_4;
    v18 = *(void **)(a2 + 24);
    *((_DWORD *)v11 + 13) |= 2u;
    ObfReferenceObject(v18);
    v11[4] = v18;
    v11[5] = PsChargeProcessWakeCounter(a1, 1, 3, a3);
    v19 = 0LL;
    v8 = -1073741823;
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8 * v19 + 48), (signed __int64)v11, 0LL) )
    {
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= 4 )
        goto LABEL_20;
    }
    *((_WORD *)v11 + 25) = v19;
    v8 = 0;
LABEL_20:
    if ( v8 < 0 )
    {
      EtwpReleaseQueueEntry(v11);
    }
    else
    {
LABEL_4:
      _InterlockedAdd((volatile signed __int32 *)(a2 + 8), 1u);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
      v13 = (_QWORD *)(v9 + 24);
      for ( i = *(_QWORD **)(v9 + 24); i != v13; i = (_QWORD *)*i )
      {
        if ( v4 == (*(_BYTE *)(i[3] + 99LL) & 1) )
        {
          v3 = 0;
          break;
        }
      }
      v15 = *(_QWORD **)(v9 + 32);
      if ( (_QWORD *)*v15 != v13 )
        __fastfail(3u);
      *v11 = v13;
      v11[1] = v15;
      *v15 = v11;
      *(_QWORD *)(v9 + 32) = v11;
      if ( v3 )
      {
        if ( v4 )
          v16 = *(struct _KEVENT **)(v9 + 8);
        else
          v16 = *(struct _KEVENT **)v9;
        if ( v16 )
          KeSetEvent(v16, 1, 0);
      }
      ExReleasePushLockEx(v9 + 16, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
