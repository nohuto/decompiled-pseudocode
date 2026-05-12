/*
 * XREFs of RaUnitDeviceControlIrp @ 0x1C0005984
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C00058E0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0003E90 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0005308 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitCheckRemoveState @ 0x1C0005CDC (RaUnitCheckRemoveState.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001A84C (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001B730 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C498 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     McTemplateK0pqqq @ 0x1C002BA60 (McTemplateK0pqqq.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0030C5C (WPP_SF_qqDD.c)
 *     RaUnitAttributeManagement @ 0x1C003BBBC (RaUnitAttributeManagement.c)
 *     RaUnitGetQOSIoctl @ 0x1C003C1C0 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C003C2DC (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C003C34C (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C003C3BC (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C003C458 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C003C758 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C003CC68 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C003D158 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C003D1B8 (RaUnitStoragePowerIdle.c)
 *     RaUnitStreamsIoctl @ 0x1C003D6B8 (RaUnitStreamsIoctl.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C005F0E0 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0060A88 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0063844 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C006453C (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C00684A0 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00685E8 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C00686B0 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C0068718 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0068954 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C0068CB4 (RaUnitStorageGetIdlePowerUpReason.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(__int64 Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Arg3; // ebp
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int QOSIoctl; // eax
  unsigned int v9; // esi
  char v11; // r8
  _IO_STACK_LOCATION *v12; // rax
  GUID Activity; // [rsp+48h] [rbp-40h] BYREF

  *(_QWORD *)&Activity.Data1 = 0LL;
  *(_QWORD *)Activity.Data4 = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Arg3 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( Arg3 == 2955532 )
  {
    if ( !Irp->RequestorMode )
    {
      if ( CurrentStackLocation->Parameters.Read.Length )
      {
        LOBYTE(Irp->AssociatedIrp.MasterIrp->Type) = (*(_BYTE *)(Context + 152) & 4) == 0;
        Irp->IoStatus.Information = 1LL;
      }
      else
      {
        Irp->IoStatus.Information = 0LL;
      }
    }
    return RaidCompleteRequestEx(Irp);
  }
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &Activity);
    v6 = Arg3 - 315412;
    if ( (unsigned int)v6 <= 0x34 && (v7 = 0x11000011000001LL, _bittest64(&v7, v6)) || Arg3 == 315396 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1000000) != 0 )
        McTemplateK0pqqq(
          (PMCGEN_TRACE_CONTEXT)Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          &EventPassThrough,
          &Activity,
          Irp,
          Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          Arg3);
    }
    else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x20000) != 0 )
    {
      McTemplateK0pqqq(
        (PMCGEN_TRACE_CONTEXT)Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        &EventIOCTL,
        &Activity,
        Irp,
        Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        Arg3);
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(Context + 680));
  if ( (int)RaUnitCheckRemoveState(Context, Irp) < 0 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(Context + 680), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(Context + 168), 0, 0);
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
      Context,
      Irp,
      Arg3);
  }
  if ( Arg3 > 0x2D1C88 )
  {
    if ( Arg3 <= 0x2D5014 )
    {
      switch ( Arg3 )
      {
        case 0x2D5014u:
          QOSIoctl = RaUnitStorageBreakReservationIoctl(Context, Irp);
          break;
        case 0x2D1C8Cu:
          QOSIoctl = RaUnitStoragePowerIdle(Context, Irp);
          break;
        case 0x2D1C94u:
          QOSIoctl = RaUnitPowerCapIoctl(Context, Irp);
          break;
        case 0x2D1CA0u:
          QOSIoctl = RaUnitStorageDiagnosticIoctl(Context, Irp);
          break;
        case 0x2D280Cu:
          QOSIoctl = RaUnitTelemetryIdIoctl(Context, Irp);
          break;
        case 0x2D2810u:
          QOSIoctl = RaUnitGetQOSIoctl(Context, Irp);
          break;
        case 0x2D2828u:
        case 0x2D282Cu:
        case 0x2D2830u:
          QOSIoctl = RaUnitStreamsIoctl(Context, Irp);
          break;
        default:
          goto LABEL_27;
      }
    }
    else
    {
      switch ( Arg3 )
      {
        case 0x2D9404u:
          QOSIoctl = RaUnitStorageDataSetManagementIoctl(Context, Irp);
          break;
        case 0x2DD200u:
          QOSIoctl = RaUnitSetTemperatureThresholdIoctl(Context, Irp);
          break;
        case 0x2DD3C0u:
          QOSIoctl = RaUnitProtocolCommandIoctl(Context, Irp);
          break;
        case 0x2DDC04u:
          QOSIoctl = RaUnitHwFirmwareDownloadIoctl(Context, Irp);
          break;
        case 0x2DDC08u:
          QOSIoctl = RaUnitHwFirmwareActivateIoctl(Context, Irp);
          break;
        case 0x2DDC9Cu:
          QOSIoctl = RaUnitAttributeManagement(Context, Irp);
          break;
        case 0x2DE814u:
          QOSIoctl = RaUnitSetQOSIoctl(Context, Irp);
          break;
        default:
          goto LABEL_27;
      }
    }
    goto LABEL_17;
  }
  if ( Arg3 == 2956424 )
  {
    QOSIoctl = RaUnitStoragePowerActive(Context, Irp);
    goto LABEL_17;
  }
  if ( Arg3 <= 0x4D044 )
  {
    if ( Arg3 != 315460 )
    {
      switch ( Arg3 )
      {
        case 0x41018u:
          QOSIoctl = RaUnitScsiGetAddressIoctl(Context, Irp);
          goto LABEL_17;
        case 0x41020u:
          QOSIoctl = RaUnitScsiGetDumpPointersIoctl(Context, Irp);
          goto LABEL_17;
        case 0x41024u:
          QOSIoctl = RaUnitScsiFreeDumpPointersIoctl(Context, Irp);
          goto LABEL_17;
      }
      if ( Arg3 != 315396 )
      {
        if ( Arg3 == 315400 )
        {
          QOSIoctl = RaUnitScsiMiniportIoctl(Context, Irp);
          goto LABEL_17;
        }
        if ( Arg3 != 315412 )
        {
          if ( Arg3 == 315436 )
          {
            v11 = 0;
          }
          else
          {
            if ( Arg3 != 315440 )
              goto LABEL_27;
            v11 = 1;
          }
          QOSIoctl = RaUnitAtaPassThroughIoctl(Context, Irp, v11);
          goto LABEL_17;
        }
      }
    }
LABEL_80:
    QOSIoctl = RaUnitScsiPassThroughIoctl(Context, Irp);
    goto LABEL_17;
  }
  switch ( Arg3 )
  {
    case 0x4D048u:
      goto LABEL_80;
    case 0x2D1400u:
      QOSIoctl = RaUnitStorageQueryPropertyIoctl(Context, Irp);
      break;
    case 0x2D164Bu:
      QOSIoctl = RaUnitStorageGetDumpInfoIoctl(Context, Irp);
      break;
    case 0x2D164Fu:
      QOSIoctl = RaUnitStorageFreeDumpInfoIoctl(Context, Irp);
      break;
    case 0x2D1C00u:
      QOSIoctl = RaUnitHwFirmwareGetInfoIoctl(Context, Irp);
      break;
    case 0x2D1C80u:
      v12 = Irp->Tail.Overlay.CurrentStackLocation;
      Irp->IoStatus.Information = 0LL;
      if ( v12->Parameters.Create.Options >= 0x10 )
        RaUnitRegisterForIdleDetection((PVOID)Context);
      goto LABEL_27;
    case 0x2D1C84u:
      QOSIoctl = RaUnitStorageGetIdlePowerUpReason(Context, Irp);
      break;
    default:
LABEL_27:
      QOSIoctl = RaidCompleteRequestEx(Irp);
      break;
  }
LABEL_17:
  v9 = QOSIoctl;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      29LL,
      &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
      Context,
      Irp,
      Arg3,
      QOSIoctl);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(Context + 680), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(Context + 168), 0, 0);
  return v9;
}
