/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0
 * Callers:
 *     MiLockPagableImageSection @ 0x14000B0B0 (MiLockPagableImageSection.c)
 *     MiProbeLockFrame @ 0x140020C00 (MiProbeLockFrame.c)
 *     MiGetPhysicalAddress @ 0x14003C3F8 (MiGetPhysicalAddress.c)
 *     MmSetPageProtection @ 0x1400C7020 (MmSetPageProtection.c)
 *     MiMappingHasIoTracker @ 0x140110DA0 (MiMappingHasIoTracker.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiMappingHasIoReferences @ 0x14013CCF0 (MiMappingHasIoReferences.c)
 *     MiZeroAndFlushPtes @ 0x14013CDC4 (MiZeroAndFlushPtes.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiUpdateForkMaps @ 0x140141F94 (MiUpdateForkMaps.c)
 *     MiCountSystemImageCommitment @ 0x140169A08 (MiCountSystemImageCommitment.c)
 *     MiPfnRangeIsZero @ 0x14017A9CC (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14017B0D8 (MiDemoteValidLargePageOneLevel.c)
 *     MmProtectMdlSystemAddress @ 0x140254B70 (MmProtectMdlSystemAddress.c)
 *     MmReplaceImportEntry @ 0x140256048 (MmReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x140257290 (MiAddTriageDumpPtes.c)
 *     MiDbgWriteCheck @ 0x140261220 (MiDbgWriteCheck.c)
 *     MiImagePagable @ 0x1405BB4C4 (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1405BB5B0 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1405BB660 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1405BC4E0 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiBackSystemImageWithPagefile @ 0x1405F64C8 (MiBackSystemImageWithPagefile.c)
 *     MiFreeDriverInitialization @ 0x1405F845C (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x1405F84EC (MiFreeInitializationCode.c)
 *     MiDisablePagingOfDriver @ 0x1405F86D4 (MiDisablePagingOfDriver.c)
 *     MiHandleDriverNonPagedSections @ 0x1405FA75C (MiHandleDriverNonPagedSections.c)
 *     MiUnlockDriverCode @ 0x140604B7C (MiUnlockDriverCode.c)
 *     MiProtectSystemImage @ 0x14061C574 (MiProtectSystemImage.c)
 *     MiInitializeShadowPageTable @ 0x14062B9A4 (MiInitializeShadowPageTable.c)
 *     MxConsumeLargePageSlush @ 0x140898030 (MxConsumeLargePageSlush.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 *     MiMarkBootImagesNonPaged @ 0x1408AD644 (MiMarkBootImagesNonPaged.c)
 *     MiReloadBootLoadedDrivers @ 0x1408AD7F4 (MiReloadBootLoadedDrivers.c)
 *     MiRelocateBootImage @ 0x1408ADD30 (MiRelocateBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1408AE398 (MiInitializeBootLoadedDriverPfns.c)
 *     MiCheckLargePageOk @ 0x1408C8658 (MiCheckLargePageOk.c)
 *     MmDiscardDriverSection @ 0x1408E0DA4 (MmDiscardDriverSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PHYSICAL_ADDRESS(unsigned __int64 a1)
{
  unsigned int v1; // r10d
  __int64 v2; // rdx
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  char v8; // r9
  __int64 v9; // [rsp+0h] [rbp-30h]
  unsigned __int64 v10; // [rsp+8h] [rbp-28h]
  unsigned __int64 v11; // [rsp+10h] [rbp-20h]
  unsigned __int64 v12; // [rsp+18h] [rbp-18h]
  __int64 v13; // [rsp+20h] [rbp-10h]

  v1 = 4;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4LL;
  while ( 1 )
  {
    v3 = *(&v9 + v2--);
    --v1;
    v4 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL
      && v3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v4 & 1) == 0 )
        return 0LL;
      if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
      {
        v6 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 8 * ((v3 >> 3) & 0x1FF));
          v8 = v4 | 0x20;
          if ( (v7 & 0x20) == 0 )
            v8 = v4;
          LOBYTE(v4) = v8;
          if ( (v7 & 0x42) != 0 )
            LOBYTE(v4) = v8 | 0x42;
        }
      }
    }
    if ( (v4 & 1) == 0 )
      return 0LL;
    if ( (v4 & 0x80u) != 0LL )
      break;
    if ( v2 == 1 )
      return 0LL;
  }
  return v1;
}
