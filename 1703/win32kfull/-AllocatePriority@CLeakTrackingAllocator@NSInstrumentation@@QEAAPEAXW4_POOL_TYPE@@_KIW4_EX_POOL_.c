/*
 * XREFs of ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KIW4_EX_POOL_PRIORITY@@@Z @ 0x1C02B8760
 * Callers:
 *     Win32AllocPoolWithPriorityImpl @ 0x1C01E8F00 (Win32AllocPoolWithPriorityImpl.c)
 *     Win32UAFMAllocPoolWithPriorityImpl @ 0x1C01E8FC0 (Win32UAFMAllocPoolWithPriorityImpl.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9cda___lambda_fb1d754a87bb4379b691d90d9f0cbdb4___ @ 0x1C02B84F8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9c.c)
 */

char *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(
        NSInstrumentation::CLeakTrackingAllocator *this,
        enum _POOL_TYPE a2,
        __int64 a3,
        int a4)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9cda___lambda_fb1d754a87bb4379b691d90d9f0cbdb4___(
           (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
           a3,
           a4);
}
