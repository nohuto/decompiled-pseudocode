/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9cda___lambda_fb1d754a87bb4379b691d90d9f0cbdb4___ @ 0x1C02B22F8
 * Callers:
 *     ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KIW4_EX_POOL_PRIORITY@@@Z @ 0x1C02B2560 (-AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KIW4_EX_POOL_.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C0116250 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02B241C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02B24BC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

char *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9cda___lambda_fb1d754a87bb4379b691d90d9f0cbdb4___(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // r9
  SIZE_T v5; // r10
  __int64 v6; // r11
  char v8; // si
  char *PoolWithTagPriority; // rbx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(a1, a3) )
    return (char *)ExAllocatePoolWithTagPriority(
                     (POOL_TYPE)**(_DWORD **)v6,
                     v5,
                     **(_DWORD **)(v6 + 8),
                     (EX_POOL_PRIORITY)**(_DWORD **)(v4 + 16));
  v8 = 0;
  if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
  {
    v8 = 1;
    v5 += 16LL;
  }
  PoolWithTagPriority = (char *)ExAllocatePoolWithTagPriority(
                                  (POOL_TYPE)**(_DWORD **)v6,
                                  v5,
                                  **(_DWORD **)(v6 + 8),
                                  (EX_POOL_PRIORITY)**(_DWORD **)(v4 + 16));
  if ( PoolWithTagPriority )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v8 && (unsigned __int64)((unsigned __int16)PoolWithTagPriority & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              a1,
                              PoolWithTagPriority,
                              BackTrace) )
        return PoolWithTagPriority + 16;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 a1,
                                 PoolWithTagPriority,
                                 BackTrace) )
    {
      return PoolWithTagPriority;
    }
    ExFreePoolWithTag(PoolWithTagPriority, 0);
  }
  return 0LL;
}
