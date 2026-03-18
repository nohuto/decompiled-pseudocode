/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x140251034
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140251114 (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwAllocateVirtualMemory @ 0x14017DBC0 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall RtlpStdExtendUpperWatermark(KSPIN_LOCK *SpinLock, void *a2)
{
  KSPIN_LOCK v3; // rsi
  KSPIN_LOCK v4; // rbx
  char *v5; // rcx
  KSPIN_LOCK v6; // rax
  unsigned __int64 v7; // rbx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v3 = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v4 = SpinLock[21];
  v5 = (char *)SpinLock[19];
  BaseAddress = v5;
  v6 = v4 - 8;
  if ( !*((_BYTE *)SpinLock + 128) )
  {
    if ( v6 < (unsigned __int64)v5 )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(v5 - 4096) <= SpinLock[18] )
        goto LABEL_9;
      BaseAddress = v5 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_9;
      SpinLock[19] = (KSPIN_LOCK)BaseAddress;
    }
LABEL_8:
    ++*((_DWORD *)SpinLock + 45);
    v3 = v4 - 8;
    SpinLock[21] = v4 - 8;
    goto LABEL_9;
  }
  if ( v6 >= SpinLock[20] )
    goto LABEL_8;
LABEL_9:
  v7 = *((unsigned __int8 *)SpinLock + 8);
  KxReleaseSpinLock(SpinLock);
  __writecr8(v7);
  return v3;
}
