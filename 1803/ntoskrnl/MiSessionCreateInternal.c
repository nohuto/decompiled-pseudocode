/*
 * XREFs of MiSessionCreateInternal @ 0x14060B190
 * Callers:
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 * Callees:
 *     RtlClearAllBits @ 0x140007490 (RtlClearAllBits.c)
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPdeAddress @ 0x14003B3E0 (MiGetPdeAddress.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSet @ 0x14006C950 (RtlFindClearBitsAndSet.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     MiGetTopPteAddress @ 0x140070E30 (MiGetTopPteAddress.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KeQueryInterruptTimePrecise @ 0x1400CEC60 (KeQueryInterruptTimePrecise.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiMarkSessionMasterProcess @ 0x140165C18 (MiMarkSessionMasterProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiMapNewSession @ 0x14060B454 (MiMapNewSession.c)
 */

__int64 __fastcall MiSessionCreateInternal(ULONG_PTR *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v2; // r12
  __int64 Process; // rax
  __int64 v5; // rdx
  ULONG ClearBitsAndSet; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // al
  ULONG_PTR v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  unsigned __int16 v14; // si
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 TopPteAddress; // rax
  __int64 v17; // rax
  void *CurrentServerSilo; // rax
  unsigned int v20; // edi
  _RTL_BITMAP *PoolWithTag; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _RTL_BITMAP *v25; // r14
  __int64 v26; // [rsp+30h] [rbp-68h] BYREF
  __int64 v27; // [rsp+38h] [rbp-60h]
  LARGE_INTEGER v28; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v29[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v30; // [rsp+58h] [rbp-40h] BYREF
  ULONG v31; // [rsp+60h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  v2 = qword_1403CB640;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v27 = Process;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB618, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_1403CC590, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v20 = qword_1403CC590->SizeOfBitMap + 128;
    if ( v20 > 0x7FFFF )
      v20 = 0x7FFFF;
    PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                   PagedPool,
                                   8 * ((v20 >> 6) + ((v20 & 0x3F) != 0) + 2),
                                   0x20206D4Du);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_22;
    PoolWithTag->SizeOfBitMap = v20;
    PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
    RtlClearAllBits(PoolWithTag);
    memmove(
      v25->Buffer,
      qword_1403CC590->Buffer,
      8 * (((unsigned __int64)qword_1403CC590->SizeOfBitMap >> 6) + ((qword_1403CC590->SizeOfBitMap & 0x3F) != 0)));
    ExFreePoolWithTag(qword_1403CC590, 0);
    qword_1403CC590 = v25;
    ClearBitsAndSet = RtlFindClearBitsAndSet(v25, 1u, 0);
  }
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB618, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB618, v5, v7, v8);
  KeAbPostRelease((ULONG_PTR)&qword_1403CB618);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( (unsigned int)MiChargeCommit((__int64)a1, 8uLL, 0) )
  {
    v10 = MiReservePtes((__int64)&qword_1403CC5E0, 3u);
    v12 = v10;
    if ( v10 )
    {
      v13 = (__int64)(v10 << 25) >> 16;
      if ( (unsigned int)MiChargeResident(a1, ClearBitsAndSet != 0 ? 1032LL : 28LL, 0LL, v11) )
      {
        v14 = MiMapNewSession(v13, *(unsigned __int16 *)a1);
        *(_DWORD *)(v13 + 112) = PsDefaultSystemLocaleId;
        *(_QWORD *)v13 = 1LL;
        *(_DWORD *)(v13 + 8) = ClearBitsAndSet;
        *(LARGE_INTEGER *)(v13 + 8312) = KeQueryInterruptTimePrecise(&v28);
        PdeAddress = MiGetPdeAddress(v2);
        v26 = MI_READ_PTE_LOCK_FREE(PdeAddress);
        *(_QWORD *)(v13 + 32) = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFLL;
        *(_WORD *)(v13 + 3182) = *(_WORD *)a1;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a1[21] + 24)) <= 1 )
          __fastfail(0xEu);
        *(_DWORD *)(v13 + 3008) = v14;
        *(_QWORD *)(v13 + 3120) = ClearBitsAndSet != 0 ? 1024LL : 20LL;
        *(_QWORD *)(v13 + 40) = 8LL;
        *(_QWORD *)(v13 + 48) = 8LL;
        TopPteAddress = MiGetTopPteAddress(v2);
        v17 = MI_READ_PTE_LOCK_FREE(TopPteAddress);
        *(_QWORD *)(v13 + 8008) = v17;
        *(_QWORD *)(v13 + 8016) = 0LL;
        *(_QWORD *)(v13 + 104) = 0LL;
        *(_QWORD *)(v13 + 8112) = 0LL;
        v26 = v17;
        *(_QWORD *)(v13 + 24) = v13 + 16;
        *(_QWORD *)(v13 + 16) = v13 + 16;
        *(_DWORD *)(v13 + 12) = 1;
        CurrentServerSilo = (void *)PsGetCurrentServerSilo();
        *(_QWORD *)(v13 + 8304) = CurrentServerSilo;
        if ( CurrentServerSilo )
        {
          ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
          _InterlockedCompareExchange(
            *((volatile signed __int32 **)PsGetServerSiloGlobals(*(_QWORD *)(v13 + 8304)) + 138),
            ClearBitsAndSet,
            -1);
        }
        MiMarkSessionMasterProcess(v27, v13);
        *(_DWORD *)(v13 + 8160) = 4;
        *(_QWORD *)(v13 + 8152) = MiGetPteAddress(qword_1403CB600);
        *(_QWORD *)(v13 + 8168) = v2 + 2972;
        *(_DWORD *)(v13 + 8164) = 1;
        *(_QWORD *)(v13 + 8184) = v13 + 8112;
        *(_BYTE *)(v13 + 3192) = *(_BYTE *)(v13 + 3192) & 0xF8 | 1;
        if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400000) != 0 )
        {
          v31 = ClearBitsAndSet;
          v29[0] = &v30;
          v30 = v13;
          v29[1] = 12LL;
          EtwTraceKernelEvent((int)v29, 1, 0x20400000u, 587, 4200451);
        }
        return 0LL;
      }
    }
    MiReturnCommit((__int64)a1, 8uLL);
    if ( v12 )
      MiReleasePtes((__int64)&qword_1403CC5E0, v12, 3uLL);
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB618, 0LL);
  _bittestandreset((signed __int32 *)qword_1403CC590->Buffer, ClearBitsAndSet);
LABEL_22:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB618, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB618, v22, v23, v24);
  KeAbPostRelease((ULONG_PTR)&qword_1403CB618);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 3221225495LL;
}
