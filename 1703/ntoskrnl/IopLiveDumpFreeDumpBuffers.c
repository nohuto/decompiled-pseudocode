/*
 * XREFs of IopLiveDumpFreeDumpBuffers @ 0x14068F088
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x14068ECF0 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14068F3B0 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x14068F6F4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14068F920 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     VslIsSecureKernelRunning @ 0x14003CC70 (VslIsSecureKernelRunning.c)
 *     VslAbortLiveDump @ 0x1401ECA34 (VslAbortLiveDump.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmFreeIndependentPages @ 0x14056B860 (MmFreeIndependentPages.c)
 */

void __fastcall IopLiveDumpFreeDumpBuffers(__int64 a1)
{
  unsigned __int64 i; // rdi
  unsigned __int64 v3; // rcx
  void *v4; // rcx

  if ( a1 )
  {
    if ( VslIsSecureKernelRunning() )
      VslAbortLiveDump();
    for ( i = 0LL; i < *(_QWORD *)(a1 + 56); ++i )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i);
      if ( v3 )
      {
        MmFreeIndependentPages(v3, 0x40000uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i) = 0LL;
      }
    }
    v4 = *(void **)(a1 + 64);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x706D644Cu);
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
