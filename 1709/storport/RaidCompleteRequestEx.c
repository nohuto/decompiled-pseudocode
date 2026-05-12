/*
 * XREFs of RaidCompleteRequestEx @ 0x1C000B4A0
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0005308 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitPnpIrp @ 0x1C0005620 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0005984 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0005D18 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiIrp @ 0x1C0007320 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C0007770 (RaidStartIoPacket.c)
 *     RaUnitStartIo @ 0x1C0008160 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000B8F8 (RaUnitAsyncError.c)
 *     RaidHandleCreateCloseIrp @ 0x1C000E224 (RaidHandleCreateCloseIrp.c)
 *     RaUnitPowerIrp @ 0x1C000E690 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000E774 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000E82C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000EB58 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000EE34 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000FA60 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C000FB10 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C000FBB0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0010460 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterPowerIrp @ 0x1C0010B68 (RaidAdapterPowerIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0010F4C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C0011EA4 (RaidAdapterQueryInterfaceIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C0011FC8 (RaUnitQueryInterfaceIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0012070 (RaidAdapterPnpIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C00122E8 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00123E4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017E0C (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001A84C (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidCompleteWmiIrp @ 0x1C001B120 (RaidCompleteWmiIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001B730 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitClaimDeviceSrb @ 0x1C001C410 (RaUnitClaimDeviceSrb.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C498 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C002C09C (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C002C12C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002C9C8 (RaidAdapterCheckWaitTimeout.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002D3C4 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002D4B8 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002D664 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C002D954 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C002DA90 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C002E458 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C002E734 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002E7AC (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002F4D0 (RaidAdapterStorageBreakReservationIoctl.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0030950 (StorASyncScsiPassThroughCompletion.c)
 *     StorExtCompleteServiceIrp @ 0x1C00337A0 (StorExtCompleteServiceIrp.c)
 *     StorpCompleteServiceIrp @ 0x1C0034FC0 (StorpCompleteServiceIrp.c)
 *     RaidCancelIrp @ 0x1C003AF04 (RaidCancelIrp.c)
 *     RaUnitAttributeManagement @ 0x1C003BBBC (RaUnitAttributeManagement.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003BEB4 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C003BFE8 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C003C04C (RaUnitFlushQueueSrb.c)
 *     RaUnitGetQOSIoctl @ 0x1C003C1C0 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C003C2DC (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C003C34C (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C003C3BC (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C003C458 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C003C51C (RaUnitReleaseDeviceSrb.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C003C584 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitSetQOSIoctl @ 0x1C003C758 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C003CC68 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStartResetIo @ 0x1C003CE38 (RaUnitStartResetIo.c)
 *     RaUnitStoragePowerActive @ 0x1C003D158 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C003D1B8 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C003D218 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C003D360 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C003D528 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C003D6B8 (RaUnitStreamsIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003E190 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003E810 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C003EEF0 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003FBC4 (RaidUnitSubmitResetRequest.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C005F0E0 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C005F1E8 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005F458 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C005F588 (RaUnitQueryDeviceRelationsIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C006006C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x1C00607E8 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C006110C (RaUnitStartDeviceIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C0061564 (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0061648 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C0061844 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0061894 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C0063694 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0063844 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiDispatchIrp @ 0x1C0063BE4 (RaWmiDispatchIrp.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C006453C (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C00645A4 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0064680 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitSucceedPnpIrp @ 0x1C0064764 (RaUnitSucceedPnpIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C006667C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterPassThrough @ 0x1C0067364 (RaidAdapterPassThrough.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0067760 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C0067818 (RaidAdapterScsiIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C00683EC (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C006841C (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C0068468 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C00684A0 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStopDeviceIrp @ 0x1C00685BC (RaUnitStopDeviceIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00685E8 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C00686B0 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C0068718 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0068954 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C0068CB4 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0068D2C (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitUnknownSrb @ 0x1C0068E2C (RaUnitUnknownSrb.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001D904 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     McTemplateK0pq @ 0x1C002B808 (McTemplateK0pq.c)
 *     McTemplateK0pqcccccp @ 0x1C002B878 (McTemplateK0pqcccccp.c)
 *     McTemplateK0pqq @ 0x1C002B950 (McTemplateK0pqq.c)
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
  unsigned int v28; // eax
  unsigned __int64 v29; // r8
  char v30; // al
  int v31; // ecx
  char v32; // [rsp+60h] [rbp-68h] BYREF
  char v33[3]; // [rsp+61h] [rbp-67h] BYREF
  unsigned int FullCreateOptions; // [rsp+64h] [rbp-64h]
  int v35; // [rsp+68h] [rbp-60h]
  _ACCESS_STATE *v36; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v37[2]; // [rsp+78h] [rbp-50h] BYREF

  v3 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = a3;
  if ( v3 )
    goto LABEL_4;
  v37[0] = 0LL;
  v37[1] = 0LL;
  IoGetActivityIdIrp(Irp, v37);
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
        v36 = 0LL;
        v32 = 0;
        v18 = BYTE2(SecurityContext->SecurityQos);
        v33[0] = 0;
        v35 = v7;
        if ( v18 == 40 )
        {
          FullCreateOptions = SecurityContext->FullCreateOptions;
          SrbScsiData = (char *)GetSrbScsiData(
                                  (_DWORD)SecurityContext,
                                  0,
                                  0,
                                  (unsigned int)&v32,
                                  (__int64)&v36,
                                  (__int64)v33);
          v20 = v32;
          Flags = 0;
          AccessState = v36;
          v22 = v33[0];
          v23 = FullCreateOptions;
          LOBYTE(v7) = v35;
          if ( SrbScsiData )
            SecurityQos = *SrbScsiData;
        }
        else
        {
          v20 = BYTE4(SecurityContext->SecurityQos);
          SecurityQos = (char)SecurityContext[3].SecurityQos;
          AccessState = SecurityContext[1].AccessState;
          v22 = BYTE3(SecurityContext->AccessState);
          v32 = v20;
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
                v30 = Flags;
                v31 = v13;
              }
              else
              {
                v30 = 0;
                v31 = 0;
              }
              McTemplateK0pqcccccp(
                v31,
                (_DWORD)AccessState,
                (unsigned int)v37,
                (_DWORD)Irp,
                Irp->IoStatus.Status,
                v24,
                v20,
                v31,
                v30,
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
            v28 = v22;
            v13 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
            if ( (unsigned int)HIBYTE(AccessState->OperationID.HighPart) + 8 <= v22 )
              v28 = HIBYTE(AccessState->OperationID.HighPart) + 8;
            v29 = (unsigned __int64)AccessState + v28;
            if ( (unsigned __int64)&AccessState->Flags + 1 > v29 )
              Flags = 0;
            else
              Flags = AccessState->Flags;
            if ( (unsigned __int64)&AccessState->Flags + 2 > v29 )
              LowPart_high = 0;
            else
              LowPart_high = BYTE1(AccessState->Flags);
          }
          v25 = 1;
LABEL_39:
          v3 = v25 == 0;
          v20 = v32;
          if ( !v3 )
            LOBYTE(v7) = 1;
          goto LABEL_41;
        }
      }
      break;
    case 14:
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x80000) != 0 )
        McTemplateK0pq(CurrentStackLocation, &EventNonReadWriteRequestComplete, v37, Irp, Irp->IoStatus.Status);
      break;
    case 27:
      if ( CurrentStackLocation->MinorFunction != 7 || CurrentStackLocation->Parameters.Read.Length )
      {
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
          McTemplateK0pq(CurrentStackLocation, &EventPnpRequestComplete, v37, Irp, Irp->IoStatus.Status);
      }
      else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x400000) != 0 )
      {
        Information = (_DWORD *)Irp->IoStatus.Information;
        if ( Information )
          LODWORD(Information) = *Information;
        McTemplateK0pqq(
          (_DWORD)CurrentStackLocation,
          (unsigned int)&EventEnumerationComplete,
          (unsigned int)v37,
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
