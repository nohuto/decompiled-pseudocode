/*
 * XREFs of Phase1InitializationIoReady @ 0x14082FAF0
 * Callers:
 *     Phase1Initialization @ 0x1405B7F90 (Phase1Initialization.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x1400AEAC8 (ExNotifyWithProcessing.c)
 *     InbvSetProgressBarSubset @ 0x140139C30 (InbvSetProgressBarSubset.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017DF80 (ZwQuerySystemInformation.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     VfClearVerifierSettings @ 0x140276548 (VfClearVerifierSettings.c)
 *     ExQueryBootEntropyInformation @ 0x1405F2088 (ExQueryBootEntropyInformation.c)
 *     VfNotifyVerifierOfEvent @ 0x1407A69D0 (VfNotifyVerifierOfEvent.c)
 *     MmInitSystem @ 0x140828DC4 (MmInitSystem.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     EmInitSystem @ 0x14083306C (EmInitSystem.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 *     ExInitLicenseData @ 0x14083D688 (ExInitLicenseData.c)
 *     KeInitializeClock @ 0x140848FF0 (KeInitializeClock.c)
 *     SeRmInitPhase1 @ 0x140849C70 (SeRmInitPhase1.c)
 *     PspInitPhase2 @ 0x1408500D4 (PspInitPhase2.c)
 *     SaveNodeDistanceInformation @ 0x140850634 (SaveNodeDistanceInformation.c)
 *     StartFirstUserProcess @ 0x14085168C (StartFirstUserProcess.c)
 *     CmInitSystem2 @ 0x140857C20 (CmInitSystem2.c)
 *     MmInitSystemDll @ 0x140857D2C (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x14085818C (PspInitPhase3.c)
 *     InitSafeBoot @ 0x140868964 (InitSafeBoot.c)
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
        RtlpClFlushSize = v10;
        goto LABEL_5;
      }
      RtlpOptimalFlushMethod = 3;
    }
    RtlpIsDrainRequired = 1;
    goto LABEL_4;
  }
LABEL_5:
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
  MmInitSystem(2, a1);
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
