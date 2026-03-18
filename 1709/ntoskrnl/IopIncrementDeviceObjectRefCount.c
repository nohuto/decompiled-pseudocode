/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x140085AF0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400FAE1C (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x140157DE8 (PnpMarkDeviceForRemove.c)
 *     IopShutdownBaseFileSystems @ 0x14042A9E4 (IopShutdownBaseFileSystems.c)
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405542D0 (IoCreateStreamFileObjectEx2.c)
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 *     IoRegisterFileSystem @ 0x1405C8440 (IoRegisterFileSystem.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rcx
  int v5; // edi
  volatile signed __int64 **v6; // rbx
  __int64 v7; // rax
  __int64 v9; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v4, *((_QWORD *)v4 + 1));
    }
    else if ( _InterlockedExchange64(*((volatile __int64 **)v4 + 1), (__int64)v4) )
    {
      KxWaitForLockOwnerShip(v4);
    }
    v5 = ++*(_DWORD *)(BugCheckParameter2 + 4);
    v6 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v6, retaddr);
      goto LABEL_8;
    }
    _m_prefetchw(v6);
    v7 = (__int64)*v6;
    if ( !*v6 )
    {
      if ( v6 == (volatile signed __int64 **)_InterlockedCompareExchange64(v6[1], 0LL, (signed __int64)v6) )
      {
LABEL_8:
        __writecr8(CurrentIrql);
        goto LABEL_9;
      }
      v7 = KxWaitForLockChainValid(v6);
    }
    *v6 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v7 + 8), 1uLL);
    goto LABEL_8;
  }
  v5 = ++*(_DWORD *)(BugCheckParameter2 + 4);
LABEL_9:
  if ( v5 <= 0 )
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v9 )
    {
      IoAddTriageDumpDataBlock(v9, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v5;
}
