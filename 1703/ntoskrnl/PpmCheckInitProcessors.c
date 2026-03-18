/*
 * XREFs of PpmCheckInitProcessors @ 0x1405BFD98
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x1406C51D0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x140044C00 (KeSubtractAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     KeOrAffinityEx @ 0x140080BD0 (KeOrAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1400888B0 (PopExecuteOnTargetProcessors.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     PpmCheckApplyParkConstraints @ 0x14015FC60 (PpmCheckApplyParkConstraints.c)
 *     PpmParkRegisterParking @ 0x14015FC70 (PpmParkRegisterParking.c)
 *     KeQueryActiveProcessorAffinity @ 0x140160880 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PpmUpdateProcessorPolicy @ 0x14058358C (PpmUpdateProcessorPolicy.c)
 *     PpmAllocatePerfCheck @ 0x1405BFEF4 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x1405C02B8 (PpmCheckReInit.c)
 */

LONG __fastcall PpmCheckInitProcessors(int a1)
{
  __int64 Prcb; // rax
  int v3; // [rsp+20h] [rbp-E0h] BYREF
  ULONG v4; // [rsp+24h] [rbp-DCh] BYREF
  unsigned __int16 *v5[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v6; // [rsp+38h] [rbp-C8h]
  _QWORD v7[22]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v8[88]; // [rsp+F0h] [rbp-10h] BYREF

  if ( a1 )
  {
    LODWORD(v7[0]) = 1310721;
    memset((char *)v7 + 4, 0, 0xA4uLL);
  }
  else
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    KeQueryActiveProcessorAffinity((__int64)v8);
    if ( !(unsigned __int8)KeSubtractAffinityEx(v8, PpmCheckRegistered, v7) )
      return PpmReleaseLock(&PpmPerfPolicyLock);
  }
  KeOrAffinityEx(PpmCheckRegistered, (unsigned __int16 *)v7, PpmCheckRegistered);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v7) )
  {
    v5[1] = (unsigned __int16 *)v7[1];
    v5[0] = (unsigned __int16 *)v7;
    v6 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v4, v5) )
    {
      Prcb = KeGetPrcb(v4);
      PpmAllocatePerfCheck(Prcb);
    }
    PopExecuteOnTargetProcessors((__int64)v7, (__int64)PpmCheckReset, 0LL, 0LL);
  }
  PpmParkRegisterParking();
  if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
  {
    LOWORD(v3) = 0;
    PpmAllowedActions |= 0x1000u;
    v3 |= 0x1000u;
    PpmUpdateProcessorPolicy(&v3, 0LL);
  }
  PpmCheckReInit();
  return PpmCheckApplyParkConstraints();
}
