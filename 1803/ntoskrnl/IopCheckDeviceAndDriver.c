/*
 * XREFs of IopCheckDeviceAndDriver @ 0x140106CD0
 * Callers:
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // si
  char *v5; // r10
  volatile __int64 *v6; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v9; // rdx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  volatile signed __int64 **v13; // rbx
  __int64 v14; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // r8
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v6 = (volatile __int64 *)*((_QWORD *)v5 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v18 = SchedulerAssist[5];
      SchedulerAssist[5] = v18 + 1;
      if ( v18 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, v6);
  }
  else
  {
    v9 = (_QWORD *)_InterlockedExchange64(v6, (__int64)v5);
    if ( v9 )
      KxWaitForLockOwnerShip((__int64)v5, v9);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v10 = *(_DWORD *)(a2 + 48), (v10 & 0x80u) != 0) )
  {
    v12 = -1073741810;
  }
  else if ( (v10 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    v11 = *(_DWORD *)(a2 + 4) + 1;
    *(_DWORD *)(a2 + 4) = v11;
    if ( v11 <= 0 )
    {
      v19 = *(_QWORD *)(a2 + 8);
      if ( v19 )
      {
        IoAddTriageDumpDataBlock(v19, 336LL);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        v11 = *(_DWORD *)(a2 + 4);
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, v11);
    }
    v12 = 0;
  }
  else
  {
    v12 = -1073741790;
  }
  v13 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v13, retaddr);
    goto LABEL_13;
  }
  _m_prefetchw(v13);
  v14 = (__int64)*v13;
  if ( *v13 )
    goto LABEL_16;
  if ( v13 != (volatile signed __int64 **)_InterlockedCompareExchange64(v13[1], 0LL, (signed __int64)v13) )
  {
    v14 = KxWaitForLockChainValid((__int64 *)v13);
LABEL_16:
    *v13 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
  }
LABEL_13:
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v20 = v16[5] - 1;
      v16[5] = v20;
      if ( !v20 && !*((_BYTE *)v16 + 25) && !*((_BYTE *)v16 + 27) )
        KiPerformUnboostKick(v15);
    }
  }
  __writecr8(CurrentIrql);
  return v12;
}
