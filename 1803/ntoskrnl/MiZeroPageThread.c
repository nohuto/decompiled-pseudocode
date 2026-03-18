/*
 * XREFs of MiZeroPageThread @ 0x140173040
 * Callers:
 *     <none>
 * Callees:
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     KeSetIdealProcessorThreadEx @ 0x14003ABC0 (KeSetIdealProcessorThreadEx.c)
 *     KeQueryNodeActiveAffinity @ 0x14007ED60 (KeQueryNodeActiveAffinity.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiMapPagesToZero @ 0x14009D760 (MiMapPagesToZero.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x1400C0780 (KeFindFirstSetLeftGroupAffinity.c)
 *     MiUnlinkNodeLargePage @ 0x1400E7040 (MiUnlinkNodeLargePage.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiWaitForFreePagesToZero @ 0x1400FEE90 (MiWaitForFreePagesToZero.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     MiInitializeColorTable @ 0x14016228C (MiInitializeColorTable.c)
 *     MiDeleteZeroThreadContext @ 0x14017B574 (MiDeleteZeroThreadContext.c)
 *     MiGetHugePageToZero @ 0x14017B9F8 (MiGetHugePageToZero.c)
 *     MiZeroBootLargePages @ 0x140185ED4 (MiZeroBootLargePages.c)
 *     MiSetZeroPageThreadPriority @ 0x140186734 (MiSetZeroPageThreadPriority.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPageThread(ULONG_PTR *a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r15
  unsigned int v3; // r14d
  _DWORD *v4; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // r12d
  unsigned int v17; // eax
  ULONG_PTR v18; // rbx
  unsigned __int8 CurrentIrql; // r13
  int v20; // esi
  char v21; // r8
  __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 *v24; // rax
  volatile signed __int32 *v25; // rbx
  struct _KTHREAD *v26; // rsi
  bool v27; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v30; // edx
  bool v31; // r8
  _QWORD *v32; // rdx
  __int64 *v33; // rcx
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  int v36; // ecx
  struct _KTHREAD *v37; // rbx
  unsigned int FirstSetLeftGroupAffinity; // eax
  __int64 v39; // rcx
  int HugePageToZero; // eax
  int v41; // eax
  signed __int32 v42; // eax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  int v45; // eax
  struct _KTHREAD *v46; // rbx
  __int64 v47; // [rsp+40h] [rbp-78h]
  __int64 v48; // [rsp+48h] [rbp-70h] BYREF
  __int64 i; // [rsp+50h] [rbp-68h]
  struct _KTHREAD *v50; // [rsp+58h] [rbp-60h]
  struct _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-58h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v54; // [rsp+C8h] [rbp+10h]
  int v55; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v56; // [rsp+D8h] [rbp+20h]

  v1 = (__int64)a1;
  if ( a1 == &MiSystemPartition )
    MiZeroBootLargePages();
  v2 = *(_QWORD *)(v1 + 6368);
  v3 = 0;
  v54 = 0;
  v4 = (_DWORD *)(v2 + 232);
  *(_DWORD *)(v2 + 252) = -1;
  MiInitializeColorTable((_DWORD *)(v2 + 232), 0);
  CurrentThread = KeGetCurrentThread();
  v48 = 0LL;
  v50 = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
  v56 = MiSetZeroPageThreadPriority(v1, CurrentThread, 0LL);
  while ( 1 )
  {
    v6 = MiWaitForFreePagesToZero(v1, &v48, v3);
    if ( v6 == -1 )
      break;
    if ( v3 != v6 )
    {
      v54 = v6;
      MiInitializeColorTable(v4, v6);
    }
    v7 = 0LL;
    v8 = 0;
    v47 = 0LL;
    while ( 2 )
    {
      if ( !v8 && *(_BYTE *)(v2 + 210) )
      {
        HugePageToZero = MiGetHugePageToZero(v1, v2);
        goto LABEL_19;
      }
      v9 = v4[3] >> byte_1403CB699;
      *(_QWORD *)(v2 + 32) = 0LL;
      if ( v8 < 3 )
      {
        v10 = MiUnlinkNodeLargePage(v1, v8, v9, 4LL, (__int64)v4, 0, v2);
        v11 = MiLargePageSizes[v7];
        v12 = v10;
        goto LABEL_11;
      }
      v15 = *(_QWORD *)(v1 + 2120);
      v16 = *(_DWORD *)(v2 + 244);
      v17 = v16;
      for ( i = v15; ; v15 = i )
      {
        v18 = *(_QWORD *)(v15 + 40LL * v17 + 16);
        if ( v18 == 0xFFFFFFFFFLL )
        {
          v17 = dword_1403CB690 & (v17 + 1) | v17 & ~dword_1403CB690;
          *(_DWORD *)(v2 + 244) = v17;
          goto LABEL_24;
        }
        v12 = 48 * v18 - 0x58000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v20 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait();
          }
          while ( *(__int64 *)(v12 + 24) < 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
        }
        if ( v18 <= qword_1403CB780
          && (!MmPhysicalMemoryBlock || (*(_QWORD *)(48 * v18 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
        {
          v21 = *(_BYTE *)(v12 + 34);
          if ( (v21 & 7) == 1 )
            break;
        }
LABEL_64:
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        v17 = *(_DWORD *)(v2 + 244);
LABEL_24:
        if ( v17 == v16 )
          goto LABEL_63;
      }
      v22 = *(_QWORD *)(v12 + 40) & 0xFFFFFFFFFLL;
      v23 = 0;
      v24 = MiLargePageContainingFrames;
      do
      {
        if ( v22 == *v24 )
          goto LABEL_64;
        ++v23;
        ++v24;
      }
      while ( v23 < 3 );
      if ( *(_WORD *)(v12 + 32) )
        KeBugCheckEx(0x4Eu, 0x8DuLL, v18, *(unsigned int *)(v12 + 32), *(_QWORD *)(v12 + 8));
      if ( (v21 & 8) != 0 )
      {
        v36 = 0;
        goto LABEL_50;
      }
      *(_QWORD *)(v2 + 24) = v12;
      v25 = &dword_1403CBD18;
      v26 = KeGetCurrentThread();
      *(_QWORD *)(v2 + 56) = v26;
      *(_BYTE *)(v12 + 34) |= 8u;
      *(_QWORD *)(v12 + 16) = v2;
      v27 = *(_BYTE *)(v2 + 71) == 0;
      *(_QWORD *)(v2 + 32) = 0LL;
      if ( v27 )
        v25 = &dword_1403CBD28;
      *(_WORD *)(v2 + 69) = 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(v22) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v25, v22);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v55 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v41 = SchedulerAssist[5];
            SchedulerAssist[5] = v41 + 1;
            if ( v41 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              KiPerformUnboostKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset(v25, 0x1Fu) )
        {
          KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
          v55 = ExpWaitForSpinLockExclusiveAndAcquire(v25, 0xFFu);
        }
        v30 = *v25;
        while ( (v30 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v30 & 0x40000000) == 0 )
          {
            v42 = _InterlockedCompareExchange(v25, v30 | 0x40000000, v30);
            v27 = v30 == v42;
            v30 = v42;
            if ( !v27 )
              continue;
          }
          KeYieldProcessorEx(&v55);
          v30 = *v25;
        }
      }
      v31 = 0;
      if ( *(_BYTE *)(v2 + 71) )
      {
        v32 = (_QWORD *)qword_1403CBD20;
        if ( qword_1403CBD20 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)v26 >= v32[7] )
            {
              v44 = (_QWORD *)v32[1];
              if ( !v44 )
              {
                v31 = 1;
                break;
              }
            }
            else
            {
              v44 = (_QWORD *)*v32;
              if ( !*v32 )
              {
                v31 = 0;
                break;
              }
            }
            v32 = v44;
          }
        }
        v33 = &qword_1403CBD20;
        goto LABEL_46;
      }
      v32 = (_QWORD *)qword_1403CBD30;
      if ( !qword_1403CBD30 )
        goto LABEL_45;
      while ( 2 )
      {
        if ( v2 < (unsigned __int64)v32 )
        {
          v43 = (_QWORD *)*v32;
          if ( !*v32 )
          {
            v31 = 0;
            goto LABEL_45;
          }
          goto LABEL_84;
        }
        v43 = (_QWORD *)v32[1];
        if ( v43 )
        {
LABEL_84:
          v32 = v43;
          continue;
        }
        break;
      }
      v31 = 1;
LABEL_45:
      v33 = &qword_1403CBD30;
LABEL_46:
      RtlAvlInsertNodeEx((unsigned __int64 *)v33, (unsigned __int64)v32, v31, (_QWORD *)v2);
      *(_BYTE *)(v2 + 68) = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v25, retaddr);
      else
        *v25 = 0;
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      if ( v35 )
      {
        if ( v34->NestingLevel <= 1u )
        {
          v45 = v35[5] - 1;
          v35[5] = v45;
          if ( !v45 && !*((_BYTE *)v35 + 25) && !*((_BYTE *)v35 + 27) )
            KiPerformUnboostKick(v34);
        }
      }
      v36 = 1;
LABEL_50:
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( !v36 )
LABEL_63:
        v12 = 0LL;
      v7 = v47;
      v11 = 1LL;
LABEL_11:
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 40) >> 58;
        if ( *(_DWORD *)(v2 + 252) != (unsigned __int16)v13 )
        {
          *(_DWORD *)(v2 + 252) = (unsigned __int16)v13;
          KeQueryNodeActiveAffinity(v13, &Affinity, 0LL);
          if ( Affinity.Mask )
          {
            v37 = KeGetCurrentThread();
            FirstSetLeftGroupAffinity = KeFindFirstSetLeftGroupAffinity((__int64)&Affinity);
            KeSetIdealProcessorThreadEx((__int64)v37, FirstSetLeftGroupAffinity, 0LL);
          }
        }
        v14 = (((unsigned __int64)MiGetUltraMapping((unsigned __int64 *)(32LL * v8 + v2 + 80), v8, v11, 0) >> 9) & 0x7FFFFFFFF8LL)
            - 0x98000000000LL;
        if ( v8 <= 1 )
        {
          v39 = 2 - v8;
          do
          {
            v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v39;
          }
          while ( v39 );
        }
        HugePageToZero = MiMapPagesToZero(v2, v14, v12, v8);
        v7 = v47;
        v4 = (_DWORD *)(v2 + 232);
        v1 = (__int64)a1;
LABEL_19:
        if ( !HugePageToZero )
          goto LABEL_12;
        v3 = v54;
        MiZeroPage(v2, v1);
      }
      else
      {
LABEL_12:
        v1 = (__int64)a1;
        v4 = (_DWORD *)(v2 + 232);
        ++v7;
        ++v8;
        v47 = v7;
        if ( v8 <= 3 )
          continue;
        v3 = v54;
      }
      break;
    }
  }
  v46 = v50;
  MiSetZeroPageThreadPriority(v1, v50, v56);
  *((_DWORD *)&v46[1].SwapListEntry + 3) &= ~0x400u;
  MiDeleteZeroThreadContext(v2);
  ExFreePoolWithTag((PVOID)v2, 0);
  *(_QWORD *)(v1 + 6368) = 0LL;
}
