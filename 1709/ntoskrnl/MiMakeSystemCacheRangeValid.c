/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x140079590
 * Callers:
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 * Callees:
 *     PfSnReferenceProcessTrace @ 0x140012760 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x140012A2C (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x14001313C (PfSnCheckLoggingForThread.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSystemCacheRangeValid(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  LONG *v7; // rbp
  LONG *v8; // rsi
  unsigned __int64 v9; // r15
  __int64 CurrentIrql; // r13
  unsigned int v11; // edi
  signed __int32 v12; // edx
  bool v13; // zf
  signed __int32 v14; // eax
  __int64 *v15; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r11
  __int64 v22; // r15
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 v25; // rbp
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 v28; // rsi
  __int64 v29; // r9
  __int64 *v30; // r10
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 result; // rax
  __int64 *v35; // r15
  unsigned __int64 *v36; // r13
  unsigned __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rbx
  unsigned __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 *PrototypePteDirect; // r12
  __int64 v43; // rdi
  signed __int64 *v44; // r14
  __int64 v45; // rsi
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  struct _EX_RUNDOWN_REF *v49; // rax
  struct _EX_RUNDOWN_REF *v50; // rbx
  char v51; // r8
  signed __int64 v52; // rax
  signed __int64 v53; // rtt
  unsigned int v54; // [rsp+30h] [rbp-188h]
  __int64 v55; // [rsp+38h] [rbp-180h] BYREF
  __int64 v56; // [rsp+40h] [rbp-178h]
  __int64 v57; // [rsp+48h] [rbp-170h] BYREF
  __int64 v58; // [rsp+50h] [rbp-168h]
  __int64 v59; // [rsp+58h] [rbp-160h]
  _QWORD v60[16]; // [rsp+60h] [rbp-158h] BYREF
  _QWORD v61[16]; // [rsp+E0h] [rbp-D8h]
  void *retaddr; // [rsp+1B8h] [rbp+0h]

  LODWORD(v4) = 0;
  v59 = a4;
  v56 = 0LL;
  v61[0] = 0LL;
  v54 = a3;
  v7 = &dword_140389780;
  v8 = &dword_140389780;
  v9 = a1 << 25 >> 16;
  if ( (byte_14038B940 & 7) != 2 )
    v8 = (LONG *)&unk_14038B948;
  CurrentIrql = KeGetCurrentIrql();
  v58 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v11 = 0;
    if ( _interlockedbittestandset(v8, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(v8, CurrentIrql);
    v12 = *v8;
    while ( (v12 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v12 & 0x40000000) == 0 )
      {
        v14 = _InterlockedCompareExchange(v8, v12 | 0x40000000, v12);
        v13 = v12 == v14;
        v12 = v14;
        if ( !v13 )
          continue;
      }
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
      v12 = *v8;
    }
  }
  v8[1] = 0;
  v15 = (__int64 *)(((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  PteShadow = *v15;
  v17 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL )
  {
    v17 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v15 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v15, *v15);
  }
  v57 = PteShadow;
  v18 = *(_QWORD *)(*(_QWORD *)(MI_GET_PFN_FROM_PTE(&v57, v17, a3, a4) + 16) + 48 * ((v9 >> 18) & 7) + 24);
  if ( (v18 & 1) != 0 )
    v18 &= ~1uLL;
  v22 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v18 + 60LL) & 0x3FF));
  if ( v54 )
  {
    v23 = 0LL;
    v24 = a1 - (_QWORD)a2;
    v25 = v54;
    while ( 1 )
    {
      v26 = *a2;
      v27 = *a2;
      v60[v23] = 0LL;
      if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= v21 )
        v27 = MiReadPteShadow(a2, v26);
      v55 = v27;
      if ( !v27 )
        goto LABEL_34;
      if ( (v27 & 1) != 0 )
      {
        if ( (*((_BYTE *)a2 + v24) & 1) != 0 )
        {
          v60[v23] = 1LL;
        }
        else
        {
          v28 = MI_GET_PFN_FROM_PTE(&v55, v19, v20, v27);
          v61[v23] = *(_QWORD *)(v28 + 16);
          if ( (unsigned int)MiAllocateWsle(v22 + 6080, v30, v28, 0, v29, 0LL) )
          {
            if ( (v61[v23] & 0x400LL) != 0 )
            {
              v21 = 0xFFFFF6FB7DBED7F8uLL;
              if ( PfSnNumActiveTraces )
                v60[v23] = *(_QWORD *)(v28 + 8) | 0x8000000000000000uLL;
              goto LABEL_34;
            }
          }
          else
          {
            v60[v23] = 1LL;
          }
          v21 = 0xFFFFF6FB7DBED7F8uLL;
        }
      }
      else
      {
        v60[v23] = 1LL;
        *a2 = v26 | 1;
      }
LABEL_34:
      ++v23;
      ++a2;
      if ( !--v25 )
      {
        LOBYTE(CurrentIrql) = v58;
        v7 = &dword_140389780;
        break;
      }
    }
  }
  MiPreUnlockWorkingSetExclusive(v22 + 6080, CurrentIrql);
  if ( (*(_BYTE *)(v22 + 6272) & 7) != 2 )
    v7 = (LONG *)(v22 + 6280);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
  else
    *v7 = 0;
  __writecr8((unsigned __int8)CurrentIrql);
  result = -(__int64)v54;
  v35 = &a2[-v54];
  if ( v54 )
  {
    result = v54;
    v36 = v60;
    while ( 1 )
    {
      v37 = *v36;
      if ( *v36 == 1 )
        break;
      if ( v37 )
      {
        PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(v61[(unsigned int)v4]);
        v43 = *PrototypePteDirect;
        v44 = (signed __int64 *)(*PrototypePteDirect + 64);
        v45 = ObFastReferenceObject(v44);
        if ( !v45 )
        {
          v46 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v43 + 72));
          v45 = ObFastReferenceObjectLocked(v44);
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v43 + 72));
          __writecr8(v46);
        }
        v47 = MiStartingOffset(PrototypePteDirect, v37, 0xFFFFFFFF);
        if ( !*(_QWORD *)(v45 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          v49 = PfSnReferenceProcessTrace((__int64)CurrentThread->ApcState.Process);
          v50 = v49;
          if ( v49 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread((__int64)CurrentThread, (__int64)v49, 4) )
              PfSnLogPageFaultCommon((__int64)v50, v45, *(_QWORD *)(v45 + 24), v47, v51);
            ExReleaseRundownProtection_0(v50 + 45);
          }
        }
        _m_prefetchw(v44);
        v52 = *v44;
        if ( (v45 ^ (unsigned __int64)*v44) >= 0xF )
        {
LABEL_62:
          ObDereferenceObjectDeferDelete((PVOID)v45);
        }
        else
        {
          while ( 1 )
          {
            v53 = v52;
            v52 = _InterlockedCompareExchange64(v44, v52 + 1, v52);
            if ( v53 == v52 )
              break;
            if ( (v45 ^ (unsigned __int64)v52) >= 0xF )
              goto LABEL_62;
          }
        }
        LODWORD(v4) = v56;
        goto LABEL_64;
      }
LABEL_65:
      v4 = (unsigned int)(v4 + 1);
      ++v36;
      v56 = v4;
      ++v35;
      if ( (unsigned int)v4 >= (unsigned int)result )
        return result;
    }
    v38 = *v35;
    if ( (unsigned __int64)v35 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v35 <= 0xFFFFF6FB7DBED7F8uLL )
      v38 = MiReadPteShadow(v35, *v35);
    v55 = v38;
    v39 = MI_GET_PFN_FROM_PTE(&v55, v31, v32, v33);
    v40 = (unsigned __int8)MiLockPageInline(v39);
    MiDecrementShareCount(v39);
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v41 = v59;
    MiLockPageAtDpcInline(v59);
    MiDecrementShareCount(v41);
    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v40);
LABEL_64:
    result = v54;
    goto LABEL_65;
  }
  return result;
}
