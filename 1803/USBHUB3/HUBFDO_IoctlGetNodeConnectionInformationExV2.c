/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C0069268
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0069CB0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000A7AC (McTemplateK0pqq.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C000A824 (WPP_RECORDER_SF_Dd.c)
 *     HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher @ 0x1C0029A10 (HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher.c)
 *     HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher @ 0x1C0029A54 (HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002BC84 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00674F4 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionInformationExV2(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  __int64 v13; // rdx
  _QWORD *i; // rax
  _QWORD *v15; // rbx
  int ActivityIdIrp; // eax
  __int64 v17; // rcx
  const GUID *v18; // r8
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // r11
  char IsDeviceSuperSpeedPlusCapableOrHigher; // al
  __int64 v24; // r11
  __int64 v25; // r10
  _DWORD *v26; // rbx
  __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+28h] [rbp-40h]
  void *v29; // [rsp+40h] [rbp-28h] BYREF
  char v30; // [rsp+48h] [rbp-20h] BYREF

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v8,
         off_1C005B0C0);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v29,
          0LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters(v9, 0x10uLL, a4, v29, 0x10uLL, a3);
    if ( v11 >= 0 )
    {
      if ( *((_DWORD *)v29 + 1) >= 0x10u )
      {
        v7 = *(unsigned __int16 *)v29;
        v12 = *((_DWORD *)v29 + 2);
        memset(v29, 0, a3);
        *(_DWORD *)v29 = v7;
        if ( (v12 & 4) != 0 )
        {
          *(_DWORD *)v29 = v7;
          *((_DWORD *)v29 + 1) = 16;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
            WdfDriverGlobals,
            a2,
            16LL);
          for ( i = *(_QWORD **)(v9 + 2352); ; i = (_QWORD *)*i )
          {
            v15 = i - 31;
            if ( (_QWORD *)(v9 + 2352) == i )
              break;
            if ( *((_WORD *)v15 + 100) == (_WORD)v7 )
            {
              if ( i == (_QWORD *)248 )
                break;
              v20 = *((_DWORD *)v15 + 52);
              if ( v20 == 512 )
              {
                *((_DWORD *)v29 + 2) |= 1u;
                if ( *(_DWORD *)(v9 + 248) == 2 || *(_DWORD *)(v9 + 2208) == 4 )
                  *((_DWORD *)v29 + 2) |= 2u;
              }
              else if ( v20 == 768 )
              {
                *((_DWORD *)v29 + 2) |= 4u;
              }
              else
              {
                LODWORD(v28) = *((_DWORD *)v15 + 52);
                WPP_RECORDER_SF_Dd(
                  *(_QWORD *)(v9 + 2512),
                  v13,
                  4u,
                  0x2Fu,
                  (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids,
                  v28,
                  v7);
              }
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
                WdfDriverGlobals,
                *(_QWORD *)(v9 + 16));
              v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v9 + 16),
                      0LL,
                      1LL);
              if ( v21 )
              {
                do
                {
                  if ( *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                               WdfDriverGlobals,
                                               v21,
                                               off_1C005B070)
                                           + 48) == v7 )
                    break;
                  v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015
                                                                                                 + 1080))(
                          WdfDriverGlobals,
                          *(_QWORD *)(v9 + 16),
                          v21,
                          1LL);
                }
                while ( v21 );
                if ( v21 )
                {
                  v22 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                      WdfDriverGlobals,
                                      v21,
                                      off_1C005B070)
                                  + 24);
                  if ( v22 )
                  {
                    if ( (*(_DWORD *)(v22 + 1632) & 0x800) != 0 )
                      *((_DWORD *)v29 + 3) |= 2u;
                    IsDeviceSuperSpeedPlusCapableOrHigher = HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher(v22);
                    *(_DWORD *)(v25 + 12) = *(_DWORD *)(v25 + 12) & 0xFFFFFFF7 | (IsDeviceSuperSpeedPlusCapableOrHigher != 0
                                                                                ? 8
                                                                                : 0);
                    if ( *((_DWORD *)v15 + 52) == 768 )
                    {
                      *((_DWORD *)v29 + 3) |= 1u;
                      v26 = v29;
                      v26[3] = v26[3] & 0xFFFFFFFB | (HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher(v24) ? 4 : 0);
                    }
                  }
                }
              }
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
                WdfDriverGlobals,
                *(_QWORD *)(v9 + 16));
              goto LABEL_11;
            }
          }
        }
      }
      v11 = -1073741811;
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v9 + 2512),
      2u,
      3u,
      0x2Eu,
      (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids,
      v10);
  }
LABEL_11:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
    {
      v18 = (const GUID *)&v30;
      LODWORD(v28) = v11;
      LODWORD(v27) = v7;
      if ( ActivityIdIrp < 0 )
        v18 = 0LL;
      McTemplateK0pqq(
        v17,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_EX_V2_COMPLETE,
        v18,
        *(_QWORD *)(v9 + 240),
        v27,
        v28);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v11);
}
