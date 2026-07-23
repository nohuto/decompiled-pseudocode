/*
 * XREFs of Phase1InitializationIoReady @ 0x1408A5E94
 * Callers:
 *     Phase1Initialization @ 0x140627590 (Phase1Initialization.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140072E18 (ExNotifyWithProcessing.c)
 *     InbvSetProgressBarSubset @ 0x140171A4C (InbvSetProgressBarSubset.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     VfClearVerifierSettings @ 0x1402A95D4 (VfClearVerifierSettings.c)
 *     ExQueryBootEntropyInformation @ 0x140655288 (ExQueryBootEntropyInformation.c)
 *     VfNotifyVerifierOfEvent @ 0x140813B50 (VfNotifyVerifierOfEvent.c)
 *     MmInitSystem @ 0x14089C070 (MmInitSystem.c)
 *     CmInitSystem2 @ 0x14089E508 (CmInitSystem2.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     EmInitSystem @ 0x1408A92A4 (EmInitSystem.c)
 *     ExInitLicenseData @ 0x1408AFFA0 (ExInitLicenseData.c)
 *     SeRmInitPhase1 @ 0x1408B209C (SeRmInitPhase1.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 *     PspInitPhase2 @ 0x1408C12D4 (PspInitPhase2.c)
 *     StartFirstUserProcess @ 0x1408C254C (StartFirstUserProcess.c)
 *     KeInitializeClock @ 0x1408C3688 (KeInitializeClock.c)
 *     SaveNodeDistanceInformation @ 0x1408C9294 (SaveNodeDistanceInformation.c)
 *     MmInitSystemDll @ 0x1408C9E98 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x1408CA2EC (PspInitPhase3.c)
 *     InitSafeBoot @ 0x1408DD13C (InitSafeBoot.c)
 */

__int64 __fastcall Phase1InitializationIoReady(ULONG_PTR a1, char a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int inited; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  _BYTE SystemInformation[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-34h]
  char v11; // [rsp+38h] [rbp-30h]

  if ( ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    if ( (v11 & 1) != 0 )
      RtlpIsFlushRequired = 0;
    if ( (SystemInformation[0] & 4) != 0 )
    {
      RtlpOptimalFlushMethod = 2;
    }
    else
    {
      if ( (SystemInformation[0] & 2) == 0 )
      {
LABEL_6:
        RtlpClFlushSize = v10;
        goto LABEL_7;
      }
      RtlpOptimalFlushMethod = 3;
    }
    RtlpIsDrainRequired = 1;
    goto LABEL_6;
  }
LABEL_7:
  LOBYTE(v4) = CmStateSeparationEnabled != 0;
  v5 = ExpInitializeStateSeparationPhase1(v4);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  CmInitSystem2();
  inited = EmInitSystem(1LL, a1);
  if ( inited < 0 )
    KeBugCheckEx(0x32u, inited, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2();
  InbvSetProgressBarSubset();
  if ( InitSafeBootMode )
  {
    LOBYTE(v7) = a2;
    InitSafeBoot(v7);
  }
  MmInitSystem(2LL, a1);
  SaveNodeDistanceInformation();
  if ( !(unsigned __int8)PoInitSystem(3LL, a1) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL);
  ExInitLicenseData();
  if ( !(unsigned __int8)PspInitPhase2() )
    KeBugCheck(0x6Bu);
  MmInitSystemDll();
  if ( !(unsigned __int8)SeRmInitPhase1() )
    KeBugCheck(0x6Cu);
  if ( !(unsigned __int8)PspInitPhase3() )
    KeBugCheck(0x6Bu);
  StartFirstUserProcess();
  LODWORD(InitializationPhase) = InitializationPhase + 1;
  ExNotifyWithProcessing(ExCbPhase1InitComplete, 0LL, 0LL, 0LL);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(5);
  if ( VfClearanceFlag )
    VfClearVerifierSettings();
  WerLiveKernelInitSystem();
  ExQueryBootEntropyInformation(0LL);
  result = KeInitSystem(2LL);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  return result;
}
