/*
 * XREFs of Controller_InitiateRecovery @ 0x1C0011130
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x1C0012A10 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0006FEC (CommonBuffer_FlushWorkItems.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Command_FailAllCommands @ 0x1C000C980 (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x1C0010918 (Controller_DisableController.c)
 *     Controller_InternalReset @ 0x1C0011414 (Controller_InternalReset.c)
 *     UsbDevice_ControllerGone @ 0x1C003369C (UsbDevice_ControllerGone.c)
 */

char __fastcall Controller_InitiateRecovery(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v6; // eax
  int v7; // r15d
  int v8; // ebx
  __int64 v9; // rsi
  unsigned int i; // ebp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // [rsp+28h] [rbp-80h]
  int v15; // [rsp+40h] [rbp-68h] BYREF
  __int64 v16; // [rsp+44h] [rbp-64h]
  __int64 v17; // [rsp+4Ch] [rbp-5Ch]
  int v18; // [rsp+54h] [rbp-54h]
  int v19; // [rsp+58h] [rbp-50h]

  LOBYTE(v6) = WPP_RECORDER_SF_(a1[9], 4u, 4u, 0xDFu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
  if ( (a3 & 2) != 0 )
  {
    v6 = *((_DWORD *)a1 + 84);
    if ( v6 > 0xA )
    {
      a3 |= 4u;
      LOBYTE(v6) = WPP_RECORDER_SF_dd(
                     a1[9],
                     1u,
                     4u,
                     0xE0u,
                     (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
                     *((_DWORD *)a1 + 84),
                     10);
    }
  }
  for ( ; a3; a3 = v7 & v8 )
  {
    v7 = a3;
    if ( (a3 & 0x18) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 84) & 2) == 0 )
      {
        Command_FailAllCommands(a1[18]);
        KeFlushQueuedDpcs();
        CommonBuffer_FlushWorkItems((_QWORD *)a1[15]);
        v9 = a1[17];
        for ( i = 1; i <= *(_DWORD *)(v9 + 96); ++i )
        {
          if ( *(_BYTE *)(v9 + 80) )
            v11 = *(_QWORD *)(v9 + 24);
          else
            v11 = *(_QWORD *)(v9 + 72);
          if ( *(_QWORD *)(v11 + 8LL * i) )
            UsbDevice_ControllerGone();
        }
        KeFlushQueuedDpcs();
        ((void (__fastcall *)(_QWORD, _QWORD))qword_1C004F860)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, a1[1]);
        if ( (a3 & 8) != 0 )
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 696))(
            WdfDriverGlobals,
            *a1,
            2LL);
        *(_DWORD *)(a2 + 84) |= 2u;
      }
      LOBYTE(v6) = (a3 & 0x10) != 0;
      if ( (((*(_BYTE *)(a2 + 84) & 4) == 0) & (unsigned __int8)v6) != 0 )
      {
        WPP_RECORDER_SF_(a1[9], 4u, 4u, 0xE1u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
        v12 = *a1;
        v16 = 0x200000002LL;
        v17 = 0x200000002LL;
        v15 = 28;
        v19 = 2;
        v18 = 1;
        LOBYTE(v6) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01015 + 232))(
                       WdfDriverGlobals,
                       v12,
                       &v15);
        *(_DWORD *)(a2 + 84) |= 4u;
      }
      v8 = -32;
    }
    else if ( (a3 & 4) != 0 )
    {
      Controller_DisableController((__int64)a1);
      LOBYTE(v6) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 696))(
                     WdfDriverGlobals,
                     *a1,
                     2LL);
      v8 = -8;
    }
    else if ( (a3 & 1) != 0 )
    {
      LOBYTE(v6) = Controller_InternalReset(a1);
      v8 = -2;
    }
    else if ( (a3 & 2) != 0 )
    {
      LOBYTE(v6) = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C004F850)(
                     *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
                     a1[1]);
      v8 = -3;
    }
    else
    {
      if ( (a3 & 0x20) == 0 )
      {
        LODWORD(v14) = a3;
        LOBYTE(v6) = WPP_RECORDER_SF_d(
                       a1[9],
                       2u,
                       4u,
                       0xE2u,
                       (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
                       v14);
        return v6;
      }
      LOBYTE(v6) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 696))(
                     WdfDriverGlobals,
                     *a1,
                     2LL);
      v8 = -33;
    }
  }
  return v6;
}
