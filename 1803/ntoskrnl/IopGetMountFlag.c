/*
 * XREFs of IopGetMountFlag @ 0x140060E20
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x1404D0BE0 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall IopGetMountFlag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // di
  unsigned __int8 CurrentIrql; // bp
  char *v7; // r10
  volatile __int64 *v8; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  volatile signed __int64 **v13; // rbx
  __int64 v14; // rax
  int v16; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  v8 = (volatile __int64 *)*((_QWORD *)v7 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v16 = SchedulerAssist[5];
      SchedulerAssist[5] = v16 + 1;
      if ( v16 == -1 )
      {
        a3 = *((unsigned __int8 *)SchedulerAssist + 27);
        if ( !*((_BYTE *)SchedulerAssist + 25) && !(_BYTE)a3 )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7, v8);
  }
  else
  {
    v11 = _InterlockedExchange64(v8, (__int64)v7);
    if ( v11 )
      KxWaitForLockOwnerShip(v7);
  }
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 && (*(_BYTE *)(v12 + 4) & 1) != 0 )
    v5 = 1;
  v13 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v13, retaddr, a3, a4);
    goto LABEL_11;
  }
  _m_prefetchw(v13);
  v14 = (__int64)*v13;
  if ( *v13 )
    goto LABEL_13;
  if ( v13 != (volatile signed __int64 **)_InterlockedCompareExchange64(v13[1], 0LL, (signed __int64)v13) )
  {
    v14 = KxWaitForLockChainValid(v13, v11, a3, a4);
LABEL_13:
    *v13 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
  }
LABEL_11:
  KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  __writecr8(CurrentIrql);
  return v5;
}
