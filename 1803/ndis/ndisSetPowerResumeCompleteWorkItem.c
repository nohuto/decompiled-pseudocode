/*
 * XREFs of ndisSetPowerResumeCompleteWorkItem @ 0x1C0071E10
 * Callers:
 *     <none>
 * Callees:
 *     ndisSignalD0RequestComplete @ 0x1C000F564 (ndisSignalD0RequestComplete.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C000F7B4 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     McTemplateK0jqxqq @ 0x1C003D190 (McTemplateK0jqxqq.c)
 *     WPP_SF_dq @ 0x1C0041AB4 (WPP_SF_dq.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C0071784 (ndisSelectiveSuspendResumeOperations.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007A148 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ndisMInvokeOidRequest @ 0x1C00AEFF0 (ndisMInvokeOidRequest.c)
 *     ndisRemoveWoLDirectedMAC @ 0x1C00E2A94 (ndisRemoveWoLDirectedMAC.c)
 */

int __fastcall ndisSetPowerResumeCompleteWorkItem(__int64 a1)
{
  __int64 v1; // rdi
  _IRP *v2; // r13
  int v3; // esi
  __int64 v4; // r15
  __int64 v5; // rcx
  int v6; // r14d
  __int64 v7; // rbx
  KIRQL v8; // al
  __int64 v10; // rcx
  POWER_STATE State; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v12[16]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_IRP **)(a1 + 40);
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 4480);
  memset(v12, 0, 0xF8uLL);
  NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v1, 1);
  if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    McTemplateK0jqxqq(
      v5,
      &DevicePowerStateChange,
      (const GUID *)(v1 + 4032),
      v1 + 4032,
      *(_DWORD *)(v1 + 4080),
      *(_QWORD *)(v1 + 4048),
      1,
      1);
  State.SystemState = PowerSystemWorking;
  memset(v12, 0, 0xF8uLL);
  DWORD2(v12[5]) |= 0x408u;
  *((_QWORD *)&v12[6] + 1) = &ndisIntReqGeneric;
  LODWORD(v12[0]) = 15466902;
  *((_QWORD *)&v12[2] + 1) = &State;
  LODWORD(v12[2]) = -50265855;
  *(_QWORD *)((char *)v12 + 4) = 1LL;
  LODWORD(v12[3]) = 4;
  KeInitializeEvent((PRKEVENT)&v12[7], NotificationEvent, 0);
  v6 = ndisMInvokeOidRequest(v1, v12);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&v12[7], Executive, 0, 0, 0LL);
    v6 = v12[5];
  }
  if ( v6 )
  {
    v7 = *(_QWORD *)(v1 + 4480);
    v3 = -1073741823;
    NdisTraceLoggingUnexpectedSelectiveSuspendError((struct _NDIS_MINIPORT_BLOCK *)v1, 0x7BFu, v6);
    *(_WORD *)(v7 + 626) = *(_WORD *)(v7 + 624);
    *(_WORD *)(v7 + 624) = 1983;
    if ( (unsigned __int8)byte_1C0099616 >= 2u )
      WPP_SF_dq(0x1Eu, &WPP_250ba6082b573e143e643b46f787ca55_Traceguids, v6, v1);
  }
  else
  {
    v10 = *(_QWORD *)(v1 + 4488);
    if ( v10
      && (*(_BYTE *)(v1 + 124) & 0x60) == 0x60
      && (unsigned int)(*(_DWORD *)(v1 + 1272) - 2) <= 2
      && (*(_DWORD *)(v1 + 1004) & 6) != 0
      && *(_BYTE *)(v10 + 1088) )
    {
      ndisRemoveWoLDirectedMAC(v1);
    }
    ndisSelectiveSuspendResumeOperations(v1, 1);
    if ( (unsigned __int8)byte_1C0099610 >= 4u )
      WPP_SF_qZ(0x1Fu, &WPP_250ba6082b573e143e643b46f787ca55_Traceguids, v1, *(const wchar_t **)(v1 + 3880));
  }
  v2->IoStatus.Status = v3;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
  *(_DWORD *)(v4 + 504) &= ~0x20u;
  KeReleaseSpinLock((PKSPIN_LOCK)v4, v8);
  PoSetPowerState(*(PDEVICE_OBJECT *)(v1 + 3848), DevicePowerState, State);
  IofCompleteRequest(v2, 0);
  return ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, v3);
}
