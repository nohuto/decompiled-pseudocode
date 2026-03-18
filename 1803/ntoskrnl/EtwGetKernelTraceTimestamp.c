/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x1400AAAD0
 * Callers:
 *     KeDisableTimer2 @ 0x140087498 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x1400876FC (KiFinalizeTimer2Disablement.c)
 *     KiIpiProcessRequests @ 0x1400A3A30 (KiIpiProcessRequests.c)
 *     KeFlushIoBuffers @ 0x1400BA320 (KeFlushIoBuffers.c)
 *     IopTimerDispatch @ 0x1400D1F10 (IopTimerDispatch.c)
 *     KiExpireTimer2 @ 0x1400EA230 (KiExpireTimer2.c)
 *     KiProcessExpiredTimerList @ 0x140108660 (KiProcessExpiredTimerList.c)
 *     KiScanInterruptObjectList @ 0x1401AC250 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401AC420 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401AC560 (KiInterruptSubDispatchNoLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402494EC (KiInvokeInterruptServiceRoutine.c)
 *     NtDeleteValueKey @ 0x14049ACA0 (NtDeleteValueKey.c)
 *     CmCreateKey @ 0x14049F9B0 (CmCreateKey.c)
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1404A6510 (CmpSecurityMethod.c)
 *     NtEnumerateKey @ 0x1404AC500 (NtEnumerateKey.c)
 *     CmpCloseKeyObject @ 0x1404E2000 (CmpCloseKeyObject.c)
 *     CmKtmNotification @ 0x14054ED10 (CmKtmNotification.c)
 *     NtQueryMultipleValueKey @ 0x1405615AC (NtQueryMultipleValueKey.c)
 *     NtDeleteKey @ 0x14056D9C4 (NtDeleteKey.c)
 *     NtFlushKey @ 0x14057A130 (NtFlushKey.c)
 *     NtEnumerateValueKey @ 0x140596600 (NtEnumerateValueKey.c)
 *     NtSetInformationKey @ 0x140596B30 (NtSetInformationKey.c)
 *     NtQueryValueKey @ 0x14059DE50 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x14059E7B0 (NtQueryKey.c)
 *     CmOpenKey @ 0x1405AD380 (CmOpenKey.c)
 *     CmpReplicateKeyToVirtual @ 0x1406F5730 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140132A80 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestamp(LARGE_INTEGER *a1, unsigned int a2)
{
  int v2; // ebx
  unsigned __int64 v3; // r11
  LARGE_INTEGER *v4; // rdi
  unsigned int v5; // r9d
  bool i; // zf
  __int64 v7; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = a1;
  if ( qword_1404668A0 )
  {
    v5 = *(_DWORD *)(qword_1404668A0 + 4188);
    for ( i = !_BitScanForward((unsigned int *)&a1, v5); !i; i = !_BitScanForward((unsigned int *)&a1, v5) )
    {
      v5 &= v5 - 1;
      v7 = qword_1404668A0 + 32LL * ((_QWORD)a1 + 132);
      if ( v7 && ((unsigned int)v3 & *(_DWORD *)(v7 + 4 * (v3 >> 29)) & 0x1FFFFFFF) != 0 )
        v2 |= 1 << *(_BYTE *)(qword_1404668A0 + 2LL * (_QWORD)a1 + 4173);
    }
  }
  else
  {
    LOBYTE(v2) = 30;
  }
  if ( (v2 & 2) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = 0LL;
  *v4 = PerformanceCounter;
  if ( (v2 & 4) != 0 )
    result = RtlGetSystemTimePrecise(a1);
  else
    result = 0LL;
  v4[1].QuadPart = result;
  if ( (v2 & 8) != 0 )
  {
    result = __rdtsc();
    v4[2].QuadPart = result;
  }
  else
  {
    v4[2].QuadPart = 0LL;
  }
  if ( (v2 & 0x10) != 0 )
  {
    v10 = 0LL;
    ((void (__fastcall *)(__int64 *))off_140398AC0)(&v10);
    result = v10;
    v4[3].QuadPart = v10;
  }
  else
  {
    v4[3].QuadPart = 0LL;
  }
  return result;
}
