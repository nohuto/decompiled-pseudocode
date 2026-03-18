/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x1400DBA60
 * Callers:
 *     IopCheckVpbMounted @ 0x14012B240 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1401EF730 (IopDecrementDeviceObjectHandleCount.c)
 *     IopShutdownBaseFileSystems @ 0x1404159A4 (IopShutdownBaseFileSystems.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140422650 (IoCreateStreamFileObjectEx2.c)
 *     IopDeleteFile @ 0x14051E790 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 *     IopLoadFileSystemDriver @ 0x14059B690 (IopLoadFileSystemDriver.c)
 * Callees:
 *     IopCompleteUnloadOrDelete @ 0x140005A00 (IopCompleteUnloadOrDelete.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2, unsigned __int8 a3)
{
  unsigned __int8 v6; // si
  KIRQL CurrentIrql; // bp
  char *v8; // rcx
  _QWORD *v9; // rdx
  volatile signed __int64 **v11; // rbx
  __int64 v12; // rax
  __int64 v14; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v8, *((_QWORD *)v8 + 1));
  }
  else
  {
    v9 = (_QWORD *)_InterlockedExchange64(*((volatile __int64 **)v8 + 1), (__int64)v8);
    if ( v9 )
      KxWaitForLockOwnerShip((__int64)v8, v9);
  }
  if ( --*(_DWORD *)(BugCheckParameter2 + 4) < 0 )
  {
    v14 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v14 )
    {
      IoAddTriageDumpDataBlock(v14, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  if ( !*(_DWORD *)(BugCheckParameter2 + 4)
    && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
  {
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2, a3, CurrentIrql);
  }
  v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
    goto LABEL_9;
  }
  _m_prefetchw(v11);
  v12 = (__int64)*v11;
  if ( *v11 )
    goto LABEL_15;
  if ( v11 != (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
  {
    v12 = KxWaitForLockChainValid(v11);
LABEL_15:
    *v11 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
  }
LABEL_9:
  __writecr8(CurrentIrql);
  return v6;
}
