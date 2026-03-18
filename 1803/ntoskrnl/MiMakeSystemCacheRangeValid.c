/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x140120370
 * Callers:
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     PfSnReferenceProcessTrace @ 0x14008DE70 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x14008DFB4 (PfSnLogPageFaultCommon.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     PfSnCheckLoggingForThread @ 0x14008E8B0 (PfSnCheckLoggingForThread.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSystemCacheRangeValid(unsigned __int64 a1, unsigned __int64 *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // r15
  unsigned int v7; // ebp
  unsigned __int64 v9; // rsi
  __int64 v10; // r11
  LONG *v11; // rbx
  unsigned __int8 v12; // bp
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v15; // eax
  signed __int32 v16; // ett
  unsigned __int64 *v17; // r8
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // r12
  __int64 v32; // r15
  __int64 v33; // rbp
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r9
  __int64 v38; // rax
  unsigned __int64 *v39; // r10
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r8
  __int64 v42; // rax
  _QWORD *v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // r8
  __int64 result; // rax
  unsigned __int64 v47; // r13
  __int64 *v48; // r12
  __int64 v49; // rbp
  __int64 v50; // rbx
  unsigned __int64 v51; // rdi
  _QWORD *PrototypePteDirect; // r15
  __int64 v53; // rdi
  signed __int64 *v54; // r14
  signed __int64 v55; // rsi
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  struct _EX_RUNDOWN_REF *v59; // rax
  struct _EX_RUNDOWN_REF *v60; // rbx
  char v61; // r8
  signed __int64 v62; // rax
  signed __int64 v63; // rtt
  __int64 v65; // [rsp+48h] [rbp-190h] BYREF
  unsigned __int64 v66; // [rsp+50h] [rbp-188h] BYREF
  __int64 v67; // [rsp+58h] [rbp-180h]
  __int64 v68; // [rsp+60h] [rbp-178h]
  __int64 CurrentIrql; // [rsp+68h] [rbp-170h]
  __int64 v70; // [rsp+70h] [rbp-168h]
  _QWORD v71[16]; // [rsp+80h] [rbp-158h] BYREF
  _QWORD v72[16]; // [rsp+100h] [rbp-D8h]

  LODWORD(v4) = 0;
  v70 = a4;
  v68 = 0LL;
  v72[0] = 0LL;
  v6 = a4;
  v7 = a3;
  v9 = (__int64)(a1 << 25) >> 16;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v67 = v10;
  if ( (byte_1403CFBF8 & 7u) >= 6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    goto LABEL_19;
  }
  v11 = &dword_1403CCD40;
  if ( (byte_1403CFBF8 & 7) != 2 )
    v11 = (LONG *)&unk_1403CFC00;
  v12 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v11, v12);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[5];
        SchedulerAssist[5] = v15 + 1;
        if ( v15 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    _m_prefetchw(v11);
    v16 = *v11 & 0x7FFFFFFF;
    if ( v16 == _InterlockedCompareExchange(v11, v16 + 1, v16) )
      goto LABEL_16;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    ExpWaitForSpinLockSharedAndAcquire(v11, v12);
  }
  v10 = v67;
LABEL_16:
  if ( v11[1] )
    _InterlockedExchange(v11 + 1, 0);
  LOBYTE(CurrentIrql) = v12;
  v7 = a3;
LABEL_19:
  MiLockPageTableInternal(&unk_1403CFB40, v10, 0LL);
  v17 = (unsigned __int64 *)(((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v18 = 0xFFFFF6FB7DBED000uLL;
  v19 = *v17;
  v20 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)v17 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v19 & 1) != 0
    && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 + 8 * ((v21 >> 3) & 0x1FF));
      v24 = v19 | 0x20;
      if ( (v23 & 0x20) == 0 )
        v24 = v19;
      v19 = v24;
      if ( (v23 & 0x42) != 0 )
        v19 = v24 | 0x42;
    }
  }
  v66 = v19;
  if ( (unsigned __int64)&v66 >= v18
    && (unsigned __int64)&v66 <= v20
    && (unsigned int)MiPteHasShadow()
    && (v19 & 1) != 0
    && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    v25 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 + 8 * (((unsigned __int64)&v66 >> 3) & 0x1FF));
      v27 = v19 | 0x20;
      if ( (v26 & 0x20) == 0 )
        v27 = v19;
      v19 = v27;
      if ( (v26 & 0x42) != 0 )
        v19 = v27 | 0x42;
    }
  }
  v28 = *(_QWORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
  if ( v28 )
    v28 += 48 * ((v9 >> 18) & 7);
  v29 = *(_QWORD *)(v28 + 24);
  v30 = v29 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v29 & 1) == 0 )
    v30 = v29;
  v31 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v30 + 60LL) & 0x3FF)) + 7168LL;
  if ( v7 )
  {
    v32 = a3;
    v33 = 0LL;
    v34 = a1 - (_QWORD)a2;
    while ( 1 )
    {
      v35 = *a2;
      v36 = *a2;
      v71[v33] = 0LL;
      if ( (unsigned __int64)a2 >= v18 && (unsigned __int64)a2 <= v20 )
      {
        if ( (unsigned int)MiPteHasShadow() && (v36 & 1) != 0 && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
        {
          v37 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v37 )
          {
            v36 |= 0x20uLL;
            v38 = *(_QWORD *)(v37 + 8 * (((unsigned __int64)a2 >> 3) & 0x1FF));
            if ( (v38 & 0x20) == 0 )
              v36 = v35;
            if ( (v38 & 0x42) != 0 )
              v36 |= 0x42uLL;
          }
        }
        v20 = 0xFFFFF6FB7DBED7F8uLL;
      }
      v65 = v36;
      if ( !v36 )
        goto LABEL_78;
      if ( (v36 & 1) != 0 )
      {
        v39 = (unsigned __int64 *)((char *)a2 + v34);
        if ( (*((_BYTE *)a2 + v34) & 1) != 0 )
        {
          v71[v33] = 1LL;
        }
        else
        {
          v40 = v36;
          if ( (unsigned __int64)&v65 >= v18
            && (unsigned __int64)&v65 <= v20
            && (unsigned int)MiPteHasShadow()
            && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
          {
            v41 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v41 )
            {
              v42 = *(_QWORD *)(v41 + 8 * (((unsigned __int64)&v65 >> 3) & 0x1FF));
              v40 = v36 | 0x20;
              if ( (v42 & 0x20) == 0 )
                v40 = v36;
              if ( (v42 & 0x42) != 0 )
                v40 |= 0x42uLL;
            }
            else
            {
              v40 = v36;
            }
          }
          v43 = (_QWORD *)(48 * ((v40 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          v44 = v43[2];
          v72[v33] = v44;
          if ( (unsigned int)MiAllocateWsle(v31, v39, v43, 0, v36, 0, 0LL) )
          {
            if ( (v44 & 0x400) != 0 )
            {
              v18 = 0xFFFFF6FB7DBED000uLL;
              if ( PfSnNumActiveTraces )
                v71[v33] = v43[1] | 0x8000000000000000uLL;
              goto LABEL_78;
            }
          }
          else
          {
            v71[v33] = 1LL;
          }
          v18 = 0xFFFFF6FB7DBED000uLL;
        }
      }
      else
      {
        v71[v33] = 1LL;
        *a2 = v35 | 1;
      }
LABEL_78:
      ++v33;
      v20 = 0xFFFFF6FB7DBED7F8uLL;
      ++a2;
      if ( !--v32 )
      {
        v7 = a3;
        v6 = v70;
        break;
      }
    }
  }
  MiUnlockPageTableInternal(v31, v67);
  MiUnlockWorkingSetShared(v31, CurrentIrql, v45);
  result = -(__int64)v7;
  v47 = (unsigned __int64)&a2[-v7];
  if ( v7 )
  {
    result = a3;
    v48 = v71;
    while ( 1 )
    {
      v49 = *v48;
      if ( *v48 == 1 )
        break;
      if ( v49 )
      {
        PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(v72[(unsigned int)v4]);
        v53 = *PrototypePteDirect;
        v54 = (signed __int64 *)(*PrototypePteDirect + 64LL);
        v55 = ObFastReferenceObject(v54);
        if ( !v55 )
        {
          v56 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v53 + 72));
          v55 = ObFastReferenceObjectLocked(v54);
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v53 + 72));
          __writecr8(v56);
        }
        v57 = MiStartingOffset(PrototypePteDirect, v49, 0xFFFFFFFFLL);
        if ( !*(_QWORD *)(v55 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          v59 = PfSnReferenceProcessTrace((__int64)CurrentThread->ApcState.Process);
          v60 = v59;
          if ( v59 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread((__int64)CurrentThread, (__int64)v59, 4) )
              PfSnLogPageFaultCommon((__int64)v60, v55, *(_QWORD *)(v55 + 24), v57, v61);
            ExReleaseRundownProtection(v60 + 45);
          }
        }
        _m_prefetchw(v54);
        v62 = *v54;
        if ( (v55 ^ (unsigned __int64)*v54) >= 0xF )
        {
LABEL_98:
          ObDereferenceObjectDeferDelete((PVOID)v55);
        }
        else
        {
          while ( 1 )
          {
            v63 = v62;
            v62 = _InterlockedCompareExchange64(v54, v62 + 1, v62);
            if ( v63 == v62 )
              break;
            if ( (v55 ^ (unsigned __int64)v62) >= 0xF )
              goto LABEL_98;
          }
        }
        LODWORD(v4) = v68;
        goto LABEL_100;
      }
LABEL_101:
      v6 = v70;
      v4 = (unsigned int)(v4 + 1);
      ++v48;
      v68 = v4;
      v47 += 8LL;
      if ( (unsigned int)v4 >= (unsigned int)result )
        return result;
    }
    v65 = MI_READ_PTE_LOCK_FREE(v47);
    v50 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v65) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v51 = (unsigned __int8)MiLockPageInline(v50);
    MiDecrementShareCount(v50);
    _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v6);
    MiDecrementShareCount(v6);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v51);
LABEL_100:
    result = a3;
    goto LABEL_101;
  }
  return result;
}
