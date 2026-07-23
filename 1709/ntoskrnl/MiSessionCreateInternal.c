/*
 * XREFs of MiSessionCreateInternal @ 0x1405B3F68
 * Callers:
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     MiGetTopPteAddress @ 0x1400B7D00 (MiGetTopPteAddress.c)
 *     RtlFindClearBitsAndSet @ 0x1400BB560 (RtlFindClearBitsAndSet.c)
 *     MiGetPdeAddress @ 0x1401322DC (MiGetPdeAddress.c)
 *     MiMarkSessionMasterProcess @ 0x140137BAC (MiMarkSessionMasterProcess.c)
 *     KeQueryInterruptTimePrecise @ 0x140137C40 (KeQueryInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiMapNewSession @ 0x1405B43F8 (MiMapNewSession.c)
 */

__int64 __fastcall MiSessionCreateInternal(ULONG_PTR *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v2; // r12
  __int64 Process; // rax
  ULONG ClearBitsAndSet; // r14d
  unsigned int v6; // edi
  _RTL_BITMAP *PoolWithTag; // rax
  _RTL_BITMAP *v8; // r14
  __int64 v9; // r9
  __int64 v10; // r8
  ULONG_PTR v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rdi
  __int16 v14; // ax
  int v15; // ecx
  __int16 v16; // bp
  __int64 *PdeAddress; // r8
  __int64 PteShadow; // rax
  _WORD *v19; // rsi
  __int64 *TopPteAddress; // r8
  int v21; // r9d
  unsigned __int64 v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // r11
  void *CurrentServerSilo; // rax
  unsigned __int64 v27; // r9
  __int64 v28; // [rsp+30h] [rbp-68h] BYREF
  __int64 v29; // [rsp+38h] [rbp-60h]
  LARGE_INTEGER v30; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v31[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v32; // [rsp+58h] [rbp-40h] BYREF
  ULONG v33; // [rsp+60h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  v2 = qword_1403884B8;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v29 = Process;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388490, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140389310, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v6 = qword_140389310->SizeOfBitMap + 128;
    if ( v6 > 0x7FFFF )
      v6 = 0x7FFFF;
    PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(PagedPool, 8 * ((v6 >> 6) + ((v6 & 0x3F) != 0) + 2), 0x20206D4Du);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_27;
    PoolWithTag->SizeOfBitMap = v6;
    PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
    RtlClearAllBits(PoolWithTag);
    memmove(
      v8->Buffer,
      qword_140389310->Buffer,
      8 * (((unsigned __int64)qword_140389310->SizeOfBitMap >> 6) + ((qword_140389310->SizeOfBitMap & 0x3F) != 0)));
    ExFreePoolWithTag(qword_140389310, 0);
    qword_140389310 = v8;
    ClearBitsAndSet = RtlFindClearBitsAndSet(v8, 1u, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388490, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388490);
  KeAbPostRelease((ULONG_PTR)&qword_140388490);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( (unsigned int)MiChargeCommit((__int64)a1, 7uLL, 0LL, v9) )
  {
    v11 = MiReservePtes((__int64)&qword_140389360, 2uLL, v10);
    v12 = v11;
    if ( v11 )
    {
      v13 = (__int64)(v11 << 25) >> 16;
      if ( (unsigned int)MiChargeResident(a1, ClearBitsAndSet != 0 ? 1031LL : 27LL) )
      {
        v14 = MiMapNewSession(v13, *(unsigned __int16 *)a1);
        v15 = PsDefaultSystemLocaleId;
        v16 = v14;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 112) = v15;
        *(_DWORD *)v13 = 1;
        *(_DWORD *)(v13 + 8) = ClearBitsAndSet;
        *(LARGE_INTEGER *)(v13 + 8184) = KeQueryInterruptTimePrecise(&v30);
        PdeAddress = (__int64 *)MiGetPdeAddress(v2);
        PteShadow = *PdeAddress;
        if ( (unsigned __int64)PdeAddress >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)PdeAddress <= 0xFFFFF6FB7DBED7F8uLL )
        {
          PteShadow = MiReadPteShadow();
        }
        v28 = PteShadow;
        *(_QWORD *)(v13 + 32) = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v28);
        v19 = (_WORD *)(v13 + 3008);
        *(_WORD *)(v13 + 3180) = *(_WORD *)a1;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a1[21] + 24)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(v13 + 3120) = ClearBitsAndSet != 0 ? 1024LL : 20LL;
        *v19 = v16;
        *(_QWORD *)(v13 + 40) = 7LL;
        *(_QWORD *)(v13 + 48) = 7LL;
        TopPteAddress = (__int64 *)MiGetTopPteAddress(v2);
        v23 = *TopPteAddress;
        if ( (unsigned __int64)TopPteAddress >= v24 && (unsigned __int64)TopPteAddress <= v22 )
          v23 = MiReadPteShadow();
        *(_QWORD *)(v13 + 7880) = v23;
        *(_QWORD *)(v13 + 7888) = 0LL;
        *(_QWORD *)(v13 + 104) = 0LL;
        *(_QWORD *)(v13 + 7984) = 0LL;
        *(_QWORD *)(v13 + 24) = v13 + 16;
        *(_QWORD *)(v13 + 16) = v13 + 16;
        *(_DWORD *)(v13 + 12) = v21;
        CurrentServerSilo = (void *)PsGetCurrentServerSilo();
        *(_QWORD *)(v13 + 8176) = CurrentServerSilo;
        if ( CurrentServerSilo )
        {
          ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
          _InterlockedCompareExchange(
            *((volatile signed __int32 **)PsGetServerSiloGlobals(*(_QWORD *)(v13 + 8176)) + 138),
            ClearBitsAndSet,
            -1);
        }
        MiMarkSessionMasterProcess(v29, v13);
        *(_DWORD *)(v13 + 8032) = 4;
        *(_QWORD *)(v13 + 8024) = MiGetPteAddress(qword_140388478);
        *(_QWORD *)(v13 + 8040) = v2 + 2972;
        *(_DWORD *)(v13 + 8036) = 1;
        *(_QWORD *)(v13 + 8056) = v13 + 7984;
        *(_QWORD *)(v13 + 8064) = v19;
        *(_BYTE *)(v13 + 3200) = *(_BYTE *)(v13 + 3200) & 0xF8 | 1;
        if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400000) != 0 )
        {
          v33 = ClearBitsAndSet;
          v31[0] = &v32;
          v32 = v13;
          v31[1] = 12LL;
          EtwTraceKernelEvent((__int64)v31, 1u, 0x20400000u, 0x24Bu, 0x401803u);
        }
        return 0LL;
      }
    }
    MiReturnCommit((__int64)a1, 7uLL);
    if ( v12 )
      MiReleasePtes((__int64)&qword_140389360, v12, 2u, v27);
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388490, 0LL);
  _bittestandreset((signed __int32 *)qword_140389310->Buffer, ClearBitsAndSet);
LABEL_27:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388490, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388490);
  KeAbPostRelease((ULONG_PTR)&qword_140388490);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 3221225495LL;
}
