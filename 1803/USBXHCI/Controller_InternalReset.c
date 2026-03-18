/*
 * XREFs of Controller_InternalReset @ 0x1C00086D4
 * Callers:
 *     Controller_InitiateBootRecovery @ 0x1C0008370 (Controller_InitiateBootRecovery.c)
 *     Controller_InitiateRecovery @ 0x1C00083F8 (Controller_InitiateRecovery.c)
 *     Controller_UcxEvtReset @ 0x1C000AFD0 (Controller_UcxEvtReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Command_ControllerResetPostReset @ 0x1C0003270 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C0003424 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x1C00037AC (Command_FailAllCommands.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0006708 (CommonBuffer_FlushWorkItems.c)
 *     Controller_DisableController @ 0x1C0007A24 (Controller_DisableController.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     Controller_Start @ 0x1C0009800 (Controller_Start.c)
 *     McTemplateK0p @ 0x1C000D0C0 (McTemplateK0p.c)
 *     McTemplateK0pq @ 0x1C000D364 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C000EE34 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C000EED0 (DeviceSlot_ControllerResetPreReset.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C0016ADC (Interrupter_ControllerResetPostReset.c)
 *     Register_ControllerReset @ 0x1C0018A80 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C0018D10 (Register_ControllerStop.c)
 *     RootHub_D0Entry @ 0x1C00198E4 (RootHub_D0Entry.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_InternalReset(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // edx
  _QWORD *v13; // rcx
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  int v17; // eax
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // edx
  __int64 result; // rax

  v4 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0p(a1, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_START, a3, *(_QWORD *)(a1 + 8));
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0xAAu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 344)) != 1 && !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  v6 = WdfFunctions_01023;
  LOBYTE(v5) = 1;
  ++*(_DWORD *)(a1 + 336);
  ++*(_DWORD *)(a1 + 400);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(v6 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 296),
    v5);
  v7 = *(_QWORD *)(a1 + 144);
  DynamicLock_Acquire(*(_QWORD *)(v7 + 112));
  v8 = *(_QWORD *)(v7 + 112);
  *(_DWORD *)(v7 + 36) = 3;
  *(_BYTE *)(v7 + 121) = 0;
  DynamicLock_Release(v8);
  DeviceSlot_ControllerResetPreReset(*(_QWORD *)(a1 + 136));
  KeFlushQueuedDpcs();
  v9 = Register_ControllerStop(*(_QWORD *)(a1 + 88));
  KeFlushQueuedDpcs();
  if ( v9 >= 0 )
  {
    LOBYTE(v10) = 1;
    v11 = Register_ControllerReset(*(_QWORD *)(a1 + 88), v10);
    v4 = v11;
    if ( v11 < 0 )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v12,
        4,
        172,
        (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
        v11);
    }
  }
  else
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), v10, 4, 171, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v9);
    Controller_DisableController(a1);
  }
  Command_ControllerResetPostReset(*(_QWORD *)(a1 + 144));
  v13 = *(_QWORD **)(a1 + 120);
  if ( v13 )
    CommonBuffer_FlushWorkItems(v13);
  DeviceSlot_ControllerResetPostReset(*(_QWORD *)(a1 + 136));
  RootHub_D0Entry(*(_QWORD *)(a1 + 152));
  if ( v9 < 0 )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), v14, 4, 173, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v9);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      8LL,
      "During controller reset recovery, controller stop timed out",
      0LL,
      0LL);
    v15 = 4107;
LABEL_14:
    Controller_ReportFatalError(a1, 4, v15, 0, 0LL, 0LL);
    goto LABEL_20;
  }
  Interrupter_ControllerResetPostReset(*(_QWORD *)(a1 + 128));
  if ( v4 >= 0 )
  {
    v17 = Controller_Start(a1);
    v9 = v17;
    if ( v17 < 0 )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v18,
        4,
        175,
        (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
        v17);
      Controller_HwVerifierBreakIfEnabled(
        (_QWORD *)a1,
        0,
        0,
        32LL,
        "During controller reset recovery, controller start timed out",
        0LL,
        0LL);
      v15 = 4104;
      goto LABEL_14;
    }
    v9 = 0;
  }
  else
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), v16, 4, 174, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v4);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      16LL,
      "During controller reset recovery, controller reset timed out",
      0LL,
      0LL);
    Controller_ReportFatalError(a1, 4, 4103, 0, 0LL, 0LL);
    v9 = v4;
  }
LABEL_20:
  v19 = *(_QWORD *)(a1 + 144);
  if ( v9 < 0 )
  {
    Command_FailAllCommands(v19);
    ((void (__fastcall *)(_QWORD, _QWORD))qword_1C004C860)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, *(_QWORD *)(a1 + 8));
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), v22, 4, 177, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v9);
  }
  else
  {
    Command_ControllerResetPostResetSuccess(v19);
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0xB0u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
  }
  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    result = McTemplateK0pq(v20, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_COMPLETE, v21, *(_QWORD *)(a1 + 8), v9);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 344));
  return result;
}
