/*
 * XREFs of EtwTraceProcess @ 0x1404ED910
 * Callers:
 *     PspExitProcess @ 0x140498A28 (PspExitProcess.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x140082CB4 (TraceLoggingProviderEnabled.c)
 *     IoSetThreadHardErrorMode @ 0x140085310 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpInitStateChangeInfo @ 0x14043D804 (EtwpInitStateChangeInfo.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140443E20 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteProcessStarted @ 0x140451038 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChange @ 0x14045549C (EtwpWriteAppStateChange.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1404E915C (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessEvent @ 0x1404ED768 (EtwpWriteProcessEvent.c)
 *     EtwpEnumerateAddressSpace @ 0x1404FA9C0 (EtwpEnumerateAddressSpace.c)
 *     EtwpLogProcessPerfCtrs @ 0x14070B928 (EtwpLogProcessPerfCtrs.c)
 */

void __fastcall EtwTraceProcess(PEPROCESS Process, __int16 a2)
{
  char v4; // al
  BOOLEAN v5; // bl
  UCHAR v6; // dl
  PVOID v7; // rbx
  __int64 v8; // [rsp+30h] [rbp-258h] BYREF
  __int64 v9; // [rsp+38h] [rbp-250h] BYREF
  PVOID P; // [rsp+40h] [rbp-248h]
  PVOID v11; // [rsp+48h] [rbp-240h] BYREF
  char v12[112]; // [rsp+50h] [rbp-238h] BYREF
  ULONG_PTR v13[52]; // [rsp+C0h] [rbp-1C8h] BYREF

  if ( a2 == 770 )
  {
    v4 = PerfGlobalGroupMask;
    if ( (PerfGlobalGroupMask & 0xC004) != 0 )
    {
      v5 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace(Process, 0LL, &PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v5);
      v4 = PerfGlobalGroupMask;
    }
    if ( (v4 & 8) != 0 )
      EtwpLogProcessPerfCtrs(Process);
  }
  EtwpWriteProcessEvent(Process, a2, &v8, v13, (__int64)&v9, &v11);
  v7 = v11;
  if ( a2 == 769 && TraceLoggingProviderEnabled(&stru_14033C520, v6, 0x600000000003uLL) )
  {
    EtwpWriteProcessStarted((__int64)Process, (int *)&v8, (__int64)v13, (unsigned __int16 *)&v9);
    EtwpInitStateChangeInfo((__int64)Process, (__int64)v12);
    *(_WORD *)v12 = 0;
    EtwpWriteAppStateChange();
    if ( !EtwpAppStateChangeSummaryShouldLogCommandLine((__int64)Process) )
      LOWORD(v9) = 0;
    EtwpWriteAppStateChangeSummary((__int64)Process, v12, 0LL, (__int64)v13, &v8, (unsigned __int16 *)&v9);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
