/*
 * XREFs of IopCheckDeviceAndDriver @ 0x140085280
 * Callers:
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // si
  char *v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  volatile signed __int64 **v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, *((_QWORD *)v5 + 1));
  }
  else if ( _InterlockedExchange64(*((volatile __int64 **)v5 + 1), (__int64)v5) )
  {
    KxWaitForLockOwnerShip(v5);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v6 = *(_DWORD *)(a2 + 48), (v6 & 0x80u) != 0) )
  {
    v7 = -1073741810;
  }
  else if ( (v6 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    if ( (int)++*(_DWORD *)(a2 + 4) <= 0 )
    {
      v11 = *(_QWORD *)(a2 + 8);
      if ( v11 )
      {
        IoAddTriageDumpDataBlock(v11, 336LL);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, *(int *)(a2 + 4));
    }
    v7 = 0;
  }
  else
  {
    v7 = -1073741790;
  }
  v8 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v8, retaddr);
    goto LABEL_12;
  }
  _m_prefetchw(v8);
  v9 = (__int64)*v8;
  if ( *v8 )
    goto LABEL_14;
  if ( v8 != (volatile signed __int64 **)_InterlockedCompareExchange64(v8[1], 0LL, (signed __int64)v8) )
  {
    v9 = KxWaitForLockChainValid(v8);
LABEL_14:
    *v8 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v9 + 8), 1uLL);
  }
LABEL_12:
  __writecr8(CurrentIrql);
  return v7;
}
