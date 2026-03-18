/*
 * XREFs of PerfDiagInitialize @ 0x140854D40
 * Callers:
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 *     EtwUnregister @ 0x1405726E0 (EtwUnregister.c)
 *     EtwWriteStartScenario @ 0x1405EDAB0 (EtwWriteStartScenario.c)
 */

int PerfDiagInitialize()
{
  int result; // eax
  ULONGLONG RegHandle; // [rsp+30h] [rbp-20h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-18h] BYREF

  qword_14035F040 = 0LL;
  dword_14035F048 = 0;
  EtwRegister(
    &MS_Kernel_BootDiagnostics_SystemProxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpBootSystemProxyCallback,
    0LL,
    &PerfDiagGlobals);
  EtwRegister(
    &MS_Kernel_BootDiagnostics_UserProxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpBootUserProxyCallback,
    0LL,
    &qword_14035F028);
  EtwRegister(
    &MS_Kernel_SecondaryLogonDiagnostics_Proxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpSecondaryLogonProxyCallback,
    0LL,
    &qword_14035F030);
  EtwRegister(
    &MS_Kernel_ShutdownDiagnostics_Proxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpShutdownProxyCallback,
    0LL,
    &qword_14035F038);
  result = EtwRegister(&MS_Kernel_BootDiagnostics_Provider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    ActivityId.Data1 = 1729382729;
    *(_DWORD *)&ActivityId.Data2 = 1213813042;
    *(_DWORD *)ActivityId.Data4 = 933705344;
    *(_DWORD *)&ActivityId.Data4[4] = -668649292;
    EtwWriteStartScenario((ULONG_PTR *)RegHandle, &KMBootEvt_SystemBoot_Start, &ActivityId, 0, 0LL);
    return EtwUnregister(RegHandle);
  }
  return result;
}
