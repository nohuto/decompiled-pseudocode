/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x1400A92A0
 * Callers:
 *     KiScanInterruptObjectList @ 0x140182600 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401827D0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140182910 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140182A50 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14020B154 (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     KiIntRedirectQueueRequestOnProcessor @ 0x14000972C (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1400193C0 (KeFindFirstSetRightGroupAffinity.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400931F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckAndRearmForceIdle @ 0x14013171C (KiCheckAndRearmForceIdle.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x140204F88 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 *     KiResetForceIdle @ 0x14020C668 (KiResetForceIdle.c)
 */

char __fastcall KiCallInterruptServiceRoutine(__int64 a1, char a2)
{
  int v4; // edi
  __int64 v5; // rdx
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *IsrDpcStats; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  char v10; // di
  unsigned __int64 v11; // rax
  volatile signed __int32 *v13; // rcx
  volatile signed __int64 *v14; // rcx
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int FirstSetRightGroupAffinity; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 88) - 48) <= 0x9F && !KiForceIdleDisabled )
  {
    if ( KiForceIdleState == 4 )
    {
      KiResetForceIdle(1LL, 0LL);
    }
    else if ( (unsigned int)(KiForceIdleState - 1) <= 1 )
    {
      KiCheckAndRearmForceIdle();
    }
  }
  if ( !*(_BYTE *)(a1 + 93) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
    return v10 != 0;
  }
  v5 = *(_QWORD *)(a1 + 240);
  if ( v5 && *(_BYTE *)(v5 + 16) )
  {
    v16 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    if ( v16 >> 6 != *(unsigned __int16 *)(v5 + 8) )
      v4 = 0;
    if ( ((unsigned int)(*(_QWORD *)v5 >> (v16 & 0x3F)) & v4) == 0 )
    {
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(*(_QWORD *)(a1 + 240));
      KiIntRedirectQueueRequestOnProcessor(FirstSetRightGroupAffinity, *(_DWORD *)(a1 + 88));
      return 2;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  IsrDpcStats = CurrentPrcb->IsrDpcStats;
  *(_BYTE *)(a1 + 224) = 1;
  CurrentPrcb->IsrDpcStats = (void *)(a1 + 176);
  v8 = __rdtsc();
  *(_QWORD *)(a1 + 184) = v8;
  v9 = v8;
  if ( a2 )
  {
    v13 = *(volatile signed __int32 **)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v13);
    }
    else if ( _interlockedbittestandset64(v13, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v13);
    }
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
  if ( a2 )
  {
    v14 = *(volatile signed __int64 **)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v14, retaddr);
    else
      _InterlockedAnd64(v14, 0LL);
  }
  v11 = __rdtsc();
  *(_QWORD *)(a1 + 176) += v11 - *(_QWORD *)(a1 + 184);
  if ( IsrDpcStats != (_QWORD *)1 )
  {
    v15 = v11 - v9;
    if ( *((_BYTE *)IsrDpcStats + 48) )
      IsrDpcStats[1] += v15;
    else
      IsrDpcStats[4] += v15;
  }
  CurrentPrcb->IsrDpcStats = IsrDpcStats;
  *(_BYTE *)(a1 + 224) = 0;
  if ( v10 )
  {
    ++*(_QWORD *)(a1 + 192);
    return v10 != 0;
  }
  return 0;
}
