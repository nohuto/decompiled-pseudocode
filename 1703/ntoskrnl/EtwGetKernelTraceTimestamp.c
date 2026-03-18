/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x140010CC0
 * Callers:
 *     KiIpiProcessRequests @ 0x140006360 (KiIpiProcessRequests.c)
 *     PfHardFaultRecord @ 0x140010C3C (PfHardFaultRecord.c)
 *     KeFlushIoBuffers @ 0x140021430 (KeFlushIoBuffers.c)
 *     IopTimerDispatch @ 0x14003A410 (IopTimerDispatch.c)
 *     KiExpireTimer2 @ 0x140048CA0 (KiExpireTimer2.c)
 *     KiProcessExpiredTimerList @ 0x1400E40B0 (KiProcessExpiredTimerList.c)
 *     KeDisableTimer2 @ 0x14012ADA8 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x14012B0CC (KiFinalizeTimer2Disablement.c)
 *     KiScanInterruptObjectList @ 0x140182B80 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140182D50 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140182E90 (KiInterruptSubDispatchNoLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140204F5C (KiInvokeInterruptServiceRoutine.c)
 *     CmKtmNotification @ 0x14042C540 (CmKtmNotification.c)
 *     CmCreateKey @ 0x14042DEF0 (CmCreateKey.c)
 *     NtQueryMultipleValueKey @ 0x140448D38 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x140455BC8 (NtFlushKey.c)
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
 *     CmpCloseKeyObject @ 0x1404CDE90 (CmpCloseKeyObject.c)
 *     NtDeleteValueKey @ 0x1404CE698 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 *     CmpSecurityMethod @ 0x1404FCC50 (CmpSecurityMethod.c)
 *     NtEnumerateKey @ 0x1404FD330 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1404FF290 (NtEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x1405074B0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140507B00 (NtQueryKey.c)
 *     NtSetInformationKey @ 0x140521290 (NtSetInformationKey.c)
 *     CmOpenKey @ 0x14052CA30 (CmOpenKey.c)
 *     CmpReplicateKeyToVirtual @ 0x1406679E8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140110620 (RtlGetSystemTimePrecise.c)
 */

void __fastcall EtwGetKernelTraceTimestamp(LARGE_INTEGER *a1, char *a2)
{
  __int64 v2; // r8
  LARGE_INTEGER *v3; // rdi
  bool v4; // zf
  unsigned __int64 v5; // r9
  int i; // ebx

  v2 = (unsigned int)EtwpActiveSystemLoggers;
  v3 = a1;
  v4 = !_BitScanForward((unsigned int *)&a1, EtwpActiveSystemLoggers);
  v5 = (unsigned int)a2;
  for ( i = 0; !v4; v4 = !_BitScanForward((unsigned int *)&a1, v2) )
  {
    v2 = ((_DWORD)v2 - 1) & (unsigned int)v2;
    a2 = (char *)&EtwpGroupMasks + 32 * (unsigned int)a1;
    if ( a2 )
    {
      a2 = (char *)((unsigned int)v5 & *(_DWORD *)&a2[4 * (v5 >> 29)]);
      if ( ((unsigned int)a2 & 0x1FFFFFFF) != 0 )
        i |= 1 << byte_140344E01[2 * (_QWORD)a1];
    }
  }
  if ( (i & 2) != 0 )
    *v3 = KeQueryPerformanceCounter(0LL);
  else
    v3->QuadPart = 0LL;
  if ( (i & 4) != 0 )
    v3[1].QuadPart = RtlGetSystemTimePrecise(a1, a2, v2, v5);
  else
    v3[1].QuadPart = 0LL;
  if ( (i & 8) != 0 )
    v3[2].QuadPart = __rdtsc();
  else
    v3[2].QuadPart = 0LL;
}
