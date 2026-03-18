/*
 * XREFs of MiLogPageAccess @ 0x140129AB0
 * Callers:
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14012A21C (MI_WSLE_LOG_ACCESS.c)
 *     MiResetAccessBitPte @ 0x140164490 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x140259F10 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     MiAllocateAccessLog @ 0x14012A090 (MiAllocateAccessLog.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiLogPageAccess(__int64 a1, __int64 a2)
{
  char v2; // r9
  _QWORD *v3; // rsi
  char v4; // r9
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  unsigned int v7; // r13d
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rbp
  LONG *v14; // r15
  volatile signed __int32 *v15; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v18; // eax
  signed __int32 v19; // edx
  bool v20; // zf
  signed __int32 v21; // eax
  _QWORD *AccessLog; // rsi
  LONG *SharedVm; // rax
  __int64 PrototypePteDirect; // r12
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  bool v28; // cc
  __int64 v29; // rbx
  __int64 v30; // r13
  ULONG_PTR v31; // rbp
  unsigned __int64 v32; // rbx
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  __int64 v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 *v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 *v41; // rcx
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  int v44; // eax
  _DWORD v45[4]; // [rsp+20h] [rbp-68h]
  __int64 v46; // [rsp+30h] [rbp-58h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v49; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v50; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v51; // [rsp+A8h] [rbp+20h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v3 = &unk_1403CCD70;
  v45[1] = 3;
  v50 = 0LL;
  v4 = v2 & 7;
  v45[0] = 0;
  v5 = a2;
  v6 = a1;
  if ( v4 != 2 )
    v3 = (_QWORD *)(a1 + 240);
  v7 = a2 & 1;
  v46 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v5 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = *(_QWORD *)v5;
  v9 = 0xFFFFF6FB7DBED000uLL;
  v10 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    a2 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( a2 )
    {
      v11 = *(_QWORD *)(a2 + 8 * ((v5 >> 3) & 0x1FF));
      a2 = v8 | 0x20;
      if ( (v11 & 0x20) == 0 )
        a2 = v8;
      v8 = a2;
      if ( (v11 & 0x42) != 0 )
        v8 = a2 | 0x42;
    }
  }
  v51 = v8;
  if ( (unsigned __int64)&v51 >= v9
    && (unsigned __int64)&v51 <= v10
    && (unsigned int)MiPteHasShadow()
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    a2 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( a2 )
    {
      v12 = *(_QWORD *)(a2 + 8 * (((unsigned __int64)&v51 >> 3) & 0x1FF));
      a2 = v8 | 0x20;
      if ( (v12 & 0x20) == 0 )
        a2 = v8;
      v8 = a2;
      if ( (v12 & 0x42) != 0 )
        v8 = a2 | 0x42;
    }
  }
  v13 = (_QWORD *)(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  v14 = &dword_1403CCD68;
  v15 = &dword_1403CCD68;
  if ( v4 != 2 )
    v15 = (volatile signed __int32 *)(v6 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v15, a2);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v49 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = SchedulerAssist[5];
        SchedulerAssist[5] = v18 + 1;
        if ( v18 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(v15, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      v49 = ExpWaitForSpinLockExclusiveAndAcquire(v15, 0xFFu);
    }
    v19 = *v15;
    while ( (v19 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v19 & 0x40000000) == 0 )
      {
        v21 = _InterlockedCompareExchange(v15, v19 | 0x40000000, v19);
        v20 = v19 == v21;
        v19 = v21;
        if ( !v20 )
          continue;
      }
      KeYieldProcessorEx(&v49);
      v19 = *v15;
    }
  }
  AccessLog = (_QWORD *)*v3;
  if ( !AccessLog || (unsigned __int64)(AccessLog[4] + 8LL) > AccessLog[5] )
  {
    AccessLog = (_QWORD *)MiAllocateAccessLog(v6);
    if ( !AccessLog )
      goto LABEL_47;
  }
  if ( (v13[5] & 0x200000000000000LL) != 0 && (v13[2] & 0x400LL) != 0 )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(v13[2]);
    v25 = AccessLog[6];
    v26 = v13[1] | 0x8000000000000000uLL;
    v27 = (unsigned __int16)v50 | (v26 << 16);
    v28 = AccessLog[7] <= 1uLL;
    v50 = v27;
    if ( v28 )
    {
      v30 = *(_QWORD *)PrototypePteDirect;
      if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 && (*(_DWORD *)(v30 + 56) & 0x4000000) != 0 )
      {
LABEL_47:
        SharedVm = MiGetSharedVm(v6);
        ExReleaseSpinLockExclusiveFromDpcLevel(SharedVm + 10);
        return;
      }
      v31 = ObFastReferenceObject((signed __int64 *)(v30 + 64));
      if ( !v31 )
      {
        v32 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v30 + 72));
        v31 = ObFastReferenceObjectLocked((_QWORD *)(v30 + 64));
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v30 + 72));
        __writecr8(v32);
      }
      v29 = *(_QWORD *)(v31 + 24);
      _m_prefetchw((const void *)(v30 + 64));
      v33 = *(_QWORD *)(v30 + 64);
      if ( (v31 ^ v33) >= 0xF )
      {
LABEL_59:
        ObDereferenceObjectDeferDelete((PVOID)v31);
      }
      else
      {
        while ( 1 )
        {
          v34 = v33;
          v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 64), v33 + 1, v33);
          if ( v34 == v33 )
            break;
          if ( (v31 ^ v33) >= 0xF )
            goto LABEL_59;
        }
      }
      v35 = MiStartingOffset(PrototypePteDirect, v26, 0xFFFFFFFFLL);
      v36 = *(_DWORD *)(v30 + 56);
      v6 = a1;
      v7 = v46;
      v37 = v35 << LOBYTE(v45[((unsigned __int64)v36 >> 5) & 1]);
      v50 = v37 ^ ((unsigned __int16)v37 ^ (unsigned __int16)(32 * v36)) & 0x400;
      v25 -= 8LL;
      v27 = v50;
    }
    else
    {
      v29 = PrototypePteDirect;
    }
    v38 = AccessLog[5];
    v39 = (__int64 *)(v38 + 8);
    if ( v38 + 8 > v25 )
      goto LABEL_66;
    while ( *v39 != v29 )
    {
      if ( (unsigned __int64)++v39 > v25 )
        goto LABEL_66;
    }
    if ( (unsigned __int64)v39 > v25 )
    {
LABEL_66:
      v39 = (__int64 *)AccessLog[5];
      AccessLog[5] = v38 - 8;
      *v39 = v29;
    }
    v14 = &dword_1403CCD68;
    v40 = v27 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)v7 << 9) | ((__int64)(AccessLog[6] - (_QWORD)v39) >> 3) & 0x1FF;
  }
  else
  {
    v40 = (unsigned __int16)v50 & 0xFDFF | (v5 << 16) | ((unsigned __int64)v7 << 9);
  }
  v41 = (unsigned __int64 *)AccessLog[4];
  v50 = v40;
  *v41 = v40;
  AccessLog[4] += 8LL;
  if ( (*(_BYTE *)(v6 + 184) & 7) != 2 )
    v14 = (LONG *)(v6 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v14, retaddr);
  else
    *v14 = 0;
  v42 = KeGetCurrentPrcb();
  v43 = v42->SchedulerAssist;
  if ( v43 )
  {
    if ( v42->NestingLevel <= 1u )
    {
      v44 = v43[5] - 1;
      v43[5] = v44;
      if ( !v44 && !*((_BYTE *)v43 + 25) && !*((_BYTE *)v43 + 27) )
        KiPerformUnboostKick(v42);
    }
  }
}
