/*
 * XREFs of RaUnitDeviceControlIrp @ 0x1C0008110
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0007FE0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001724 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C00063D0 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0008084 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0008488 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C000FDA0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0010FDC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C0015550 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0015698 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0017994 (RaUnitTelemetryIdIoctl.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     McTemplateK0pqqq @ 0x1C0024214 (McTemplateK0pqqq.c)
 *     WPP_SF_qqD @ 0x1C002C2D0 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C002C330 (WPP_SF_qqDD.c)
 *     RaUnitAttributeManagement @ 0x1C003A45C (RaUnitAttributeManagement.c)
 *     RaUnitGetQOSIoctl @ 0x1C003A92C (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C003AA40 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C003AAB0 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C003AB20 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C003ABBC (RaUnitProtocolCommandIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C003AD84 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C003B288 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C003B784 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C003B7E4 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C005E7D8 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C005EF58 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005EFC0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005FBD8 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C0066730 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C0066878 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0066940 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C00669A8 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0066BF4 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C0066F54 (RaUnitStorageGetIdlePowerUpReason.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(_BYTE *Context, PIRP Irp, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Arg3; // ebp
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int QOSIoctl; // eax
  unsigned int v10; // edi
  _IO_STACK_LOCATION *v12; // rax
  char v13; // r8
  __int64 v14; // rcx
  GUID Activity; // [rsp+40h] [rbp-38h] BYREF

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
        LOBYTE(Irp->AssociatedIrp.MasterIrp->Type) = (Context[152] & 4) == 0;
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
    v7 = Arg3 - 315412;
    if ( (unsigned int)v7 <= 0x34 && (v8 = 0x11000011000001LL, _bittest64(&v8, v7)) || Arg3 == 315396 )
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
  LOBYTE(a3) = 1;
  if ( (int)RaUnitAcquireRemoveLock((__int64)Context, (__int64)Irp, a3) < 0 )
  {
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
      &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
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
          goto LABEL_26;
      }
      goto LABEL_17;
    }
    switch ( Arg3 )
    {
      case 0x2D9404u:
        QOSIoctl = RaUnitStorageDataSetManagementIoctl(Context, Irp);
        goto LABEL_17;
      case 0x2DD200u:
        QOSIoctl = RaUnitSetTemperatureThresholdIoctl(Context, Irp);
        goto LABEL_17;
      case 0x2DD3C0u:
        QOSIoctl = RaUnitProtocolCommandIoctl(Context, Irp);
        goto LABEL_17;
    }
    if ( Arg3 != 3004036 )
    {
      switch ( Arg3 )
      {
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
          goto LABEL_26;
      }
      goto LABEL_17;
    }
LABEL_94:
    v14 = *((_QWORD *)Context + 3);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    QOSIoctl = IofCallDriver(*(PDEVICE_OBJECT *)(v14 + 8), Irp);
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
          QOSIoctl = RaUnitScsiMiniportIoctl((__int64)Context, Irp);
          goto LABEL_17;
        }
        if ( Arg3 != 315412 )
        {
          if ( Arg3 == 315436 )
          {
            v13 = 0;
          }
          else
          {
            if ( Arg3 != 315440 )
              goto LABEL_26;
            v13 = 1;
          }
          QOSIoctl = RaUnitAtaPassThroughIoctl((__int64)Context, Irp, v13);
          goto LABEL_17;
        }
      }
    }
LABEL_81:
    QOSIoctl = RaUnitScsiPassThroughIoctl(Context, Irp);
    goto LABEL_17;
  }
  switch ( Arg3 )
  {
    case 0x4D048u:
      goto LABEL_81;
    case 0x2D1400u:
      QOSIoctl = RaUnitStorageQueryPropertyIoctl(Context, Irp);
      break;
    case 0x2D164Bu:
      QOSIoctl = RaUnitStorageGetDumpInfoIoctl(Context, Irp);
      break;
    case 0x2D164Fu:
      QOSIoctl = RaUnitStorageFreeDumpInfoIoctl(Context, Irp);
      break;
    case 0x2D1680u:
      goto LABEL_94;
    case 0x2D1C00u:
      QOSIoctl = RaUnitHwFirmwareGetInfoIoctl(Context, Irp);
      break;
    case 0x2D1C80u:
      v12 = Irp->Tail.Overlay.CurrentStackLocation;
      Irp->IoStatus.Information = 0LL;
      if ( v12->Parameters.Create.Options >= 0x10 )
        RaUnitRegisterForIdleDetection(Context);
      goto LABEL_26;
    case 0x2D1C84u:
      QOSIoctl = RaUnitStorageGetIdlePowerUpReason(Context, Irp);
      break;
    default:
LABEL_26:
      QOSIoctl = RaidCompleteRequestEx(Irp);
      break;
  }
LABEL_17:
  v10 = QOSIoctl;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      29LL,
      &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
      Context,
      Irp,
      Arg3,
      QOSIoctl);
  }
  RaUnitReleaseRemoveLock(Context);
  return v10;
}
