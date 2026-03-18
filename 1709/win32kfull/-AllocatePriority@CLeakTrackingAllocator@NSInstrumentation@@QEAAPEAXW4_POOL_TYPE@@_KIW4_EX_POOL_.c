/*
 * XREFs of ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KIW4_EX_POOL_PRIORITY@@@Z @ 0x1C02B2560
 * Callers:
 *     Win32AllocPoolWithPriorityImpl @ 0x1C01F4F00 (Win32AllocPoolWithPriorityImpl.c)
 *     Win32UAFMAllocPoolWithPriorityImpl @ 0x1C01F4FD0 (Win32UAFMAllocPoolWithPriorityImpl.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9cda___lambda_fb1d754a87bb4379b691d90d9f0cbdb4___ @ 0x1C02B22F8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9c.c)
 */

char *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(
        NSInstrumentation::CLeakTrackingAllocator *this,
        enum _POOL_TYPE a2,
        __int64 a3,
        int a4)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9cda___lambda_fb1d754a87bb4379b691d90d9f0cbdb4___(
           *(NSInstrumentation::CLeakTrackingAllocator **)&WPP_MAIN_CB.DeviceQueue.32,
           a3,
           a4);
}
