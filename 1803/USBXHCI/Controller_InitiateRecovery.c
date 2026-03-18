/*
 * XREFs of Controller_InitiateRecovery @ 0x1C00083F8
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x1C000A110 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Command_FailAllCommands @ 0x1C00037AC (Command_FailAllCommands.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0006708 (CommonBuffer_FlushWorkItems.c)
 *     Controller_DisableController @ 0x1C0007A24 (Controller_DisableController.c)
 *     Controller_InternalReset @ 0x1C00086D4 (Controller_InternalReset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C000F528 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     UsbDevice_ControllerGone @ 0x1C00311DC (UsbDevice_ControllerGone.c)
 */

__int64 __fastcall Controller_InitiateRecovery(_QWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v7; // edx
  bool i; // zf
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rbp
  unsigned int j; // esi
  __int64 v13; // rdx
  int v14; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+44h] [rbp-54h]
  __int64 v16; // [rsp+4Ch] [rbp-4Ch]
  int v17; // [rsp+54h] [rbp-44h]
  int v18; // [rsp+58h] [rbp-40h]

  result = WPP_RECORDER_SF_(a1[9], 4u, 4u, 0xE0u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
  if ( (a3 & 2) != 0 )
  {
    result = *((unsigned int *)a1 + 84);
    if ( (unsigned int)result > 0xA )
    {
      a3 |= 4u;
      LOBYTE(v7) = 1;
      result = WPP_RECORDER_SF_dd(
                 a1[9],
                 v7,
                 4,
                 225,
                 (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
                 result,
                 10);
    }
  }
  for ( i = a3 == 0; !i; i = a3 == 0 )
  {
    if ( (a3 & 0x18) != 0 )
    {
      v9 = *(_DWORD *)(a2 + 84);
      if ( (v9 & 2) == 0 )
      {
        Command_FailAllCommands(a1[18]);
        KeFlushQueuedDpcs();
        v10 = (_QWORD *)a1[15];
        if ( v10 )
          CommonBuffer_FlushWorkItems(v10);
        v11 = a1[17];
        for ( j = 1; j <= *(_DWORD *)(v11 + 96); ++j )
        {
          if ( *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(v11) + 8LL * j) )
            UsbDevice_ControllerGone();
        }
        KeFlushQueuedDpcs();
        ((void (__fastcall *)(_QWORD, _QWORD))qword_1C004C860)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, a1[1]);
        if ( (a3 & 8) != 0 )
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 696))(
            WdfDriverGlobals,
            *a1,
            2LL);
        *(_DWORD *)(a2 + 84) |= 2u;
        v9 = *(_DWORD *)(a2 + 84);
      }
      if ( (v9 & 4) == 0 && (a3 & 0x10) != 0 )
      {
        WPP_RECORDER_SF_(a1[9], 4u, 4u, 0xE2u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
        v13 = *a1;
        v15 = 0x200000002LL;
        v16 = 0x200000002LL;
        v14 = 28;
        v18 = 2;
        v17 = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01023 + 232))(
          WdfDriverGlobals,
          v13,
          &v14);
        *(_DWORD *)(a2 + 84) |= 4u;
      }
      result = 4294967264LL;
    }
    else if ( (a3 & 4) != 0 )
    {
      Controller_DisableController((__int64)a1);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 696))(
        WdfDriverGlobals,
        *a1,
        2LL);
      result = 4294967288LL;
    }
    else if ( (a3 & 1) != 0 )
    {
      Controller_InternalReset(a1);
      result = 4294967294LL;
    }
    else if ( (a3 & 2) != 0 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD))qword_1C004C850)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, a1[1]);
      result = 4294967293LL;
    }
    else
    {
      if ( (a3 & 0x20) == 0 )
      {
        LOBYTE(v7) = 2;
        return WPP_RECORDER_SF_d(a1[9], v7, 4, 227, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, a3);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 696))(
        WdfDriverGlobals,
        *a1,
        2LL);
      result = 4294967263LL;
    }
    a3 &= result;
  }
  return result;
}
