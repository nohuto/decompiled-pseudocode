/*
 * XREFs of MiSessionCreateInternal @ 0x14057EB28
 * Callers:
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     RtlFindClearBitsAndSet @ 0x14005ED00 (RtlFindClearBitsAndSet.c)
 *     MiGetTopPteAddress @ 0x140063BE8 (MiGetTopPteAddress.c)
 *     MiGetPdeAddress @ 0x14006B954 (MiGetPdeAddress.c)
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiMarkSessionMasterProcess @ 0x140143598 (MiMarkSessionMasterProcess.c)
 *     KeQueryInterruptTimePrecise @ 0x140143630 (KeQueryInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiMapNewSession @ 0x14057EF68 (MiMapNewSession.c)
 */

__int64 __fastcall MiSessionCreateInternal(ULONG_PTR *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v2; // r13
  __int64 Process; // rax
  ULONG ClearBitsAndSet; // ebp
  int v6; // ecx
  unsigned int v7; // esi
  _RTL_BITMAP *PoolWithTag; // rax
  _RTL_BITMAP *v9; // r14
  unsigned __int64 v10; // r8
  ULONG_PTR v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rsi
  __int16 v14; // ax
  int v15; // ecx
  __int16 v16; // di
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 TopPteAddress; // rax
  __int64 v19; // rax
  void *CurrentServerSilo; // rax
  __int64 v22; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+38h] [rbp-60h]
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v26; // [rsp+58h] [rbp-40h] BYREF
  ULONG v27; // [rsp+60h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  v2 = qword_14036C178;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v23 = Process;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036C150, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_14036D050, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v6 = 0;
    v7 = qword_14036D050->SizeOfBitMap + 128;
    if ( v7 > 0x7FFFF )
      v7 = 0x7FFFF;
    LOBYTE(v6) = (v7 & 0x3F) != 0;
    PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(PagedPool, 8 * ((v7 >> 6) + v6) + 16, 0x20206D4Du);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_19;
    PoolWithTag->SizeOfBitMap = v7;
    PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
    RtlClearAllBits(PoolWithTag);
    memmove(
      v9->Buffer,
      qword_14036D050->Buffer,
      8 * (((unsigned __int64)qword_14036D050->SizeOfBitMap >> 6) + ((qword_14036D050->SizeOfBitMap & 0x3F) != 0)));
    ExFreePoolWithTag(qword_14036D050, 0);
    qword_14036D050 = v9;
    ClearBitsAndSet = RtlFindClearBitsAndSet(v9, 1u, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C150, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C150);
  KeAbPostRelease((ULONG_PTR)&qword_14036C150);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( (unsigned int)MiChargeCommit((unsigned __int64)a1, 7uLL, 0LL) )
  {
    v11 = MiReservePtes((__int64)&qword_14036D0A0, 2uLL, v10);
    v12 = (_QWORD *)v11;
    if ( v11 )
    {
      v13 = (__int64)(v11 << 25) >> 16;
      if ( (unsigned int)MiChargeResident(a1, ClearBitsAndSet != 0 ? 1031LL : 27LL, 0LL) )
      {
        v14 = MiMapNewSession(v13, *(unsigned __int16 *)a1);
        v15 = PsDefaultSystemLocaleId;
        v16 = v14;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 112) = v15;
        *(_DWORD *)v13 = 1;
        *(_DWORD *)(v13 + 8) = ClearBitsAndSet;
        *(LARGE_INTEGER *)(v13 + 8184) = KeQueryInterruptTimePrecise(&PerformanceCounter);
        PdeAddress = MiGetPdeAddress(v2);
        v22 = MI_READ_PTE_LOCK_FREE(PdeAddress);
        *(_QWORD *)(v13 + 32) = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFLL;
        *(_WORD *)(v13 + 3180) = *(_WORD *)a1;
        *(_QWORD *)(v13 + 3120) = ClearBitsAndSet != 0 ? 1024LL : 20LL;
        *(_WORD *)(v13 + 3008) = v16;
        *(_QWORD *)(v13 + 40) = 7LL;
        *(_QWORD *)(v13 + 48) = 7LL;
        TopPteAddress = MiGetTopPteAddress(v2);
        v19 = MI_READ_PTE_LOCK_FREE(TopPteAddress);
        *(_QWORD *)(v13 + 7880) = v19;
        *(_QWORD *)(v13 + 7888) = 0LL;
        *(_QWORD *)(v13 + 104) = 0LL;
        *(_QWORD *)(v13 + 7984) = 0LL;
        v22 = v19;
        *(_QWORD *)(v13 + 24) = v13 + 16;
        *(_QWORD *)(v13 + 16) = v13 + 16;
        *(_DWORD *)(v13 + 12) = 1;
        CurrentServerSilo = (void *)PsGetCurrentServerSilo();
        *(_QWORD *)(v13 + 8176) = CurrentServerSilo;
        if ( CurrentServerSilo )
        {
          ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
          _InterlockedCompareExchange(
            *((volatile signed __int32 **)PsGetServerSiloGlobals(*(_QWORD *)(v13 + 8176)) + 134),
            ClearBitsAndSet,
            -1);
        }
        MiMarkSessionMasterProcess(v23, v13);
        *(_DWORD *)(v13 + 8032) = 4;
        *(_QWORD *)(v13 + 8024) = MiGetPteAddress(qword_14036C138);
        *(_QWORD *)(v13 + 8040) = v2 + 2972;
        *(_DWORD *)(v13 + 8036) = 1;
        *(_QWORD *)(v13 + 8056) = v13 + 7984;
        *(_QWORD *)(v13 + 8064) = v13 + 3008;
        *(_BYTE *)(v13 + 3200) = *(_BYTE *)(v13 + 3200) & 0xF8 | 1;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
        {
          v27 = ClearBitsAndSet;
          v25[0] = &v26;
          v26 = v13;
          v25[1] = 12LL;
          EtwTraceKernelEvent((int)v25, 1, 0x20400000u, 587, 4200451);
        }
        return 0LL;
      }
    }
    MiReturnCommit((__int64)a1, 7uLL);
    if ( v12 )
      MiReleasePtes((__int64)&qword_14036D0A0, v12, 2u);
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036C150, 0LL);
  _bittestandreset((signed __int32 *)qword_14036D050->Buffer, ClearBitsAndSet);
LABEL_19:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C150, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C150);
  KeAbPostRelease((ULONG_PTR)&qword_14036C150);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 3221225495LL;
}
