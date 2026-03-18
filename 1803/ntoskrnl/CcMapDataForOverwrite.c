/*
 * XREFs of CcMapDataForOverwrite @ 0x1400B7AE0
 * Callers:
 *     CcPreparePinWrite @ 0x14055E310 (CcPreparePinWrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     CcMapDataCommon @ 0x14055E4E4 (CcMapDataCommon.c)
 */

__int64 __fastcall CcMapDataForOverwrite(__int64 a1, _DWORD *a2, unsigned int a3, _QWORD *a4, __int64 *a5)
{
  int v6; // r12d
  int v7; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // r14d
  __int64 *v12; // rdi
  __int64 v13; // rdi
  unsigned int v14; // ebx
  int v15; // eax
  __int64 result; // rax
  __int64 Partition; // rax
  unsigned int v18; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+10h] BYREF
  char v21; // [rsp+B0h] [rbp+18h]
  _QWORD *v22; // [rsp+B8h] [rbp+20h]

  v22 = a4;
  v6 = (int)a2;
  v7 = a1;
  v18 = (a3 + 4095LL + (unsigned __int64)(*a2 & 0xFFF)) >> 12;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(a1 + 40);
  v10 = *(_QWORD *)(v9 + 8);
  if ( (*(_DWORD *)(v10 + 152) & 0x20000) == 0 )
  {
    Partition = CcGetPartition(*(_QWORD *)(v9 + 8));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    *(_DWORD *)(v10 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  v11 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v12 = a5;
  CcMapDataCommon(v7, v6, a3, 1, (__int64)&v20, (__int64)a5);
  v13 = *v12;
  v14 = v18;
  while ( v14 )
  {
    v21 = 1;
    BYTE4(CurrentThread[1].Queue) = 1;
    if ( --v14 > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
    {
      v15 = v14;
      if ( v14 > 0xF )
        v15 = 15;
      LODWORD(CurrentThread[1].WaitListEntry.Flink) = v15;
    }
    MmCheckCachedPageStates(v13, 1LL, 5LL);
    if ( !v21 )
      MmCheckCachedPageStates(v13, 1LL, 4LL);
    v13 += 4096LL;
  }
  BYTE4(CurrentThread[1].Queue) = v11 & 3;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v11 >> 2;
  __addgsdword(0x5E50u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  result = v20;
  *v22 = v20;
  return result;
}
