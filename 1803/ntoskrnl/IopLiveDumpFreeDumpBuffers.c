/*
 * XREFs of IopLiveDumpFreeDumpBuffers @ 0x14071FCD8
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x14071F948 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x140720030 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140720374 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1407205A0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x1400AD1B0 (MmFreeIndependentPages.c)
 *     VslIsSecureKernelRunning @ 0x1400D2E2C (VslIsSecureKernelRunning.c)
 *     VslAbortLiveDump @ 0x14022F424 (VslAbortLiveDump.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
