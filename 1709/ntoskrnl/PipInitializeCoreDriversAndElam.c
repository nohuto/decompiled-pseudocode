/*
 * XREFs of PipInitializeCoreDriversAndElam @ 0x1408453D8
 * Callers:
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140844F18 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PipInitializeCoreDriversByGroup @ 0x140845614 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeDriverDependentDLLs @ 0x1408457CC (PipInitializeDriverDependentDLLs.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x14084E428 (PipInitializeEarlyLaunchDrivers.c)
 *     VslConnectSwInterrupt @ 0x140856048 (VslConnectSwInterrupt.c)
 *     KeInitAmd64SpecificState @ 0x1408561E0 (KeInitAmd64SpecificState.c)
 */

__int64 __fastcall PipInitializeCoreDriversAndElam(__int64 a1)
{
  __int64 result; // rax

  PipInitializeDriverDependentDLLs(0LL, a1);
  PipInitializeCoreDriversByGroup(0LL, a1);
  PspPicoRegistrationDisabled = 1;
  qword_140354280 = (__int64)off_140354F48;
  qword_140354288 = 8LL;
  KeInitAmd64SpecificState();
  PspPicoProviderRanges = 0LL;
  memset(&PsKernelRangeList, 0, 0xE0uLL);
  PspKernelRanges = 0LL;
  qword_140355658 = 0LL;
  VslConnectSwInterrupt(0LL, 0LL);
  PipInitializeEarlyLaunchDrivers(a1);
  PnpBootDriverCallbackRegistrationClosed = 1;
  PnpNotifyEarlyLaunchStatusUpdate(0);
  PipInitializeDriverDependentDLLs(1LL, a1);
  PipInitializeCoreDriversByGroup(1LL, a1);
  result = PipInitializeCoreDriversByGroup(2LL, a1);
  PnpCoreDriverGroupLoadPhase = 3;
  return result;
}
