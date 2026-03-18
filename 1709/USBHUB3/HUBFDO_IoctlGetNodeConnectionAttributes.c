/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0067D3C
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

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionAttributes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // esi
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  int v11; // ebx
  __int64 i; // rcx
  __int64 v13; // rcx
  int ActivityIdIrp; // eax
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+28h] [rbp-60h]
  void *v20; // [rsp+30h] [rbp-58h] BYREF
  char v21; // [rsp+38h] [rbp-50h] BYREF

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_1C005B0C0);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v20,
          0LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters((__int64)v9, 4uLL, a4, v20, 0xCuLL, a3);
    if ( v11 >= 0 )
    {
      v7 = *(unsigned __int16 *)v20;
      memset(v20, 0, a3);
      *(_DWORD *)v20 = v7;
      *((_DWORD *)v20 + 2) = 0;
      for ( i = v9[294]; ; i = *(_QWORD *)(v13 + 248) )
      {
        v13 = i - 248;
        if ( v9 + 294 == (_QWORD *)(v13 + 248) )
          goto LABEL_8;
        if ( *(unsigned __int16 *)(v13 + 200) == v7 )
          break;
      }
      if ( !v13 )
      {
LABEL_8:
        *((_DWORD *)v20 + 1) = 3;
        goto LABEL_9;
      }
      *((_DWORD *)v20 + 1) = *(_DWORD *)(v13 + 1424);
    }
  }
  else
  {
    WPP_RECORDER_SF_d(v9[314], 2u, 3u, 0x25u, (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids, v10);
  }
LABEL_9:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
    {
      v16 = (const GUID *)&v21;
      LODWORD(v19) = v11;
      LODWORD(v18) = v7;
      if ( ActivityIdIrp < 0 )
        v16 = 0LL;
      McTemplateK0pqq(
        v15,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_ATTRIBUTES_COMPLETE,
        v16,
        v9[30],
        v18,
        v19);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v11,
           12LL);
}
