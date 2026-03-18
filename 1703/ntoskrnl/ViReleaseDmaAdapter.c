/*
 * XREFs of ViReleaseDmaAdapter @ 0x14076CDD8
 * Callers:
 *     VfGetDmaAdapter @ 0x140769DA0 (VfGetDmaAdapter.c)
 *     VfPutDmaAdapter @ 0x14076AA90 (VfPutDmaAdapter.c)
 *     VfIoDeleteDevice @ 0x140772498 (VfIoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MmFreeContiguousMemory @ 0x140123200 (MmFreeContiguousMemory.c)
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

void __fastcall ViReleaseDmaAdapter(__int64 a1)
{
  _QWORD *v1; // r14
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // al
  PVOID *v5; // rbp
  unsigned __int64 v6; // rbx
  PVOID *v7; // rbx
  __int64 v8; // rdi
  LONG_PTR v9; // rax
  int v10; // ebx

  v1 = *(_QWORD **)(a1 + 16);
  v2 = (KSPIN_LOCK *)(a1 + 280);
  v1[1] = *(_QWORD *)(a1 + 48);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 280));
  v5 = *(PVOID **)(a1 + 264);
  *(_QWORD *)(a1 + 264) = 0LL;
  v6 = v4;
  KxReleaseSpinLock(v2);
  __writecr8(v6);
  if ( v5 )
  {
    v7 = v5;
    v8 = 32LL;
    do
    {
      if ( *v7 )
        MmFreeContiguousMemory(*v7);
      ++v7;
      --v8;
    }
    while ( v8 );
    ExFreePoolWithTag(v5, 0);
  }
  v9 = ObfDereferenceObject(v1);
  v10 = v9;
  if ( *(int *)(a1 + 36) > 0 && v9 && (v9 != 1 || !*(_BYTE *)(a1 + 34)) )
  {
    ViHalPreprocessOptions(
      byte_1403413EC,
      "Too many outstanding reference counts (%x) for adapter %p",
      17LL,
      v9,
      (__int64)v1,
      a1);
    VfReportIssueWithOptions(0xE6u, 17, v10, (int)v1, a1, byte_1403413EC);
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
