/*
 * XREFs of IopRecordIoAttribution @ 0x1400AE0C4
 * Callers:
 *     IoRecordIoAttribution @ 0x1400ADF00 (IoRecordIoAttribution.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall IopRecordIoAttribution(KSPIN_LOCK *a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // r14
  KSPIN_LOCK v6; // rdi
  unsigned int v7; // esi
  KSPIN_LOCK v8; // r12
  KSPIN_LOCK v9; // r15
  KSPIN_LOCK v10; // rax
  KSPIN_LOCK v12; // rcx
  KSPIN_LOCK v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  if ( (unsigned __int8)v2 == 3 )
  {
    v5 = (unsigned int)(unsigned __int8)v2 - 3 + 80;
  }
  else
  {
    if ( (unsigned __int8)v2 != 4 )
      return (unsigned int)-1073741637;
    v5 = 112LL;
  }
  v6 = *(_QWORD *)(a2 + 24);
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock(a1 + 5, &LockHandle);
  if ( (*(_DWORD *)(a2 + 4) & 0x100) != 0 )
  {
    v10 = a1[9];
    if ( !v10 || v6 < a1[8] )
      a1[8] = v6;
    a1[9] = v10 + 1;
  }
  else
  {
    --a1[9];
    if ( (*(_DWORD *)(a2 + 4) & 0x200) == 0 )
    {
      v12 = *(_QWORD *)(a2 + 16);
      if ( a1[6] > v12 )
        v12 = a1[6];
      if ( v6 >= v12 )
      {
        a1[6] = v6;
        v8 = v6 - v12;
      }
      v6 = *(_QWORD *)(a2 + 16);
    }
    v13 = a1[8];
    if ( a1[7] > v13 )
      v13 = a1[7];
    if ( v6 >= v13 )
    {
      a1[7] = v6;
      v9 = v6 - v13;
    }
    *(KSPIN_LOCK *)((char *)a1 + v5) += v9;
    if ( (*(_DWORD *)(a2 + 4) & 0x200) == 0 )
    {
      *(KSPIN_LOCK *)((char *)a1 + v5 + 8) += v8;
      *(KSPIN_LOCK *)((char *)a1 + v5 + 16) += *(unsigned int *)(a2 + 8);
      *(KSPIN_LOCK *)((char *)a1 + v5 + 24) += (IopDiskIoAttributionBaseIoSize + *(_DWORD *)(a2 + 8) - 1)
                                             / (unsigned int)IopDiskIoAttributionBaseIoSize;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v7;
}
