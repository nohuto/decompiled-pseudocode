/*
 * XREFs of MiTrimOrAgeWorkingSet @ 0x1400D8800
 * Callers:
 *     MiProcessWorkingSets @ 0x1400830E0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140006E9C (MiQueuePageAccessLog.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     PfLogForegroundProcess @ 0x14005F094 (PfLogForegroundProcess.c)
 *     MmFreeAccessPfnBuffer @ 0x14005F1B8 (MmFreeAccessPfnBuffer.c)
 *     MiDetachSession @ 0x140063B90 (MiDetachSession.c)
 *     MiTrimWorkingSet @ 0x14007F5E8 (MiTrimWorkingSet.c)
 *     MiAttachThreadDone @ 0x1400AD5BC (MiAttachThreadDone.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x1400B1E40 (KiDetachProcess.c)
 *     MiAttachWorkingSet @ 0x1400B21D0 (MiAttachWorkingSet.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MiEmptyWorkingSet @ 0x140136528 (MiEmptyWorkingSet.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14013F704 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiComputeTrimAmount @ 0x140214C68 (MiComputeTrimAmount.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimOrAgeWorkingSet(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v3; // zf
  __int64 v6; // r13
  __int64 v7; // r8
  LONG *v8; // r14
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v10; // edx
  unsigned int v11; // r14d
  int v12; // r12d
  unsigned int v13; // ebp
  __int64 v14; // r14
  char v15; // cl
  _QWORD *v16; // rdx
  LONG *v17; // r13
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  LONG *v21; // rcx
  char v22; // al
  signed __int64 v23; // rsi
  int v25; // r8d
  _SLIST_ENTRY *v26; // rcx
  signed __int32 v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  _BYTE *v30; // rcx
  __int64 v31; // rax
  _KPROCESS *Process; // rbx
  int v33; // [rsp+30h] [rbp-88h] BYREF
  __int64 v34; // [rsp+38h] [rbp-80h]
  LONG *v35; // [rsp+40h] [rbp-78h]
  $5BC46E0569261879018906DEC3127961 v36; // [rsp+48h] [rbp-70h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v3 = *(_BYTE *)(a1 + 194) == 2;
  v34 = a2;
  if ( v3 && (*(_BYTE *)(a1 + 192) & 7) == 0 )
    PfLogForegroundProcess(a1);
  v6 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 172)) + 5544LL);
  if ( (*(_BYTE *)(a1 + 192) & 7) == 2 )
    v35 = &dword_14036D4C0;
  else
    v35 = (LONG *)(a1 + 200);
  if ( (unsigned int)MiAttachWorkingSet(a1) )
  {
    if ( (a3 & 4) != 0 )
      MiEmptyWorkingSet(a1, 0LL);
    if ( (*(_BYTE *)(a1 + 192) & 7) == 2 )
      v8 = &dword_14036D4C0;
    else
      v8 = (LONG *)(a1 + 200);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8, CurrentIrql);
    }
    else
    {
      v33 = 0;
      if ( _interlockedbittestandset(v8, 0x1Fu) )
        v33 = ExpWaitForSpinLockExclusiveAndAcquire(v8, CurrentIrql);
      v10 = *v8;
      while ( (v10 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v10 & 0x40000000) == 0 )
        {
          v27 = _InterlockedCompareExchange(v8, v10 | 0x40000000, v10);
          v3 = v10 == v27;
          v10 = v27;
          if ( !v3 )
            continue;
        }
        KeYieldProcessorEx(&v33);
        v10 = *v8;
      }
    }
    v8[1] = 0;
    if ( (*(_BYTE *)(a1 + 192) & 7) == 0 && (a3 & 0x20) != 0 )
      MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), CurrentIrql, 0, 2);
    if ( (a3 & 0x100) != 0 )
      MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), CurrentIrql, 0, 4);
    v11 = *(unsigned __int16 *)(v6 + 2354);
    v12 = 0;
    v13 = 0;
    if ( (a3 & 1) != 0 )
    {
      v28 = v34;
      *(_BYTE *)(v34 + 1) = MiTrimPassToAge[*(_BYTE *)v34 & 0x7F];
      v29 = MiComputeTrimAmount(v28, a1, v7);
      v30 = (_BYTE *)v34;
      if ( v29 )
      {
        v31 = MiTrimWorkingSet(a1, v29, CurrentIrql, *(unsigned __int8 *)(v34 + 1), 1);
        v30 = (_BYTE *)v34;
        *(_QWORD *)(v34 + 96) += v31;
      }
      v25 = 0;
      if ( ((*v30 & 0x7F) == 0 && *v30 < 0x80u || (*v30 & 0x7F) == 4) && *(_WORD *)(v6 + 2354) )
        v25 = 1;
      if ( v30[4] != 1 )
      {
LABEL_23:
        v14 = 0LL;
        if ( v13 != 1 )
        {
          if ( v12 == 1 )
          {
            v15 = 3;
            v16 = (_QWORD *)v34;
            if ( *(_BYTE *)(a1 + 194) != 2 )
              v15 = 1;
            *(_QWORD *)(v34 + 8) += *(_QWORD *)(a1 + 40) >> v15;
            v16[2] += *(_QWORD *)(a1 + 48) >> v15;
            v16[3] += *(_QWORD *)(a1 + 56) >> v15;
            v16[4] += *(_QWORD *)(a1 + 64) >> v15;
            v16[5] += *(_QWORD *)(a1 + 72) >> v15;
            v16[6] += *(_QWORD *)(a1 + 80) >> v15;
            v16[7] += *(_QWORD *)(a1 + 88) >> v15;
            v16[8] += *(_QWORD *)(a1 + 96) >> v15;
          }
          if ( (a3 & 0x10) != 0 || (a3 & 8) != 0 )
            MiCaptureAndResetWorkingSetAccessBits(a1, CurrentIrql, a3);
          v17 = v35;
          v14 = MEMORY[0xFFFFF78000000320];
          v18 = (_QWORD *)*((_QWORD *)v35 + 5);
          if ( v18 )
          {
            v19 = (_QWORD *)*v18;
            v20 = (_QWORD *)*((_QWORD *)v35 + 5);
            if ( *v18 )
            {
              do
              {
                v20 = v19;
                v19 = (_QWORD *)*v19;
              }
              while ( v19 );
            }
            if ( MEMORY[0xFFFFF78000000320] - v20[2] > (unsigned __int64)PfKernelGlobals )
            {
              MiEmptyPageAccessLog(v18);
              *((_QWORD *)v17 + 5) = 0LL;
            }
          }
        }
        MiPreUnlockWorkingSetExclusive(a1, CurrentIrql);
        if ( (*(_BYTE *)(a1 + 192) & 7) == 2 )
          v21 = &dword_14036D4C0;
        else
          v21 = (LONG *)(a1 + 200);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
        else
          *v21 = 0;
        __writecr8(CurrentIrql);
        v22 = *(_BYTE *)(a1 + 192) & 7;
        if ( v22 )
        {
          if ( v22 == 1 )
          {
            if ( *(_WORD *)(a1 + 172) )
            {
              v36.SavedApcState.Process = 0LL;
              Process = KeGetCurrentThread()->ApcState.Process;
              KiUnstackDetachProcess(&v36, 1LL);
              MiAttachThreadDone((__int64)&Process[1].IdealNode[12]);
              ObfDereferenceObjectWithTag(Process, 0x746C6644u);
            }
            else
            {
              MiDetachSession();
            }
          }
        }
        else if ( (PEPROCESS)(a1 - 1280) != PsInitialSystemProcess )
        {
          KiDetachProcess((__int64 *)&KeGetCurrentThread()->600, 1);
        }
        if ( v13 )
          return v13;
        if ( !qword_14036CA40 )
          return v13;
        v23 = _InterlockedExchange64(&qword_14036CA40, 0LL);
        if ( !v23 )
          return v13;
        if ( v14 - *(_QWORD *)(v23 + 16) > (unsigned __int64)PfKernelGlobals || (a3 & 0x18) != 0 )
        {
          v26 = (_SLIST_ENTRY *)v23;
        }
        else
        {
          if ( !qword_14036CA40 && !_InterlockedCompareExchange64(&qword_14036CA40, v23, 0LL) )
            return v13;
          v26 = (_SLIST_ENTRY *)v23;
          if ( *(_QWORD *)(v23 + 32) == v23 + 72 )
          {
            MmFreeAccessPfnBuffer(v23, 1);
            return v13;
          }
        }
        MiQueuePageAccessLog(v26);
        return v13;
      }
    }
    else
    {
      if ( (a3 & 2) != 0 )
      {
        v13 = MiAgeWorkingSet(a1, CurrentIrql, 1, *(unsigned __int16 *)(v6 + 2354));
        v12 = 1;
        if ( !v13 && *(_BYTE *)(v6 + 55) == 1 && v11 - 1 <= 8 )
          v13 = MiAgeWorkingSet(a1, CurrentIrql, 2, 0xAu);
        goto LABEL_23;
      }
      if ( (a3 & 0x40) != 0 )
      {
        v25 = 1;
      }
      else
      {
        if ( (a3 & 0x80u) == 0 )
          goto LABEL_23;
        v25 = 2;
      }
    }
    v13 = MiAgeWorkingSet(a1, CurrentIrql, v25, v11);
    v12 = 1;
    goto LABEL_23;
  }
  return 0LL;
}
