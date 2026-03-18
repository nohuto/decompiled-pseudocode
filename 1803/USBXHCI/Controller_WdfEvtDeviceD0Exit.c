/*
 * XREFs of Controller_WdfEvtDeviceD0Exit @ 0x1C000C380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0006708 (CommonBuffer_FlushWorkItems.c)
 *     Controller_D0Exit @ 0x1C00074F4 (Controller_D0Exit.c)
 *     Controller_D0ExitSaveState @ 0x1C00075B4 (Controller_D0ExitSaveState.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0007D90 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_InUseByDebugger @ 0x1C00082D0 (Controller_InUseByDebugger.c)
 *     McTemplateK0pqqh @ 0x1C000D3D8 (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C000D46C (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Interrupter_D0ExitStopped @ 0x1C0016CA8 (Interrupter_D0ExitStopped.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C00182B4 (WPP_RECORDER_SF_qdd.c)
 *     Register_ControllerReset @ 0x1C0018A80 (Register_ControllerReset.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001924C (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0019328 (Register_SetClearSSICPortUnused.c)
 *     RootHub_D0Exit @ 0x1C0019A30 (RootHub_D0Exit.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C00541C8 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0054388 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Exit(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  unsigned int v5; // eax
  int v6; // edx
  int v7; // r8d
  unsigned int Arg2; // ebp
  __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // edx
  int v19; // r8d
  int v20; // eax
  int v21; // edx
  struct _MCGEN_TRACE_CONTEXT *v22; // rcx
  const GUID *v23; // r8

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004B408)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3104))(WdfDriverGlobals, a1);
  Arg2 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh(
      *(unsigned __int8 *)(v4 + 396),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 396));
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qdd(
    *(_QWORD *)(v4 + 72),
    v6,
    4,
    81,
    (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
    a1,
    a2,
    *(_DWORD *)(v4 + 348));
  v10 = *(_QWORD *)(v4 + 352) == 0LL;
  *(_DWORD *)(v4 + 328) = a2;
  if ( v10 || a2 != 6 )
  {
    v12 = *(_QWORD **)(v4 + 120);
    if ( v12 )
      CommonBuffer_FlushWorkItems(v12);
    RootHub_D0Exit(*(_QWORD *)(v4 + 152), a2, *(unsigned int *)(v4 + 348));
    Controller_D0Exit((__int64 *)v4, a2, v13);
    Interrupter_D0ExitStopped(*(_QWORD *)(v4 + 128), a2);
    if ( (*(_QWORD *)(v4 + 272) & 2) != 0
      || *(_BYTE *)(v4 + 332)
      || a2 == 5
      || *(_DWORD *)(v4 + 348) == 5
      || (_mm_srli_si128(*(__m128i *)(v4 + 272), 8).m128i_u8[0] & 8) != 0 && Controller_InUseByDebugger((_QWORD *)v4) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), 4u, 4u, 0x52u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    }
    else
    {
      v14 = Controller_D0ExitSaveState(v4);
      if ( v14 < 0 )
      {
        *(_BYTE *)(v4 + 332) = 1;
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v4 + 72),
          v15,
          4,
          83,
          (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
          v14);
        Controller_HwVerifierBreakIfEnabled(
          (_QWORD *)v4,
          0,
          0,
          0x400000LL,
          "Controller save state operation failed",
          0LL,
          0LL);
      }
      v16 = *(_QWORD *)(v4 + 88);
      LOBYTE(v15) = 1;
      Register_SetClearSSICPortUnused(v16, v15);
      LOBYTE(v17) = 1;
      Register_SaveRestoreCHTNonArchitecturalRegisters(v16, v17);
      Controller_ExecuteHSICDisconnectInU3Workaround(v4, 0LL);
      Controller_ExecuteDSMToSendPORTSCValues(v4, v18, v19);
      if ( (_mm_srli_si128(*(__m128i *)(v4 + 272), 8).m128i_u8[0] & 1) != 0 )
        Controller_ExecuteKBLPowerTransitionWorkaround(v4, 0LL);
    }
  }
  else
  {
    LOBYTE(v9) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(v4 + 296),
      v9);
  }
  if ( (*(_QWORD *)(v4 + 272) & 0x80000000000LL) != 0 && Arg2 == 5 )
  {
    LOBYTE(v11) = 1;
    v20 = Register_ControllerReset(*(_QWORD *)(v4 + 88), v11);
    if ( v20 < 0 )
    {
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 72),
        v21,
        4,
        84,
        (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
        v20);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 304));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 408));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 600));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq(v22, &USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_COMPLETE, v23, *(const void **)(v4 + 8), a2, Arg2, 0);
  return 0LL;
}
