/*
 * XREFs of HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C006CB30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0pqhhh @ 0x1C0010D38 (McTemplateK0pqhhh.c)
 *     WPP_RECORDER_SF_DDDLd @ 0x1C0010DD8 (WPP_RECORDER_SF_DDDLd.c)
 *     WPP_RECORDER_SF_II @ 0x1C0010F04 (WPP_RECORDER_SF_II.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C0035E20 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C0072FF4 (HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue.c)
 */

void __fastcall HUBPDO_EvtWorkItemDripsWatchDogCallback(__int64 a1)
{
  unsigned __int8 v1; // bp
  int v2; // ebx
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  int v6; // eax
  _QWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // edx
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rax
  int Handle; // [rsp+20h] [rbp-58h]
  int Handlea; // [rsp+20h] [rbp-58h]
  PVOID *Handleb; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h]
  int v25; // [rsp+88h] [rbp+10h] BYREF
  PVOID v26; // [rsp+90h] [rbp+18h] BYREF

  v1 = 1;
  v2 = 2;
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C005B0E8);
  v4 = *(_QWORD *)(*v3 + 64LL);
  v5 = *(_QWORD *)(v4 + 24);
  if ( (*(_DWORD *)(v5 + 1632) & 2) != 0 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
      4u,
      2u,
      0x94u,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
    v2 = 1;
  }
  else
  {
    v6 = HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(&v25);
    if ( v6 >= 0 )
    {
      if ( v25 )
      {
        v7 = *(_QWORD **)(v4 + 24);
        if ( (*((_DWORD *)v7 + 411) & 0x800000) != 0 )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(v7[1] + 1432LL),
            3u,
            2u,
            0x97u,
            (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
          v2 = 4;
        }
        else
        {
          v8 = MEMORY[0xFFFFF78000000014]
             - (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*v7 + 576LL))(*(_QWORD *)(*v7 + 240LL), v7[3]);
          if ( v8 >= 300000000 )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 400), 1, 0) )
            {
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
                3u,
                2u,
                0x99u,
                (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
              v2 = 6;
            }
            else
            {
              wil_details_FeaturePropertyCache_ReportUsageToService(0LL, 3LL);
              v11 = PoRegisterPowerSettingCallback(
                      0LL,
                      &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                      (PPOWER_SETTING_CALLBACK)HUBPDO_ReEnumerationCallback,
                      *(PVOID *)(v4 + 24),
                      &v26);
              if ( v11 >= 0 )
              {
                *(_QWORD *)(v4 + 408) = v26;
                v1 = 0;
                v12 = IoRequestDeviceRemovalForReset(*v3, 1LL);
                if ( v12 >= 0 )
                {
                  v2 = 0;
                }
                else
                {
                  PoUnregisterPowerSettingCallback(*(PVOID *)(v4 + 408));
                  *(_QWORD *)(v4 + 408) = 0LL;
                  _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 400), 0, 1);
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
                    2u,
                    2u,
                    0x9Bu,
                    (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
                    v12);
                  v2 = 8;
                }
              }
              else
              {
                _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 400), 0, 1);
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
                  2u,
                  2u,
                  0x9Au,
                  (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
                  v11);
                v2 = 7;
              }
            }
          }
          else
          {
            HIDWORD(v22) = HIDWORD(v8);
            WPP_RECORDER_SF_II(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL), v8, v9, v10, Handle);
            v2 = 5;
          }
        }
      }
      else
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
          3u,
          2u,
          0x96u,
          (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
        v2 = 3;
      }
    }
    else
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
        3u,
        2u,
        0x95u,
        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
        v6);
    }
  }
  v13 = *(_QWORD *)(v4 + 24);
  LODWORD(v24) = *(unsigned __int16 *)(v13 + 2000);
  LODWORD(v23) = *(unsigned __int16 *)(v13 + 1998);
  LODWORD(v22) = *(unsigned __int16 *)(v13 + 1996);
  WPP_RECORDER_SF_DDDLd(
    *(_QWORD *)(*(_QWORD *)(v13 + 8) + 1432LL),
    v1,
    *(unsigned __int16 *)(v13 + 2000),
    *(unsigned __int16 *)(v13 + 1998),
    Handlea);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x2000000) != 0 )
  {
    v15 = *(_QWORD *)(v4 + 24);
    LOWORD(v24) = *(_WORD *)(v15 + 2000);
    LOWORD(v23) = *(_WORD *)(v15 + 1998);
    LOWORD(v22) = *(_WORD *)(v15 + 1996);
    LODWORD(Handleb) = v2;
    McTemplateK0pqhhh(
      v14,
      &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
      (const GUID *)(v15 + 1516),
      *(_QWORD *)(v15 + 24),
      Handleb,
      v22,
      v23,
      v24);
  }
  if ( v2 != 1 )
  {
    if ( v2 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x8000000) != 0 )
      {
        v17 = *(_QWORD *)(v4 + 24);
        LOWORD(v24) = *(_WORD *)(v17 + 2000);
        LOWORD(v23) = *(_WORD *)(v17 + 1998);
        LOWORD(v22) = *(_WORD *)(v17 + 1996);
        LODWORD(Handleb) = v2;
        McTemplateK0pqhhh(
          v14,
          &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_WARNING,
          (const GUID *)(v17 + 1516),
          *(_QWORD *)(v17 + 24),
          Handleb,
          v22,
          v23,
          v24);
      }
    }
    else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000000) != 0 )
    {
      v16 = *(_QWORD *)(v4 + 24);
      LOWORD(v24) = *(_WORD *)(v16 + 2000);
      LOWORD(v23) = *(_WORD *)(v16 + 1998);
      LOWORD(v22) = *(_WORD *)(v16 + 1996);
      LODWORD(Handleb) = 0;
      McTemplateK0pqhhh(
        v14,
        &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_INFO,
        (const GUID *)(v16 + 1516),
        *(_QWORD *)(v16 + 24),
        Handleb,
        v22,
        v23,
        v24);
    }
  }
  if ( v1 )
  {
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v18,
      "DRIPS SR Tag",
      11068LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 416), "DRIPS SR Tag", 0x20u);
}
