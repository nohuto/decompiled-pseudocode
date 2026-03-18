/*
 * XREFs of PspStorageAllocSlot @ 0x14059F4C8
 * Callers:
 *     PsAllocSiloContextSlot @ 0x14059F3B0 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x14059F3C0 (PsRegisterSiloMonitor.c)
 *     VRegSetup @ 0x14059F830 (VRegSetup.c)
 *     CmpInitSiloSupport @ 0x1405A3780 (CmpInitSiloSupport.c)
 *     PspInitializeSiloStructures @ 0x1407FEF44 (PspInitializeSiloStructures.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14005ED00 (RtlFindClearBitsAndSet.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageAllocSlot(ULONG *a1)
{
  int v2; // edi
  ULONG ClearBitsAndSet; // ebx

  v2 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspStorageBitmapLock, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageBitmap, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageExpansionBitmap, 1u, 0);
    if ( ClearBitsAndSet == -1 )
      v2 = -1073741670;
    else
      ClearBitsAndSet += 32;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  if ( v2 >= 0 )
    *a1 = ClearBitsAndSet;
  return (unsigned int)v2;
}
