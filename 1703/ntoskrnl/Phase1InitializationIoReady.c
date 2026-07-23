/*
 * XREFs of Phase1InitializationIoReady @ 0x140809CD4
 * Callers:
 *     Phase1Initialization @ 0x1405A8000 (Phase1Initialization.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14006EED0 (ExNotifyWithProcessing.c)
 *     InbvSetProgressBarSubset @ 0x140155608 (InbvSetProgressBarSubset.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017E600 (ZwQuerySystemInformation.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     VfUtilDbgPrint @ 0x14024FF14 (VfUtilDbgPrint.c)
 *     IoCreateDriver @ 0x14059F550 (IoCreateDriver.c)
 *     ExQueryBootEntropyInformation @ 0x1405A76B4 (ExQueryBootEntropyInformation.c)
 *     CmpRegisterTraceLoggingProvider @ 0x1405A76F8 (CmpRegisterTraceLoggingProvider.c)
 *     VfNotifyVerifierOfEvent @ 0x140764CA0 (VfNotifyVerifierOfEvent.c)
 *     VfUtilClearOneBootSettings @ 0x1407650A8 (VfUtilClearOneBootSettings.c)
 *     MmInitSystem @ 0x140803254 (MmInitSystem.c)
 *     EmInitSystem @ 0x140804CF0 (EmInitSystem.c)
 *     ExInitLicenseData @ 0x140808950 (ExInitLicenseData.c)
 *     MmInitSystemDll @ 0x140808CEC (MmInitSystemDll.c)
 *     SeRmInitPhase1 @ 0x140808D3C (SeRmInitPhase1.c)
 *     PsInitSystem @ 0x140809E88 (PsInitSystem.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 *     StartFirstUserProcess @ 0x14081013C (StartFirstUserProcess.c)
 *     KeInitSystem @ 0x140817034 (KeInitSystem.c)
 *     KeInitializeClock @ 0x140819AAC (KeInitializeClock.c)
 *     SaveNodeDistanceInformation @ 0x140820034 (SaveNodeDistanceInformation.c)
 *     PspInitPhase3 @ 0x1408269D4 (PspInitPhase3.c)
 *     InitSafeBoot @ 0x140831A70 (InitSafeBoot.c)
 */

__int64 __fastcall Phase1InitializationIoReady(ULONG_PTR a1, char a2)
{
  int Driver; // eax
  int inited; // eax
  __int64 v6; // rcx
  __int64 result; // rax
  _OWORD SystemInformation[2]; // [rsp+30h] [rbp-48h] BYREF

  if ( ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    if ( (SystemInformation[0] & 4) != 0 )
    {
      RtlpOptimalFlushMethod = 2;
    }
    else
    {
      if ( (SystemInformation[0] & 2) == 0 )
      {
LABEL_4:
        RtlpClFlushSize = DWORD1(SystemInformation[0]);
        goto LABEL_5;
      }
      RtlpOptimalFlushMethod = 3;
    }
    RtlpIsDrainRequired = 1;
    goto LABEL_4;
  }
LABEL_5:
  LODWORD(SystemInformation[0]) = 2097182;
  *((_QWORD *)&SystemInformation[0] + 1) = L"\\Driver\\WscVReg";
  CmpRegisterTraceLoggingProvider();
  Driver = IoCreateDriver(SystemInformation, (__int64 (__fastcall *)(PVOID, _QWORD))VRegSetup);
  if ( Driver < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, Driver, 0LL, 0LL);
  inited = EmInitSystem(1, a1);
  if ( inited < 0 )
    KeBugCheckEx(0x32u, inited, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2();
  InbvSetProgressBarSubset();
  if ( InitSafeBootMode )
  {
    LOBYTE(v6) = a2;
    InitSafeBoot(v6);
  }
  MmInitSystem(2, a1);
  SaveNodeDistanceInformation();
  if ( !(unsigned __int8)PoInitSystem(3LL, a1) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL);
  ExInitLicenseData();
  if ( !(unsigned __int8)PsInitSystem(2LL, a1) )
    KeBugCheck(0x6Bu);
  MmInitSystemDll();
  if ( !SeRmInitPhase1() )
    KeBugCheck(0x6Cu);
  if ( !(unsigned __int8)PspInitPhase3() )
    KeBugCheck(0x6Bu);
  StartFirstUserProcess();
  LODWORD(InitializationPhase) = InitializationPhase + 1;
  ExNotifyWithProcessing(ExCbPhase1InitComplete, 0LL, 0LL, 0LL);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(5);
  if ( VfClearanceFlag && (VfOptionFlags & 0x10) != 0 )
  {
    VfUtilDbgPrint("Driver Verifier: VERIFIER_OPTION_ONEBOOT was set and crash/dirty-shutdown observed.\n");
    VfUtilDbgPrint("Driver Verifier: Clearing Verifier options from Registry for preventing recursive crash.\n");
    VfUtilClearOneBootSettings();
  }
  WerLiveKernelInitSystem();
  ExQueryBootEntropyInformation(0LL);
  result = KeInitSystem(2LL);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  return result;
}
