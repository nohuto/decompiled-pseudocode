/*
 * XREFs of Controller_InternalReset @ 0x1C0011414
 * Callers:
 *     Controller_InitiateBootRecovery @ 0x1C00110A8 (Controller_InitiateBootRecovery.c)
 *     Controller_InitiateRecovery @ 0x1C0011130 (Controller_InitiateRecovery.c)
 *     Controller_UcxEvtReset @ 0x1C0013880 (Controller_UcxEvtReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     Register_ControllerReset @ 0x1C0002420 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C00028B4 (Register_ControllerStop.c)
 *     RootHub_D0Entry @ 0x1C0002A70 (RootHub_D0Entry.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     Controller_Start @ 0x1C0006440 (Controller_Start.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0006FEC (CommonBuffer_FlushWorkItems.c)
 *     McTemplateK0p @ 0x1C0007558 (McTemplateK0p.c)
 *     McTemplateK0pq @ 0x1C00077FC (McTemplateK0pq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Command_ControllerResetPostReset @ 0x1C000C6F4 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C000C8A8 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x1C000C980 (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x1C0010918 (Controller_DisableController.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0016290 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C001632C (DeviceSlot_ControllerResetPreReset.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C001DD2C (Interrupter_ControllerResetPostReset.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 */

NTSTATUS __fastcall Controller_InternalReset(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  NTSTATUS result; // eax
  __int64 v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  int v20; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+28h] [rbp-30h]

  v4 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0p(a1, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_START, a3, *(_QWORD *)(a1 + 8));
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0xA9u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 344)) != 1 && !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  v6 = WdfFunctions_01015;
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
    v10 = Register_ControllerReset(*(_QWORD *)(a1 + 88), 1);
    v4 = v10;
    if ( v10 < 0 )
    {
      v21 = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        2u,
        4u,
        0xABu,
        (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
        v21);
    }
  }
  else
  {
    v20 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 72),
      2u,
      4u,
      0xAAu,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      v20);
    Controller_DisableController(a1);
  }
  Command_ControllerResetPostReset(*(_QWORD *)(a1 + 144));
  CommonBuffer_FlushWorkItems(*(_QWORD **)(a1 + 120));
  DeviceSlot_ControllerResetPostReset(*(_QWORD *)(a1 + 136));
  RootHub_D0Entry(*(_QWORD *)(a1 + 152), v11);
  if ( v9 < 0 )
  {
    LODWORD(v19) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 72),
      2u,
      4u,
      0xACu,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      v19);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0LL,
      0LL,
      8LL,
      "During controller reset recovery, controller stop timed out",
      0LL,
      0LL);
    v12 = 4107;
LABEL_12:
    Controller_ReportFatalError(a1, 4, v12, 0, 0LL, 0LL);
    goto LABEL_18;
  }
  Interrupter_ControllerResetPostReset(*(_QWORD *)(a1 + 128));
  if ( v4 >= 0 )
  {
    v13 = Controller_Start(a1);
    v9 = v13;
    if ( v13 < 0 )
    {
      LODWORD(v19) = v13;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        2u,
        4u,
        0xAEu,
        (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
        v19);
      Controller_HwVerifierBreakIfEnabled(
        (_QWORD *)a1,
        0LL,
        0LL,
        32LL,
        "During controller reset recovery, controller start timed out",
        0LL,
        0LL);
      v12 = 4104;
      goto LABEL_12;
    }
    v9 = 0;
  }
  else
  {
    LODWORD(v19) = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 72),
      2u,
      4u,
      0xADu,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      v19);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0LL,
      0LL,
      16LL,
      "During controller reset recovery, controller reset timed out",
      0LL,
      0LL);
    Controller_ReportFatalError(a1, 4, 4103, 0, 0LL, 0LL);
    v9 = v4;
  }
LABEL_18:
  v14 = *(_QWORD *)(a1 + 144);
  if ( v9 < 0 )
  {
    Command_FailAllCommands(v14);
    ((void (__fastcall *)(_QWORD, _QWORD))qword_1C004F860)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, *(_QWORD *)(a1 + 8));
    LODWORD(v19) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 72),
      2u,
      4u,
      0xB0u,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      v19);
  }
  else
  {
    Command_ControllerResetPostResetSuccess(v14);
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0xAFu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
  }
  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
  {
    LODWORD(v18) = v9;
    result = McTemplateK0pq(v15, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_COMPLETE, v16, *(_QWORD *)(a1 + 8), v18);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 344));
  return result;
}
