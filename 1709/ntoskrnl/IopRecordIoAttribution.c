/*
 * XREFs of IopRecordIoAttribution @ 0x140007A20
 * Callers:
 *     IoDiskIoAttributionQuery @ 0x1400075A0 (IoDiskIoAttributionQuery.c)
 *     IoRecordIoAttribution @ 0x140007860 (IoRecordIoAttribution.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall IopRecordIoAttribution(KSPIN_LOCK *a1, __int64 a2, char a3)
{
  int v3; // eax
  unsigned int v5; // ebx
  int v8; // r8d
  _QWORD *v9; // rsi
  KSPIN_LOCK v10; // rbp
  KSPIN_LOCK v11; // r13
  KSPIN_LOCK v12; // r15
  KSPIN_LOCK v13; // rcx
  KSPIN_LOCK v14; // rcx
  KSPIN_LOCK v15; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a2 + 4);
  v5 = 0;
  v8 = 0;
  if ( (unsigned __int8)v3 == 3 )
  {
    v9 = a1 + 10;
LABEL_3:
    v10 = *(_QWORD *)(a2 + 24);
    v11 = 0LL;
    v12 = 0LL;
    if ( (a3 & 2) == 0 )
    {
      KeAcquireInStackQueuedSpinLock(a1 + 5, &LockHandle);
      v8 = 1;
    }
    if ( (*(_DWORD *)(a2 + 4) & 0x100) != 0 )
    {
      v15 = a1[9];
      if ( !v15 || v10 < a1[8] )
        a1[8] = v10;
      a1[9] = v15 + 1;
      ++*v9;
    }
    else
    {
      if ( (a3 & 1) == 0 )
      {
        --a1[9];
        --*v9;
      }
      if ( (*(_DWORD *)(a2 + 4) & 0x200) == 0 )
      {
        v13 = *(_QWORD *)(a2 + 16);
        if ( a1[6] > v13 )
          v13 = a1[6];
        if ( v10 >= v13 )
        {
          a1[6] = v10;
          v11 = v10 - v13;
        }
        v10 = *(_QWORD *)(a2 + 16);
      }
      v14 = a1[8];
      if ( a1[7] > v14 )
        v14 = a1[7];
      if ( v10 >= v14 )
      {
        a1[7] = v10;
        v12 = v10 - v14;
      }
      v9[1] += v12;
      if ( (*(_DWORD *)(a2 + 4) & 0x200) == 0 )
      {
        v9[2] += v11;
        v9[3] += *(unsigned int *)(a2 + 8);
        v9[4] += (IopDiskIoAttributionBaseIoSize + *(_DWORD *)(a2 + 8) - 1)
               / (unsigned int)IopDiskIoAttributionBaseIoSize;
      }
    }
    if ( v8 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    return v5;
  }
  if ( (unsigned __int8)v3 == 4 )
  {
    v9 = a1 + 15;
    goto LABEL_3;
  }
  if ( (a3 & 1) == 0 )
    return (unsigned int)-1073741637;
  v9 = a1 + 10;
  if ( a1[10] )
    goto LABEL_3;
  v9 = a1 + 15;
  if ( a1[15] )
    goto LABEL_3;
  return v5;
}
