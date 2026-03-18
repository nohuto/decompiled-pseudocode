/*
 * XREFs of MiDeleteBatch @ 0x14002D060
 * Callers:
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MiDeleteClusterPage @ 0x1402694A8 (MiDeleteClusterPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall MiDeleteBatch(unsigned __int8 *a1)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // r15
  volatile __int64 *v5; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int8 i; // si
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int8 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int8 j; // di
  __int64 v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v25; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+98h] [rbp+10h] BYREF

  if ( !*a1 )
    return 0LL;
  v3 = 0LL;
  v26 = *((_QWORD *)a1 + 2);
  v4 = *(_QWORD *)(qword_1403CBD88
                 + 8
                 * ((*(_QWORD *)(48
                               * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFLL)
                               - 0x58000000000LL
                               + 40) >> 40) & 0x3FFLL));
  LockHandle.LockQueue.Next = 0LL;
  v5 = (volatile __int64 *)(v4 + 7456);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 7456);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v21 = SchedulerAssist[5];
      SchedulerAssist[5] = v21 + 1;
      if ( v21 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v5);
  }
  else if ( _InterlockedExchange64(v5, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  for ( i = 0; i < *a1; ++i )
  {
    v9 = *(_QWORD *)&a1[8 * i + 16];
    v26 = v9;
    if ( (unsigned __int64)&v26 < 0xFFFFF6FB7DBED000uLL
      || (unsigned __int64)&v26 > 0xFFFFF6FB7DBED7F8uLL
      || (MiFlags & 0x1800000) == 0
      || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
    {
      v10 = v9;
    }
    else
    {
      v10 = v9;
      if ( (v9 & 1) != 0 && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
      {
        v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 8 * (((unsigned __int64)&v26 >> 3) & 0x1FF));
          v10 = v9;
          if ( (v23 & 0x20) != 0 )
            v10 = v9 | 0x20;
          if ( (v23 & 0x42) != 0 )
            v10 |= 0x42uLL;
        }
        else
        {
          v10 = v26;
        }
      }
    }
    v11 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL);
    v12 = *(_BYTE *)(v11 - 0x58000000000LL + 34);
    v13 = v11 - 0x58000000000LL;
    if ( (v12 & 7) != 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        v11 / 48,
        *(_BYTE *)(v11 - 0x58000000000LL + 34) & 7,
        *(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v14 = 0LL;
    if ( (v9 & 0x42) != 0 && (v12 & 0x10) == 0 )
    {
      if ( (!_bittest64((const signed __int64 *)(v13 + 16), 0xAu) & (unsigned __int8)~(v12 >> 3)) != 0 )
      {
        v14 = MiCapturePageFileInfoInline(v13 + 16, 1LL);
        v12 = *(_BYTE *)(v13 + 34);
      }
      *(_BYTE *)(v13 + 34) = v12 | 0x10;
    }
    *(_QWORD *)&a1[8 * i + 16] = v14;
    v15 = *(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v13 + 24) = v15;
    if ( (v15 & 0x3FFFFFFFFFFFFFFFLL) == 0
      && (unsigned int)MiPfnShareCountIsZero(v13, 1uLL) == 3
      && (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) == 0 )
    {
      ++v3;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v16 = *((_QWORD *)a1 + 1);
  if ( a1[1] == 1 )
  {
    MiLockNestedPageAtDpcInline(*((_QWORD *)a1 + 1));
  }
  else
  {
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v25);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
  }
  v17 = *(_QWORD *)(v16 + 24);
  if ( (*(_BYTE *)(v16 + 34) & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v16 + 0x58000000000LL) / 48, *(_BYTE *)(v16 + 34) & 7, v17 & 0x3FFFFFFFFFFFFFFFLL);
  v18 = *a1;
  if ( (v17 & 0x3FFFFFFFFFFFFFFFuLL) < v18 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v16 + 0x58000000000LL) / 48, *(_BYTE *)(v16 + 34) & 7, v17 & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(v16 + 24) = v17 ^ (v17 ^ (v17 - v18)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  for ( j = 0; j < *a1; ++j )
  {
    v20 = *(_QWORD *)&a1[8 * j + 16];
    if ( v20 )
      MiReleasePageFileInfo(v4, v20, 1LL);
  }
  result = v3;
  *a1 = 0;
  return result;
}
