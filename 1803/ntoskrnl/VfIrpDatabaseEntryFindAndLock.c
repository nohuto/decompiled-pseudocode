/*
 * XREFs of VfIrpDatabaseEntryFindAndLock @ 0x14082B39C
 * Callers:
 *     IovCancelIrp @ 0x140811D70 (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x14081C2B8 (IovpCallDriver1.c)
 *     IovpCheckIrpForCriticalTracking @ 0x14081CAB0 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x14081CB20 (IovpCompleteRequest1.c)
 *     VfIoFreeIrp @ 0x14081D89C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x14081DA40 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x14081DCCC (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x14081DD08 (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x140820B50 (VfPendingMoreProcessingRequired.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14082B448 (VfIrpDatabaseEntryInsertAndLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1402AB294 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x1402AB2E0 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140813E74 (VfUtilAddressRangeFitNoLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14082B51C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViIrpDatabaseFindPointer @ 0x14082B6D0 (ViIrpDatabaseFindPointer.c)
 */

__int64 __fastcall VfIrpDatabaseEntryFindAndLock(unsigned __int64 a1)
{
  __int64 v1; // rdi
  __int64 Pointer; // rax
  KIRQL v4; // bl
  KIRQL v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( VfIrpDatabaseInitialized
    && VfUtilAddressRangeFitNoLock(
         (__m128i *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (a1 >> 12))),
         a1,
         a1 + 208) )
  {
    ViIrpDatabaseAcquireLockShared(&v6);
    Pointer = ViIrpDatabaseFindPointer(a1);
    v1 = Pointer;
    if ( Pointer )
    {
      _InterlockedIncrement((volatile signed __int32 *)(Pointer + 20));
      v4 = v6;
      ViIrpDatabaseReleaseLockShared(v6);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 8));
      *(_BYTE *)(v1 + 16) = v4;
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 20));
      if ( !*(_DWORD *)(v1 + 24) )
      {
        VfIrpDatabaseEntryReleaseLock(v1);
        return 0LL;
      }
    }
    else
    {
      ViIrpDatabaseReleaseLockShared(v6);
    }
  }
  return v1;
}
