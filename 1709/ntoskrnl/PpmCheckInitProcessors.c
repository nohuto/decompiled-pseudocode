/*
 * XREFs of PpmCheckInitProcessors @ 0x1405B5958
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1405B5D08 (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x1406F4CF0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x14005CAE0 (KeSubtractAffinityEx.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x14008D4CC (PpmConvertTime.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     KeOrAffinityEx @ 0x1400FC680 (KeOrAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     PpmCheckApplyParkConstraints @ 0x140137E00 (PpmCheckApplyParkConstraints.c)
 *     PpmParkRegisterParking @ 0x140137E1C (PpmParkRegisterParking.c)
 *     KeQueryActiveProcessorAffinity @ 0x140138EE0 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x1401E9980 (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmReinitializeHeteroEngine @ 0x1405B4FD8 (PpmReinitializeHeteroEngine.c)
 *     PpmAllocatePerfCheck @ 0x1405B5AE4 (PpmAllocatePerfCheck.c)
 *     PpmUpdateProcessorPolicy @ 0x1405B5DF8 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckReInit @ 0x1405B5FE0 (PpmCheckReInit.c)
 */

int __fastcall PpmCheckInitProcessors(int a1)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Prcb; // rax
  __int64 v3; // rbx
  int v5; // [rsp+28h] [rbp-E0h] BYREF
  ULONG v6; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v7; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int16 *v8[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+48h] [rbp-C0h]
  unsigned __int16 *v10[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v11; // [rsp+60h] [rbp-A8h]
  _QWORD v12[22]; // [rsp+68h] [rbp-A0h] BYREF
  char v13[176]; // [rsp+118h] [rbp+10h] BYREF

  if ( a1 )
  {
    LODWORD(v12[0]) = 1310721;
    memset((char *)v12 + 4, 0, 0xA4uLL);
  }
  else
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    KeQueryActiveProcessorAffinity((__int64)v13);
    if ( !(unsigned __int8)KeSubtractAffinityEx(v13, (char *)PpmCheckRegistered, v12) )
    {
      LODWORD(CurrentPrcb) = PpmReleaseLock(&PpmPerfPolicyLock);
      return (int)CurrentPrcb;
    }
  }
  KeOrAffinityEx(PpmCheckRegistered, v12, PpmCheckRegistered);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v12) )
  {
    v8[1] = (unsigned __int16 *)v12[1];
    v8[0] = (unsigned __int16 *)v12;
    LOWORD(v9) = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v8) )
    {
      Prcb = KeGetPrcb(v6);
      PpmAllocatePerfCheck(Prcb);
    }
    PopExecuteOnTargetProcessors((__int64)v12, (__int64)PpmCheckReset, 0LL, 0LL);
  }
  PpmParkRegisterParking();
  if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
  {
    LOWORD(v5) = 0;
    PpmAllowedActions |= 0x800u;
    v5 |= 0x800u;
    PpmUpdateProcessorPolicy(&v5, 0LL);
  }
  PpmCheckReInit();
  PpmCheckApplyParkConstraints();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->PowerState.Hypervisor == ProcHypervisorPresent )
  {
    LODWORD(CurrentPrcb) = HvlIsRootPowerSchedulerQosPresent();
    if ( (_BYTE)CurrentPrcb )
    {
      if ( !PpmPerfVmQosSupported )
      {
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        v10[1] = (unsigned __int16 *)qword_140358788[0];
        LOWORD(v11) = 0;
        v10[0] = PpmCheckRegistered;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v10) )
        {
          v3 = KeGetPrcb(v7);
          *(_QWORD *)(v3 + 24296) = PpmConvertTime(
                                      (unsigned int)PpmPerfQosTransitionHysteresis,
                                      0xF4240uLL,
                                      1000000LL * *(unsigned int *)(v3 + 68));
        }
        PpmPerfVmQosSupported = 1;
        LODWORD(CurrentPrcb) = PpmReinitializeHeteroEngine(1);
      }
    }
  }
  return (int)CurrentPrcb;
}
