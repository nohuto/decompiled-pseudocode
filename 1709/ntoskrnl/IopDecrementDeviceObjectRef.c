/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x1400858D0
 * Callers:
 *     IopCheckVpbMounted @ 0x1400855E0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14015D6AC (IopDecrementDeviceObjectHandleCount.c)
 *     IopShutdownBaseFileSystems @ 0x14042A9E4 (IopShutdownBaseFileSystems.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405542D0 (IoCreateStreamFileObjectEx2.c)
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 *     IopLoadFileSystemDriver @ 0x1405F28C8 (IopLoadFileSystemDriver.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     IopCompleteUnloadOrDelete @ 0x1400FAE1C (IopCompleteUnloadOrDelete.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 v4; // si
  unsigned __int8 CurrentIrql; // bp
  char *v6; // rcx
  volatile signed __int64 **v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v6, *((_QWORD *)v6 + 1));
  }
  else if ( _InterlockedExchange64(*((volatile __int64 **)v6 + 1), (__int64)v6) )
  {
    KxWaitForLockOwnerShip(v6);
  }
  if ( --*(_DWORD *)(BugCheckParameter2 + 4) < 0 )
  {
    v11 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v11 )
    {
      IoAddTriageDumpDataBlock(v11, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  if ( !*(_DWORD *)(BugCheckParameter2 + 4)
    && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
  {
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2);
  }
  v8 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v8, retaddr);
    goto LABEL_9;
  }
  _m_prefetchw(v8);
  v9 = (__int64)*v8;
  if ( *v8 )
    goto LABEL_15;
  if ( v8 != (volatile signed __int64 **)_InterlockedCompareExchange64(v8[1], 0LL, (signed __int64)v8) )
  {
    v9 = KxWaitForLockChainValid(v8);
LABEL_15:
    *v8 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v9 + 8), 1uLL);
  }
LABEL_9:
  __writecr8(CurrentIrql);
  return v4;
}
