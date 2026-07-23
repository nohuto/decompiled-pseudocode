/*
 * XREFs of MiZeroPage @ 0x1400299B0
 * Callers:
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 *     MiZeroLargePages @ 0x14017B634 (MiZeroLargePages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiCompressTbFlushList @ 0x1400B06D0 (MiCompressTbFlushList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLargePageFreeToZero @ 0x1401235B0 (MiLargePageFreeToZero.c)
 *     MiInsertLargeTbFlushEntry @ 0x1401373A0 (MiInsertLargeTbFlushEntry.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     MiFreeUltraMapping @ 0x14018373C (MiFreeUltraMapping.c)
 *     MiSetZeroPageThreadPriority @ 0x140186734 (MiSetZeroPageThreadPriority.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     KeZeroPages @ 0x1401AE9B0 (KeZeroPages.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiFreeListPageContentsChanged @ 0x140264F48 (MiFreeListPageContentsChanged.c)
 *     MiFreeZeroPageSlistSufficient @ 0x14026509C (MiFreeZeroPageSlistSufficient.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     HvlNotifyPageHeat @ 0x1402CA4CC (HvlNotifyPageHeat.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPage(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  int v9; // edi
  int v10; // esi
  __int64 v11; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // r12
  unsigned __int64 i; // r9
  __int64 v15; // rcx
  _BYTE *v16; // r8
  int v17; // eax
  int v18; // eax
  unsigned __int64 *v19; // rcx
  bool v20; // zf
  __int64 v21; // rdi
  __int64 v22; // r15
  unsigned __int64 v23; // rsi
  __int64 v24; // r12
  unsigned int v25; // r8d
  int v26; // r10d
  char v27; // r11
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  __int64 v30; // r14
  unsigned __int64 *v31; // r10
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // r15
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // r11
  int v40; // eax
  char v41; // al
  __int64 *v42; // rsi
  volatile signed __int32 *v43; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v46; // eax
  __int64 v47; // rdx
  signed __int32 v48; // edx
  signed __int32 v49; // eax
  _BYTE *v50; // rsi
  struct _KPRCB *v51; // rcx
  int v52; // eax
  BOOL v53; // edi
  __int64 v54; // r14
  __int64 v55; // r14
  __int64 v56; // rsi
  int v57; // [rsp+20h] [rbp-198h]
  char v58; // [rsp+24h] [rbp-194h]
  int v59; // [rsp+28h] [rbp-190h]
  _BYTE *v61; // [rsp+38h] [rbp-180h]
  int v62; // [rsp+40h] [rbp-178h]
  unsigned int v63; // [rsp+44h] [rbp-174h]
  int v64; // [rsp+48h] [rbp-170h]
  __int64 v65; // [rsp+50h] [rbp-168h] BYREF
  __int64 v66; // [rsp+58h] [rbp-160h]
  int v67; // [rsp+60h] [rbp-158h]
  BOOL v68; // [rsp+64h] [rbp-154h]
  PVOID P; // [rsp+68h] [rbp-150h]
  struct _KTHREAD *v70; // [rsp+70h] [rbp-148h]
  __int64 v71; // [rsp+78h] [rbp-140h]
  __int64 v72; // [rsp+80h] [rbp-138h]
  __int64 v73; // [rsp+88h] [rbp-130h]
  __int64 CurrentIrql; // [rsp+90h] [rbp-128h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-120h] BYREF
  int v76; // [rsp+B0h] [rbp-108h]
  int v77; // [rsp+B4h] [rbp-104h]
  __int64 v78; // [rsp+B8h] [rbp-100h] BYREF
  int v79; // [rsp+C0h] [rbp-F8h] BYREF
  __int16 v80; // [rsp+C4h] [rbp-F4h]
  __int64 v81; // [rsp+C8h] [rbp-F0h]
  __int64 v82; // [rsp+D0h] [rbp-E8h]
  _QWORD Base[21]; // [rsp+D8h] [rbp-E0h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+0h]

  v66 = a2;
  P = (PVOID)a1;
  v71 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v72 = 0LL;
  v4 = *(_QWORD *)(a1 + 72);
  v70 = (struct _KTHREAD *)v4;
  v61 = (_BYTE *)a1;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(unsigned int *)(a1 + 64);
  v64 = v6;
  if ( (unsigned int)v6 >= 3 )
    v7 = 1LL;
  else
    v7 = MiLargePageSizes[v6];
  v65 = v7;
  v73 = v7;
  if ( *(_BYTE *)(a1 + 210) )
  {
    v7 = 512LL;
    v73 = 512LL;
    v65 = 512LL;
    if ( !(_DWORD)v6 )
    {
      v72 = *(_QWORD *)(a1 + 216);
      v5 = *(_QWORD *)(v72 + 176) + ((unsigned __int64)*(unsigned __int16 *)(a1 + 208) << 21);
      v61 = (_BYTE *)v72;
    }
  }
  KeZeroPages(v5, v7 << 12);
  v57 = 1;
  v9 = 1;
  LODWORD(v71) = 1;
  v10 = 0;
  v59 = 0;
  v62 = 0;
  v11 = 0LL;
  v63 = 0;
  CurrentThread = KeGetCurrentThread();
  v70 = CurrentThread;
  P = 0LL;
  v13 = v72;
  if ( v72 )
  {
    v10 = 1;
    v4 = *(_QWORD *)(v72 + 168);
    KeAcquireInStackQueuedSpinLock(
      (PKSPIN_LOCK)(qword_1403CDF50 + 1984LL * *(unsigned int *)(v72 + 184) + 1904),
      &LockHandle);
    CurrentThread = v70;
  }
  if ( (HvlEnlightenments & 0x400000) != 0 && !CurrentThread->Priority && !*(_BYTE *)(a1 + 210) && !v61[70] && !v61[69] )
  {
    v62 = 1;
    v63 = MiSetZeroPageThreadPriority(v66, CurrentThread, 1LL);
    --v70->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v66 + 184, 0LL);
  }
  CurrentIrql = KeGetCurrentIrql();
  i = 2LL;
  __writecr8(2uLL);
  v67 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
    {
      v15 = (unsigned int)(v67 + 1);
      v67 = v15;
      if ( ((unsigned int)v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v15);
    }
    while ( *(__int64 *)(v4 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) );
    i = 2LL;
  }
  v16 = v61;
  if ( v13 )
  {
    v17 = 0;
    v57 = 0;
    v9 = 0;
    if ( v61[69] != 1 )
    {
      if ( ++*(_DWORD *)(v13 + 192) != 512 )
      {
        LODWORD(v71) = 0;
        goto LABEL_34;
      }
      v17 = 1;
      v57 = 1;
    }
    v9 = v17;
    v18 = *(_DWORD *)(v13 + 188);
    if ( v18 == 1 )
    {
      v8 = *(_QWORD *)(v13 + 72);
      v19 = *(unsigned __int64 **)(v13 + 80);
      if ( *(_QWORD *)(v8 + 8) != v13 + 72 || *v19 != v13 + 72 )
        __fastfail(3u);
      *v19 = v8;
      *(_QWORD *)(v8 + 8) = v19;
      v9 = 1;
      P = (PVOID)v13;
    }
    else
    {
      *(_DWORD *)(v13 + 188) = v18 - 1;
    }
  }
LABEL_34:
  v58 = v61[69];
  v20 = v9 == 1;
  v21 = a1;
  if ( v20 )
  {
    if ( v10 == 1 )
    {
      MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 176LL));
LABEL_95:
      v16 = v61;
      goto LABEL_96;
    }
    v22 = *(unsigned int *)(a1 + 64);
    v23 = *(_QWORD *)(a1 + 32);
    v24 = 0LL;
    v25 = 0;
    v81 = 20LL;
    v26 = 0;
    v79 = 0;
    v27 = 0;
    v80 = 0;
    v82 = 0LL;
    Base[0] = 0LL;
    if ( (unsigned int)v22 <= 1 )
    {
      MiInsertLargeTbFlushEntry(&v79, (unsigned int)(2 - v22), v23);
      v24 = 1LL;
      v25 = HIDWORD(v81);
      v27 = v80;
      v26 = v79;
    }
    v28 = v23;
    for ( i = 0xFFFFF6FFFFFFFFFFuLL; v28 >= 0xFFFFF68000000000uLL; v28 = (__int64)(v28 << 25) >> 16 )
    {
      if ( v28 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    v8 = qword_1403CC2F0;
    v68 = (!qword_1403CC2F0 || v28 < qword_1403CC2F0 || v28 >= qword_1403CC2F0 + (BitMapHeader.SizeOfBitMap << 30))
       && (unsigned int)v22 <= 1;
    if ( !v24 )
    {
      v29 = (__int64)(v23 << 25) >> 16;
      if ( (_DWORD)v22 != 3 )
      {
        if ( (_DWORD)v22 == 2 )
        {
          v24 = 16LL;
          MiInsertTbFlushEntry((__int64)&v79, (__int64)(v23 << 25) >> 16, 16LL, 0);
        }
        else
        {
          v36 = MiLargePageSizes[v22];
          if ( (unsigned int)v22 <= 1 )
          {
            v37 = (unsigned int)(2 - v22);
            do
            {
              MiInsertTbFlushEntry((__int64)&v79, v29, v36, 0);
              v29 = (__int64)(v29 << 25) >> 16;
              v36 <<= 9;
              --v37;
            }
            while ( v37 );
          }
          v24 = 512LL;
          v11 = 0LL;
        }
        v21 = a1;
        goto LABEL_86;
      }
      v24 = 1LL;
      v30 = 1LL;
      if ( v26 != 1 && (v27 & 8) == 0 && v29 >= 0xFFFFF68000000000uLL && v29 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v27 |= 8u;
        LOBYTE(v80) = v27;
      }
      if ( v25 )
      {
        if ( (v27 & 4) == 0 )
        {
          v31 = &Base[v25 - 1];
          v32 = *v31;
          if ( (*v31 & 0xC00) == 0 )
          {
            i = *v31 & 0x3FF;
            v8 = (v32 & 0xFFFFFFFFFFFFF000uLL) + ((i + 1) << 12);
            if ( v8 == v29 && i + 1 >= i && i + 1 <= 0x3FF )
            {
              ++v82;
              *v31 = ((unsigned __int16)v32 ^ (unsigned __int16)(v32 + 1)) & 0x3FF ^ v32;
              v11 = 0LL;
              v21 = a1;
              goto LABEL_86;
            }
          }
        }
        if ( (v27 & 4) == 0 )
        {
          i = (unsigned __int64)&Base[v25 - 1];
          v33 = *(_QWORD *)i;
          if ( (*(_QWORD *)i & 0xC00LL) == 0 )
          {
            v8 = v33 & 0xFFFFFFFFFFFFF000uLL;
            if ( (v33 & 0xFFFFFFFFFFFFF000uLL) == v29 + 4096 )
            {
              v34 = *(_QWORD *)i & 0x3FFLL;
              v8 = v34 + 1;
              if ( v34 + 1 >= v34 && v8 <= 0x3FF )
              {
                ++v82;
                *(_QWORD *)i = ((unsigned __int16)(v33 - 4096) ^ (unsigned __int16)(v33 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v33 - 4096);
                v11 = 0LL;
                v21 = a1;
                goto LABEL_86;
              }
            }
          }
        }
      }
      if ( v25 < (unsigned int)v81 )
      {
        while ( 1 )
        {
          v8 = 1024LL;
          if ( (unsigned __int64)(v30 - 1) <= 0x3FF )
            v8 = v30;
          v30 -= v8;
          v35 = v29 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v8 - 1) & 0x3FF;
          v29 += v8 << 12;
          Base[v25] = v35;
          v25 = HIDWORD(v81) + 1;
          HIDWORD(v81) = v25;
          v82 += v8;
          if ( v25 == (_DWORD)v81 && (v80 & 4) == 0 )
          {
            qsort(Base, v25, 8uLL, MiTbFlushSort);
            MiCompressTbFlushList(&v79);
            v25 = HIDWORD(v81);
            if ( HIDWORD(v81) == (_DWORD)v81 )
            {
              if ( v30 )
                break;
            }
          }
          if ( !v30 )
            goto LABEL_78;
        }
        HIBYTE(v80) = 1;
        v82 = HIDWORD(v81);
LABEL_78:
        v11 = 0LL;
        v21 = a1;
      }
      else
      {
        HIBYTE(v80) = 1;
        v11 = 0LL;
        v21 = a1;
      }
    }
LABEL_86:
    v38 = v23 + 8 * v24;
    if ( v23 < v38 )
    {
      v39 = 0xFFFFF6FB7DBED000uLL;
      do
      {
        *(_QWORD *)v23 = 0LL;
        if ( v23 >= v39 && v23 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v23, 0LL);
        v23 += 8LL;
      }
      while ( v23 < v38 );
    }
    if ( v68 )
      MiFlushTbList(&v79);
    v13 = v72;
    goto LABEL_95;
  }
LABEL_96:
  if ( v13 && (_DWORD)v71 == 1 )
    *(_QWORD *)(v21 + 216) = 0LL;
  v40 = v57;
  if ( v57 == 1 || P )
  {
    v41 = v16[71];
    v42 = &qword_1403CBD30;
    if ( v41 )
      v42 = &qword_1403CBD20;
    v43 = &dword_1403CBD28;
    if ( v41 )
      v43 = &dword_1403CBD18;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v8) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v43, v8);
    }
    else
    {
      LODWORD(v65) = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v46 = SchedulerAssist[5];
          SchedulerAssist[5] = v46 + 1;
          if ( v46 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(v43, 0x1Fu) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        LOBYTE(v47) = -1;
        LODWORD(v65) = ExpWaitForSpinLockExclusiveAndAcquire(v43, v47);
      }
      v48 = *v43;
      while ( (v48 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v48 & 0x40000000) == 0 )
        {
          v49 = _InterlockedCompareExchange(v43, v48 | 0x40000000, v48);
          v20 = v48 == v49;
          v48 = v49;
          if ( !v20 )
            continue;
        }
        KeYieldProcessorEx(&v65);
        v48 = *v43;
      }
    }
    RtlAvlRemoveNode(v42, v61);
    v50 = v61;
    v61[68] = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v43, retaddr);
    else
      *v43 = 0;
    v51 = KeGetCurrentPrcb();
    v8 = (unsigned __int64)v51->SchedulerAssist;
    if ( v8 )
    {
      if ( v51->NestingLevel <= 1u )
      {
        v52 = *(_DWORD *)(v8 + 20) - 1;
        *(_DWORD *)(v8 + 20) = v52;
        if ( !v52 )
        {
          v16 = (_BYTE *)*(unsigned __int8 *)(v8 + 27);
          if ( !*(_BYTE *)(v8 + 25) && !(_BYTE)v16 )
            KiPerformUnboostKick(v51);
        }
      }
    }
    v40 = v57;
  }
  else
  {
    v50 = v61;
  }
  if ( v58 == 1 || v40 != 1 )
    goto LABEL_135;
  v11 = (v4 + 0x58000000000LL) / 48;
  if ( v64 == 3 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_BYTE *)(v4 + 34) &= ~8u;
    if ( v61[70] )
    {
      MiFreeListPageContentsChanged(
        (v4 + 0x58000000000LL) / 48,
        (unsigned __int128)((v4 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
        v16);
LABEL_135:
      v53 = 0;
      goto LABEL_136;
    }
    if ( v62 )
    {
      MiFreeZeroPageSlistSufficient(
        v66,
        dword_1403CB6D8 & (unsigned int)v11 | (((*(_QWORD *)(v4 + 40) >> 36) & 3) << byte_1403CB69A) | ((unsigned __int16)(*(_QWORD *)(v4 + 40) >> 58) << byte_1403CB699),
        0LL);
      v59 = 1;
    }
    *(_QWORD *)(v4 + 16) = MiMakeDemandZeroPte(4LL);
    MiUnlinkFreeOrZeroedPage((v4 + 0x58000000000LL) / 48, 0LL, 0LL);
    MiInsertPageInFreeOrZeroedList((v4 + 0x58000000000LL) / 48);
    v53 = v59;
  }
  else
  {
    v53 = 0;
    if ( v62 )
      v53 = v50[70] == 0;
    MiLargePageFreeToZero((v4 + 0x58000000000LL) / 48);
  }
LABEL_136:
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8((unsigned __int8)CurrentIrql);
  if ( v13 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v53 )
  {
    v76 = 0;
    v77 = 1;
    v54 = v11 << 12;
    v78 = v54;
    if ( v73 != 1 )
    {
      if ( v73 == 16 )
      {
        v55 = v54 | 0xF;
      }
      else if ( v73 == 512 )
      {
        v55 = v54 | 0x400;
      }
      else
      {
        v55 = v54 | 0x800;
      }
      v78 = v55;
    }
    HvlNotifyPageHeat(0LL, 1LL, &v78);
  }
  if ( v62 )
  {
    v56 = v66;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 184), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v56 + 184, v8, v16, i);
    KeAbPostRelease(v56 + 184);
    KiLeaveGuardedRegionUnsafe(v70);
    MiSetZeroPageThreadPriority(v56, v70, v63);
  }
}
