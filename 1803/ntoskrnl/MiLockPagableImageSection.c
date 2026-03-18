/*
 * XREFs of MiLockPagableImageSection @ 0x14000B0B0
 * Callers:
 *     PoRunDownDeviceObject @ 0x14009F930 (PoRunDownDeviceObject.c)
 *     MmUnlockPagableImageSection @ 0x1400C1700 (MmUnlockPagableImageSection.c)
 *     IopLiveDumpUnLockPages @ 0x140239024 (IopLiveDumpUnLockPages.c)
 *     MmLockPagableSectionByHandle @ 0x14053EAD0 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x1405BB660 (MmLockPagableDataSection.c)
 *     IopLiveDumpLockPages @ 0x140720010 (IopLiveDumpLockPages.c)
 *     PnprLockPagesForReplace @ 0x140734A00 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 *     MiLockPagableSections @ 0x14089C824 (MiLockPagableSections.c)
 *     KiInitializeMTRR @ 0x1408B2DEC (KiInitializeMTRR.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeaderEx @ 0x14003EEE0 (RtlImageNtHeaderEx.c)
 *     MiUnlockImageSection @ 0x1400A190C (MiUnlockImageSection.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MmLockLoadedModuleListShared @ 0x14012B7B0 (MmLockLoadedModuleListShared.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiLockImageSection @ 0x1405BB208 (MiLockImageSection.c)
 */

void __fastcall MiLockPagableImageSection(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  unsigned __int64 v6; // r8
  char *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned __int64 v12; // r11
  unsigned __int64 SectionAlignment; // r10
  unsigned __int64 v14; // r9
  PIMAGE_NT_HEADERS NtHeader; // [rsp+50h] [rbp+8h] BYREF

  if ( BugCheckParameter2 == 1 )
    return;
  v2 = (unsigned int)BugCheckParameter3;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS() || (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    return;
  v4 = 0LL;
  LOBYTE(NtHeader) = 17;
  MmLockLoadedModuleListShared(&NtHeader);
  v5 = (_QWORD *)qword_1403CB5B8;
  if ( !qword_1403CB5B8 )
    goto LABEL_13;
  while ( 1 )
  {
    v6 = *(v5 - 23) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( BugCheckParameter2 > *((unsigned int *)v5 - 42) + v6 - 1 )
    {
      v5 = (_QWORD *)v5[1];
      goto LABEL_8;
    }
    if ( BugCheckParameter2 >= v6 )
      break;
    v5 = (_QWORD *)*v5;
LABEL_8:
    if ( !v5 )
      goto LABEL_13;
  }
  if ( v5 )
    v4 = v5 - 29;
LABEL_13:
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( (unsigned __int8)NtHeader < 0xFu )
    __writecr8((unsigned __int8)NtHeader);
  if ( !v4 )
    KeBugCheckEx(0x1Au, 0x1012uLL, BugCheckParameter2, v2, 0LL);
  v7 = (char *)v4[6];
  NtHeader = 0LL;
  RtlImageNtHeaderEx(1u, v7, 0LL, &NtHeader);
  v8 = (__int64)(BugCheckParameter2 - NtHeader->FileHeader.SizeOfOptionalHeader - (_QWORD)NtHeader - 24) / 40;
  if ( (unsigned int)v8 >= NtHeader->FileHeader.NumberOfSections )
    KeBugCheckEx(0x1Au, 0x1013uLL, BugCheckParameter2 | v2, (unsigned int)v8, NtHeader->FileHeader.NumberOfSections);
  v9 = *(unsigned int *)(BugCheckParameter2 + 16);
  v10 = v4[28] + 4LL * (unsigned int)v8;
  v11 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (unsigned int)v9 < v11 )
    v9 = v11;
  v12 = (unsigned __int64)&v7[*(unsigned int *)(BugCheckParameter2 + 12)];
  SectionAlignment = NtHeader->OptionalHeader.SectionAlignment;
  if ( SectionAlignment > 0x1000 )
    SectionAlignment = 4096LL;
  v14 = (((~(SectionAlignment - 1) & (v12 + SectionAlignment + v9 - 1)) + 4095) >> 9) & 0x7FFFFFFFF8LL;
  if ( (_DWORD)v2 == 1 )
    MiLockImageSection(v4, v10, ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v14 - 0x98000000008LL);
  else
    MiUnlockImageSection(
      v10,
      ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      v14 - 0x98000000008LL,
      BugCheckParameter2);
}
