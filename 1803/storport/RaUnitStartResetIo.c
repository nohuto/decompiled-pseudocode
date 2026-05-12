/*
 * XREFs of RaUnitStartResetIo @ 0x1C003B464
 * Callers:
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C0006988 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003E128 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     RaidPauseUnitQueue @ 0x1C00039F8 (RaidPauseUnitQueue.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007448 (RaidAdapterExecuteXrb.c)
 *     RaidUnitReleaseIrp @ 0x1C0007EEC (RaidUnitReleaseIrp.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0008084 (RaUnitAcquireRemoveLock.c)
 *     RaUnitCheckRemoveState @ 0x1C00080C0 (RaUnitCheckRemoveState.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0008488 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitClaimIrp @ 0x1C0009E80 (RaidUnitClaimIrp.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaidPauseAdapterQueue @ 0x1C000F520 (RaidPauseAdapterQueue.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002BB14 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqD @ 0x1C002C2D0 (WPP_SF_qqD.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0039944 (RaidNtStatusToSrbStatus.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C003C150 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitEndDeviceBusy @ 0x1C003CA6C (RaidUnitEndDeviceBusy.c)
 */

int __fastcall RaUnitStartResetIo(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // r12d
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  _IO_SECURITY_CONTEXT *SecurityContext; // r13
  int v9; // esi
  __int64 v10; // r8
  const GUID *v11; // r8
  int result; // eax
  int v13; // r15d
  _IO_SECURITY_CONTEXT *v14; // rcx
  unsigned int v15; // eax
  unsigned __int64 FullCreateOptions; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  const struct _TlgProvider_t *v19; // rcx
  const GUID *v20; // r9
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rax
  unsigned __int8 v24; // cl
  unsigned int v25; // eax
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-81h]
  char v27; // [rsp+30h] [rbp-79h] BYREF
  char v28; // [rsp+31h] [rbp-78h] BYREF
  char v29; // [rsp+32h] [rbp-77h] BYREF
  int v30; // [rsp+34h] [rbp-75h] BYREF
  __int64 v31; // [rsp+38h] [rbp-71h]
  EVENT_DATA_DESCRIPTOR v32; // [rsp+40h] [rbp-69h] BYREF
  __int64 v33; // [rsp+60h] [rbp-49h]
  int v34; // [rsp+68h] [rbp-41h]
  int v35; // [rsp+6Ch] [rbp-3Dh]
  __int64 v36; // [rsp+70h] [rbp-39h]
  int v37; // [rsp+78h] [rbp-31h]
  int v38; // [rsp+7Ch] [rbp-2Dh]
  int *v39; // [rsp+80h] [rbp-29h]
  int v40; // [rsp+88h] [rbp-21h]
  int v41; // [rsp+8Ch] [rbp-1Dh]
  char *v42; // [rsp+90h] [rbp-19h]
  int v43; // [rsp+98h] [rbp-11h]
  int v44; // [rsp+9Ch] [rbp-Dh]
  char *v45; // [rsp+A0h] [rbp-9h]
  int v46; // [rsp+A8h] [rbp-1h]
  int v47; // [rsp+ACh] [rbp+3h]
  char *v48; // [rsp+B0h] [rbp+7h]
  int v49; // [rsp+B8h] [rbp+Fh]
  int v50; // [rsp+BCh] [rbp+13h]

  v3 = *(_QWORD *)(a1 + 64);
  v30 = 0;
  v6 = 0;
  SecurityQos = 0LL;
  v31 = *(_QWORD *)(v3 + 24);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v9 = RaUnitCheckRemoveState(v3, (__int64)a2);
  if ( v9 < 0 || (LOBYTE(v10) = 1, v9 = RaUnitAcquireRemoveLock(v3, (__int64)a2, v10), v9 < 0) )
  {
LABEL_42:
    a2->IoStatus.Information = 0LL;
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus(v9);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      LODWORD(pData) = a2->IoStatus.Status;
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Au,
        (__int64)&WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
        *(_QWORD *)(v3 + 8),
        a2,
        pData);
    }
    RaidUnitEndDeviceBusy(v3, a2);
    return RaidCompleteRequestEx(a2, 0, v9);
  }
  v9 = RaidUnitClaimIrp(v3, (__int64)a2, 0LL, a3);
  if ( v9 >= 0 )
  {
    v13 = 1;
    v14 = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( BYTE2(v14->SecurityQos) == 40 )
      SecurityQos = v14[4].SecurityQos;
    else
      SecurityQos = v14[2].SecurityQos;
    LOBYTE(v15) = BYTE2(SecurityContext->SecurityQos);
    if ( (_BYTE)v15 == 40 )
      FullCreateOptions = SecurityContext->FullCreateOptions;
    else
      FullCreateOptions = (unsigned __int8)v15;
    if ( (_DWORD)FullCreateOptions != 16 )
    {
      v17 = *(_QWORD *)&SecurityQos[14].Length;
      LOBYTE(FullCreateOptions) = *(_BYTE *)(v17 + 2);
      if ( (_BYTE)FullCreateOptions == 40 )
        v18 = *(_DWORD *)(v17 + 20);
      else
        v18 = (unsigned __int8)FullCreateOptions;
      _InterlockedAdd((volatile signed __int32 *)(v3 + 1036), 1u);
      if ( v18 >= 0x12 )
      {
        if ( v18 <= 0x13 )
        {
          RaidPauseAdapterQueue(*(_QWORD *)(v3 + 24));
        }
        else if ( v18 == 32 )
        {
          RaidPauseUnitQueue(v3);
        }
      }
      LOBYTE(v15) = BYTE2(SecurityContext->SecurityQos);
      v6 = 1;
    }
    if ( (_BYTE)v15 == 40 )
      v15 = SecurityContext->FullCreateOptions;
    else
      v15 = (unsigned __int8)v15;
    if ( v15 == 16 && (unsigned int)dword_1C0056060 > 5 )
    {
      v21 = v31;
      if ( TlgKeywordOn((TraceLoggingHProvider)FullCreateOptions, 0x400000000000uLL) )
      {
        v22 = *(_DWORD *)(v31 + 56);
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v44 = 0;
        v47 = 0;
        v50 = 0;
        v30 = v22;
        v27 = *(_BYTE *)(v3 + 88);
        v28 = *(_BYTE *)(v3 + 89);
        v29 = *(_BYTE *)(v3 + 90);
        v33 = v31 + 5192;
        v36 = v3 + 1720;
        v39 = &v30;
        v42 = &v27;
        v45 = &v28;
        v48 = &v29;
        v34 = 16;
        v37 = 16;
        v40 = 4;
        v43 = (int)v20;
        v46 = (int)v20;
        v49 = (int)v20;
        TlgWrite(v19, &unk_1C004C188, v11, v20, 8u, &v32);
      }
    }
    else
    {
      v21 = v31;
    }
    *(_QWORD *)&SecurityQos[54].ContextTrackingMode = RaidUnitCompleteResetRequest;
    result = RaidAdapterExecuteXrb(v21, SecurityQos, (__int64)v11);
    v9 = result;
  }
  else
  {
    result = RaUnitReleaseRemoveLock(v3);
    v13 = v30;
  }
  if ( v9 < 0 )
  {
    if ( v6 )
    {
      v23 = *(_QWORD *)&SecurityQos[14].Length;
      v24 = *(_BYTE *)(v23 + 2);
      v25 = v24 == 40 ? *(_DWORD *)(v23 + 20) : v24;
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 1036));
      if ( v25 >= 0x12 )
      {
        if ( v25 <= 0x13 )
        {
          RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v3 + 24));
        }
        else if ( v25 == 32 )
        {
          RaidResumeAndRestartUnitQueue(v3);
        }
      }
    }
    if ( v13 )
      RaidUnitReleaseIrp((__int64)a2);
    goto LABEL_42;
  }
  return result;
}
