/*
 * XREFs of PpmCheckInitProcessors @ 0x14063F434
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x14063F630 (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x14075D060 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1400361C0 (KeSubtractAffinityEx.c)
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x14003884C (PpmConvertTime.c)
 *     PopExecuteOnTargetProcessors @ 0x140038E58 (PopExecuteOnTargetProcessors.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     KeOrAffinityEx @ 0x1400D3780 (KeOrAffinityEx.c)
 *     PpmCheckApplyParkConstraints @ 0x14017F420 (PpmCheckApplyParkConstraints.c)
 *     PpmParkRegisterParking @ 0x14017F43C (PpmParkRegisterParking.c)
 *     KeQueryActiveProcessorAffinity @ 0x14017FF30 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x140226B44 (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmUpdateProcessorPolicy @ 0x140612240 (PpmUpdateProcessorPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x14063EA98 (PpmReinitializeHeteroEngine.c)
 *     PpmAllocatePerfCheck @ 0x14063F5C0 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x14063F71C (PpmCheckReInit.c)
 */

void __fastcall PpmCheckInitProcessors(int a1)
{
  __int64 Prcb; // rax
  __int64 v2; // rbx
  int v3; // [rsp+28h] [rbp-E0h] BYREF
  ULONG v4; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v5; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int16 *v6[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+48h] [rbp-C0h]
  unsigned __int16 *v8[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v9; // [rsp+60h] [rbp-A8h]
  _QWORD v10[22]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v11[88]; // [rsp+118h] [rbp+10h] BYREF

  if ( a1 )
  {
    LODWORD(v10[0]) = 1310721;
    memset((char *)v10 + 4, 0, 0xA4uLL);
  }
  else
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    KeQueryActiveProcessorAffinity((__int64)v11);
    if ( !(unsigned __int8)KeSubtractAffinityEx(v11, PpmCheckRegistered, v10) )
    {
      PpmReleaseLock(&PpmPerfPolicyLock);
      return;
    }
  }
  KeOrAffinityEx(PpmCheckRegistered, (unsigned __int16 *)v10, PpmCheckRegistered);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v10) )
  {
    v6[1] = (unsigned __int16 *)v10[1];
    v6[0] = (unsigned __int16 *)v10;
    LOWORD(v7) = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v4, v6) )
    {
      Prcb = KeGetPrcb(v4);
      PpmAllocatePerfCheck(Prcb);
    }
    PopExecuteOnTargetProcessors((__int64)v10, (__int64)PpmCheckReset, 0LL, 0LL);
  }
  PpmParkRegisterParking();
  if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
  {
    LOWORD(v3) = 0;
    PpmAllowedActions |= 0x800u;
    v3 |= 0x800u;
    PpmUpdateProcessorPolicy(&v3, 0LL);
  }
  PpmCheckReInit();
  PpmCheckApplyParkConstraints();
  if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPresent
    && (unsigned __int8)HvlIsRootPowerSchedulerQosPresent()
    && !PpmPerfVmQosSupported )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v8[1] = (unsigned __int16 *)qword_14039BD78[0];
    LOWORD(v9) = 0;
    v8[0] = PpmCheckRegistered;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v5, v8) )
    {
      v2 = KeGetPrcb(v5);
      *(_QWORD *)(v2 + 24296) = PpmConvertTime(
                                  (unsigned int)PpmPerfQosTransitionHysteresis,
                                  0xF4240uLL,
                                  1000000LL * *(unsigned int *)(v2 + 68));
    }
    PpmPerfQosManageIdleProcessors = 0;
    PpmPerfVmQosSupported = 1;
    PpmReinitializeHeteroEngine(1);
  }
}
