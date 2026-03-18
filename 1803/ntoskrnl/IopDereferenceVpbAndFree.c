/*
 * XREFs of IopDereferenceVpbAndFree @ 0x140088C00
 * Callers:
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IoVerifyVolume @ 0x14071C9D0 (IoVerifyVolume.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferenceVpbAndFree(__int64 a1)
{
  void *v2; // rdi
  unsigned __int8 CurrentIrql; // si
  char *v4; // r10
  volatile __int64 *v5; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v8; // zf
  volatile signed __int64 **v9; // rbx
  __int64 v10; // rax
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  int v13; // eax
  int v14; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v13 = SchedulerAssist[5];
      SchedulerAssist[5] = v13 + 1;
      if ( v13 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, v5);
  }
  else if ( _InterlockedExchange64(v5, (__int64)v4) )
  {
    KxWaitForLockOwnerShip(v4);
  }
  v8 = (*(_DWORD *)(a1 + 28))-- == 1;
  if ( v8 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) != a1 && (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v2 = (void *)a1;
  v9 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v9, retaddr);
    goto LABEL_9;
  }
  _m_prefetchw(v9);
  v10 = (__int64)*v9;
  if ( *v9 )
    goto LABEL_13;
  if ( v9 != (volatile signed __int64 **)_InterlockedCompareExchange64(v9[1], 0LL, (signed __int64)v9) )
  {
    v10 = KxWaitForLockChainValid((__int64 *)v9);
LABEL_13:
    *v9 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
  }
LABEL_9:
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v14 = v12[5] - 1;
      v12[5] = v14;
      if ( !v14 && !*((_BYTE *)v12 + 25) && !*((_BYTE *)v12 + 27) )
        KiPerformUnboostKick(v11);
    }
  }
  __writecr8(CurrentIrql);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
