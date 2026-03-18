/*
 * XREFs of Controller_WdfEvtDeviceD0Exit @ 0x1C0001C10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     Interrupter_D0ExitStopped @ 0x1C00022A0 (Interrupter_D0ExitStopped.c)
 *     Register_ControllerReset @ 0x1C0002420 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C00028B4 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     RootHub_D0Exit @ 0x1C00045D0 (RootHub_D0Exit.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0006048 (Register_SetClearSSICPortUnused.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0006A60 (WPP_RECORDER_SF_qLL.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0006FEC (CommonBuffer_FlushWorkItems.c)
 *     McTemplateK0pqqh @ 0x1C0007870 (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C0007904 (McTemplateK0pqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000E29C (WPP_RECORDER_SF_qL.c)
 *     Controller_D0ExitSaveState @ 0x1C00104A4 (Controller_D0ExitSaveState.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0010B30 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_InUseByDebugger @ 0x1C0011070 (Controller_InUseByDebugger.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001F548 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C0055044 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0057418 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Exit(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  unsigned int v5; // eax
  int v6; // r8d
  unsigned int Arg2; // ebp
  __int64 v8; // r8
  bool v9; // zf
  __int64 v10; // r8
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  struct _MCGEN_TRACE_CONTEXT *v19; // rcx
  const GUID *v20; // r8

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004E408)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  Arg2 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh(
      *(unsigned __int8 *)(v4 + 396),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_START,
      v6,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 396));
  WPP_RECORDER_SF_qLL(
    *(_QWORD *)(v4 + 72),
    4,
    4,
    81,
    (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
    a1,
    a2,
    *(_DWORD *)(v4 + 348));
  v9 = *(_QWORD *)(v4 + 352) == 0LL;
  *(_DWORD *)(v4 + 328) = a2;
  if ( v9 || a2 != 6 )
  {
    CommonBuffer_FlushWorkItems(*(_QWORD *)(v4 + 120));
    RootHub_D0Exit(*(_QWORD *)(v4 + 152), a2, *(unsigned int *)(v4 + 348));
    LOBYTE(v10) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(v4 + 296),
      v10);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(v4 + 72),
        v11,
        4,
        117,
        (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
        v4,
        a2);
    }
    v12 = Register_ControllerStop(*(_QWORD *)(v4 + 88));
    if ( v12 < 0 )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 72),
        v13,
        4,
        118,
        (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
        v12);
    }
    Interrupter_D0ExitStopped(*(_QWORD *)(v4 + 128), a2);
    if ( (*(_QWORD *)(v4 + 272) & 2) != 0
      || *(_BYTE *)(v4 + 332)
      || a2 == 5
      || *(_DWORD *)(v4 + 348) == 5
      || (_mm_srli_si128(*(__m128i *)(v4 + 272), 8).m128i_u8[0] & 8) != 0
      && (unsigned __int8)Controller_InUseByDebugger(v4) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), 4u, 4u, 0x52u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
    }
    else
    {
      v14 = Controller_D0ExitSaveState(v4);
      if ( v14 < 0 )
      {
        *(_BYTE *)(v4 + 332) = 1;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v4 + 72),
          4,
          4,
          83,
          (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
          v14);
        Controller_HwVerifierBreakIfEnabled(
          v4,
          0,
          0,
          0x400000,
          (__int64)"Controller save state operation failed",
          0LL,
          0LL);
      }
      v16 = *(_QWORD *)(v4 + 88);
      LOBYTE(v15) = 1;
      Register_SetClearSSICPortUnused(v16, v15);
      LOBYTE(v17) = 1;
      Register_SaveRestoreCHTNonArchitecturalRegisters(v16, v17);
      Controller_ExecuteHSICDisconnectInU3Workaround(v4, 0LL);
      Controller_ExecuteDSMToSendPORTSCValues(v4);
      if ( (_mm_srli_si128(*(__m128i *)(v4 + 272), 8).m128i_u8[0] & 1) != 0 )
        Controller_ExecuteKBLPowerTransitionWorkaround(v4, 0LL);
    }
  }
  else
  {
    LOBYTE(v8) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(v4 + 296),
      v8);
  }
  if ( (*(_QWORD *)(v4 + 272) & 0x80000000000LL) != 0 && Arg2 == 5 )
  {
    v18 = Register_ControllerReset(*(_QWORD *)(v4 + 88));
    if ( v18 < 0 )
      WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 72), 4, 4, 84, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v18);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 304));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 408));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 584));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq(v19, &USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_COMPLETE, v20, *(const void **)(v4 + 8), a2, Arg2, 0);
  return 0LL;
}
