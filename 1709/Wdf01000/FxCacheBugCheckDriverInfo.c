/*
 * XREFs of FxCacheBugCheckDriverInfo @ 0x1C00172A8
 * Callers:
 *     FxInitialize @ 0x1C00158D0 (FxInitialize.c)
 * Callees:
 *     memmove @ 0x1C003D680 (memmove.c)
 */

void __fastcall FxCacheBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // si
  _FX_DUMP_DRIVER_INFO_ENTRY *v3; // rdx
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int v5; // ebp
  _FX_DUMP_DRIVER_INFO_ENTRY *PoolWithTag; // rax
  _FX_DUMP_DRIVER_INFO_ENTRY *v7; // rdi
  _FX_DUMP_DRIVER_INFO_ENTRY *BugCheckDriverInfo; // rcx

  FxDriverGlobals->BugCheckDriverInfoIndex = 0;
  if ( FxLibraryGlobals.BugCheckDriverInfo )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
    if ( FxLibraryGlobals.BugCheckDriverInfoIndex >= FxLibraryGlobals.BugCheckDriverInfoCount )
    {
      if ( FxLibraryGlobals.BugCheckDriverInfoCount > 0x23F )
        goto $Done_11;
      v5 = FxLibraryGlobals.BugCheckDriverInfoCount + 10;
      PoolWithTag = (_FX_DUMP_DRIVER_INFO_ENTRY *)ExAllocatePoolWithTag(
                                                    ExDefaultNonPagedPoolType,
                                                    56LL * (FxLibraryGlobals.BugCheckDriverInfoCount + 10),
                                                    0x72447846u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        goto $Done_11;
      memmove(PoolWithTag, FxLibraryGlobals.BugCheckDriverInfo, 56LL * FxLibraryGlobals.BugCheckDriverInfoCount);
      BugCheckDriverInfo = FxLibraryGlobals.BugCheckDriverInfo;
      FxLibraryGlobals.BugCheckDriverInfo = v7;
      FxLibraryGlobals.BugCheckDriverInfoCount = v5;
      ExFreePoolWithTag(BugCheckDriverInfo, 0);
    }
    v3 = &FxLibraryGlobals.BugCheckDriverInfo[FxLibraryGlobals.BugCheckDriverInfoIndex];
    v3->FxDriverGlobals = FxDriverGlobals;
    WdfBindInfo = FxDriverGlobals->WdfBindInfo;
    *(_QWORD *)&v3->Version.Major = *(_QWORD *)&WdfBindInfo->Version.Major;
    v3->Version.Build = WdfBindInfo->Version.Build;
    *(_OWORD *)v3->DriverName = *(_OWORD *)FxDriverGlobals->Public.DriverName;
    *(_OWORD *)&v3->DriverName[16] = *(_OWORD *)&FxDriverGlobals->Public.DriverName[16];
    v3->DriverName[31] = 0;
    FxDriverGlobals->BugCheckDriverInfoIndex = FxLibraryGlobals.BugCheckDriverInfoIndex++;
$Done_11:
    KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v2);
  }
}
