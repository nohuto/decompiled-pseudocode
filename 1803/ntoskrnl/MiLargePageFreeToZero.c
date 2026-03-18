/*
 * XREFs of MiLargePageFreeToZero @ 0x1401235B0
 * Callers:
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x140123010 (MiQueueLargeFreeZeroRebuild.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 */

void __fastcall MiLargePageFreeToZero(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, char a4)
{
  ULONG_PTR v7; // rsi
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rbp
  volatile __int64 *v14; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v17; // eax
  _QWORD *v18; // rdx
  __int64 v19; // rax
  ULONG_PTR v20; // r8
  volatile signed __int32 *v21; // rdx
  unsigned int v22; // ebx
  int v23; // r14d
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r10
  _QWORD *v28; // r8
  __int64 updated; // rax
  __int64 *v30; // r8
  __int64 v31; // r9
  unsigned __int64 *v32; // r8
  __int64 v33; // r12
  __int64 v34; // r11
  ULONG_PTR v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r13
  int v38; // ebx
  ULONG_PTR v39; // r8
  unsigned __int64 v40; // r9
  volatile signed __int32 *v41; // rdx
  unsigned int v42; // eax
  unsigned __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // rcx
  ULONG_PTR *v46; // rdx
  unsigned int v47; // esi
  signed __int32 v48[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 *v49; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  __int64 v51; // [rsp+80h] [rbp+8h]

  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v51 = a2;
  v8 = (unsigned __int64 *)(0x140000000LL + 8LL * a2 + 3135424);
  v9 = *(_QWORD *)(v7 + 40);
  v49 = v8;
  v10 = *v8;
  v11 = (v9 >> 36) & 3;
  v12 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v9 >> 40) & 0x3FF));
  v13 = *(_QWORD *)(v12 + 16) + 1984 * (v9 >> 58);
  LockHandle.LockQueue.Next = 0LL;
  v14 = (volatile __int64 *)(v13 + 1928);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v13 + 1928);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v17 = SchedulerAssist[5];
      SchedulerAssist[5] = v17 + 1;
      if ( v17 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v14);
  }
  else
  {
    v18 = (_QWORD *)_InterlockedExchange64(v14, (__int64)&LockHandle);
    if ( v18 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v18);
  }
  *(_BYTE *)(v7 + 34) &= ~8u;
  v19 = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(v19 + 24) = 0LL;
  *(_BYTE *)(v19 + 69) = 1;
  *(_QWORD *)(v7 + 16) = MiMakeDemandZeroPte(4LL);
  if ( a4 )
  {
    if ( dword_1403CBDAC == 1 )
    {
      v20 = BugCheckParameter2 & 0x1F;
      v21 = (volatile signed __int32 *)(qword_1403CBE08 + 4 * (BugCheckParameter2 >> 5));
      if ( v20 + v10 > 0x20 )
      {
        if ( (BugCheckParameter2 & 0x1F) != 0 )
        {
          v23 = BugCheckParameter2 & 0x1F;
          _InterlockedOr(v21, ((1 << (32 - v23)) - 1) << v20);
          v10 -= (unsigned int)(32 - v23);
          ++v21;
        }
        if ( v10 >= 0x20 )
        {
          v24 = v10 >> 5;
          v10 += -32LL * (v10 >> 5);
          do
          {
            *v21++ = -1;
            --v24;
          }
          while ( v24 );
        }
        if ( !v10 )
          goto LABEL_25;
        v22 = (1 << v10) - 1;
      }
      else
      {
        if ( v10 == 32 )
        {
          *v21 = -1;
          goto LABEL_25;
        }
        v22 = ((1 << v10) - 1) << v20;
      }
      _InterlockedOr(v21, v22);
    }
LABEL_25:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return;
  }
  *(_BYTE *)(v13 + 1912) = 1;
  _InterlockedOr(v48, 0);
  v25 = *(_QWORD *)v7;
  v26 = *(_QWORD **)(v7 + 8);
  if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v26 != v7 )
    __fastfail(3u);
  *v26 = v25;
  *(_QWORD *)(v25 + 8) = v26;
  if ( a3 )
  {
    *(_QWORD *)(v7 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v7 + 16), 4294967293LL);
    if ( v7 + 48 < v7 + 48 * v10 )
    {
      v28 = (_QWORD *)(v7 + 64);
      do
      {
        updated = MiUpdatePageFileHighInPte(*v28, v27);
        *v30 = updated;
        v28 = v30 + 6;
      }
      while ( v31 != 1 );
    }
  }
  if ( (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero(BugCheckParameter2);
  v32 = v49;
  v33 = (unsigned int)v11;
  --*(_QWORD *)(v13 + 272 * v51 + 8);
  v34 = BugCheckParameter2 < 0x100000 ? 2 : 0;
  v35 = BugCheckParameter2 / *v32 % (unsigned int)dword_1403CB6E8[v51];
  v36 = 34 * v51 + v11 + 4 * v34 + 4;
  v37 = 24LL * (unsigned int)v35;
  --*(_QWORD *)(*(_QWORD *)(v13 + 8 * v36 + 144) + v37 + 16);
  --*(_QWORD *)(v13 + 8 * v36 + 16);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 2240), -(__int64)v10);
  v38 = 1;
  if ( dword_1403CBDAC == 1 )
  {
    v39 = BugCheckParameter2 & 0x1F;
    v40 = v10;
    v41 = (volatile signed __int32 *)(qword_1403CBE08 + 4 * (BugCheckParameter2 >> 5));
    if ( v39 + v10 > 0x20 )
    {
      if ( (BugCheckParameter2 & 0x1F) != 0 )
      {
        _InterlockedOr(v41, ((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v39);
        v40 = v10 - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
        ++v41;
      }
      if ( v40 >= 0x20 )
      {
        v43 = v40 >> 5;
        v40 += -32LL * (v40 >> 5);
        do
        {
          *v41++ = -1;
          --v43;
        }
        while ( v43 );
      }
      if ( !v40 )
        goto LABEL_49;
      v42 = (1 << v40) - 1;
    }
    else
    {
      if ( v10 == 32 )
      {
        *v41 = -1;
        goto LABEL_49;
      }
      v42 = ((1 << v10) - 1) << v39;
    }
    _InterlockedOr(v41, v42);
  }
LABEL_49:
  v44 = 34 * v51 + v33 + 4 * v34;
  *(_BYTE *)(v7 + 34) &= 0xF8u;
  v45 = v37 + *(_QWORD *)(v13 + 8 * v44 + 144);
  v46 = *(ULONG_PTR **)(v45 + 8);
  if ( (MiFlags & 0x30) != 0 )
  {
    if ( *v46 != v45 )
      __fastfail(3u);
    *(_QWORD *)v7 = v45;
    *(_QWORD *)(v7 + 8) = v46;
    *v46 = v7;
    *(_QWORD *)(v45 + 8) = v7;
    v47 = a2;
    if ( a2 )
    {
      if ( a2 == 1 && (KeFeatureBits & 0x2000000000LL) == 0 )
        v38 = 0;
    }
    else
    {
      v38 = 0;
    }
  }
  else
  {
    if ( *v46 != v45 )
      __fastfail(3u);
    *(_QWORD *)v7 = v45;
    v38 = 0;
    *(_QWORD *)(v7 + 8) = v46;
    *v46 = v7;
    *(_QWORD *)(v45 + 8) = v7;
    v47 = a2;
  }
  ++*(_QWORD *)(v45 + 16);
  ++*(_QWORD *)(v13 + 8 * v44 + 16);
  ++*(_QWORD *)(v13 + 272 * v51);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 2176), v10);
  *(_BYTE *)(v13 + 1912) = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v38 )
    MiQueueLargeFreeZeroRebuild(v12, BugCheckParameter2 & ~(MiLargePageSizes[v47 - 1] - 1), v47 - 1);
}
