/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x140106AE0
 * Callers:
 *     IopCheckVpbMounted @ 0x140107070 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14015F460 (IopDecrementDeviceObjectHandleCount.c)
 *     IopShutdownBaseFileSystems @ 0x140481518 (IopShutdownBaseFileSystems.c)
 *     IopMountVolume @ 0x140493C24 (IopMountVolume.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140592DF0 (IoCreateStreamFileObjectEx2.c)
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IopLoadFileSystemDriver @ 0x1405F3F9C (IopLoadFileSystemDriver.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     IopCompleteUnloadOrDelete @ 0x14009FB48 (IopCompleteUnloadOrDelete.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2, unsigned __int8 a3)
{
  unsigned __int8 v6; // si
  KIRQL CurrentIrql; // bp
  char *v8; // r10
  volatile __int64 *v9; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v12; // rdx
  int v13; // eax
  volatile signed __int64 **v14; // rbx
  __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v9 = (volatile __int64 *)*((_QWORD *)v8 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v19 = SchedulerAssist[5];
      SchedulerAssist[5] = v19 + 1;
      if ( v19 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v8, v9);
  }
  else
  {
    v12 = (_QWORD *)_InterlockedExchange64(v9, (__int64)v8);
    if ( v12 )
      KxWaitForLockOwnerShip((__int64)v8, v12);
  }
  v13 = *(_DWORD *)(BugCheckParameter2 + 4) - 1;
  *(_DWORD *)(BugCheckParameter2 + 4) = v13;
  if ( v13 < 0 )
  {
    v20 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v20 )
    {
      IoAddTriageDumpDataBlock(v20, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      v13 = *(_DWORD *)(BugCheckParameter2 + 4);
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, v13);
  }
  if ( !v13 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2, a3, CurrentIrql);
  v14 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v14, retaddr);
  }
  else
  {
    _m_prefetchw(v14);
    v15 = (__int64)*v14;
    if ( !*v14 )
    {
      if ( v14 == (volatile signed __int64 **)_InterlockedCompareExchange64(v14[1], 0LL, (signed __int64)v14) )
        goto LABEL_10;
      v15 = KxWaitForLockChainValid((__int64 *)v14);
    }
    *v14 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v15 + 8), 1uLL);
  }
LABEL_10:
  v16 = KeGetCurrentPrcb();
  v17 = v16->SchedulerAssist;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v21 = v17[5] - 1;
      v17[5] = v21;
      if ( !v21 && !*((_BYTE *)v17 + 25) && !*((_BYTE *)v17 + 27) )
        KiPerformUnboostKick(v16);
    }
  }
  __writecr8(CurrentIrql);
  return v6;
}
