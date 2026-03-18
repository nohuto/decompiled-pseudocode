/*
 * XREFs of EtwTraceProcess @ 0x1404F846C
 * Callers:
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     PspExitProcess @ 0x14050FEC8 (PspExitProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14006CE40 (IoSetThreadHardErrorMode.c)
 *     TraceLoggingProviderEnabled @ 0x14006F0C4 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpEnumerateAddressSpace @ 0x1404B4AE4 (EtwpEnumerateAddressSpace.c)
 *     EtwpInitStateChangeInfo @ 0x1404F7B30 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessEvent @ 0x1404F8600 (EtwpWriteProcessEvent.c)
 *     EtwpWriteAppStateChange @ 0x14050E9E4 (EtwpWriteAppStateChange.c)
 *     EtwpWriteProcessStarted @ 0x140510620 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405108B4 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x14056D76C (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpLogProcessPerfCtrs @ 0x1407A8664 (EtwpLogProcessPerfCtrs.c)
 */

void __fastcall EtwTraceProcess(PEPROCESS Process, __int16 a2)
{
  BOOLEAN v4; // bl
  PVOID v5; // rbx
  _BYTE v6[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  PVOID v9; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v10[56]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[416]; // [rsp+C0h] [rbp-40h] BYREF

  if ( a2 == 770 )
  {
    if ( (PerfGlobalGroupMask & 0xC004) != 0 )
    {
      v4 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace((__int64)Process, 0LL, (int *)&PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v4);
    }
    if ( (PerfGlobalGroupMask & 8) != 0 )
      EtwpLogProcessPerfCtrs(Process);
  }
  EtwpWriteProcessEvent(Process, (__int64)&v7, (__int64)&v9);
  v5 = v9;
  if ( a2 == 769 && TraceLoggingProviderEnabled(&stru_1403977E0, 0, 0x600000000003uLL) )
  {
    EtwpWriteProcessStarted((_DWORD)Process, (unsigned int)v6, (unsigned int)v11, (unsigned int)&v7, (__int64)v5);
    EtwpInitStateChangeInfo((__int64)Process, (__int64)v10);
    v10[0] = 0;
    EtwpWriteAppStateChange(v10);
    if ( !(unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(Process) )
      LOWORD(v7) = 0;
    EtwpWriteAppStateChangeSummary((_DWORD)Process, (unsigned int)v10, 0, (unsigned int)v11, (__int64)v6, (__int64)&v7);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
