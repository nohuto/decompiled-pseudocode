/*
 * XREFs of RtlpStdExtendLowerWatermark @ 0x140286A04
 * Callers:
 *     RtlpStdGetSpaceForTrace @ 0x140286CB4 (RtlpStdGetSpaceForTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwAllocateVirtualMemory @ 0x1401A77C0 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall RtlpStdExtendLowerWatermark(KSPIN_LOCK *SpinLock, __int64 a2)
{
  KSPIN_LOCK v4; // rsi
  KSPIN_LOCK v5; // r14
  char v6; // al
  void *v7; // rcx
  KSPIN_LOCK v8; // rbx
  unsigned __int64 v9; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v5 = SpinLock[20];
  v6 = *((_BYTE *)SpinLock + 128);
  v7 = (void *)SpinLock[18];
  BaseAddress = v7;
  v8 = v5 + a2;
  if ( !v6 )
  {
    if ( v8 > (unsigned __int64)v7 )
    {
      RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)v7 + RegionSize >= SpinLock[19]
        || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        goto LABEL_9;
      }
      SpinLock[18] = (KSPIN_LOCK)BaseAddress + RegionSize;
    }
LABEL_8:
    ++*((_DWORD *)SpinLock + 48);
    v4 = v5;
    SpinLock[20] = v8;
    goto LABEL_9;
  }
  if ( v8 <= SpinLock[21] )
    goto LABEL_8;
LABEL_9:
  v9 = *((unsigned __int8 *)SpinLock + 8);
  KxReleaseSpinLock(SpinLock);
  __writecr8(v9);
  return v4;
}
