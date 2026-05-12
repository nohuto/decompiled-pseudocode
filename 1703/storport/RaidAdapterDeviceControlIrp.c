/*
 * XREFs of RaidAdapterDeviceControlIrp @ 0x1C0005500
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C00050C0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C00056D4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaForwardIrp @ 0x1C001293C (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C002B3AC (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C002B43C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002C448 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002C538 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002C6E4 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C002C9D4 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C002CB10 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterResetBus @ 0x1C002D15C (RaidAdapterResetBus.c)
 *     RaidAdapterRpmbRequest @ 0x1C002D4A0 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C002D73C (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002D7AC (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002E794 (RaidAdapterStorageBreakReservationIoctl.c)
 *     Template_pqqq @ 0x1C002FDBC (Template_pqqq.c)
 *     WPP_SF_qqDD @ 0x1C00305E4 (WPP_SF_qqDD.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005D1E8 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaidAdapterPassThrough @ 0x1C0063E9C (RaidAdapterPassThrough.c)
 */

__int64 __fastcall RaidAdapterDeviceControlIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // r8
  unsigned int v7; // ebp
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int PropertyIoctl; // eax
  unsigned int v11; // edi
  struct _DEVICE_OBJECT *v13; // rcx
  _QWORD v14[2]; // [rsp+40h] [rbp-38h] BYREF

  v14[0] = 0LL;
  v14[1] = 0LL;
  v5 = RaidAcquireAdapterRemoveLock(a1);
  v7 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, v14);
    if ( v7 == 315396 || (v8 = v7 - 315412, (unsigned int)v8 <= 0x34) && (v9 = 0x11000011000001LL, _bittest64(&v9, v8)) )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1000000) != 0 )
        Template_pqqq(
          *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
          (unsigned int)&EventPassThrough,
          (unsigned int)v14,
          a2,
          **(_BYTE **)(a2 + 184),
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
          v7);
    }
    else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x20000) != 0 )
    {
      Template_pqqq(
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        (unsigned int)&EventIOCTL,
        (unsigned int)v14,
        a2,
        **(_BYTE **)(a2 + 184),
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
        v7);
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
      &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
      a1,
      a2,
      HIWORD(v7),
      (v7 >> 2) & 0xFFF);
  }
  if ( v7 > 0x2D1C00 )
  {
    switch ( v7 )
    {
      case 0x2D1C94u:
        PropertyIoctl = RaidAdapterPowerCapIoctl(a1, a2);
        break;
      case 0x2D1C98u:
        PropertyIoctl = RaidAdapterRpmbRequest(a1, a2);
        break;
      case 0x2D5000u:
        if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) )
        {
          LOBYTE(v4) = **(_BYTE **)(a2 + 24);
          RaidAdapterResetBus(a1, v4);
        }
        goto LABEL_44;
      case 0x2D5014u:
        PropertyIoctl = RaidAdapterStorageBreakReservationIoctl(a1, a2);
        break;
      case 0x2DD200u:
        PropertyIoctl = RaAdapterSetTemperatureThresholdIoctl(a1, a2);
        break;
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
        goto LABEL_44;
    }
  }
  else
  {
    if ( v7 != 2956288 )
    {
      if ( v7 > 0x4D014 )
      {
        if ( v7 == 315448 )
          return RaidAdapterMiniportProcessServiceRequest(a1, a2);
        if ( v7 != 315460 )
        {
          if ( v7 != 315464 )
          {
            if ( v7 == 2954240 )
            {
              PropertyIoctl = RaidAdapterStorageQueryPropertyIoctl(a1, a2);
              goto LABEL_18;
            }
            goto LABEL_44;
          }
          goto LABEL_47;
        }
LABEL_48:
        v6 = 0LL;
        goto LABEL_49;
      }
      switch ( v7 )
      {
        case 0x4D014u:
LABEL_47:
          LOBYTE(v6) = 1;
LABEL_49:
          PropertyIoctl = RaidAdapterPassThrough(a1, a2, v6);
          goto LABEL_18;
        case 0x4100Cu:
          PropertyIoctl = RaidAdapterScsiGetInquiryDataIoctl(a1, a2);
          goto LABEL_18;
        case 0x41010u:
          PropertyIoctl = RaidAdapterScsiGetCapabilitiesIoctl(a1, a2);
          goto LABEL_18;
      }
      if ( v7 != 266268 )
      {
        if ( v7 != 315396 )
        {
          if ( v7 == 315400 )
          {
            PropertyIoctl = RaidAdapterScsiMiniportIoctlWithAddress(a1, a2, 0LL, 0LL, 0, 2);
            goto LABEL_18;
          }
          goto LABEL_44;
        }
        goto LABEL_48;
      }
      v13 = *(struct _DEVICE_OBJECT **)(a1 + 32);
      *(_BYTE *)(a1 + 106) = 1;
      IoInvalidateDeviceRelations(v13, BusRelations);
LABEL_44:
      PropertyIoctl = RaidCompleteRequestEx((PIRP)a2);
      goto LABEL_18;
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
      &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
      a1,
      a2,
      v7,
      v11);
  }
  return v11;
}
