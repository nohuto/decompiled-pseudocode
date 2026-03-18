/*
 * XREFs of MiReleaseSystemCacheView @ 0x1400A4150
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x1406E242C (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A3490 (MiGetSystemCacheReverseMap.c)
 *     InsertTailListPte @ 0x1400A477C (InsertTailListPte.c)
 *     MiReturnSystemCharges @ 0x1400C3258 (MiReturnSystemCharges.c)
 *     MiFreeUnmappedPageTables @ 0x1400F6C7C (MiFreeUnmappedPageTables.c)
 *     MiMakeSystemRangeAvailable @ 0x1400F6D54 (MiMakeSystemRangeAvailable.c)
 *     MiZeroSystemPdes @ 0x1400F7190 (MiZeroSystemPdes.c)
 *     MiAddSystemPageTableToList @ 0x1400F72E0 (MiAddSystemPageTableToList.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     RemoveListEntryPte @ 0x140125FB0 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x140127C20 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x14017C6E8 (MiGetPteLink.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiDecrementSystemCacheViewCount @ 0x140219D8C (MiDecrementSystemCacheViewCount.c)
 *     MiSetSystemCacheReverseMap @ 0x14021A0FC (MiSetSystemCacheReverseMap.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReleaseSystemCacheView(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // r13
  unsigned __int8 CurrentIrql; // al
  _QWORD *v10; // rdx
  unsigned __int64 v11; // r12
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 result; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  void *SystemCacheReverseMap; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  __int64 *v24; // rdi
  unsigned __int64 v25; // rsi
  LONG *v26; // r15
  __int64 v27; // r13
  __int64 *v28; // r14
  unsigned __int8 v29; // r12
  __int64 *v30; // r15
  _QWORD *v31; // r12
  __int64 PteShadow; // rax
  __int64 v33; // rsi
  LONG *v34; // rax
  unsigned __int8 v35; // cl
  __int64 v36; // rdi
  __int64 v37; // rbx
  unsigned __int64 v38; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v39; // [rsp+20h] [rbp-E0h]
  __int64 v40; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v41; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v42; // [rsp+38h] [rbp-C8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+78h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h]
  int v51; // [rsp+90h] [rbp-70h] BYREF
  __int16 v52; // [rsp+94h] [rbp-6Ch]
  __int64 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  _QWORD v56[8]; // [rsp+150h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+C8h]

  v4 = 0;
  v38 = 0LL;
  v5 = 0LL;
  v7 = (__int64)(a1 << 25) >> 16;
  v8 = *(_QWORD *)(qword_140388AF0
                 + 8LL * ((unsigned __int16)*(_DWORD *)(MiGetSystemCacheReverseMap(v7, a2, a3, a4) + 32) >> 6));
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&qword_140388980;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &qword_140388980);
  }
  else
  {
    v10 = (_QWORD *)_InterlockedExchange64(&qword_140388980, (__int64)&LockHandle);
    if ( v10 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v10);
  }
  if ( (unsigned __int8)MiDecrementSystemCacheViewCount(v7) )
  {
    InsertTailListPte(v8 + 1704, a1);
  }
  else
  {
    v5 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v38 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v11 = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) < v11 )
    {
      v12 = (_QWORD *)(v5 + 24);
      do
      {
        if ( v12 - 3 != (_QWORD *)a1 )
        {
          RemoveListEntryPte(v8 + 1704, v12 - 3);
          if ( MiGetPteLink(*v12) == 1 )
          {
            v13 = v4++;
            v56[v13] = v12 - 3;
          }
          else
          {
            *v12 = 0LL;
            if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v12, 0LL);
          }
        }
        v12 += 64;
      }
      while ( (unsigned __int64)(v12 - 3) < v11 );
      v5 = a1 & 0xFFFFFFFFFFFFF000uLL;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v5 )
  {
    if ( v4 )
    {
      v15 = v56;
      v16 = v4;
      do
      {
        MiWaitForSystemCacheViewFlush(*v15++);
        --v16;
      }
      while ( v16 );
      v5 = v38;
    }
    v17 = v5 << 25;
    v53 = 20LL;
    v51 = 0;
    v52 = 0;
    v54 = 0LL;
    v55 = 0LL;
    MiInsertTbFlushEntry(&v51, v17 >> 16, 512LL, 0);
    SystemCacheReverseMap = (void *)MiGetSystemCacheReverseMap(v17 >> 16, v18, v19, v20);
    ExFreePoolWithTag(SystemCacheReverseMap, 0);
    MiSetSystemCacheReverseMap(v17 >> 16, 0LL);
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v22 = ((((unsigned __int64)(v17 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
    result = 0xFFFFF68000000000uLL;
    v23 = (((((v17 + 0x2000000000LL) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( v22 < v23 )
    {
      BugCheckParameter3 = ((__int64)(v23 << 25) >> 16) - ((__int64)(v22 << 25) >> 16);
      BugCheckParameter2 = (__int64)(v22 << 25) >> 16;
      v24 = (__int64 *)(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v25 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v40 = 0LL;
      v39 = v25;
      v26 = &dword_140389780;
      v27 = 0LL;
      v28 = 0LL;
      if ( (byte_14038B940 & 7) != 2 )
        v26 = (LONG *)&unk_14038B948;
      v29 = KeGetCurrentIrql();
      v41 = v29;
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v26, v29);
      else
        ExpAcquireSpinLockExclusive(v26, v29);
      v26[1] = 0;
      v42 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140388924, v42);
      else
        ExpAcquireSpinLockExclusive(&dword_140388924, v42);
      v30 = v24;
      if ( (unsigned __int64)v24 < v25 )
      {
        v31 = v24 + 1;
        while ( 1 )
        {
          PteShadow = *v24;
          if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(v24, *v24);
          v44 = PteShadow;
          if ( (PteShadow & 1) != 0 && (PteShadow & 0x80u) == 0LL )
          {
            v33 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v44) - 0x58000000000LL;
            if ( !(unsigned int)MiAddSystemPageTableToList(v40, v33) )
            {
              v25 = v39;
              --v30;
              --v31;
              --v24;
              goto LABEL_59;
            }
            v40 = v33;
            v25 = v39;
          }
          if ( !v27 )
            v28 = v30;
          if ( (++v27 & 0xF) == 0 )
          {
            v34 = &dword_140389780;
            if ( (byte_14038B940 & 7) != 2 )
              v34 = (LONG *)&unk_14038B948;
            if ( (*v34 & 0x40000000) == 0 && (v41 >= 2u || !KeShouldYieldProcessor()) )
              goto LABEL_59;
LABEL_51:
            if ( v28 )
            {
              MiZeroSystemPdes(v28, v31, 0LL, &v51);
              v28 = 0LL;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388924, retaddr);
            else
              dword_140388924 = 0;
            __writecr8(v42);
            v27 = 0LL;
            MiRelockWorkingSetExclusive((__int64)&unk_14038B880, v41);
            v35 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140388924, v35);
            else
              ExpAcquireSpinLockExclusive(&dword_140388924, v35);
            goto LABEL_59;
          }
          if ( ((unsigned __int16)v31 & 0xFFF) == 0 )
            goto LABEL_51;
LABEL_59:
          ++v30;
          ++v31;
          ++v24;
          if ( (unsigned __int64)v30 >= v25 )
          {
            if ( v28 )
              MiZeroSystemPdes(v28, v30, 0LL, &v51);
            v29 = v41;
            break;
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388924, retaddr);
      else
        dword_140388924 = 0;
      __writecr8(v42);
      MiUnlockWorkingSetExclusive((__int64)&unk_14038B880, v29);
      MiMakeSystemRangeAvailable(BugCheckParameter2, BugCheckParameter3);
      result = MiFreeUnmappedPageTables(v40, &v47, 0LL);
      v36 = v50;
      if ( v50 )
      {
        if ( qword_14038B9E8 )
        {
          v37 = *(_QWORD *)(qword_140388AF0 + 8LL * (unsigned __int16)word_14038B92C);
          MiReturnCommit(v37, v50 - v48);
          return MiReturnSystemCharges(v37, v36, 8LL);
        }
      }
    }
  }
  return result;
}
