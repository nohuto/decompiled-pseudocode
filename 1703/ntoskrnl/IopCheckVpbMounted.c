/*
 * XREFs of IopCheckVpbMounted @ 0x14012B240
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     IopDecrementDeviceObjectRef @ 0x1400DBA60 (IopDecrementDeviceObjectRef.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *a4)
{
  unsigned __int8 CurrentIrql; // bp
  char *v7; // rcx
  _QWORD *v8; // rdx
  ULONG_PTR v9; // rbx
  volatile signed __int64 **v10; // rdi
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7, *((_QWORD *)v7 + 1));
  }
  else
  {
    v8 = (_QWORD *)_InterlockedExchange64(*((volatile __int64 **)v7 + 1), (__int64)v7);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)v7, v8);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 4LL) & 1) != 0 )
  {
LABEL_5:
    v9 = *(_QWORD *)(a2 + 56);
    if ( (*(_BYTE *)(v9 + 4) & 2) != 0 )
    {
      *a4 = -1073741790;
      v9 = 0LL;
    }
    else if ( (int)++*(_DWORD *)(v9 + 28) <= 0 )
    {
      v14 = *(_QWORD *)(v9 + 8);
      if ( v14 )
      {
        IoAddTriageDumpDataBlock(v14, 336LL);
        v15 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL);
        if ( v15 )
        {
          IoAddTriageDumpDataBlock(v15, 336LL);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL) + 56LL));
        }
      }
      KeBugCheckEx(0x18u, 0LL, v9, 7uLL, *(unsigned int *)(v9 + 28));
    }
    v10 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v10, retaddr);
      goto LABEL_10;
    }
    _m_prefetchw(v10);
    v11 = (__int64)*v10;
    if ( !*v10 )
    {
      if ( v10 == (volatile signed __int64 **)_InterlockedCompareExchange64(v10[1], 0LL, (signed __int64)v10) )
      {
LABEL_10:
        __writecr8(CurrentIrql);
        if ( !v9 )
          IopDecrementDeviceObjectRef(a2, 0, 0);
        return v9;
      }
      v11 = KxWaitForLockChainValid(v10);
    }
    *v10 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v11 + 8), 1uLL);
    goto LABEL_10;
  }
  while ( 1 )
  {
    KeReleaseQueuedSpinLock(9uLL, CurrentIrql);
    v17 = 0LL;
    v13 = IopMountVolume(a2, (__int64)&v17);
    *a4 = v13;
    if ( v13 < 0 || v13 == 192 || v13 == 257 )
      break;
    result = v17;
    if ( v17 )
      return result;
    CurrentIrql = KeAcquireQueuedSpinLock(9uLL);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 4LL) & 1) != 0 )
      goto LABEL_5;
  }
  IopDecrementDeviceObjectRef(a2, 0, 0);
  result = 0LL;
  if ( *a4 >= 0 )
    *a4 = -1073741806;
  return result;
}
