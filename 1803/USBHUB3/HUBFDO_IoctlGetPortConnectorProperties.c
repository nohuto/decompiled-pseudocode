/*
 * XREFs of HUBFDO_IoctlGetPortConnectorProperties @ 0x1C0068EA8
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0069CB0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000A7AC (McTemplateK0pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002BC84 (HUBMISC_GetActivityIdIrp.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1C002BCAC (HUBMISC_StripSymbolicNamePrefix.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0039BC0 (memmove.c)
 *     memset @ 0x1C0039F00 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00674F4 (HUBFDO_IoctlValidateParameters.c)
 *     HUBCONNECTOR_GetCompanionPort @ 0x1C006D46C (HUBCONNECTOR_GetCompanionPort.c)
 */

__int64 __fastcall HUBFDO_IoctlGetPortConnectorProperties(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // r12d
  __int64 v8; // rax
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // esi
  __int16 v12; // bx
  _QWORD *i; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rax
  PWDF_DRIVER_GLOBALS v16; // rcx
  int ActivityIdIrp; // eax
  __int64 v18; // rcx
  size_t *v19; // r8
  int v21; // eax
  __int64 v22; // rax
  __int64 CompanionPort; // rax
  unsigned __int16 *v24; // rcx
  _WORD *v25; // rax
  __int16 v26; // r10
  size_t v27; // r8
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-38h]
  __int64 v31; // [rsp+28h] [rbp-30h]
  void *v32; // [rsp+30h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+38h] [rbp-20h] BYREF

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
          &v32,
          0LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters((__int64)v9, 0x12uLL, a4, v32, 0x12uLL, a3);
    if ( v11 < 0 )
      goto LABEL_10;
    v7 = *(unsigned __int16 *)v32;
    v12 = *((_WORD *)v32 + 6);
    memset(v32, 0, a3);
    *(_DWORD *)v32 = v7;
    *((_WORD *)v32 + 6) = v12;
    *((_DWORD *)v32 + 1) = 18;
    for ( i = (_QWORD *)v9[294]; ; i = (_QWORD *)*i )
    {
      v14 = i - 31;
      if ( v9 + 294 == i )
        goto LABEL_8;
      if ( *((_WORD *)v14 + 100) == (_WORD)v7 )
        break;
    }
    if ( i == (_QWORD *)248 )
    {
LABEL_8:
      v15 = WdfFunctions_01015;
      v11 = -1073741811;
      v16 = WdfDriverGlobals;
    }
    else
    {
      v21 = *((_DWORD *)v14 + 51);
      if ( (v21 & 8) != 0 )
      {
        *((_DWORD *)v32 + 2) |= 2u;
        v21 = *((_DWORD *)v14 + 51);
      }
      if ( (v21 & 1) != 0 )
      {
        *((_DWORD *)v32 + 2) |= 1u;
        v21 = *((_DWORD *)v14 + 51);
      }
      if ( (v21 & 0x200) != 0 )
        *((_DWORD *)v32 + 2) |= 4u;
      if ( (unsigned __int8)(*((_BYTE *)v14 + 1341) - 8) <= 2u )
        *((_DWORD *)v32 + 2) |= 8u;
      v15 = WdfFunctions_01015;
      v16 = WdfDriverGlobals;
      if ( *((_WORD *)v32 + 6) <= 1u )
      {
        v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                WdfDriverGlobals->Driver,
                off_1C005B110);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(v22 + 56),
          0LL);
        CompanionPort = HUBCONNECTOR_GetCompanionPort(v14, *((unsigned __int16 *)v32 + 6));
        if ( CompanionPort )
        {
          v24 = (unsigned __int16 *)(*(_QWORD *)CompanionPort + 2536LL);
          *((_WORD *)v32 + 7) = *(_WORD *)(CompanionPort + 200);
          v25 = HUBMISC_StripSymbolicNamePrefix(v24, Size);
          if ( v25 )
          {
            v27 = Size[0];
            *((_DWORD *)v32 + 1) = LODWORD(Size[0]) + 18;
            if ( a3 - 18 >= v27 )
            {
              memmove((char *)v32 + 16, v25, v27);
              v28 = a3;
LABEL_32:
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
                WdfDriverGlobals,
                a2,
                v28);
              v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C005B110);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                WdfDriverGlobals,
                *(_QWORD *)(v29 + 56));
              goto LABEL_10;
            }
          }
          *((_WORD *)v32 + 8) = v26;
        }
        v28 = 18LL;
        goto LABEL_32;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v15 + 2200))(v16, a2, 18LL);
    goto LABEL_10;
  }
  WPP_RECORDER_SF_d(v9[314], 2u, 3u, 0x2Du, (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids, v10);
LABEL_10:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
    {
      v19 = Size;
      LODWORD(v31) = v11;
      LODWORD(v30) = v7;
      if ( ActivityIdIrp < 0 )
        v19 = 0LL;
      McTemplateK0pqq(
        v18,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_PORT_CONNECTOR_PROPERTIES_COMPLETE,
        (const GUID *)v19,
        v9[30],
        v30,
        v31);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v11);
}
