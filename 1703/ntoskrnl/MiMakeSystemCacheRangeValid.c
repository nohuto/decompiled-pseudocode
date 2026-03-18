/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x14009BBD0
 * Callers:
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     PfSnCheckLoggingForThread @ 0x14004AF54 (PfSnCheckLoggingForThread.c)
 *     PfSnReferenceProcessTrace @ 0x1400602F0 (PfSnReferenceProcessTrace.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A02B0 (MiGetSystemCacheReverseMap.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     PfSnLogPageFaultCommon @ 0x1400B5710 (PfSnLogPageFaultCommon.c)
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiMakeSystemCacheRangeValid(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r15d
  LONG *v7; // rbp
  LONG *v8; // rdi
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // r13
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // r9
  int v22; // r10d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rsi
  __int64 *v27; // r13
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  unsigned __int64 v33; // rdi
  __int64 v34; // rbx
  _QWORD *PrototypePteDirect; // r12
  __int64 v36; // rsi
  _QWORD *v37; // r14
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rdi
  int v40; // ebp
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v42; // rax
  struct _EX_RUNDOWN_REF *v43; // rdi
  int v44; // r8d
  signed __int64 v45; // rax
  signed __int64 v46; // rtt
  _QWORD *v48; // [rsp+38h] [rbp-170h]
  __int64 v49; // [rsp+40h] [rbp-168h] BYREF
  __int64 v50; // [rsp+48h] [rbp-160h]
  _QWORD v51[16]; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v52[16]; // [rsp+D0h] [rbp-D8h]
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v4 = 0;
  v50 = a4;
  v52[0] = 0LL;
  v7 = &dword_14036D4C0;
  v8 = &dword_14036D4C0;
  v9 = a1 << 25 >> 16;
  if ( (byte_1403819C0 & 7) != 2 )
    v8 = (LONG *)&unk_1403819C8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v8, CurrentIrql);
  v8[1] = 0;
  v11 = *(_QWORD *)(MiGetSystemCacheReverseMap(v9) + 24);
  if ( (v11 & 1) != 0 )
    v11 &= ~1uLL;
  v12 = a3;
  v13 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
  if ( a3 )
  {
    v14 = 0LL;
    v15 = a1 - (_QWORD)a2;
    v16 = a3;
    do
    {
      v51[v14] = 0LL;
      v17 = MI_READ_PTE_LOCK_FREE(a2);
      v49 = v17;
      if ( v17 )
      {
        if ( (v17 & 1) != 0 )
        {
          if ( (*((_BYTE *)a2 + v15) & 1) != 0 )
          {
            v51[v14] = 1LL;
          }
          else
          {
            v20 = MI_GET_PFN_FROM_PTE(&v49, v18, v19, v17);
            v52[v14] = *(_QWORD *)(v20 + 16);
            if ( (unsigned int)MiAllocateWsle((int)v13 + 5888, v22, v20, 0, v21, 0LL) )
            {
              if ( (v52[v14] & 0x400LL) != 0 && PfSnNumActiveTraces )
                v51[v14] = *(_QWORD *)(v20 + 8) | 0x8000000000000000uLL;
            }
            else
            {
              v51[v14] = 1LL;
            }
          }
        }
        else
        {
          *a2 |= 1uLL;
          v51[v14] = 1LL;
        }
      }
      ++v14;
      ++a2;
      --v16;
    }
    while ( v16 );
    v7 = &dword_14036D4C0;
    v12 = a3;
  }
  MiPreUnlockWorkingSetExclusive(v13 + 5888, CurrentIrql);
  if ( (*(_BYTE *)(v13 + 6080) & 7) != 2 )
    v7 = (LONG *)(v13 + 6088);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
  else
    *v7 = 0;
  __writecr8(CurrentIrql);
  v26 = &a2[-v12];
  v48 = v26;
  if ( a3 )
  {
    v27 = v51;
    do
    {
      v28 = *v27;
      if ( *v27 == 1 )
      {
        v49 = MI_READ_PTE_LOCK_FREE(v26);
        v32 = MI_GET_PFN_FROM_PTE(&v49, v29, v30, v31);
        v33 = (unsigned __int8)MiLockPageInline(v32);
        MiDecrementShareCount(v32);
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v34 = v50;
        MiLockPageAtDpcInline(v50);
        MiDecrementShareCount(v34);
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v33);
      }
      else if ( v28 )
      {
        PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(v52[v4], v23, v24, v25);
        v36 = *PrototypePteDirect;
        v37 = (_QWORD *)(*PrototypePteDirect + 64LL);
        v38 = ObFastReferenceObject(v37);
        if ( !v38 )
        {
          v39 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v36 + 72));
          v38 = ObFastReferenceObjectLocked(v37);
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v36 + 72));
          __writecr8(v39);
        }
        v40 = MiStartingOffset(PrototypePteDirect, v28, 0xFFFFFFFFLL);
        if ( !*(_QWORD *)(v38 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          v42 = PfSnReferenceProcessTrace((__int64)CurrentThread->ApcState.Process);
          v43 = (struct _EX_RUNDOWN_REF *)v42;
          if ( v42 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread((__int64)CurrentThread, v42, 4) )
              PfSnLogPageFaultCommon((_DWORD)v43, v38, *(_QWORD *)(v38 + 24), v40, v44);
            ExReleaseRundownProtection(v43 + 45);
          }
        }
        _m_prefetchw(v37);
        v45 = *v37;
        if ( (v38 ^ *v37) >= 0xF )
        {
LABEL_42:
          ObDereferenceObjectDeferDelete((PVOID)v38);
        }
        else
        {
          while ( 1 )
          {
            v46 = v45;
            v45 = _InterlockedCompareExchange64(v37, v45 + 1, v45);
            if ( v46 == v45 )
              break;
            if ( (v38 ^ v45) >= 0xF )
              goto LABEL_42;
          }
        }
        v26 = v48;
      }
      ++v26;
      ++v4;
      ++v27;
      v48 = v26;
    }
    while ( v4 < a3 );
  }
}
