/*
 * XREFs of PerfDiagInitialize @ 0x140824D70
 * Callers:
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwWriteStartScenario @ 0x140586140 (EtwWriteStartScenario.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 */

int PerfDiagInitialize()
{
  int result; // eax
  ULONGLONG RegHandle; // [rsp+30h] [rbp-20h] BYREF
  GUID OutputBuffer; // [rsp+38h] [rbp-18h] BYREF

  qword_1403455E0 = 0LL;
  dword_1403455E8 = 0;
  EtwRegister(
    &MS_Kernel_BootDiagnostics_SystemProxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpBootSystemProxyCallback,
    0LL,
    &PerfDiagGlobals);
  EtwRegister(
    &MS_Kernel_BootDiagnostics_UserProxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpBootUserProxyCallback,
    0LL,
    &qword_1403455C8);
  EtwRegister(
    &MS_Kernel_SecondaryLogonDiagnostics_Proxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpSecondaryLogonProxyCallback,
    0LL,
    &qword_1403455D0);
  EtwRegister(
    &MS_Kernel_ShutdownDiagnostics_Proxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpShutdownProxyCallback,
    0LL,
    &qword_1403455D8);
  result = EtwRegister(&MS_Kernel_BootDiagnostics_Provider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    OutputBuffer.Data1 = 1729382729;
    *(_DWORD *)&OutputBuffer.Data2 = 1213813042;
    *(_DWORD *)OutputBuffer.Data4 = 933705344;
    *(_DWORD *)&OutputBuffer.Data4[4] = -668649292;
    EtwWriteStartScenario((ULONG_PTR *)RegHandle, &KMBootEvt_SystemBoot_Start, &OutputBuffer, 0, 0LL);
    return EtwUnregister(RegHandle);
  }
  return result;
}
