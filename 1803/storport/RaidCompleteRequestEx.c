/*
 * XREFs of RaidCompleteRequestEx @ 0x1C000C410
 * Callers:
 *     RaidHandleCreateCloseIrp @ 0x1C0002C24 (RaidHandleCreateCloseIrp.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C00063D0 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006F88 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPnpIrp @ 0x1C00077A0 (RaUnitPnpIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0007A30 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0008110 (RaUnitDeviceControlIrp.c)
 *     RaUnitScsiIrp @ 0x1C00085C0 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C0008A60 (RaidStartIoPacket.c)
 *     RaUnitStartIo @ 0x1C0009A00 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C000B0C0 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000CED4 (RaUnitAsyncError.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000DA0C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterPowerIrp @ 0x1C000DC58 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C000DD20 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000DE04 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000DF8C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E868 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000FB38 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C000FDA0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitProcessBusyRequest @ 0x1C001019C (RaidUnitProcessBusyRequest.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0010700 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0010880 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0010CC0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0010D70 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0010E10 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaUnitQuiesceDeviceSrb @ 0x1C0010EA0 (RaUnitQuiesceDeviceSrb.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0010FDC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterPnpIrp @ 0x1C00125A4 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001274C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitStreamsIoctl @ 0x1C0015550 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0015698 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidCompleteWmiIrp @ 0x1C0017538 (RaidCompleteWmiIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C0017578 (RaUnitQueryInterfaceIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00177B0 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001784C (RaUnitDeleteDeviceIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0017994 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitClaimDeviceSrb @ 0x1C0017AB4 (RaUnitClaimDeviceSrb.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C002484C (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C00248DC (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C0025224 (RaidAdapterCheckWaitTimeout.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C00263E4 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C00264D8 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0026684 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C00269A0 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C0026B90 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0026E58 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C0027010 (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterRpmbRequest @ 0x1C0027B28 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C0027DFC (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0027E74 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C0028B48 (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0028C7C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002937C (RaidAdapterStorageBreakReservationIoctl.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C002BFE0 (StorASyncScsiPassThroughCompletion.c)
 *     StorExtCompleteServiceIrp @ 0x1C002FCC0 (StorExtCompleteServiceIrp.c)
 *     StorpCompleteServiceIrp @ 0x1C0032274 (StorpCompleteServiceIrp.c)
 *     RaidCancelIrp @ 0x1C00395C4 (RaidCancelIrp.c)
 *     RaUnitAttributeManagement @ 0x1C003A45C (RaUnitAttributeManagement.c)
 *     RaUnitDisableDeviceIrp @ 0x1C003A754 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C003A7B8 (RaUnitFlushQueueSrb.c)
 *     RaUnitGetQOSIoctl @ 0x1C003A92C (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C003AA40 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C003AAB0 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C003AB20 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C003ABBC (RaUnitProtocolCommandIoctl.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C003AC80 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitSetQOSIoctl @ 0x1C003AD84 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C003B288 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStartResetIo @ 0x1C003B464 (RaUnitStartResetIo.c)
 *     RaUnitStoragePowerActive @ 0x1C003B784 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C003B7E4 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C003B844 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C003B98C (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C003BB54 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003C7A0 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003CDF0 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003E128 (RaidUnitSubmitResetRequest.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C005E35C (RaUnitQueryDeviceRelationsIrp.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C005E3F4 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005E6CC (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C005E7D8 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C005EA44 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C005EA94 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C005EF58 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005EFC0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C005FD60 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C006013C (RaUnitStartDeviceIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C00602F8 (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C00603D0 (RaUnitQueryDeviceTextIrp.c)
 *     RaWmiDispatchIrp @ 0x1C0060794 (RaWmiDispatchIrp.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C0060D4C (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitIgnorePnpIrp @ 0x1C0060F00 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C00611B0 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0061288 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitSucceedPnpIrp @ 0x1C006131C (RaUnitSucceedPnpIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00632F8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0063900 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterPassThrough @ 0x1C00642A4 (RaidAdapterPassThrough.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00646C4 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C006477C (RaidAdapterScsiIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C006667C (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C00666AC (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C00666F8 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C0066730 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStopDeviceIrp @ 0x1C006684C (RaUnitStopDeviceIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C0066878 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0066940 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C00669A8 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0066BF4 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C0066F54 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitUnknownSrb @ 0x1C0066FCC (RaUnitUnknownSrb.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001737C (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     McTemplateK0pq @ 0x1C0023FBC (McTemplateK0pq.c)
 *     McTemplateK0pqcccccp @ 0x1C002402C (McTemplateK0pqcccccp.c)
 *     McTemplateK0pqq @ 0x1C0024104 (McTemplateK0pqq.c)
 */

