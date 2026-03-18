/*
 * XREFs of PspStorageAllocSlot @ 0x1406217F8
 * Callers:
 *     CmpInitSiloSupport @ 0x1406209D4 (CmpInitSiloSupport.c)
 *     VRegSetup @ 0x140621500 (VRegSetup.c)
 *     PsAllocSiloContextSlot @ 0x1406216D0 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x1406216F0 (PsRegisterSiloMonitor.c)
 *     PspInitializeSiloStructures @ 0x14089FF04 (PspInitializeSiloStructures.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSet @ 0x14006C950 (RtlFindClearBitsAndSet.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspStorageAllocSlot(ULONG *a1)
{
  int v2; // edi
  __int64 v3; // rdx
  ULONG ClearBitsAndSet; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // al

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
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock, v3, v5, v6);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  if ( v2 >= 0 )
    *a1 = ClearBitsAndSet;
  return (unsigned int)v2;
}
