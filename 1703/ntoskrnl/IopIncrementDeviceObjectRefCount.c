/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x1400DB970
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140005A00 (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x1401F8AF8 (PnpMarkDeviceForRemove.c)
 *     IopShutdownBaseFileSystems @ 0x1404159A4 (IopShutdownBaseFileSystems.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140422650 (IoCreateStreamFileObjectEx2.c)
 *     IopDeleteFile @ 0x14051E790 (IopDeleteFile.c)
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 *     IoRegisterFileSystem @ 0x14059D290 (IoRegisterFileSystem.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rcx
  _QWORD *v5; // rdx
  int v6; // edi
  volatile signed __int64 **v7; // rbx
  __int64 v8; // rax
  __int64 v10; // rcx
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
    else
    {
      v5 = (_QWORD *)_InterlockedExchange64(*((volatile __int64 **)v4 + 1), (__int64)v4);
      if ( v5 )
        KxWaitForLockOwnerShip((__int64)v4, v5);
    }
    v6 = ++*(_DWORD *)(BugCheckParameter2 + 4);
    v7 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v7, retaddr);
      goto LABEL_8;
    }
    _m_prefetchw(v7);
    v8 = (__int64)*v7;
    if ( !*v7 )
    {
      if ( v7 == (volatile signed __int64 **)_InterlockedCompareExchange64(v7[1], 0LL, (signed __int64)v7) )
      {
LABEL_8:
        __writecr8(CurrentIrql);
        goto LABEL_9;
      }
      v8 = KxWaitForLockChainValid(v7);
    }
    *v7 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v8 + 8), 1uLL);
    goto LABEL_8;
  }
  v6 = ++*(_DWORD *)(BugCheckParameter2 + 4);
LABEL_9:
  if ( v6 <= 0 )
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v10 )
    {
      IoAddTriageDumpDataBlock(v10, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v6;
}
