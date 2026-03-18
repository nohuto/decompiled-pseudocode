/*
 * XREFs of EtwTraceProcess @ 0x1404DBA5C
 * Callers:
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     PspExitProcess @ 0x1404FCEF4 (PspExitProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400AE650 (IoSetThreadHardErrorMode.c)
 *     TraceLoggingProviderEnabled @ 0x1400BA300 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     EtwpEnumerateAddressSpace @ 0x1404524D0 (EtwpEnumerateAddressSpace.c)
 *     EtwpWriteProcessEvent @ 0x1404DBBF8 (EtwpWriteProcessEvent.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1404DD394 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChange @ 0x1404DD438 (EtwpWriteAppStateChange.c)
 *     EtwpInitStateChangeInfo @ 0x1404DD67C (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x1404FDFA0 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1404FE504 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpLogProcessPerfCtrs @ 0x140746A5C (EtwpLogProcessPerfCtrs.c)
 */

void __fastcall EtwTraceProcess(ULONG_PTR BugCheckParameter1, __int16 a2)
{
  UCHAR v4; // dl
  PVOID v5; // rbx
  BOOLEAN v6; // bl
  _BYTE v7[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  PVOID v10; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v11[56]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v12[416]; // [rsp+C0h] [rbp-40h] BYREF

  if ( a2 == 770 )
  {
    if ( (PerfGlobalGroupMask & 0xC004) != 0 )
    {
      v6 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace(BugCheckParameter1, 0LL, &PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v6);
    }
    if ( (PerfGlobalGroupMask & 8) != 0 )
      EtwpLogProcessPerfCtrs(BugCheckParameter1);
  }
  EtwpWriteProcessEvent(BugCheckParameter1, (__int64)&v8, (__int64)&v10);
  v5 = v10;
  if ( a2 == 769 && TraceLoggingProviderEnabled(&stru_140354B50, v4, 0x600000000003uLL) )
  {
    EtwpWriteProcessStarted(BugCheckParameter1, (unsigned int)v7, (unsigned int)v12, (unsigned int)&v8, (__int64)v5);
    EtwpInitStateChangeInfo(BugCheckParameter1, v11);
    v11[0] = 0;
    EtwpWriteAppStateChange(v11);
    if ( !(unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
      LOWORD(v8) = 0;
    EtwpWriteAppStateChangeSummary(
      BugCheckParameter1,
      (unsigned int)v11,
      0,
      (unsigned int)v12,
      (__int64)v7,
      (__int64)&v8);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
