/*
 * XREFs of ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreEx@2@@Z @ 0x1C02B89F4
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02B861C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02B86BC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 * Callees:
 *     ?Initialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NI@Z @ 0x1C02B9028 (-Initialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@.c)
 *     ?Uninitialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXXZ @ 0x1C02B94FC (-Uninitialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::InitializeBackTraceStore(
        NSInstrumentation::CLeakTrackingAllocator *this,
        struct NSInstrumentation::CBackTraceStoreEx **a2)
{
  PVOID PoolWithTag; // rax
  void *v4; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x38uLL, 0x33497355u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( (unsigned __int8)NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Initialize(PoolWithTag) )
    {
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)a2, (signed __int64)v4, 0LL) )
        return;
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Uninitialize(v4);
    }
    ExFreePoolWithTag(v4, 0);
  }
}
