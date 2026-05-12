/*
 * XREFs of RaidAdapterDeviceControlIrp @ 0x1C0005D18
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C00058E0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C0005EC4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaForwardIrp @ 0x1C00122A4 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     McTemplateK0pqqq @ 0x1C002BA60 (McTemplateK0pqqq.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C002C09C (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C002C12C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002D3C4 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002D4B8 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002D664 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C002D954 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C002DA90 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterResetBus @ 0x1C002E0E4 (RaidAdapterResetBus.c)
 *     RaidAdapterRpmbRequest @ 0x1C002E458 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C002E734 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002E7AC (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002F4D0 (RaidAdapterStorageBreakReservationIoctl.c)
 *     WPP_SF_qqDD @ 0x1C0030C5C (WPP_SF_qqDD.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005F458 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C006667C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterPassThrough @ 0x1C0067364 (RaidAdapterPassThrough.c)
 */

__int64 __fastcall RaidAdapterDeviceControlIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // r8
  unsigned int Arg3; // ebp
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int PropertyIoctl; // eax
  unsigned int v11; // edi
  struct _DEVICE_OBJECT *v13; // rcx
  GUID Activity; // [rsp+40h] [rbp-38h] BYREF

  *(_QWORD *)&Activity.Data1 = 0LL;
  *(_QWORD *)Activity.Data4 = 0LL;
  v5 = RaidAcquireAdapterRemoveLock(a1);
  Arg3 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &Activity);
    if ( Arg3 == 315396
      || (v8 = Arg3 - 315412, (unsigned int)v8 <= 0x34) && (v9 = 0x11000011000001LL, _bittest64(&v9, v8)) )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1000000) != 0 )
        McTemplateK0pqqq(
          (PMCGEN_TRACE_CONTEXT)*(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
          &EventPassThrough,
          &Activity,
          (const void *)a2,
          **(unsigned __int8 **)(a2 + 184),
          *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
          Arg3);
    }
    else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x20000) != 0 )
    {
      McTemplateK0pqqq(
        (PMCGEN_TRACE_CONTEXT)*(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        &EventIOCTL,
        &Activity,
        (const void *)a2,
        **(unsigned __int8 **)(a2 + 184),
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        Arg3);
    }
  }
  if ( v5 < 0 )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    return RaidCompleteRequestEx((PIRP)a2);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
      a1,
      a2,
      HIWORD(Arg3),
      (Arg3 >> 2) & 0xFFF);
  }
  if ( Arg3 > 0x2D1C00 )
  {
    if ( Arg3 <= 0x2DD200 )
    {
      switch ( Arg3 )
      {
        case 0x2DD200u:
          PropertyIoctl = RaAdapterSetTemperatureThresholdIoctl(a1, a2);
          break;
        case 0x2D1C94u:
          PropertyIoctl = RaidAdapterPowerCapIoctl(a1, a2);
          break;
        case 0x2D1C98u:
          PropertyIoctl = RaidAdapterRpmbRequest(a1, a2);
          break;
        case 0x2D1CA0u:
          PropertyIoctl = RaidAdapterDiagnosticIoctl(a1, a2);
          break;
        case 0x2D5000u:
          if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) )
          {
            LOBYTE(v4) = **(_BYTE **)(a2 + 24);
            RaidAdapterResetBus(a1, v4);
          }
          goto LABEL_40;
        case 0x2D5014u:
          PropertyIoctl = RaidAdapterStorageBreakReservationIoctl(a1, a2);
          break;
        default:
LABEL_40:
          PropertyIoctl = RaidCompleteRequestEx((PIRP)a2);
          break;
      }
    }
    else
    {
      switch ( Arg3 )
      {
        case 0x2DD3C0u:
          PropertyIoctl = RaAdapterProtocolCommandIoctl(a1, a2);
          break;
        case 0x2DDC04u:
          PropertyIoctl = RaidAdapterHwFirmwareDownloadIoctl(a1, a2);
          break;
        case 0x2DDC08u:
          PropertyIoctl = RaidAdapterHwFirmwareActivateIoctl(a1, a2);
          break;
        case 0x32C000u:
          PropertyIoctl = RaForwardIrp(*(_QWORD *)(a1 + 24), a2);
          break;
        default:
          goto LABEL_40;
      }
    }
  }
  else
  {
    if ( Arg3 != 2956288 )
    {
      if ( Arg3 > 0x4D014 )
      {
        if ( Arg3 == 315448 )
          return RaidAdapterMiniportProcessServiceRequest(a1, a2);
        if ( Arg3 != 315460 )
        {
          if ( Arg3 != 315464 )
          {
            if ( Arg3 == 2954240 )
            {
              PropertyIoctl = RaidAdapterStorageQueryPropertyIoctl(a1, a2);
              goto LABEL_18;
            }
            goto LABEL_40;
          }
          goto LABEL_43;
        }
LABEL_44:
        v6 = 0LL;
        goto LABEL_45;
      }
      switch ( Arg3 )
      {
        case 0x4D014u:
LABEL_43:
          LOBYTE(v6) = 1;
LABEL_45:
          PropertyIoctl = RaidAdapterPassThrough(a1, a2, v6);
          goto LABEL_18;
        case 0x4100Cu:
          PropertyIoctl = RaidAdapterScsiGetInquiryDataIoctl(a1, a2);
          goto LABEL_18;
        case 0x41010u:
          PropertyIoctl = RaidAdapterScsiGetCapabilitiesIoctl(a1, a2);
          goto LABEL_18;
      }
      if ( Arg3 != 266268 )
      {
        if ( Arg3 != 315396 )
        {
          if ( Arg3 == 315400 )
          {
            PropertyIoctl = RaidAdapterScsiMiniportIoctlWithAddress(a1, a2, 0LL, 0LL, 0, 2);
            goto LABEL_18;
          }
          goto LABEL_40;
        }
        goto LABEL_44;
      }
      v13 = *(struct _DEVICE_OBJECT **)(a1 + 32);
      *(_BYTE *)(a1 + 106) = 1;
      IoInvalidateDeviceRelations(v13, BusRelations);
      goto LABEL_40;
    }
    PropertyIoctl = RaidAdapterHwFirmwareGetInfoIoctl(a1, a2);
  }
LABEL_18:
  v11 = PropertyIoctl;
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 256));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
      a1,
      a2,
      Arg3,
      v11);
  }
  return v11;
}
