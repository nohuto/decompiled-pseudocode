/*
 * XREFs of MiTrimOrAgeWorkingSet @ 0x14009C460
 * Callers:
 *     MiProcessWorkingSets @ 0x14009FE30 (MiProcessWorkingSets.c)
 * Callees:
 *     MiReturnCcAccessLog @ 0x140007EDC (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140007F3C (MiQueuePageAccessLog.c)
 *     MiEmptyWorkingSet @ 0x14000AF54 (MiEmptyWorkingSet.c)
 *     MiTrimWorkingSet @ 0x14000B9A4 (MiTrimWorkingSet.c)
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiAttachSession @ 0x1400B7BAC (MiAttachSession.c)
 *     MiDetachSession @ 0x1400B7C90 (MiDetachSession.c)
 *     PfLogForegroundProcess @ 0x1400B9884 (PfLogForegroundProcess.c)
 *     KiDetachProcess @ 0x1400BF4A0 (KiDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14021CEDC (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiComputeTrimAmount @ 0x14021D218 (MiComputeTrimAmount.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimOrAgeWorkingSet(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // al
  __int64 v6; // r13
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  LONG *v9; // rbp
  unsigned __int8 CurrentIrql; // r14
  unsigned int v11; // r15d
  int v12; // r12d
  unsigned int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // r15
  char v16; // cl
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  LONG *v20; // rcx
  char v21; // al
  _SLIST_ENTRY *v22; // rsi
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  LONG *v28; // [rsp+38h] [rbp-80h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 194) == 2 && (*(_BYTE *)(a1 + 192) & 7) == 0 )
    PfLogForegroundProcess();
  v5 = *(_BYTE *)(a1 + 192) & 7;
  v6 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172)) + 5680LL);
  if ( v5 == 2 )
  {
    v28 = &dword_140389780;
  }
  else
  {
    v28 = (LONG *)(a1 + 200);
    if ( v5 )
    {
      if ( v5 == 1 )
        MiAttachSession(a1 - 3008, 1LL);
    }
    else if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1280) )
    {
      CurrentThread = KeGetCurrentThread();
      ApcStateIndex = CurrentThread->ApcStateIndex;
      if ( ApcStateIndex )
        KeBugCheckEx(5u, a1 - 1280, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
      KiStackAttachProcess(a1 - 1280);
    }
  }
  if ( (a3 & 4) != 0 )
    MiEmptyWorkingSet(a1, 0);
  if ( (*(_BYTE *)(a1 + 192) & 7) == 2 )
    v9 = &dword_140389780;
  else
    v9 = (LONG *)(a1 + 200);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v9, CurrentIrql);
  v9[1] = 0;
  if ( (a3 & 0x20) != 0 && (*(_BYTE *)(a1 + 192) & 7) == 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), CurrentIrql, 0, 2);
  if ( (a3 & 0x100) != 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), CurrentIrql, 0, 4);
  v11 = *(unsigned __int16 *)(v6 + 2354);
  v12 = 0;
  v13 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 2) != 0 )
    {
      v12 = 1;
      v13 = MiAgeWorkingSet(a1, CurrentIrql, 1LL, *(unsigned __int16 *)(v6 + 2354));
      if ( !v13 && *(_BYTE *)(v6 + 55) == 1 && v11 - 1 <= 8 )
        v13 = MiAgeWorkingSet(a1, CurrentIrql, 2LL, 10LL);
      goto LABEL_22;
    }
    if ( (a3 & 0x40) == 0 )
    {
      if ( (a3 & 0x80u) != 0 )
      {
        v13 = MiAgeWorkingSet(a1, CurrentIrql, 2LL, *(unsigned __int16 *)(v6 + 2354));
        v12 = 1;
      }
      goto LABEL_22;
    }
    v24 = 1LL;
LABEL_58:
    v13 = MiAgeWorkingSet(a1, CurrentIrql, v24, v11);
    v12 = 1;
LABEL_22:
    v14 = a2;
    goto LABEL_23;
  }
  *(_BYTE *)(a2 + 1) = MiTrimPassToAge[*(_BYTE *)a2 & 0x7F];
  v25 = MiComputeTrimAmount(a2, a1);
  if ( v25 )
  {
    v26 = MiTrimWorkingSet(a1, v25, CurrentIrql, *(unsigned __int8 *)(a2 + 1), 17);
    v14 = a2;
    *(_QWORD *)(a2 + 96) += v26;
  }
  else
  {
    v14 = a2;
  }
  v24 = 0LL;
  if ( (*(_BYTE *)v14 & 0x7F) != 0 )
  {
    if ( (*(_BYTE *)v14 & 0x7F) != 4 )
      goto LABEL_74;
  }
  else if ( *(char *)v14 < 0 )
  {
    goto LABEL_74;
  }
  if ( *(_WORD *)(v6 + 2354) )
    v24 = 1LL;
LABEL_74:
  if ( *(_BYTE *)(v14 + 4) == 1 )
    goto LABEL_58;
LABEL_23:
  v15 = 0LL;
  if ( v13 != 1 )
  {
    if ( v12 == 1 )
    {
      v16 = 3;
      if ( *(_BYTE *)(a1 + 194) != 2 )
        v16 = 1;
      *(_QWORD *)(v14 + 8) += *(_QWORD *)(a1 + 40) >> v16;
      *(_QWORD *)(v14 + 16) += *(_QWORD *)(a1 + 48) >> v16;
      *(_QWORD *)(v14 + 24) += *(_QWORD *)(a1 + 56) >> v16;
      *(_QWORD *)(v14 + 32) += *(_QWORD *)(a1 + 64) >> v16;
      *(_QWORD *)(v14 + 40) += *(_QWORD *)(a1 + 72) >> v16;
      *(_QWORD *)(v14 + 48) += *(_QWORD *)(a1 + 80) >> v16;
      *(_QWORD *)(v14 + 56) += *(_QWORD *)(a1 + 88) >> v16;
      *(_QWORD *)(v14 + 64) += *(_QWORD *)(a1 + 96) >> v16;
    }
    if ( (a3 & 0x10) != 0 || (a3 & 8) != 0 )
      MiCaptureAndResetWorkingSetAccessBits(a1, CurrentIrql, a3);
    v15 = MEMORY[0xFFFFF78000000320];
    v17 = (_QWORD *)*((_QWORD *)v28 + 5);
    if ( v17 )
    {
      v18 = (_QWORD *)*v17;
      v19 = (_QWORD *)*((_QWORD *)v28 + 5);
      if ( *v17 )
      {
        do
        {
          v19 = v18;
          v18 = (_QWORD *)*v18;
        }
        while ( v18 );
      }
      if ( MEMORY[0xFFFFF78000000320] - v19[2] > (unsigned __int64)PfKernelGlobals )
      {
        MiEmptyPageAccessLog(v17);
        *((_QWORD *)v28 + 5) = 0LL;
      }
    }
  }
  MiPreUnlockWorkingSetExclusive(a1, CurrentIrql);
  if ( (*(_BYTE *)(a1 + 192) & 7) == 2 )
    v20 = &dword_140389780;
  else
    v20 = (LONG *)(a1 + 200);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v20, retaddr);
  else
    *v20 = 0;
  __writecr8(CurrentIrql);
  v21 = *(_BYTE *)(a1 + 192) & 7;
  if ( v21 )
  {
    if ( v21 == 1 )
      MiDetachSession();
  }
  else if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1280) )
  {
    KiDetachProcess(&KeGetCurrentThread()->600, 1LL);
  }
  if ( !v13 )
  {
    if ( qword_140388C40 )
    {
      v22 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_140388C40, 0LL);
      if ( v22 )
      {
        if ( v15 - (unsigned __int64)v22[1].Next > PfKernelGlobals || (a3 & 0x18) != 0 )
          MiQueuePageAccessLog(v22);
        else
          MiReturnCcAccessLog((signed __int64)v22, 0);
      }
    }
  }
  return v13;
}
