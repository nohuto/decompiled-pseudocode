/*
 * XREFs of KeInitializeClock @ 0x140848FF0
 * Callers:
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     KiSetPendingTick @ 0x14010F828 (KiSetPendingTick.c)
 *     KiSetupTimeIncrement @ 0x140149E5C (KiSetupTimeIncrement.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     strstr @ 0x14015E110 (strstr.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PoTraceDynamicTickDisabled @ 0x1402442E0 (PoTraceDynamicTickDisabled.c)
 *     EmClientQueryRuleState @ 0x140424330 (EmClientQueryRuleState.c)
 */

char __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  BOOLEAN v2; // bl
  char result; // al
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rcx
  _RTL_BALANCED_NODE *Root; // rdx
  const char *v7; // rcx
  _RTL_BALANCED_NODE *v8; // rax
  int v9; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v12[16]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-20h]
  unsigned int v14; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( !(_DWORD)BugCheckParameter2 )
  {
    v7 = *(const char **)(a2 + 216);
    qword_140370D08 = -1LL;
    qword_140370D28 = -1LL;
    if ( v7 && strstr(v7, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    ((void (__fastcall *)(_BYTE *))off_1403535B0[0])(v12);
    if ( (v12[0] & 4) != 0 )
      KiClockTimerPerCpu = 1;
    if ( (v12[0] & 2) != 0 )
      KiClockTimerHighLatency = 1;
    if ( (v12[0] & 1) != 0 )
      KiClockTimerAlwaysOnPresent = 1;
    if ( !(_BYTE)KiDynamicTickDisableReason && (v12[0] & 8) == 0 )
      KiDynamicTickDisableReason = 2;
    return KiSetupTimeIncrement(v13, v14);
  }
  if ( (_DWORD)BugCheckParameter2 != 1 )
  {
    if ( (_DWORD)BugCheckParameter2 != 2 )
      KeBugCheckEx(0x33u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
    if ( (_BYTE)KiDynamicTickDisableReason )
      goto LABEL_28;
    if ( !HvlHypervisorConnected || (result = HvlpFlags, (HvlpFlags & 2) != 0) )
    {
      v9 = 1;
      result = EmClientQueryRuleState(&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE, &v9);
      if ( v9 == 2 )
        KiDynamicTickDisableReason = 3;
      if ( (_BYTE)KiDynamicTickDisableReason )
      {
LABEL_28:
        result = PoTraceDynamicTickDisabled();
        KiForceIdleDisabled = 1;
      }
    }
    return result;
  }
  KeQueryPerformanceCounter(&PerformanceFrequency);
  KiClockStateUpdateTimeout = 5 * PerformanceFrequency.QuadPart;
  *(_BYTE *)(KiProcessorBlock[KiClockTimerOwner] + 33) = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  KiClockState = 0;
  off_1403535C8[0]();
  KiSetPendingTick(0);
  off_1403535C0[0]();
  LOBYTE(v5) = 1;
  ((void (__fastcall *)(__int64))off_1403535B8[0])(v5);
  ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_1403535D0[0])(0LL, KeMaximumIncrement, &v11);
  KiSetPendingTick(1);
  Root = KiClockIntervalRequests.Root;
  KeTimeIncrement = v11;
  KiLastRequestedTimeIncrement = KeMaximumIncrement;
  KeNonHrTimeIncrement = v11;
  dword_140370D7C = KeMaximumIncrement;
  if ( !KiClockIntervalRequests.Root )
    goto LABEL_11;
  while ( 1 )
  {
    if ( KeMaximumIncrement < HIDWORD(Root[1].Left) )
    {
      v8 = Root->Children[0];
      if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_11;
        v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v8);
      }
      if ( !v8 )
        goto LABEL_11;
      goto LABEL_39;
    }
    v8 = Root->Children[1];
    if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
    {
      if ( !v8 )
        break;
      v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v8);
    }
    if ( !v8 )
      break;
LABEL_39:
    Root = v8;
  }
  v2 = 1;
LABEL_11:
  RtlRbInsertNodeEx(&KiClockIntervalRequests, Root, v2, &KiDefaultClockIntervalRequest);
  byte_140370D78 = 1;
  __writecr8(CurrentIrql);
  dword_140370D10 = KeTimeIncrement;
  dword_140370D14 = KeTimeIncrement;
  result = KiLastRequestedTimeIncrement;
  dword_140370D18 = KiLastRequestedTimeIncrement;
  dword_140370D1C = KiLastRequestedTimeIncrement;
  return result;
}
