/*
 * XREFs of Controller_WdfEvtDeviceAdd @ 0x1C0056AA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Controller_AddControllerToGlobalControllerList @ 0x1C0006FC0 (Controller_AddControllerToGlobalControllerList.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C0009194 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Device_IsSecureDevice @ 0x1C000CF80 (Device_IsSecureDevice.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Etw_ControllerCreate @ 0x1C0035ED8 (Etw_ControllerCreate.c)
 *     Command_Create @ 0x1C0052008 (Command_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C00526FC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C0052998 (Controller_ConfigureSxWakeSettings.c)
 *     Controller_Create @ 0x1C0052A48 (Controller_Create.c)
 *     Controller_CreateWdfDevice @ 0x1C0053594 (Controller_CreateWdfDevice.c)
 *     Controller_ExecuteDSM @ 0x1C0053F00 (Controller_ExecuteDSM.c)
 *     DeviceSlot_Create @ 0x1C00575EC (DeviceSlot_Create.c)
 *     Interrupter_Create @ 0x1C0058BC8 (Interrupter_Create.c)
 *     IoControl_Create @ 0x1C005A088 (IoControl_Create.c)
 *     Register_Create @ 0x1C005A1EC (Register_Create.c)
 *     RootHub_Create @ 0x1C005B2A0 (RootHub_Create.c)
 *     Wmi_Create @ 0x1C005C7E8 (Wmi_Create.c)
 *     IntelPptFilter_Create @ 0x1C005C9E4 (IntelPptFilter_Create.c)
 *     SecureChannel_Create @ 0x1C005D808 (SecureChannel_Create.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceAdd(__int64 a1, __int64 a2)
{
  __m128i *v3; // rdi
  int v4; // eax
  int WdfDevice; // ebx
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v23; // [rsp+28h] [rbp-21h]
  int v24; // [rsp+28h] [rbp-21h]
  int v25; // [rsp+28h] [rbp-21h]
  int v26; // [rsp+28h] [rbp-21h]
  int v27; // [rsp+28h] [rbp-21h]
  int v28; // [rsp+28h] [rbp-21h]
  int v29; // [rsp+28h] [rbp-21h]
  int v30; // [rsp+28h] [rbp-21h]
  int v31; // [rsp+28h] [rbp-21h]
  int v32; // [rsp+28h] [rbp-21h]
  int v33; // [rsp+28h] [rbp-21h]
  int v34[2]; // [rsp+30h] [rbp-19h] BYREF
  int v35[2]; // [rsp+38h] [rbp-11h] BYREF
  int v36; // [rsp+40h] [rbp-9h] BYREF
  __m128i *v37; // [rsp+48h] [rbp-1h] BYREF
  __int64 v38; // [rsp+50h] [rbp+7h] BYREF
  int v39; // [rsp+58h] [rbp+Fh]
  int v40; // [rsp+5Ch] [rbp+13h]
  __int64 v41; // [rsp+60h] [rbp+17h]
  char v42; // [rsp+68h] [rbp+1Fh]
  int v43; // [rsp+6Ch] [rbp+23h]
  char v44; // [rsp+70h] [rbp+27h]

  v38 = 48LL;
  v37 = 0LL;
  v44 = 0;
  v3 = 0LL;
  v41 = 0LL;
  v42 = 0;
  v43 = 16;
  v39 = 1024;
  v40 = 200;
  imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v38, v34);
  v4 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C004C8E8)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, a2);
  WdfDevice = v4;
  if ( v4 >= 0 )
  {
    WdfDevice = Controller_CreateWdfDevice(a2, *(__int64 *)v34, v35, (unsigned int *)&v36);
    if ( WdfDevice < 0 )
      return (unsigned int)WdfDevice;
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     *(_QWORD *)v35,
                     off_1C004B408);
    if ( Device_IsSecureDevice((__int64)v6) && (v8 = SecureChannel_Create(v7, v7 + 40), WdfDevice = v8, v8 < 0) )
    {
      v24 = v8;
      WPP_RECORDER_SF_d(*(__int64 *)v34, 2u, 4u, 0xBu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v24);
    }
    else
    {
      v9 = Controller_Create(*(__int64 *)v35, *(__int64 *)v34, v36, (__int64 *)&v37);
      WdfDevice = v9;
      if ( v9 >= 0 )
      {
        v3 = v37;
        v10 = WdfFunctions_01023;
        v6[1] = v37;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, const char *))(v10 + 1640))(
          WdfDriverGlobals,
          v3->m128i_i64[1],
          Controller_WdfEvtDeviceAdd,
          324LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
        v11 = IoControl_Create(*(_QWORD *)v35, v3, &v3[5]);
        WdfDevice = v11;
        if ( v11 >= 0 )
        {
          v12 = Register_Create(v3, &v3[5].m128i_u64[1]);
          WdfDevice = v12;
          if ( v12 >= 0 )
          {
            v13 = Interrupter_Create(*(_QWORD *)v35, v3, &v3[8]);
            WdfDevice = v13;
            if ( v13 >= 0 )
            {
              v15 = DeviceSlot_Create(v14, v3, &v3[8].m128i_u64[1]);
              WdfDevice = v15;
              if ( v15 >= 0 )
              {
                v17 = Command_Create(v16, (__int64)v3, v3[9].m128i_i64);
                WdfDevice = v17;
                if ( v17 >= 0 )
                {
                  v18 = &v3[10].m128i_i64[1];
                  if ( (v3[17].m128i_i64[0] & 0x800000) != 0 )
                  {
                    WdfDevice = IntelPptFilter_Create(*(_QWORD *)v35, v3, &v3[10].m128i_u64[1]);
                  }
                  else
                  {
                    *v18 = 0LL;
                    WdfDevice = 0;
                  }
                  if ( WdfDevice >= 0 )
                  {
                    v19 = RootHub_Create(v18, v3, &v3[9].m128i_u64[1]);
                    WdfDevice = v19;
                    if ( v19 >= 0 )
                    {
                      v20 = Wmi_Create(*(_QWORD *)v35, v3, &v3[10]);
                      WdfDevice = v20;
                      if ( v20 >= 0 )
                      {
                        *v6 = g_UsbXhciTriageInfo;
                        Controller_ConfigureS0IdleSettings(v3->m128i_i64);
                        Controller_ConfigureSxWakeSettings(v3->m128i_i64);
                        KeInitializeSpinLock(&v3[2].m128i_u64[1]);
                        v3[3].m128i_i64[1] = (__int64)v3[3].m128i_i64;
                        v3[3].m128i_i64[0] = (__int64)v3[3].m128i_i64;
                        v3[4].m128i_i32[0] = 0;
                        v3[20].m128i_i32[2] = 5;
                        Controller_AddControllerToGlobalControllerList((__int64)v3);
                        Etw_ControllerCreate(v21, (__int64)v3);
                        Controller_QueryControllerCapabilitiesFromACPI((__int64)v3);
                        if ( (_mm_srli_si128(v3[17], 8).m128i_u8[0] & 1) != 0 )
                          Controller_ExecuteDSM(v3->m128i_i64, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1, 1, 0LL, 0);
                      }
                      else
                      {
                        v33 = v20;
                        WPP_RECORDER_SF_d(
                          *(__int64 *)v34,
                          2u,
                          4u,
                          0x14u,
                          (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
                          v33);
                      }
                    }
                    else
                    {
                      v32 = v19;
                      WPP_RECORDER_SF_d(
                        *(__int64 *)v34,
                        2u,
                        4u,
                        0x13u,
                        (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
                        v32);
                    }
                  }
                  else
                  {
                    v31 = WdfDevice;
                    WPP_RECORDER_SF_d(
                      *(__int64 *)v34,
                      2u,
                      4u,
                      0x12u,
                      (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
                      v31);
                  }
                }
                else
                {
                  v30 = v17;
                  WPP_RECORDER_SF_d(
                    *(__int64 *)v34,
                    2u,
                    4u,
                    0x11u,
                    (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
                    v30);
                }
              }
              else
              {
                v29 = v15;
                WPP_RECORDER_SF_d(
                  *(__int64 *)v34,
                  2u,
                  4u,
                  0x10u,
                  (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
                  v29);
              }
            }
            else
            {
              v28 = v13;
              WPP_RECORDER_SF_d(
                *(__int64 *)v34,
                2u,
                4u,
                0xFu,
                (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
                v28);
            }
          }
          else
          {
            v27 = v12;
            WPP_RECORDER_SF_d(
              *(__int64 *)v34,
              2u,
              4u,
              0xEu,
              (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
              v27);
          }
        }
        else
        {
          v26 = v11;
          WPP_RECORDER_SF_d(
            *(__int64 *)v34,
            2u,
            4u,
            0xDu,
            (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
            v26);
        }
      }
      else
      {
        v25 = v9;
        WPP_RECORDER_SF_d(*(__int64 *)v34, 2u, 4u, 0xCu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v25);
        v3 = v37;
      }
    }
  }
  else
  {
    v23 = v4;
    WPP_RECORDER_SF_d(*(__int64 *)v34, 2u, 4u, 0xAu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v23);
  }
  if ( WdfDevice < 0 && v3 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1664))(
      WdfDriverGlobals,
      v3->m128i_i64[1]);
  return (unsigned int)WdfDevice;
}
