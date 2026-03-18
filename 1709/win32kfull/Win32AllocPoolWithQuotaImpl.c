/*
 * XREFs of Win32AllocPoolWithQuotaImpl @ 0x1C00D4A30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02B241C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02B24BC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

char *__fastcall Win32AllocPoolWithQuotaImpl(int a1, SIZE_T a2, ULONG a3)
{
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v3; // rbx
  __int64 v5; // rax
  char v6; // si
  char *PoolWithQuotaTag; // rdi
  PVOID BackTrace[21]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = WPP_MAIN_CB.DeviceQueue.1;
  if ( (a3 & *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 40LL)) != a3 )
    return (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(a1 | 8), a2, a3);
  v5 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 44LL) )
    return (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(a1 | 8), a2, a3);
  while ( *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 4 * v5) != a3 )
  {
    if ( ++v5 >= (unsigned __int64)*(unsigned int *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 44LL) )
      return (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(a1 | 8), a2, a3);
  }
  v6 = 0;
  if ( a2 < 0x1000 || (a2 & 0xFFF) != 0 )
  {
    v6 = 1;
    a2 += 16LL;
  }
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(a1 | 8), a2, a3);
  if ( PoolWithQuotaTag )
  {
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v6 && (unsigned __int64)((unsigned __int16)PoolWithQuotaTag & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>)(
                              v3,
                              PoolWithQuotaTag,
                              BackTrace) )
        return PoolWithQuotaTag + 16;
    }
    else if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>)(
                                 v3,
                                 PoolWithQuotaTag,
                                 BackTrace) )
    {
      return PoolWithQuotaTag;
    }
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  }
  return 0LL;
}
