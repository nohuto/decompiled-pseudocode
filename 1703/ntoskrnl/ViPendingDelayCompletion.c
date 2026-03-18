/*
 * XREFs of ViPendingDelayCompletion @ 0x140771FE0
 * Callers:
 *     VfPendingMoreProcessingRequired @ 0x140771C00 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140772150 (ViPendingQueuePassiveLevelCompletion.c)
 */

__int64 __fastcall ViPendingDelayCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // ebp
  char *PoolWithTag; // rax
  char *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  void *v14; // rdi

  v9 = 1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x64707249u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    v12 = -VfSettingsIrpDeferralTime;
    KeInitializeTimerEx((PKTIMER)(PoolWithTag + 104), SynchronizationTimer);
    *(_DWORD *)(a2 + 56) |= 0x10u;
    *((_QWORD *)v11 + 4) = a5;
    *(_QWORD *)v11 = a2;
    *((_QWORD *)v11 + 1) = a1;
    *((_QWORD *)v11 + 3) = a4;
    *((_QWORD *)v11 + 2) = a3;
    v11[172] = *(_BYTE *)(a2 + 185);
    v13 = *(_QWORD *)(a2 + 216);
    if ( v13 && (v14 = *(void **)(v13 + 40)) != 0LL )
      ObfReferenceObject(v14);
    else
      v14 = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      *((_DWORD *)v11 + 42) = 2;
      KeInitializeDpc((PRKDPC)(v11 + 40), (PKDEFERRED_ROUTINE)ViPendingCompleteAtDPC, v11);
      KiSetTimerEx((__int64)(v11 + 104), v12, 0, 0, (__int64)(v11 + 40));
    }
    else
    {
      *((_DWORD *)v11 + 42) = 1;
      KiSetTimerEx((__int64)(v11 + 104), v12, 0, 0, 0LL);
      v9 = ViPendingQueuePassiveLevelCompletion(v11);
      if ( !v9 )
      {
        KeCancelTimer((PKTIMER)(v11 + 104));
        ExFreePoolWithTag(v11, 0);
        *(_DWORD *)(a2 + 56) &= ~0x10u;
        if ( v14 )
          ObfDereferenceObject(v14);
      }
    }
  }
  else
  {
    return 0;
  }
  return v9;
}
