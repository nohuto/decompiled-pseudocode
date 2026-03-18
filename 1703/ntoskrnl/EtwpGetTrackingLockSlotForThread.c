/*
 * XREFs of EtwpGetTrackingLockSlotForThread @ 0x140255BD8
 * Callers:
 *     PerfLogExecutiveResourceAcquire @ 0x140255D0C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceRelease @ 0x140255ECC (PerfLogExecutiveResourceRelease.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1402560C4 (PerfLogExecutiveResourceSetOwnerPointer.c)
 *     PerfLogExecutiveResourceWait @ 0x1402561E0 (PerfLogExecutiveResourceWait.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall EtwpGetTrackingLockSlotForThread(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 Thread; // rbx
  int v7; // ebp
  PVOID PoolWithTag; // rax
  signed __int64 v9; // rdi
  signed __int64 v10; // rax
  int v11; // ecx
  int v12; // edx

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    return 0LL;
  Thread = (signed __int64)CurrentThread[1].WaitBlock[0].Thread;
  v7 = EtwpEthreadSyncTrackingSequence;
  if ( !Thread )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x200uLL, 0x72546552u);
    v9 = (signed __int64)PoolWithTag;
    if ( !PoolWithTag )
      return 0LL;
    memset(PoolWithTag, 0, 0x200uLL);
    *(_QWORD *)(v9 + 16) = a1;
    *(_DWORD *)(v9 + 28) = a2;
    *(_DWORD *)(v9 + 32) = 0;
    *(_DWORD *)(v9 + 40) = v7;
    Thread = _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlock[0].Thread, v9, 0LL);
    if ( !Thread )
      return v9;
    ExFreePoolWithTag((PVOID)v9, 0);
  }
  v10 = 0LL;
  v11 = 0;
  while ( 1 )
  {
    v12 = *(_DWORD *)(Thread + 28);
    if ( v12 == a2 && *(_QWORD *)(Thread + 16) == a1 && *(_DWORD *)(Thread + 40) == v7 )
      return Thread;
    if ( !v10 )
    {
      if ( v12 )
      {
        if ( *(_DWORD *)(Thread + 40) < v7 )
        {
          v10 = Thread;
LABEL_19:
          Thread = v10;
          if ( v10 )
          {
            *(_QWORD *)(v10 + 16) = a1;
            *(_DWORD *)(v10 + 28) = a2;
            *(_QWORD *)(v10 + 32) = 0LL;
            *(_QWORD *)v10 = 0LL;
            *(_QWORD *)(v10 + 8) = 0LL;
            *(_DWORD *)(v10 + 24) = 0;
            *(_DWORD *)(v10 + 40) = v7;
            *(_DWORD *)(v10 + 44) = 0;
          }
          return Thread;
        }
      }
      else
      {
        v10 = Thread;
      }
    }
    Thread += 64LL;
    if ( (unsigned int)++v11 >= 8 )
      goto LABEL_19;
  }
}
