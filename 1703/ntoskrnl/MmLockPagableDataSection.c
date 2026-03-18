/*
 * XREFs of MmLockPagableDataSection @ 0x1404B2580
 * Callers:
 *     BgkpLockBgfxCodeSection @ 0x140755680 (BgkpLockBgfxCodeSection.c)
 *     VfInitSystemNoRebootNeeded @ 0x140765668 (VfInitSystemNoRebootNeeded.c)
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 *     MiLockPagableSections @ 0x140803B20 (MiLockPagableSections.c)
 *     HeadlessInit @ 0x140826A2C (HeadlessInit.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14006CCF0 (MiLockPagableImageSection.c)
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
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
  ExAcquireResourceExclusiveLite((PERESOURCE)&PsLoadedModuleResource, 1u);
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
      v11 = (unsigned int)v9[3];
      if ( v9[4] >= v10 )
        v10 = v9[4];
      if ( (unsigned __int64)v5 >= v11 && (unsigned __int64)v5 < (unsigned int)v11 + v10 )
        break;
      v9 += 10;
      if ( ++v7 >= NumberOfSections )
        goto LABEL_10;
    }
    v3 = v9;
  }
LABEL_10:
  ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1234uLL, (ULONG_PTR)AddressWithinSection, 0LL, 0LL);
  MiLockPagableImageSection((ULONG_PTR)v3, 1uLL);
  return v3;
}
