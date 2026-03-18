/*
 * XREFs of RtlpStdExtendLowerWatermark @ 0x14023B6B4
 * Callers:
 *     RtlpStdGetSpaceForTrace @ 0x14023B964 (RtlpStdGetSpaceForTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwAllocateVirtualMemory @ 0x14017E240 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall RtlpStdExtendLowerWatermark(KSPIN_LOCK *SpinLock, __int64 a2)
{
  KSPIN_LOCK v4; // rsi
  char v5; // dl
  void *v6; // rcx
  KSPIN_LOCK v7; // rbx
  unsigned __int64 v8; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v5 = *((_BYTE *)SpinLock + 128);
  v6 = (void *)SpinLock[18];
  v7 = SpinLock[20];
  BaseAddress = v6;
  if ( !v5 )
  {
    if ( v7 + a2 > (unsigned __int64)v6 )
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
    SpinLock[20] = v7 + a2;
    v4 = v7;
    goto LABEL_9;
  }
  if ( v7 + a2 <= SpinLock[21] )
    goto LABEL_8;
LABEL_9:
  v8 = *((unsigned __int8 *)SpinLock + 8);
  KxReleaseSpinLock(SpinLock);
  __writecr8(v8);
  return v4;
}