__int64 __fastcall RaidCompleteRequestEx(PIRP Irp, CCHAR a2, unsigned int a3)
{
  bool v3; // zf
  int v7; // r10d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int MajorFunction; // eax
  _DWORD *Information; // rbp
  char v12; // bp
  unsigned __int8 v13; // r13
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  char Flags; // r11
  char LowPart_high; // r12
  char SecurityQos; // r15
  unsigned __int8 v18; // al
  char *SrbScsiData; // rax
  char v20; // r9
  _ACCESS_STATE *AccessState; // rdx
  unsigned __int8 v22; // r8
  unsigned int v23; // ecx
  char v24; // r14
  char v25; // r9
  unsigned __int8 *v26; // rcx
  unsigned __int8 *p_SecurityEvaluated; // rax
  unsigned int v28; // ecx
  __int64 v29; // rax
  bool v30; // cc
  char *v31; // r8
  char v32; // al
  int v33; // ecx
  char v34; // [rsp+60h] [rbp-68h] BYREF
  char v35[3]; // [rsp+61h] [rbp-67h] BYREF
  unsigned int FullCreateOptions; // [rsp+64h] [rbp-64h]
  int v37; // [rsp+68h] [rbp-60h]
  _ACCESS_STATE *v38; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp-50h] BYREF

  v3 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = a3;
  if ( v3 )
    goto LABEL_4;
  v39[0] = 0LL;
  v39[1] = 0LL;
  IoGetActivityIdIrp(Irp, v39);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  switch ( MajorFunction )
  {
    case 15:
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000) != 0 )
      {
        v12 = 0;
        LOBYTE(v7) = 0;
        v13 = 0;
        SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
        Flags = 0;
        LowPart_high = 0;
        SecurityQos = 0;
        v38 = 0LL;
        v34 = 0;
        v18 = BYTE2(SecurityContext->SecurityQos);
        v35[0] = 0;
        v37 = v7;
        if ( v18 == 40 )
        {
          FullCreateOptions = SecurityContext->FullCreateOptions;
          SrbScsiData = (char *)GetSrbScsiData(
                                  (_DWORD)SecurityContext,
                                  0,
                                  0,
                                  (unsigned int)&v34,
                                  (__int64)&v38,
                                  (__int64)v35);
          v20 = v34;
          Flags = 0;
          AccessState = v38;
          v22 = v35[0];
          v23 = FullCreateOptions;
          LOBYTE(v7) = v37;
          if ( SrbScsiData )
            SecurityQos = *SrbScsiData;
        }
        else
        {
          v20 = BYTE4(SecurityContext->SecurityQos);
          SecurityQos = (char)SecurityContext[3].SecurityQos;
          AccessState = SecurityContext[1].AccessState;
          v22 = BYTE3(SecurityContext->AccessState);
          v34 = v20;
          v23 = v18;
        }
        if ( !v23 && ((SecurityQos - 8) & 0x5D) == 0 )
        {
          v24 = BYTE3(SecurityContext->SecurityQos);
          if ( v24 == 1 || !AccessState || !v22 )
          {
LABEL_41:
            if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000) != 0 )
            {
              if ( (_BYTE)v7 )
              {
                v12 = LowPart_high;
                v32 = Flags;
                v33 = v13;
              }
              else
              {
                v32 = 0;
                v33 = 0;
              }
              McTemplateK0pqcccccp(
                v33,
                (_DWORD)AccessState,
                (unsigned int)v39,
                (_DWORD)Irp,
                Irp->IoStatus.Status,
                v24,
                v20,
                v33,
                v32,
                v12,
                (char)Irp);
            }
            break;
          }
          v25 = 0;
          v26 = (unsigned __int8 *)AccessState + v22;
          p_SecurityEvaluated = &AccessState->SecurityEvaluated;
          if ( (unsigned __int8)((AccessState->OperationID.LowPart & 0x7F) - 114) <= 1u )
          {
            if ( p_SecurityEvaluated > v26 )
              goto LABEL_39;
            Flags = BYTE2(AccessState->OperationID.LowPart);
            v13 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
            LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
          }
          else
          {
            if ( p_SecurityEvaluated > v26 )
              goto LABEL_39;
            v28 = HIBYTE(AccessState->OperationID.HighPart) + 8;
            v29 = v22;
            v13 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
            v30 = v28 <= v22;
            v31 = (char *)&AccessState->Flags + 1;
            if ( v30 )
              v29 = v28;
            if ( v31 > (char *)AccessState + v29 )
              Flags = 0;
            else
              Flags = AccessState->Flags;
            if ( (char *)&AccessState->Flags + 2 > (char *)AccessState + (unsigned int)v29 )
              LowPart_high = 0;
            else
              LowPart_high = *v31;
          }
          v25 = 1;
LABEL_39:
          v3 = v25 == 0;
          v20 = v34;
          if ( !v3 )
            LOBYTE(v7) = 1;
          goto LABEL_41;
        }
      }
      break;
    case 14:
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x80000) != 0 )
        McTemplateK0pq(CurrentStackLocation, &EventNonReadWriteRequestComplete, v39, Irp, Irp->IoStatus.Status);
      break;
    case 27:
      if ( CurrentStackLocation->MinorFunction != 7 || CurrentStackLocation->Parameters.Read.Length )
      {
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
          McTemplateK0pq(CurrentStackLocation, &EventPnpRequestComplete, v39, Irp, Irp->IoStatus.Status);
      }
      else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x400000) != 0 )
      {
        Information = (_DWORD *)Irp->IoStatus.Information;
        if ( Information )
          LODWORD(Information) = *Information;
        McTemplateK0pqq(
          (_DWORD)CurrentStackLocation,
          (unsigned int)&EventEnumerationComplete,
          (unsigned int)v39,
          (_DWORD)Irp,
          (char)Information,
          Irp->IoStatus.Status);
      }
      break;
  }
LABEL_4:
  IofCompleteRequest(Irp, a2);
  return a3;
}
