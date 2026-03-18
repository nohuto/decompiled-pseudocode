/*
 * XREFs of HUBFDO_IoctlGetHubCapsEx @ 0x1C0068124
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0069D90 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000A7EC (McTemplateK0pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002AEAC (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0067564 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetHubCapsEx(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // edi
  int ActivityIdIrp; // eax
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+28h] [rbp-60h]
  void *v17; // [rsp+30h] [rbp-58h] BYREF
  char v18; // [rsp+38h] [rbp-50h] BYREF

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
         &v17,
         0LL);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v10 = HUBFDO_IoctlValidateParameters(v8, 0LL, a4, 0LL, 4uLL, a3);
    if ( v10 >= 0 )
    {
      memset(v17, 0, a3);
      if ( (*(_DWORD *)(v8 + 2488) & 2) != 0 )
        *(_DWORD *)v17 |= 1u;
      else
        *(_DWORD *)v17 &= ~1u;
      if ( (*(_DWORD *)(v8 + 40) & 2) != 0 )
      {
        *(_DWORD *)v17 |= 8u;
        *(_DWORD *)v17 |= 4u;
      }
      if ( !*(_BYTE *)(v8 + 232) || *(_DWORD *)(v8 + 248) == 2 )
        *(_DWORD *)v17 |= 2u;
      if ( !*(_BYTE *)(v8 + 232) )
        *(_DWORD *)v17 |= 0x10u;
      if ( (*(_DWORD *)(v8 + 40) & 0x100) != 0 )
        *(_DWORD *)v17 |= 0x20u;
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2512),
      2u,
      3u,
      0x27u,
      (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids,
      v9);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
    {
      v13 = (const GUID *)&v18;
      LODWORD(v16) = v10;
      LODWORD(v15) = 0;
      if ( ActivityIdIrp < 0 )
        v13 = 0LL;
      McTemplateK0pqq(
        v12,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_HUB_CAPABILITIES_EX_COMPLETE,
        v13,
        *(_QWORD *)(v8 + 240),
        v15,
        v16);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10,
           4LL);
}
