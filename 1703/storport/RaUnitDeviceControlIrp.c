/*
 * XREFs of RaUnitDeviceControlIrp @ 0x1C0005164
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C00050C0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0003EE4 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0004B08 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitCheckRemoveState @ 0x1C00054B4 (RaUnitCheckRemoveState.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0011024 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001BB10 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C0D8 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     Template_pqqq @ 0x1C002FDBC (Template_pqqq.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C00305E4 (WPP_SF_qqDD.c)
 *     RaUnitAttributeManagement @ 0x1C0039E6C (RaUnitAttributeManagement.c)
 *     RaUnitGetQOSIoctl @ 0x1C003A494 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C003A5B0 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C003A614 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C003A678 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C003A714 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C003AA14 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C003AF24 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C003B420 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C003B5F8 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C003B858 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C003B8B4 (RaUnitStoragePowerIdle.c)
 *     RaUnitStreamsIoctl @ 0x1C003BDB0 (RaUnitStreamsIoctl.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C005D0E0 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005E704 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006147C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C006214C (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C0064F74 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00650BC (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0065184 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C0065600 (RaUnitStorageGetIdlePowerUpReason.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(struct _KEVENT *Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // ebp
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int QOSIoctl; // eax
  unsigned int v9; // esi
  char v11; // r8
  _IO_STACK_LOCATION *v12; // rax
  _QWORD v13[2]; // [rsp+48h] [rbp-40h] BYREF

  v13[0] = 0LL;
  v13[1] = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 2955532 )
  {
    if ( !Irp->RequestorMode )
    {
      if ( CurrentStackLocation->Parameters.Read.Length )
      {
        LOBYTE(Irp->AssociatedIrp.MasterIrp->Type) = (~LOBYTE(Context[6].Header.WaitListHead.Flink) & 4) != 0;
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
    IoGetActivityIdIrp(Irp, v13);
    v6 = LowPart - 315412;
    if ( (unsigned int)v6 <= 0x34 && (v7 = 0x11000011000001LL, _bittest64(&v7, v6)) || LowPart == 315396 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1000000) != 0 )
        Template_pqqq(
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          (unsigned int)&EventPassThrough,
          (unsigned int)v13,
          (_DWORD)Irp,
          Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          LowPart);
    }
    else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x20000) != 0 )
    {
      Template_pqqq(
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        (unsigned int)&EventIOCTL,
        (unsigned int)v13,
        (_DWORD)Irp,
        Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        LowPart);
    }
  }
  _InterlockedIncrement(&Context[27].Header.Lock);
  if ( (int)RaUnitCheckRemoveState(Context, Irp) < 0 )
  {
    if ( _InterlockedExchangeAdd(&Context[27].Header.Lock, 0xFFFFFFFF) == 1 )
      KeSetEvent(Context + 7, 0, 0);
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
      &WPP_95124dee8acf35750318326cda357b29_Traceguids,
      Context,
      Irp,
      LowPart);
  }
  if ( LowPart > 0x2D1C88 )
  {
    if ( LowPart <= 0x2D5014 )
    {
      switch ( LowPart )
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
        case 0x2D2400u:
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
          goto LABEL_25;
      }
    }
    else
    {
      switch ( LowPart )
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
          goto LABEL_25;
      }
    }
    goto LABEL_17;
  }
  if ( LowPart == 2956424 )
  {
    QOSIoctl = RaUnitStoragePowerActive(Context, Irp);
    goto LABEL_17;
  }
  if ( LowPart <= 0x4D044 )
  {
    if ( LowPart != 315460 )
    {
      switch ( LowPart )
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
      if ( LowPart != 315396 )
      {
        if ( LowPart == 315400 )
        {
          QOSIoctl = RaUnitScsiMiniportIoctl((__int64)Context, Irp);
          goto LABEL_17;
        }
        if ( LowPart != 315412 )
        {
          if ( LowPart == 315436 )
          {
            v11 = 0;
          }
          else
          {
            if ( LowPart != 315440 )
              goto LABEL_25;
            v11 = 1;
          }
          QOSIoctl = RaUnitAtaPassThroughIoctl((__int64)Context, Irp, v11);
          goto LABEL_17;
        }
      }
    }
LABEL_78:
    QOSIoctl = RaUnitScsiPassThroughIoctl(Context, Irp);
    goto LABEL_17;
  }
  switch ( LowPart )
  {
    case 0x4D048u:
      goto LABEL_78;
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
        RaUnitRegisterForIdleDetection(Context);
      goto LABEL_25;
    case 0x2D1C84u:
      QOSIoctl = RaUnitStorageGetIdlePowerUpReason(Context, Irp);
      break;
    default:
LABEL_25:
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
      &WPP_95124dee8acf35750318326cda357b29_Traceguids,
      Context,
      Irp,
      LowPart,
      QOSIoctl);
  }
  RaUnitReleaseRemoveLock(Context);
  return v9;
}
