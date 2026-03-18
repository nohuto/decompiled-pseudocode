/*
 * XREFs of MmLockPagableDataSection @ 0x140516060
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1407A7248 (VfInitSystemNoRebootNeeded.c)
 *     BgkpLockBgfxCodeSection @ 0x1407D0C80 (BgkpLockBgfxCodeSection.c)
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 *     MiLockPagableSections @ 0x1408296B4 (MiLockPagableSections.c)
 *     HeadlessInit @ 0x1408581E4 (HeadlessInit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x1400DCDF4 (MiLookupDataTableEntry.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

PVOID __stdcall MmLockPagableDataSection(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // rbx
  _BYTE *v4; // rcx
  char *v5; // rsi
  PIMAGE_NT_HEADERS v6; // rax
  int v7; // r8d
  unsigned int NumberOfSections; // r9d
  _DWORD *v9; // rdx
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return (PVOID)1;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v4 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 1)[6];
  v5 = (char *)((_BYTE *)AddressWithinSection - v4);
  v6 = RtlImageNtHeader(v4);
  v7 = 0;
  NumberOfSections = v6->FileHeader.NumberOfSections;
  v9 = (_DWORD *)((char *)&v6->OptionalHeader.Magic + v6->FileHeader.SizeOfOptionalHeader);
  if ( v6->FileHeader.NumberOfSections )
  {
    while ( 1 )
    {
      v10 = v9[2];
      if ( v9[4] >= v10 )
        v10 = v9[4];
      v11 = (unsigned int)v9[3];
      if ( (unsigned __int64)v5 >= v11 && (unsigned __int64)v5 < (unsigned int)v11 + v10 )
        break;
      v9 += 10;
      if ( ++v7 >= NumberOfSections )
        goto LABEL_10;
    }
    v3 = v9;
  }
LABEL_10:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1234uLL, (ULONG_PTR)AddressWithinSection, 0LL, 0LL);
  MiLockPagableImageSection((ULONG_PTR)v3, 1u);
  return v3;
}
