/*
 * XREFs of HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C006CA40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0pqhhh @ 0x1C0010CC8 (McTemplateK0pqhhh.c)
 *     WPP_RECORDER_SF_DDDLd @ 0x1C00110A4 (WPP_RECORDER_SF_DDDLd.c)
 *     WPP_RECORDER_SF_II @ 0x1C00111D0 (WPP_RECORDER_SF_II.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C0011DE8 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C0072EC4 (HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue.c)
 */

void __fastcall HUBPDO_EvtWorkItemDripsWatchDogCallback(__int64 a1)
{
  unsigned __int8 v1; // bp
  int v2; // ebx
  _QWORD *v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rdx
  int v6; // eax
  _QWORD *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // edx
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // rax
  int Handle; // [rsp+20h] [rbp-58h]
  int Handlea; // [rsp+20h] [rbp-58h]
  PVOID *Handleb; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+38h] [rbp-40h]
  int v29; // [rsp+88h] [rbp+10h] BYREF
  PVOID v30; // [rsp+90h] [rbp+18h] BYREF

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
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids);
    v2 = 1;
  }
  else
  {
    v6 = HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(&v29);
    v7 = *(_QWORD **)(v4 + 24);
    if ( v6 >= 0 )
    {
      if ( v29 )
      {
        if ( (*((_DWORD *)v7 + 411) & 0x800000) != 0 )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(v7[1] + 1432LL),
            3u,
            2u,
            0x97u,
            (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids);
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
              wil_details_FeaturePropertyCache_ReportUsageToService(0LL, 3LL, v9, v10);
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
                3u,
                2u,
                0x9Au,
                (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids);
              v2 = 6;
            }
            else
            {
              v16 = PoRegisterPowerSettingCallback(
                      0LL,
                      &GUID_LOW_POWER_EPOCH,
                      (PPOWER_SETTING_CALLBACK)HUBPDO_ReEnumerationCallback,
                      *(PVOID *)(v4 + 24),
                      &v30);
              if ( v16 >= 0 )
              {
                *(_QWORD *)(v4 + 408) = v30;
                v17 = IoRequestDeviceRemovalForReset(*v3, 1LL);
                if ( v17 >= 0 )
                {
                  v1 = 0;
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
                    0x9Cu,
                    (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
                    v17);
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
                  0x9Bu,
                  (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
                  v16);
                v2 = 7;
              }
            }
          }
          else
          {
            wil_details_FeaturePropertyCache_ReportUsageToService(0LL, 3LL, v9, v10);
            HIDWORD(v26) = HIDWORD(v8);
            WPP_RECORDER_SF_II(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL), v11, v12, v13, Handle);
            v2 = 5;
            wil_details_FeaturePropertyCache_ReportUsageToService(0LL, 3LL, v14, v15);
          }
        }
      }
      else
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(v7[1] + 1432LL),
          3u,
          2u,
          0x96u,
          (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids);
        v2 = 3;
      }
    }
    else
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v7[1] + 1432LL),
        3u,
        2u,
        0x95u,
        (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
        v6);
    }
  }
  v18 = *(_QWORD *)(v4 + 24);
  LODWORD(v28) = *(unsigned __int16 *)(v18 + 2000);
  LODWORD(v27) = *(unsigned __int16 *)(v18 + 1998);
  LODWORD(v26) = *(unsigned __int16 *)(v18 + 1996);
  WPP_RECORDER_SF_DDDLd(
    *(_QWORD *)(*(_QWORD *)(v18 + 8) + 1432LL),
    v1,
    *(unsigned __int16 *)(v18 + 2000),
    *(unsigned __int16 *)(v18 + 1998),
    Handlea);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x2000000) != 0 )
  {
    v20 = *(_QWORD *)(v4 + 24);
    LOWORD(v28) = *(_WORD *)(v20 + 2000);
    LOWORD(v27) = *(_WORD *)(v20 + 1998);
    LOWORD(v26) = *(_WORD *)(v20 + 1996);
    LODWORD(Handleb) = v2;
    McTemplateK0pqhhh(
      v19,
      &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
      (const GUID *)(v20 + 1516),
      *(_QWORD *)(v20 + 24),
      Handleb,
      v26,
      v27,
      v28);
  }
  if ( v2 != 1 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x8000000) != 0 )
  {
    v21 = *(_QWORD *)(v4 + 24);
    LOWORD(v28) = *(_WORD *)(v21 + 2000);
    LOWORD(v27) = *(_WORD *)(v21 + 1998);
    LOWORD(v26) = *(_WORD *)(v21 + 1996);
    LODWORD(Handleb) = v2;
    McTemplateK0pqhhh(
      v19,
      &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_WARNING,
      (const GUID *)(v21 + 1516),
      *(_QWORD *)(v21 + 24),
      Handleb,
      v26,
      v27,
      v28);
  }
  if ( v1 )
  {
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v22,
      "DRIPS SR Tag",
      11191LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 424), "DRIPS SR Tag", 0x20u);
}
