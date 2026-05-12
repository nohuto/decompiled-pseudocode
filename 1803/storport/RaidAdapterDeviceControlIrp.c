/*
 * XREFs of RaidAdapterDeviceControlIrp @ 0x1C0007A30
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0007FE0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006F88 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007CD0 (RaidAcquireAdapterRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaForwardIrp @ 0x1C00104D0 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     McTemplateK0pqqq @ 0x1C0024214 (McTemplateK0pqqq.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C002484C (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C00248DC (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C00263E4 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C00264D8 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0026684 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C00269A0 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C0026B90 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0026E58 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterResetBus @ 0x1C00277B8 (RaidAdapterResetBus.c)
 *     RaidAdapterRpmbRequest @ 0x1C0027B28 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C0027DFC (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0027E74 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C0028B48 (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002937C (RaidAdapterStorageBreakReservationIoctl.c)
 *     WPP_SF_qqDD @ 0x1C002C330 (WPP_SF_qqDD.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005E6CC (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00632F8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterPassThrough @ 0x1C00642A4 (RaidAdapterPassThrough.c)
 */

__int64 __fastcall RaidAdapterDeviceControlIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // r8
  unsigned int Arg3; // ebp
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int InquiryDataIoctl; // eax
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
      &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
      a1,
      a2,
      HIWORD(Arg3),
      (Arg3 >> 2) & 0xFFF);
  }
  if ( Arg3 > 0x2D1C00 )
  {
    if ( Arg3 > 0x2DD200 )
    {
      switch ( Arg3 )
      {
        case 0x2DD3C0u:
          InquiryDataIoctl = RaAdapterProtocolCommandIoctl(a1, a2);
          break;
        case 0x2DD684u:
          InquiryDataIoctl = RaidAdapterSetBootLunIoctl(a1, a2);
          break;
        case 0x2DDC04u:
          InquiryDataIoctl = RaidAdapterHwFirmwareDownloadIoctl(a1, a2);
          break;
        case 0x2DDC08u:
          InquiryDataIoctl = RaidAdapterHwFirmwareActivateIoctl(a1, a2);
          break;
        case 0x32C000u:
          InquiryDataIoctl = RaForwardIrp(*(_QWORD *)(a1 + 24), a2);
          break;
        default:
          goto LABEL_26;
      }
    }
    else
    {
      switch ( Arg3 )
      {
        case 0x2DD200u:
          InquiryDataIoctl = RaAdapterSetTemperatureThresholdIoctl(a1, a2);
          break;
        case 0x2D1C94u:
          InquiryDataIoctl = RaidAdapterPowerCapIoctl(a1, a2);
          break;
        case 0x2D1C98u:
          InquiryDataIoctl = RaidAdapterRpmbRequest(a1, a2);
          break;
        case 0x2D1CA0u:
          InquiryDataIoctl = RaidAdapterDiagnosticIoctl(a1, a2);
          break;
        case 0x2D5000u:
          if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) )
          {
            LOBYTE(v4) = **(_BYTE **)(a2 + 24);
            RaidAdapterResetBus(a1, v4);
          }
          goto LABEL_26;
        case 0x2D5014u:
          InquiryDataIoctl = RaidAdapterStorageBreakReservationIoctl(a1, a2);
          break;
        default:
LABEL_26:
          InquiryDataIoctl = RaidCompleteRequestEx((PIRP)a2);
          break;
      }
    }
  }
  else
  {
    if ( Arg3 != 2956288 )
    {
      if ( Arg3 <= 0x4D014 )
      {
        switch ( Arg3 )
        {
          case 0x4D014u:
LABEL_27:
            LOBYTE(v6) = 1;
LABEL_41:
            InquiryDataIoctl = RaidAdapterPassThrough(a1, a2, v6);
            goto LABEL_18;
          case 0x4100Cu:
            InquiryDataIoctl = RaidAdapterScsiGetInquiryDataIoctl(a1, a2);
            goto LABEL_18;
          case 0x41010u:
            InquiryDataIoctl = RaidAdapterScsiGetCapabilitiesIoctl(a1, a2);
            goto LABEL_18;
          case 0x4101Cu:
            v13 = *(struct _DEVICE_OBJECT **)(a1 + 32);
            *(_BYTE *)(a1 + 106) = 1;
            IoInvalidateDeviceRelations(v13, BusRelations);
            goto LABEL_26;
        }
        if ( Arg3 != 315396 )
        {
          if ( Arg3 == 315400 )
          {
            InquiryDataIoctl = RaidAdapterScsiMiniportIoctlWithAddress(a1, (IRP *)a2, 0, 0, 0, 2);
            goto LABEL_18;
          }
          goto LABEL_26;
        }
      }
      else
      {
        if ( Arg3 == 315448 )
          return RaidAdapterMiniportProcessServiceRequest(a1, a2);
        if ( Arg3 != 315460 )
        {
          if ( Arg3 != 315464 )
          {
            if ( Arg3 == 2954240 )
            {
              InquiryDataIoctl = RaidAdapterStorageQueryPropertyIoctl(a1, a2);
              goto LABEL_18;
            }
            if ( Arg3 == 2954880 )
            {
              InquiryDataIoctl = RaidAdapterQueryBootLunsIoctl(a1, a2);
              goto LABEL_18;
            }
            goto LABEL_26;
          }
          goto LABEL_27;
        }
      }
      v6 = 0LL;
      goto LABEL_41;
    }
    InquiryDataIoctl = RaidAdapterHwFirmwareGetInfoIoctl(a1, a2);
  }
LABEL_18:
  v11 = InquiryDataIoctl;
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 256));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
      a1,
      a2,
      Arg3,
      v11);
  }
  return v11;
}
