/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x140003C40
 * Callers:
 *     PfHardFaultRecord @ 0x140003BD0 (PfHardFaultRecord.c)
 *     KiProcessExpiredTimerList @ 0x1400939C0 (KiProcessExpiredTimerList.c)
 *     KiExpireTimer2 @ 0x1400E2E30 (KiExpireTimer2.c)
 *     KeDisableTimer2 @ 0x1400E36A0 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x1400E38AC (KiFinalizeTimer2Disablement.c)
 *     KiIpiProcessRequests @ 0x140102310 (KiIpiProcessRequests.c)
 *     KeFlushIoBuffers @ 0x1401180C0 (KeFlushIoBuffers.c)
 *     IopTimerDispatch @ 0x14012FE30 (IopTimerDispatch.c)
 *     KiScanInterruptObjectList @ 0x140182600 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401827D0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140182910 (KiInterruptSubDispatchNoLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14020B154 (KiInvokeInterruptServiceRoutine.c)
 *     CmpCloseKeyObject @ 0x14046F8B0 (CmpCloseKeyObject.c)
 *     NtDeleteKey @ 0x14047207C (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140474B2C (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x14047E270 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140481BE0 (NtEnumerateKey.c)
 *     CmpSecurityMethod @ 0x1404832A0 (CmpSecurityMethod.c)
 *     NtQueryKey @ 0x1404A8630 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1404A8B80 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x1404AC170 (CmOpenKey.c)
 *     CmCreateKey @ 0x1404E2CA0 (CmCreateKey.c)
 *     CmKtmNotification @ 0x1405697C0 (CmKtmNotification.c)
 *     NtSetInformationKey @ 0x14056AC30 (NtSetInformationKey.c)
 *     NtQueryMultipleValueKey @ 0x140580F4C (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x14059294C (NtFlushKey.c)
 *     CmpReplicateKeyToVirtual @ 0x1406924F8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140155590 (RtlGetSystemTimePrecise.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestamp(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 *v3; // rdi
  unsigned __int64 v4; // r10
  char v5; // bl
  unsigned int v6; // r8d
  bool i; // zf
  __int64 v8; // rdx

  result = EtwpHostSiloState;
  v3 = a1;
  v4 = a2;
  v5 = 0;
  v6 = *(_DWORD *)(EtwpHostSiloState + 4172);
  for ( i = !_BitScanForward((unsigned int *)&a1, v6); !i; i = !_BitScanForward((unsigned int *)&a1, v6) )
  {
    v6 &= v6 - 1;
    result = 32LL * (unsigned int)a1;
    v8 = result + EtwpHostSiloState + 4208;
    if ( v8 )
    {
      result = v4 >> 29;
      if ( ((unsigned int)v4 & *(_DWORD *)(v8 + 4 * (v4 >> 29)) & 0x1FFFFFFF) != 0 )
      {
        result = (unsigned int)(1 << *(_BYTE *)(EtwpHostSiloState + 2LL * (unsigned int)a1 + 4157));
        v5 |= result;
      }
    }
  }
  if ( (v5 & 2) != 0 )
  {
    result = KeQueryPerformanceCounter(0LL).QuadPart;
    *v3 = result;
  }
  else
  {
    *v3 = 0LL;
  }
  if ( (v5 & 4) != 0 )
  {
    result = RtlGetSystemTimePrecise().QuadPart;
    v3[1] = result;
  }
  else
  {
    v3[1] = 0LL;
  }
  if ( (v5 & 8) != 0 )
  {
    result = __rdtsc();
    v3[2] = result;
  }
  else
  {
    v3[2] = 0LL;
  }
  return result;
}
