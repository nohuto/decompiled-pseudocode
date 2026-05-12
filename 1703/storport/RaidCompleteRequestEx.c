/*
 * XREFs of RaidCompleteRequestEx @ 0x1C0009A90
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0004B08 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitPnpIrp @ 0x1C0004E20 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0005500 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiIrp @ 0x1C0006F90 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C00073D0 (RaidStartIoPacket.c)
 *     RaUnitStartIo @ 0x1C0007D00 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C0008A50 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000AB10 (RaUnitAsyncError.c)
 *     RaidHandleCreateCloseIrp @ 0x1C000CB38 (RaidHandleCreateCloseIrp.c)
 *     RaUnitPowerIrp @ 0x1C000E39C (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000E478 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000E530 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E860 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C000F180 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000F390 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C000F440 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C000F4E0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaUnitQuiesceDeviceSrb @ 0x1C000F570 (RaUnitQuiesceDeviceSrb.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000F7D0 (RaidUnitProcessBusyRequest.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0011024 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011770 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterPowerIrp @ 0x1C0011B28 (RaidAdapterPowerIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0012174 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C001253C (RaidAdapterQueryInterfaceIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C0012660 (RaUnitQueryInterfaceIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0012708 (RaidAdapterPnpIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0012978 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0012A74 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017C80 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidCompleteWmiIrp @ 0x1C001B4E0 (RaidCompleteWmiIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001BB10 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitClaimDeviceSrb @ 0x1C001BD84 (RaUnitClaimDeviceSrb.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C0D8 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C002B3AC (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C002B43C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002BBC4 (RaidAdapterCheckWaitTimeout.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002C448 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002C538 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002C6E4 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C002C9D4 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C002CB10 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C002D4A0 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C002D73C (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002D7AC (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002E794 (RaidAdapterStorageBreakReservationIoctl.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C002FB40 (StorASyncScsiPassThroughCompletion.c)
 *     StorExtCompleteServiceIrp @ 0x1C00326C0 (StorExtCompleteServiceIrp.c)
 *     StorpCompleteServiceIrp @ 0x1C0033E78 (StorpCompleteServiceIrp.c)
 *     RaidCancelIrp @ 0x1C00393F4 (RaidCancelIrp.c)
 *     RaUnitAttributeManagement @ 0x1C0039E6C (RaUnitAttributeManagement.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003A164 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C003A298 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C003A320 (RaUnitFlushQueueSrb.c)
 *     RaUnitGetQOSIoctl @ 0x1C003A494 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C003A5B0 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C003A614 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C003A678 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C003A714 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C003A7D8 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C003A840 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitSetQOSIoctl @ 0x1C003AA14 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C003AF24 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStartResetIo @ 0x1C003B0F4 (RaUnitStartResetIo.c)
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C003B420 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C003B5F8 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C003B858 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C003B8B4 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C003B910 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C003BA58 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C003BC20 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C003BDB0 (RaUnitStreamsIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003C870 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003D940 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003F380 (RaidUnitSubmitResetRequest.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C005D0E0 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005D1E8 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C005D314 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C005D588 (RaUnitQueryDeviceRelationsIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C005DD1C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x1C005E3D4 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C005ED90 (RaUnitStartDeviceIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0060360 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C0060530 (RaUnitQueryIdIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0060E30 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C00612CC (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006147C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiDispatchIrp @ 0x1C0061824 (RaWmiDispatchIrp.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C006214C (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C00621AC (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0062238 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C0062310 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitSucceedPnpIrp @ 0x1C0062344 (RaUnitSucceedPnpIrp.c)
 *     RaidAdapterPassThrough @ 0x1C0063E9C (RaidAdapterPassThrough.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C006421C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C00642D4 (RaidAdapterScsiIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C0064ED8 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C0064F08 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C0064F48 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C0064F74 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStopDeviceIrp @ 0x1C0065090 (RaUnitStopDeviceIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00650BC (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0065184 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C0065600 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006566C (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitUnknownSrb @ 0x1C006576C (RaUnitUnknownSrb.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001C960 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     Template_pq @ 0x1C002FB54 (Template_pq.c)
 *     Template_pqcccccp @ 0x1C002FBCC (Template_pqcccccp.c)
 *     Template_pqq @ 0x1C002FCA4 (Template_pqq.c)
 */

