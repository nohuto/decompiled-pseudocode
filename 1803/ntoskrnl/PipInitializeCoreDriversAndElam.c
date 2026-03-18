/*
 * XREFs of PipInitializeCoreDriversAndElam @ 0x1408B556C
 * Callers:
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1408B3654 (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x1408B5658 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeDriverDependentDLLs @ 0x1408B5810 (PipInitializeDriverDependentDLLs.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x1408B6ED4 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     VslConnectSwInterrupt @ 0x1408B7998 (VslConnectSwInterrupt.c)
 *     KeInitAmd64SpecificState @ 0x1408B7B30 (KeInitAmd64SpecificState.c)
 */

__int64 __fastcall PipInitializeCoreDriversAndElam(UNICODE_STRING *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  PipInitializeDriverDependentDLLs(0LL, a1);
  PipInitializeCoreDriversByGroup(0LL, a1);
  PspPicoRegistrationDisabled = 1;
  qword_140396E60 = (__int64)off_140397D98;
  qword_140396E68 = 8LL;
  KeInitAmd64SpecificState();
  PspPicoProviderRanges = 0LL;
  memset(&PsKernelRangeList, 0, 0xE0uLL);
  PspKernelRanges = 0LL;
  qword_1403985B8 = 0LL;
  VslConnectSwInterrupt(0LL, 0LL);
  PipInitializeEarlyLaunchDrivers(a1, v2);
  PnpBootDriverCallbackRegistrationClosed = 1;
  PnpNotifyEarlyLaunchStatusUpdate(0LL);
  PipInitializeDriverDependentDLLs(1LL, a1);
  PipInitializeCoreDriversByGroup(1LL, a1);
  result = PipInitializeCoreDriversByGroup(2LL, a1);
  PnpCoreDriverGroupLoadPhase = 3;
  return result;
}
