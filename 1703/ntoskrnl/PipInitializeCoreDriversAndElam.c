/*
 * XREFs of PipInitializeCoreDriversAndElam @ 0x1407F8640
 * Callers:
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     VslConnectSwInterrupt @ 0x1407F6C58 (VslConnectSwInterrupt.c)
 *     KeInitAmd64SpecificState @ 0x1407F6DF0 (KeInitAmd64SpecificState.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1407F6E38 (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407F887C (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeDriverDependentDLLs @ 0x1407F8C00 (PipInitializeDriverDependentDLLs.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x1407FA354 (PnpNotifyEarlyLaunchStatusUpdate.c)
 */

__int64 __fastcall PipInitializeCoreDriversAndElam(UNICODE_STRING *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  PipInitializeDriverDependentDLLs(0LL, a1);
  PipInitializeCoreDriversByGroup(0LL, a1);
  PspPicoRegistrationDisabled = 1;
  qword_14033C1A0 = (__int64)off_14033C718;
  qword_14033C1A8 = 8LL;
  KeInitAmd64SpecificState();
  PspPicoProviderRanges = 0LL;
  memset(&PsKernelRangeList, 0, 0xE0uLL);
  PspKernelRanges = 0LL;
  qword_14033CE00 = 0LL;
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
