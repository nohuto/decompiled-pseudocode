/*
 * XREFs of RtlpStdExtendLowerWatermark @ 0x140250F4C
 * Callers:
 *     RtlpStdGetSpaceForTrace @ 0x1402511F0 (RtlpStdGetSpaceForTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwAllocateVirtualMemory @ 0x14017DBC0 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall RtlpStdExtendLowerWatermark(KSPIN_LOCK *SpinLock, __int64 a2)
{
  KSPIN_LOCK v4; // rsi
  KSPIN_LOCK v5; // r14
  void *v6; // rcx
  KSPIN_LOCK v7; // rbx
  unsigned __int64 v8; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v5 = SpinLock[20];
  v6 = (void *)SpinLock[18];
  BaseAddress = v6;
  v7 = v5 + a2;
  if ( !*((_BYTE *)SpinLock + 128) )
  {
    if ( v7 > (unsigned __int64)v6 )
    {
      RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)v6 + RegionSize >= SpinLock[19]
        || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        goto LABEL_9;
      }
      SpinLock[18] = (KSPIN_LOCK)BaseAddress + RegionSize;
    }
LABEL_8:
    ++*((_DWORD *)SpinLock + 48);
    v4 = v5;
    SpinLock[20] = v7;
    goto LABEL_9;
  }
  if ( v7 <= SpinLock[21] )
    goto LABEL_8;
LABEL_9:
  v8 = *((unsigned __int8 *)SpinLock + 8);
  KxReleaseSpinLock(SpinLock);
  __writecr8(v8);
  return v4;
}
