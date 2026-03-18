/*
 * XREFs of MiLockPagableImageSection @ 0x14006CCF0
 * Callers:
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 *     MmUnlockPagableImageSection @ 0x14006CCE0 (MmUnlockPagableImageSection.c)
 *     IopLiveDumpUnLockPages @ 0x1401F6508 (IopLiveDumpUnLockPages.c)
 *     MmLockPagableDataSection @ 0x1404B2580 (MmLockPagableDataSection.c)
 *     MmLockPagableSectionByHandle @ 0x1404B2EC0 (MmLockPagableSectionByHandle.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 *     IopLiveDumpLockPages @ 0x14068F398 (IopLiveDumpLockPages.c)
 *     PnprLockPagesForReplace @ 0x1406A27C0 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 *     MiLockPagableSections @ 0x140803B20 (MiLockPagableSections.c)
 *     KiInitializeMTRR @ 0x140817890 (KiInitializeMTRR.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     MmLockLoadedModuleListShared @ 0x14006CF18 (MmLockLoadedModuleListShared.c)
 *     MiUnlockImageSection @ 0x14006CF8C (MiUnlockImageSection.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiLockImageSection @ 0x1404B2ED0 (MiLockImageSection.c)
 */

void __fastcall MiLockPagableImageSection(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rsi
  __int64 v4; // rdi
  char *v5; // rbp
  PIMAGE_NT_HEADERS v6; // r9
  ULONG_PTR BugCheckParameter4; // r8
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r11
  unsigned __int64 SectionAlignment; // rcx
  unsigned __int64 v14; // r9
  unsigned __int8 v15; // [rsp+50h] [rbp+8h] BYREF

  if ( BugCheckParameter2 != 1 )
  {
    v2 = (unsigned int)BugCheckParameter3;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2)
      && (unsigned int)MiGetSystemRegionType(BugCheckParameter2) != 1 )
    {
      MmLockLoadedModuleListShared(&v15);
      v4 = MiLookupDataTableEntry(BugCheckParameter2, 1LL);
      if ( !v4 )
        KeBugCheckEx(0x1Au, 0x1012uLL, BugCheckParameter2, v2, 0LL);
      ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
      __writecr8(v15);
      v5 = *(char **)(v4 + 48);
      v6 = RtlImageNtHeader(v5);
      BugCheckParameter4 = v6->FileHeader.NumberOfSections;
      v8 = (__int64)(BugCheckParameter2 - v6->FileHeader.SizeOfOptionalHeader - (_QWORD)v6 - 24) / 40;
      if ( (unsigned int)v8 >= (unsigned int)BugCheckParameter4 )
        KeBugCheckEx(0x1Au, 0x1013uLL, BugCheckParameter2 | v2, (unsigned int)v8, BugCheckParameter4);
      v9 = *(_DWORD *)(BugCheckParameter2 + 8);
      if ( *(_DWORD *)(BugCheckParameter2 + 16) >= v9 )
        v9 = *(_DWORD *)(BugCheckParameter2 + 16);
      v10 = (unsigned int)v8;
      v11 = (unsigned __int64)&v5[*(unsigned int *)(BugCheckParameter2 + 12)];
      v12 = *(_QWORD *)(v4 + 224) + 4 * v10;
      SectionAlignment = v6->OptionalHeader.SectionAlignment;
      if ( SectionAlignment > 0x1000 )
        SectionAlignment = 4096LL;
      v14 = (((~(SectionAlignment - 1) & (v11 + SectionAlignment + v9 - 1LL)) + 4095) >> 9) & 0x7FFFFFFFF8LL;
      if ( (_DWORD)v2 == 1 )
        MiLockImageSection(v4, v12, ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v14 - 0x98000000008LL);
      else
        MiUnlockImageSection(
          v12,
          ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          v14 - 0x98000000008LL,
          BugCheckParameter2);
    }
  }
}
