/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x140106870
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14009FB48 (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x14015E1A4 (PnpMarkDeviceForRemove.c)
 *     IopShutdownBaseFileSystems @ 0x140481518 (IopShutdownBaseFileSystems.c)
 *     IopMountVolume @ 0x140493C24 (IopMountVolume.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140592DF0 (IoCreateStreamFileObjectEx2.c)
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 *     IoRegisterFileSystem @ 0x1405F62A0 (IoRegisterFileSystem.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 CurrentIrql; // r14
  char *v4; // r10
  volatile __int64 *v5; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v8; // rdx
  int v9; // edi
  volatile signed __int64 **v10; // rbx
  __int64 v11; // rax
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    v9 = ++*(_DWORD *)(BugCheckParameter2 + 4);
    goto LABEL_11;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v15 = SchedulerAssist[5];
      SchedulerAssist[5] = v15 + 1;
      if ( v15 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, v5);
  }
  else
  {
    v8 = (_QWORD *)_InterlockedExchange64(v5, (__int64)v4);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)v4, v8);
  }
  v9 = ++*(_DWORD *)(BugCheckParameter2 + 4);
  v10 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v10, retaddr);
  }
  else
  {
    _m_prefetchw(v10);
    v11 = (__int64)*v10;
    if ( !*v10 )
    {
      if ( v10 == (volatile signed __int64 **)_InterlockedCompareExchange64(v10[1], 0LL, (signed __int64)v10) )
        goto LABEL_9;
      v11 = KxWaitForLockChainValid((__int64 *)v10);
    }
    *v10 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v11 + 8), 1uLL);
  }
LABEL_9:
  v12 = KeGetCurrentPrcb();
  v13 = v12->SchedulerAssist;
  if ( v13 )
  {
    if ( v12->NestingLevel <= 1u )
    {
      v16 = v13[5] - 1;
      v13[5] = v16;
      if ( !v16 && !*((_BYTE *)v13 + 25) && !*((_BYTE *)v13 + 27) )
        KiPerformUnboostKick(v12);
    }
  }
  __writecr8(CurrentIrql);
LABEL_11:
  if ( v9 <= 0 )
  {
    v17 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v17 )
    {
      IoAddTriageDumpDataBlock(v17, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v9;
}
