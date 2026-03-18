/*
 * XREFs of ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02B241C
 * Callers:
 *     Win32AllocPoolImpl @ 0x1C00C3A80 (Win32AllocPoolImpl.c)
 *     Win32AllocateFromPagedLookasideListImpl @ 0x1C00D4980 (Win32AllocateFromPagedLookasideListImpl.c)
 *     Win32AllocPoolWithQuotaImpl @ 0x1C00D4A30 (Win32AllocPoolWithQuotaImpl.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C01162A8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_ec6537825fc6790e67aff99146f8d1bf___lambda_f46a24200fa13ebf3509176f7b31ac85___ @ 0x1C01A0598 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_ec6537825fc6790e67aff99146f8d1.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C01A0704 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9cda___lambda_fb1d754a87bb4379b691d90d9f0cbdb4___ @ 0x1C02B22F8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9c.c)
 * Callees:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C003FD24 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreEx@2@@Z @ 0x1C02B27F0 (-InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreE.c)
 *     ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTable@2@_N@Z @ 0x1C02B2854 (-InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTa.c)
 *     ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x1C02B2CF4 (-AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02B31CC (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

char __fastcall NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
        __int64 a1,
        unsigned __int64 a2,
        struct NSInstrumentation::CBackTrace *a3)
{
  NSInstrumentation::CPrioritizedWriterLock **v3; // rdi
  NSInstrumentation::CBackTraceStoreEx *v5; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rcx
  void *v9; // rsi
  bool v10; // r8
  NSInstrumentation::CPointerHashTable *v11; // rcx

  v3 = (NSInstrumentation::CPrioritizedWriterLock **)(a1 + 64);
  v5 = *(NSInstrumentation::CBackTraceStoreEx **)(a1 + 64);
  if ( v5 || (NSInstrumentation::CLeakTrackingAllocator::InitializeBackTraceStore(0LL, v3), (v5 = *v3) != 0LL) )
  {
    v9 = NSInstrumentation::CBackTraceStoreEx::AcquireBackTrace(v5, a3, (unsigned int *)a3);
    if ( v9 )
    {
      if ( !*(_QWORD *)(a1 + 48) )
        NSInstrumentation::CLeakTrackingAllocator::InitializePointerHashTable(
          v8,
          (struct NSInstrumentation::CPointerHashTable **)(a1 + 48),
          v10);
      v11 = *(NSInstrumentation::CPointerHashTable **)(a1 + 48);
      if ( v11 && NSInstrumentation::CPointerHashTable::Insert(v11, a2, v9) )
        return 1;
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *v3,
        (struct NSInstrumentation::CBackTraceStorageUnit *)v9);
    }
  }
  return 0;
}