__int64 __fastcall RaidCompleteRequestEx(PIRP Irp, CCHAR a2, unsigned int a3)
{
  bool v3; // zf
  int v7; // r10d
  int v8; // r11d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int MajorFunction; // eax
  _DWORD *Information; // rbp
  char v13; // bp
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  unsigned __int8 v15; // r13
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
  int v36; // [rsp+6Ch] [rbp-5Ch]
  _ACCESS_STATE *v37; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v38[2]; // [rsp+78h] [rbp-50h] BYREF

  v3 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = a3;
  if ( v3 )
    goto LABEL_4;
  v38[0] = 0LL;
  v38[1] = 0LL;
  IoGetActivityIdIrp(Irp, v38);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  switch ( MajorFunction )
  {
    case 15:
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000) != 0 )
      {
        v13 = 0;
        LOBYTE(v8) = 0;
        LOBYTE(v7) = 0;
        SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
        v15 = 0;
        LowPart_high = 0;
        SecurityQos = 0;
        v37 = 0LL;
        v32 = 0;
        v18 = BYTE2(SecurityContext->SecurityQos);
        v33[0] = 0;
        v36 = v8;
        v35 = v7;
        if ( v18 == 40 )
        {
          FullCreateOptions = SecurityContext->FullCreateOptions;
          SrbScsiData = (char *)GetSrbScsiData(
                                  (_DWORD)SecurityContext,
                                  0,
                                  0,
                                  (unsigned int)&v32,
                                  (__int64)&v37,
                                  (__int64)v33);
          v20 = v32;
          AccessState = v37;
          v22 = v33[0];
          v23 = FullCreateOptions;
          LOBYTE(v7) = v35;
          LOBYTE(v8) = v36;
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
                v13 = LowPart_high;
                v30 = v8;
                v31 = v15;
              }
              else
              {
                v30 = 0;
                v31 = 0;
              }
              Template_pqcccccp(
                v31,
                (_DWORD)AccessState,
                (unsigned int)v38,
                (_DWORD)Irp,
                Irp->IoStatus.Status,
                v24,
                v20,
                v31,
                v30,
                v13,
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
            LOBYTE(v8) = BYTE2(AccessState->OperationID.LowPart);
            v15 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
            LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
          }
          else
          {
            if ( p_SecurityEvaluated > v26 )
              goto LABEL_39;
            v28 = v22;
            v15 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
            if ( (unsigned int)HIBYTE(AccessState->OperationID.HighPart) + 8 <= v22 )
              v28 = HIBYTE(AccessState->OperationID.HighPart) + 8;
            v29 = (unsigned __int64)AccessState + v28;
            if ( (unsigned __int64)&AccessState->Flags + 1 > v29 )
              LOBYTE(v8) = 0;
            else
              LOBYTE(v8) = AccessState->Flags;
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
        Template_pq(CurrentStackLocation, &EventNonReadWriteRequestComplete, v38, Irp, Irp->IoStatus.Status);
      break;
    case 27:
      if ( CurrentStackLocation->MinorFunction != 7 || CurrentStackLocation->Parameters.Read.Length )
      {
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
          Template_pq(CurrentStackLocation, &EventPnpRequestComplete, v38, Irp, Irp->IoStatus.Status);
      }
      else
      {
        Information = (_DWORD *)Irp->IoStatus.Information;
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x400000) != 0 )
        {
          if ( Information )
            LODWORD(Information) = *Information;
          Template_pqq(
            (_DWORD)CurrentStackLocation,
            (unsigned int)&EventEnumerationComplete,
            (unsigned int)v38,
            (_DWORD)Irp,
            (char)Information,
            Irp->IoStatus.Status);
        }
      }
      break;
  }
LABEL_4:
  IofCompleteRequest(Irp, a2);
  return a3;
}
