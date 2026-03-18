/*
 * XREFs of HUBFDO_IoctlGetHubInformationEx @ 0x1C0068CC4
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0069D90 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0pqq @ 0x1C000A7EC (McTemplateK0pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002AEAC (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0067564 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetHubInformationEx(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // edi
  char *v11; // rcx
  char *v12; // rcx
  int ActivityIdIrp; // eax
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+28h] [rbp-60h]
  void *v19; // [rsp+30h] [rbp-58h] BYREF
  char v20; // [rsp+38h] [rbp-50h] BYREF

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_1C005B0C0);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015
                                                                                                  + 2160))(
         WdfDriverGlobals,
         a2,
         a3,
         &v19,
         0LL);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v10 = HUBFDO_IoctlValidateParameters(v8, 0LL, a4, 0LL, 0x4DuLL, a3);
    if ( v10 >= 0 )
    {
      memset(v19, 0, a3);
      *((_WORD *)v19 + 2) = *(_WORD *)(v8 + 48);
      switch ( *(_DWORD *)(v8 + 2208) )
      {
        case 1:
          *(_DWORD *)v19 = 2;
          v12 = (char *)v19;
          *(_OWORD *)((char *)v19 + 6) = *(_OWORD *)(v8 + 1172);
          *(_OWORD *)(v12 + 22) = *(_OWORD *)(v8 + 1188);
          *(_OWORD *)(v12 + 38) = *(_OWORD *)(v8 + 1204);
          *(_OWORD *)(v12 + 54) = *(_OWORD *)(v8 + 1220);
          *(_DWORD *)(v12 + 70) = *(_DWORD *)(v8 + 1236);
          *((_WORD *)v12 + 37) = *(_WORD *)(v8 + 1240);
          v12[76] = *(_BYTE *)(v8 + 1242);
          break;
        case 2:
          *(_DWORD *)v19 = 3;
          v11 = (char *)v19;
          *(_QWORD *)((char *)v19 + 6) = *(_QWORD *)(v8 + 1172);
          *(_DWORD *)(v11 + 14) = *(_DWORD *)(v8 + 1180);
          break;
        case 4:
          *(_DWORD *)v19 = 1;
          break;
        default:
          WPP_RECORDER_SF_(
            *(_QWORD *)(v8 + 2512),
            2u,
            4u,
            0x2Cu,
            (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids);
          break;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2512),
      2u,
      3u,
      0x2Bu,
      (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids,
      v9);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
    {
      v15 = (const GUID *)&v20;
      LODWORD(v18) = v10;
      LODWORD(v17) = 0;
      if ( ActivityIdIrp < 0 )
        v15 = 0LL;
      McTemplateK0pqq(
        v14,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_HUB_INFORMATION_EX_COMPLETE,
        v15,
        *(_QWORD *)(v8 + 240),
        v17,
        v18);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10,
           77LL);
}
