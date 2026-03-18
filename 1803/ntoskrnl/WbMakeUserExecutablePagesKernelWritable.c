/*
 * XREFs of WbMakeUserExecutablePagesKernelWritable @ 0x140539770
 * Callers:
 *     sub_14048AAA0 @ 0x14048AAA0 (sub_14048AAA0.c)
 *     WbAllocateMemoryBlock @ 0x140539864 (WbAllocateMemoryBlock.c)
 * Callees:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     MmProbeAndLockPagesPrivate @ 0x14009ADD8 (MmProbeAndLockPagesPrivate.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 */

__int64 __fastcall WbMakeUserExecutablePagesKernelWritable(void *a1, ULONG a2, PMDL *a3, _QWORD *a4)
{
  int v6; // esi
  unsigned int v7; // edi
  PMDL Mdl; // rax
  PMDL v9; // rbx
  PVOID MappedSystemVa; // rax

  v6 = 0;
  v7 = 0;
  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v9 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPagesPrivate(Mdl);
    v6 = 1;
    if ( (v9->MdlFlags & 5) != 0 )
      MappedSystemVa = v9->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( MappedSystemVa )
    {
      if ( a4 )
        *a4 = MappedSystemVa;
      if ( a3 )
      {
        *a3 = v9;
        v9 = 0LL;
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741801;
  }
  if ( v9 )
  {
    if ( v6 )
      MmUnlockPages(v9);
    IoFreeMdl(v9);
  }
  return v7;
}
