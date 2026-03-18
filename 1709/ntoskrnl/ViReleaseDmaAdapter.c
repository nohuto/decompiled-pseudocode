/*
 * XREFs of ViReleaseDmaAdapter @ 0x1407AEA94
 * Callers:
 *     VfGetDmaAdapter @ 0x1407ABA60 (VfGetDmaAdapter.c)
 *     VfPutDmaAdapter @ 0x1407AC760 (VfPutDmaAdapter.c)
 *     VfIoDeleteDevice @ 0x1407B4248 (VfIoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmFreeContiguousMemory @ 0x140118130 (MmFreeContiguousMemory.c)
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ViHalPreprocessOptions @ 0x1407AE2E0 (ViHalPreprocessOptions.c)
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
  ULONG_PTR v10; // rbx

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
      byte_140359A7C,
      "Too many outstanding reference counts (%x) for adapter %p",
      17LL,
      v9,
      (__int64)v1,
      a1);
    VfReportIssueWithOptions(0xE6u, 0x11uLL, v10, (ULONG_PTR)v1, a1, byte_140359A7C);
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
