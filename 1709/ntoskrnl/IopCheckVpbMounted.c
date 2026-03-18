/*
 * XREFs of IopCheckVpbMounted @ 0x1400855E0
 * Callers:
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x1400858D0 (IopDecrementDeviceObjectRef.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *a4)
{
  unsigned __int8 CurrentIrql; // bp
  char *v7; // rcx
  ULONG_PTR v8; // rbx
  volatile signed __int64 **v9; // rdi
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7, *((_QWORD *)v7 + 1));
  }
  else if ( _InterlockedExchange64(*((volatile __int64 **)v7 + 1), (__int64)v7) )
  {
    KxWaitForLockOwnerShip(v7);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 4LL) & 1) != 0 )
  {
LABEL_5:
    v8 = *(_QWORD *)(a2 + 56);
    if ( (*(_BYTE *)(v8 + 4) & 2) != 0 )
    {
      *a4 = -1073741790;
      v8 = 0LL;
    }
    else if ( (int)++*(_DWORD *)(v8 + 28) <= 0 )
    {
      v13 = *(_QWORD *)(v8 + 8);
      if ( v13 )
      {
        IoAddTriageDumpDataBlock(v13, 336LL);
        v14 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL);
        if ( v14 )
        {
          IoAddTriageDumpDataBlock(v14, 336LL);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 56LL));
        }
      }
      KeBugCheckEx(0x18u, 0LL, v8, 7uLL, *(unsigned int *)(v8 + 28));
    }
    v9 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v9, retaddr);
      goto LABEL_10;
    }
    _m_prefetchw(v9);
    v10 = (__int64)*v9;
    if ( !*v9 )
    {
      if ( v9 == (volatile signed __int64 **)_InterlockedCompareExchange64(v9[1], 0LL, (signed __int64)v9) )
      {
LABEL_10:
        __writecr8(CurrentIrql);
        if ( !v8 )
          IopDecrementDeviceObjectRef(a2);
        return v8;
      }
      v10 = KxWaitForLockChainValid(v9);
    }
    *v9 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
    goto LABEL_10;
  }
  while ( 1 )
  {
    KeReleaseQueuedSpinLock(9uLL, CurrentIrql);
    v16 = 0LL;
    v12 = IopMountVolume(a2, (__int64)&v16);
    *a4 = v12;
    if ( v12 < 0 || v12 == 192 || v12 == 257 )
      break;
    result = v16;
    if ( v16 )
      return result;
    CurrentIrql = KeAcquireQueuedSpinLock(9uLL);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 4LL) & 1) != 0 )
      goto LABEL_5;
  }
  IopDecrementDeviceObjectRef(a2);
  result = 0LL;
  if ( *a4 >= 0 )
    *a4 = -1073741806;
  return result;
}
