/*
 * XREFs of HUBFDO_SetupHubPostErrataQuery @ 0x1C000C46C
 * Callers:
 *     HUBHSM_SettingUpHubPostErrataQuery @ 0x1C0007F80 (HUBHSM_SettingUpHubPostErrataQuery.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C000136C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002A814 (HUBMISC_VerifierDbgBreak.c)
 *     USBD_CreateHandle @ 0x1C00368FC (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C0036CFC (USBD_QueryUsbCapability.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBFDO_SetupHubPostErrataQuery(char *Context)
{
  __int64 v1; // r14
  __int64 v3; // rax
  struct _DEVICE_OBJECT *v4; // rbx
  struct _DEVICE_OBJECT *v5; // rax
  ULONG v6; // r8d
  ULONG v7; // r9d
  NTSTATUS UsbCapability; // esi
  USBD_HANDLE v9; // rbx
  __int128 v10; // xmm0
  USBD_HANDLE v11; // rbx
  void (__fastcall *v12)(_QWORD); // rax
  PWDF_DRIVER_GLOBALS v13; // rcx
  int v14; // eax
  bool v15; // zf
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  int v21; // ebx
  __int64 result; // rax
  struct _DEVICE_OBJECT *v23; // rax
  NTSTATUS v24; // eax
  int v25; // eax
  ULONG *USBDHandle; // [rsp+20h] [rbp-99h]
  ULONG *USBDHandlea; // [rsp+20h] [rbp-99h]
  ULONG *USBDHandleb; // [rsp+20h] [rbp-99h]
  USBD_HANDLE *USBDHandlec; // [rsp+20h] [rbp-99h]
  __int64 v30; // [rsp+28h] [rbp-91h]
  USBD_HANDLE v31; // [rsp+30h] [rbp-89h] BYREF
  _QWORD v32[10]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v33; // [rsp+90h] [rbp-29h] BYREF
  int v34; // [rsp+98h] [rbp-21h]
  int v35; // [rsp+9Ch] [rbp-1Dh]
  __int16 v36; // [rsp+A0h] [rbp-19h]
  __int16 v37; // [rsp+A2h] [rbp-17h]
  _DWORD v38[10]; // [rsp+A8h] [rbp-11h] BYREF
  UCHAR OutputBuffer[16]; // [rsp+D0h] [rbp+17h] BYREF

  v1 = *((_QWORD *)Context + 2);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v1);
  v4 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                  WdfDriverGlobals,
                                  v3);
  v5 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                  WdfDriverGlobals,
                                  v1);
  UsbCapability = USBD_CreateHandle(v5, v4, v6, v7, &v31);
  if ( UsbCapability < 0 )
    goto LABEL_14;
  v9 = v31;
  if ( USBD_QueryUsbCapability(v31, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 4u, (PUCHAR)Context + 156, USBDHandle) < 0 )
    *((_DWORD *)Context + 39) = 0;
  if ( USBD_QueryUsbCapability(v9, &GUID_USB_CAPABILITY_MICROSOFT_MAUSBHOST, 0x10u, OutputBuffer, USBDHandlea) >= 0 )
  {
    v10 = *(_OWORD *)OutputBuffer;
    Context[193] = 1;
    *(_OWORD *)(Context + 756) = v10;
  }
  UsbCapability = USBD_QueryUsbCapability(v9, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0, 0LL, USBDHandleb);
  *((_BYTE *)v9 + 225) = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 55, 0xFFFFFFFF) <= 1 )
  {
    if ( *((_BYTE *)v9 + 225) )
    {
      v11 = v31;
      v12 = (void (__fastcall *)(_QWORD))*((_QWORD *)v31 + 14);
      if ( v12 )
        v12(*((_QWORD *)v31 + 6));
      ExFreePoolWithTag(v11, *((_DWORD *)v11 + 16));
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", v31);
    }
  }
  if ( UsbCapability < 0 )
  {
LABEL_14:
    _InterlockedOr((volatile signed __int32 *)Context + 10, 0x80u);
    WPP_RECORDER_SF_d(
      *((_QWORD *)Context + 314),
      2u,
      3u,
      0x37u,
      (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids,
      UsbCapability);
  }
  if ( (*((_DWORD *)Context + 10) & 0x80u) == 0 && (*((_DWORD *)Context + 11) & 1) == 0 && Context[252] )
  {
    memset(v38, 0, 0x24uLL);
    v13 = WdfDriverGlobals;
    v38[3] = 50;
    *((_DWORD *)Context + 642) = 50;
    v14 = 0;
    v38[0] = 36;
    v15 = Context[232] == 0;
    v38[6] = 2;
    if ( v15 )
      v14 = 2;
    v38[8] = 2;
    v38[7] = v14;
    v38[1] = 2;
    v38[4] = 2;
    v38[5] = 2;
    v38[2] = 3;
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(v13, v1, v38);
    v17 = v16;
    if ( v16 >= 0 )
    {
      _InterlockedOr((volatile signed __int32 *)Context + 10, 0x4000000u);
      v23 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                       WdfDriverGlobals,
                                       v1);
      v24 = PoRegisterPowerSettingCallback(
              v23,
              &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT,
              (PPOWER_SETTING_CALLBACK)HUBFDO_PowerSettingCallback,
              Context,
              (PVOID *)Context + 320);
      if ( v24 < 0 )
      {
        LODWORD(v30) = v24;
        WPP_RECORDER_SF_d(
          *((_QWORD *)Context + 314),
          2u,
          3u,
          0x3Au,
          (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids,
          v30);
        *((_QWORD *)Context + 320) = 0LL;
      }
      if ( !Context[232] )
      {
        memset(v32, 0, 0x48uLL);
        v32[1] = HUBFDO_EvtPostPoFxRegisterDevice;
        LODWORD(v32[0]) = 72;
        v32[2] = HUBFDO_EvtPrePoFxUnregisterDevice;
        v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 3400))(
                WdfDriverGlobals,
                v1,
                v32);
        v21 = v25;
        if ( v25 < 0 )
        {
          LODWORD(v30) = v25;
          WPP_RECORDER_SF_d(
            *((_QWORD *)Context + 314),
            2u,
            3u,
            0x3Bu,
            (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids,
            v30);
LABEL_29:
          result = 2045LL;
          if ( v21 < 0 )
            return result;
          return 2053LL;
        }
      }
    }
    else
    {
      LODWORD(v30) = v16;
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 314),
        2u,
        3u,
        0x38u,
        (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids,
        v30);
      if ( v17 == -1073741101 && *((_DWORD *)Context + 62) == 3 )
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)Context + 314),
          3u,
          3u,
          0x39u,
          (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids);
        if ( (*((_DWORD *)Context + 646) & 8) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierNoSelectiveSuspendSupport", Context + 1256);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x80000) != 0 )
        {
          LODWORD(USBDHandlec) = -1073741101;
          McTemplateK0pq(
            v18,
            &USBHUB3_ETW_EVENT_HUB_SELECTIVE_SUSPEND_NOT_SUPPORTED,
            (const GUID *)(Context + 2404),
            *((_QWORD *)Context + 30),
            USBDHandlec);
        }
      }
    }
  }
  v35 = 0;
  v37 = 0;
  v19 = WdfFunctions_01015;
  *((_DWORD *)Context + 648) = 5;
  v33 = 0x500000014LL;
  v36 = 257;
  v34 = 1;
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(v19 + 376))(WdfDriverGlobals, v1, &v33);
  if ( v20 < 0 )
  {
    LODWORD(v30) = v20;
    WPP_RECORDER_SF_d(
      *((_QWORD *)Context + 314),
      2u,
      3u,
      0x3Cu,
      (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids,
      v30);
    v21 = 0;
    goto LABEL_29;
  }
  return 2053LL;
}
