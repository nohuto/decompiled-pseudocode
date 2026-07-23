/*
 * XREFs of KeInitializeClock @ 0x1408C3688
 * Callers:
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetPendingTick @ 0x140005DDC (KiSetPendingTick.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     KiSetupTimeIncrement @ 0x140183AA4 (KiSetupTimeIncrement.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     strstr @ 0x140187E10 (strstr.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PoTraceDynamicTickDisabled @ 0x14027AA60 (PoTraceDynamicTickDisabled.c)
 *     EmClientQueryRuleState @ 0x14046FAB0 (EmClientQueryRuleState.c)
 */

char __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  BOOLEAN v2; // bl
  char result; // al
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rcx
  unsigned __int64 Root; // rdx
  unsigned __int64 v7; // rax
  const char *v8; // rcx
  signed __int32 v9[8]; // [rsp+0h] [rbp-78h] BYREF
  int v10; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-40h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-20h]
  unsigned int v15; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( (_DWORD)BugCheckParameter2 )
  {
    if ( (_DWORD)BugCheckParameter2 == 1 )
    {
      KeQueryPerformanceCounter(&PerformanceFrequency);
      KiClockStateUpdateTimeout = 5 * PerformanceFrequency.QuadPart;
      *(_BYTE *)(KiProcessorBlock[KiClockTimerOwner] + 33) = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xDuLL);
      KiClockState = 0;
      off_140398968[0]();
      KiSetPendingTick(0);
      off_140398960[0]();
      LOBYTE(v5) = 1;
      ((void (__fastcall *)(__int64))off_140398958[0])(v5);
      ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_140398970[0])(0LL, KeMaximumIncrement, &v12);
      KiSetPendingTick(1);
      Root = (unsigned __int64)KiClockIntervalRequests.Root;
      KeTimeIncrement = v12;
      KiLastRequestedTimeIncrement = KeMaximumIncrement;
      KeNonHrTimeIncrement = v12;
      dword_1403B3E5C = KeMaximumIncrement;
      if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
      {
        if ( KiClockIntervalRequests.Root )
          Root = (unsigned __int64)&KiClockIntervalRequests ^ (unsigned __int64)KiClockIntervalRequests.Root;
        else
          Root = 0LL;
      }
      if ( Root )
      {
        while ( 1 )
        {
          if ( KeMaximumIncrement < *(_DWORD *)(Root + 28) )
          {
            v7 = *(_QWORD *)Root;
            if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
            {
              if ( !v7 )
                break;
              v7 ^= Root;
            }
            if ( !v7 )
              break;
          }
          else
          {
            v7 = *(_QWORD *)(Root + 8);
            if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
            {
              if ( !v7 )
                goto LABEL_22;
              v7 ^= Root;
            }
            if ( !v7 )
            {
LABEL_22:
              v2 = 1;
              break;
            }
          }
          Root = v7;
        }
      }
      RtlRbInsertNodeEx(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)Root, v2, &KiDefaultClockIntervalRequest);
      byte_1403B3E58 = 1;
      __writecr8(CurrentIrql);
      dword_1403B3DF0 = KeTimeIncrement;
      dword_1403B3DF4 = KeTimeIncrement;
      result = KiLastRequestedTimeIncrement;
      dword_1403B3DF8 = KiLastRequestedTimeIncrement;
      dword_1403B3DFC = KiLastRequestedTimeIncrement;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter2 != 2 )
        KeBugCheckEx(0x33u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
      if ( (_BYTE)KiDynamicTickDisableReason )
        goto LABEL_10;
      if ( !HvlHypervisorConnected || (result = HvlpFlags, (HvlpFlags & 2) != 0) )
      {
        v10 = 1;
        result = EmClientQueryRuleState(&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE, &v10);
        if ( v10 == 2 )
          KiDynamicTickDisableReason = 3;
        if ( (_BYTE)KiDynamicTickDisableReason )
        {
LABEL_10:
          result = PoTraceDynamicTickDisabled();
          KiForceIdleDisabled = 1;
        }
      }
      _InterlockedOr(v9, 0);
      KiDynamicTickInitialized = 1;
    }
  }
  else
  {
    v8 = *(const char **)(a2 + 216);
    qword_1403B3DE8 = -1LL;
    qword_1403B3E08 = -1LL;
    if ( v8 && strstr(v8, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    ((void (__fastcall *)(_BYTE *))off_140398950[0])(v13);
    if ( (v13[0] & 4) != 0 )
      KiClockTimerPerCpu = 1;
    if ( (v13[0] & 2) != 0 )
      KiClockTimerHighLatency = 1;
    if ( (v13[0] & 1) != 0 )
      KiClockTimerAlwaysOnPresent = 1;
    if ( !(_BYTE)KiDynamicTickDisableReason && (v13[0] & 8) == 0 )
      KiDynamicTickDisableReason = 2;
    return KiSetupTimeIncrement(v14, v15);
  }
  return result;
}
