/*
 * XREFs of ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C0195488
 * Callers:
 *     Win32UAFMAllocPoolWithQuotaImpl @ 0x1C01E9040 (Win32UAFMAllocPoolWithQuotaImpl.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_ec6537825fc6790e67aff99146f8d1bf___lambda_f46a24200fa13ebf3509176f7b31ac85___ @ 0x1C0195370 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_ec6537825fc6790e67aff99146f8d1.c)
 */

char *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
        NSInstrumentation::CLeakTrackingAllocator *this,
        enum _POOL_TYPE a2,
        __int64 a3,
        int a4)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_ec6537825fc6790e67aff99146f8d1bf___lambda_f46a24200fa13ebf3509176f7b31ac85___(
           (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
           a3,
           a4);
}
