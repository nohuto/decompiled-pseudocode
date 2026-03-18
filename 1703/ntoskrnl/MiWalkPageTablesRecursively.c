/*
 * XREFs of MiWalkPageTablesRecursively @ 0x1400D4D00
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1400D4D00 (MiWalkPageTablesRecursively.c)
 *     MiWalkPageTables @ 0x1400D7BB0 (MiWalkPageTables.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x14000D778 (KiResetGlobalDpcWatchdogProfiler.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A02B0 (MiGetSystemCacheReverseMap.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     MiWalkPageTablesRecursively @ 0x1400D4D00 (MiWalkPageTablesRecursively.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     MiRecomputeWalkHierarchy @ 0x14020E24C (MiRecomputeWalkHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     EtwTraceShouldYieldProcessor @ 0x140253C08 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiWalkPageTablesRecursively(unsigned int *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int *v3; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  void (__fastcall *v6)(_QWORD, _QWORD, _QWORD, _QWORD); // r11
  unsigned int v7; // ecx
  __int64 v8; // rax
  bool v9; // cf
  unsigned int v10; // esi
  unsigned __int64 *v11; // r10
  unsigned __int64 v12; // rdx
  __int64 DpcRequestSummary; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  LONG *v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // ebp
  unsigned int DpcTimeCount; // esi
  unsigned int v20; // edi
  _KTHREAD *NextThread; // rax
  bool v22; // zf
  unsigned __int64 v23; // rdi
  LONG *SharedVm; // rax
  unsigned __int8 v25; // bp
  LONG *v26; // rsi
  int v27; // edi
  unsigned int v28; // edi
  int v29; // edi
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // rax
  char v38; // cl
  __int64 result; // rax
  unsigned __int64 *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int *v45; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v46; // [rsp+28h] [rbp-60h]
  __int64 v47; // [rsp+30h] [rbp-58h] BYREF
  __int64 v48; // [rsp+38h] [rbp-50h]
  unsigned __int64 v49; // [rsp+40h] [rbp-48h]
  void (__fastcall *v50)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-40h]
  __int64 (__fastcall *v51)(unsigned int *, unsigned __int64, __int64, __int64); // [rsp+50h] [rbp-38h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v54; // [rsp+98h] [rbp+10h]
  __int64 v56; // [rsp+A8h] [rbp+20h]

  v3 = a1;
  v4 = *((_QWORD *)a1 + 1);
  v5 = a2;
  v6 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)a1 + 16);
  v51 = (__int64 (__fastcall *)(unsigned int *, unsigned __int64, __int64, __int64))*((_QWORD *)a1 + 15);
  v7 = 0;
  v54 = 0;
  v8 = 4LL * a3;
  v9 = a2 < *(_QWORD *)&v3[v8 + 12];
  v10 = a3;
  v56 = v4;
  v11 = (unsigned __int64 *)&v3[v8 + 12];
  v50 = v6;
  if ( v9 )
    v5 = *v11;
  v45 = v3 + 12;
  v48 = 16LL * a3;
  v46 = (unsigned __int64 *)&v3[v8 + 12];
  if ( a3 == 3 )
  {
    v12 = *((_QWORD *)v3 + 13);
  }
  else
  {
    v12 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v12 > v11[1] )
      v12 = v11[1];
  }
  v49 = v12;
  if ( v5 <= v12 )
  {
    DpcRequestSummary = 1LL;
    while ( 1 )
    {
      ++*((_QWORD *)v3 + 14);
      v14 = *v3;
      v15 = *((_QWORD *)v3 + 14);
      if ( (v14 & 8) != 0 && (v15 & 0xF) == 0 && *(_QWORD *)(*((_QWORD *)v3 + 5) + 5760LL) < 0x420uLL )
        return 2LL;
      if ( (v14 & 2) == 0 )
        goto LABEL_77;
      if ( ((unsigned __int8)v15 & *((_BYTE *)v3 + 6)) == 0 )
      {
        v16 = &dword_14036D4C0;
        if ( (*(_BYTE *)(v4 + 192) & 7) != 2 )
          v16 = (LONG *)(v4 + 200);
        if ( (*v16 & 0x40000000) != 0 )
          goto LABEL_40;
      }
      if ( *((_BYTE *)v3 + 4) >= 2u )
        goto LABEL_77;
      CurrentPrcb = KeGetCurrentPrcb();
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      v14 = DpcWatchdogCount > 7;
      DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
      if ( (DpcRequestSummary & 1) == 0 )
        break;
      v15 = 1LL;
      if ( DpcTimeCount <= 7 )
        goto LABEL_29;
      if ( CurrentPrcb->QuantumEnd )
      {
        v20 = 1;
        goto LABEL_36;
      }
LABEL_31:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v20 = 5;
      }
      else
      {
        if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
          goto LABEL_35;
        v20 = 6;
      }
LABEL_36:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v20, DpcWatchdogCount, DpcTimeCount, DpcRequestSummary);
      v10 = a3;
      v22 = v20 == 0;
      v3 = a1;
      v4 = v56;
      if ( !v22 )
      {
        v6 = v50;
LABEL_40:
        if ( v6 )
        {
          *((_BYTE *)v3 + 5) = 1;
          v6(v3, v15, v14, DpcRequestSummary);
          *((_BYTE *)v3 + 5) = 0;
        }
        if ( (*v3 & 4) != 0 )
        {
          v23 = *((unsigned __int8 *)v3 + 4);
          SharedVm = MiGetSharedVm(v4);
          ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
          __writecr8(v23);
          MiLockWorkingSetShared(v4);
        }
        else
        {
          v25 = *((_BYTE *)v3 + 4);
          MiPreUnlockWorkingSetExclusive(v56, v25);
          if ( (*(_BYTE *)(v56 + 192) & 7) == 2 )
            v26 = &dword_14036D4C0;
          else
            v26 = (LONG *)(v56 + 200);
          if ( (*v26 & 0x40000000) != 0 )
          {
            v27 = 1;
            v26[1] = 1;
          }
          else
          {
            v27 = 0;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v26, retaddr);
          else
            *v26 = 0;
          __writecr8(v25);
          if ( v27 && (v28 = 0, v26[1]) )
          {
            while ( 1 )
            {
              if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v28);
              if ( (v28 & 0x3F) == 0 )
                break;
              if ( !v26[1] )
                goto LABEL_61;
            }
            v29 = 1;
          }
          else
          {
LABEL_61:
            v29 = 0;
          }
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v26, CurrentIrql);
          else
            ExpAcquireSpinLockExclusive(v26, CurrentIrql);
          v4 = v56;
          if ( !v29 )
            v26[1] = 0;
          v10 = a3;
        }
        if ( v10 < 4 )
        {
          v31 = (unsigned __int64 *)&v45[(unsigned __int64)v48 / 4];
          v32 = 4 - v10;
          do
          {
            *v31 = v5;
            v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v31 += 2;
            --v32;
          }
          while ( v32 );
          v4 = v56;
        }
        if ( v10 != 3 )
          return 1LL;
        v33 = *((_QWORD *)v45 + 6);
        if ( !v33 )
          return 1LL;
        DpcRequestSummary = 1LL;
        v5 = v33 - 8;
        v7 = 1;
        v54 = 1;
        goto LABEL_106;
      }
      v11 = v46;
      DpcRequestSummary = 1LL;
LABEL_77:
      v34 = *(_QWORD *)v5;
      v47 = v34;
      if ( (v34 & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_82;
        v35 = *((_QWORD *)v3 + 4);
        if ( v35 && v35 == *v11 )
        {
          *((_QWORD *)v3 + 4) = 0LL;
          goto LABEL_82;
        }
        if ( (v34 & 0x80u) == 0LL )
        {
          v36 = 0xFFFFF68000000000uLL;
          if ( v5 != 0xFFFFF6FB7DBEDF68uLL )
          {
            if ( (*v3 & 1) != 0
              || (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v47) >> 12) & 0xFFFFFFFFFLL)
                            - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) != 1
              && (v10 != 1
               || (*(_BYTE *)(v4 + 192) & 7) != 2
               || (unsigned __int16)*(_DWORD *)(MiGetSystemCacheReverseMap((__int64)(((__int64)((v5 << 25) - (v36 << 25)) >> 16 << 25)
                                                                                   - (v36 << 25)) >> 16)
                                              + 32) >> 6 == (unsigned __int64)*(unsigned __int16 *)(v4 + 172)) )
            {
              result = MiWalkPageTablesRecursively(
                         v3,
                         (__int64)((v5 << 25) - (v36 << 25)) >> 16,
                         v10 - 1,
                         DpcRequestSummary);
              v54 = result;
              v7 = result;
              if ( (_DWORD)result == 3 || (_DWORD)result == 2 )
                return result;
              if ( (_DWORD)result == 1 )
              {
                if ( v10 < 4 )
                {
                  v40 = (unsigned __int64 *)&v45[(unsigned __int64)v48 / 4];
                  v41 = 4 - v10;
                  do
                  {
                    *v40 = v5;
                    v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                    v40 += 2;
                    --v41;
                  }
                  while ( v41 );
                  v7 = result;
                  v4 = v56;
                }
                if ( v10 != 3 )
                  return 1LL;
                v42 = *((_QWORD *)v45 + 6);
                if ( !v42 )
                  return 1LL;
                v5 = v42 - 8;
                goto LABEL_105;
              }
LABEL_82:
              v36 = 0xFFFFF68000000000uLL;
            }
            if ( (*v3 & 1) != 0
              || v10
              || ((v37 = MI_READ_PTE_LOCK_FREE(v36 + ((((__int64)((v5 << 25) - (v36 << 25)) >> 16) & 0xFFFFFFFFF000uLL) >> 9)),
                   (v37 & 1) != 0)
                ? (v38 = HIBYTE(v37) & 0xF | (16 * ((v37 >> 60) & 7)))
                : (v38 = 10),
                  (unsigned __int8)((v38 & 0xF) - 8) > 2u) )
            {
              v43 = *((_QWORD *)v3 + 4);
              if ( v43 && v43 == *v46 )
                *((_QWORD *)v3 + 4) = 0LL;
              result = v51(v3, v5, v14, DpcRequestSummary);
              v54 = result;
              v7 = result;
              if ( (_DWORD)result == 3 || (_DWORD)result == 2 )
                return result;
              if ( (_DWORD)result == 1 )
              {
                v44 = MiRecomputeWalkHierarchy(v3, v5, v10);
                if ( !v44 )
                  return 1LL;
                v5 = v44 - 8;
                goto LABEL_118;
              }
            }
            else
            {
LABEL_118:
              v7 = v54;
            }
LABEL_105:
            DpcRequestSummary = 1LL;
            goto LABEL_106;
          }
        }
      }
      v7 = v54;
LABEL_106:
      v5 += 8LL;
      if ( v5 > v49 )
        goto LABEL_122;
      v3 = a1;
      v11 = v46;
      v6 = v50;
    }
    v15 = 0LL;
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v20 = 2;
      goto LABEL_36;
    }
    if ( CurrentPrcb->QuantumEnd )
    {
      v20 = 3;
      goto LABEL_36;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v20 = 4;
      goto LABEL_36;
    }
LABEL_29:
    if ( DpcWatchdogCount <= 7 )
    {
      v10 = a3;
      DpcRequestSummary = 1LL;
      v4 = v56;
      goto LABEL_77;
    }
    if ( !(_DWORD)v15 )
    {
LABEL_35:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler((__int64)CurrentPrcb);
      _enable();
      v20 = 0;
      goto LABEL_36;
    }
    goto LABEL_31;
  }
LABEL_122:
  if ( v10 == 3 )
    return 0;
  return v7;
}
