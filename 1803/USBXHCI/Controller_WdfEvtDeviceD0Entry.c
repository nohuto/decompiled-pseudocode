/*
 * XREFs of Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Command_Initialize @ 0x1C0003FD0 (Command_Initialize.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     Controller_D0EntryRestoreState @ 0x1C0007284 (Controller_D0EntryRestoreState.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_InUseByDebugger @ 0x1C00082D0 (Controller_InUseByDebugger.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C0009748 (Controller_SetControllerGone.c)
 *     McTemplateK0pqqh @ 0x1C000D3D8 (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C000D46C (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000EF60 (DeviceSlot_D0EntryCleanupState.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C000EFF4 (DeviceSlot_DisableAllDeviceSlots.c)
 *     DeviceSlot_Initialize @ 0x1C000F07C (DeviceSlot_Initialize.c)
 *     Interrupter_D0Entry @ 0x1C0016B40 (Interrupter_D0Entry.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C00182B4 (WPP_RECORDER_SF_qdd.c)
 *     Register_BiosHandoff @ 0x1C0018848 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C0018A80 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C0018D10 (Register_ControllerStop.c)
 *     Register_D0Entry @ 0x1C0018E34 (Register_D0Entry.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001924C (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0019328 (Register_SetClearSSICPortUnused.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     RootHub_D0Entry @ 0x1C00198E4 (RootHub_D0Entry.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C00541C8 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0054388 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C0056864 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Entry(__int64 a1, unsigned int a2)
{
  char v4; // r14
  __int64 v5; // rdi
  char v6; // r12
  unsigned int v7; // eax
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // r15d
  __int64 v11; // rdx
  signed int v12; // ebx
  __int64 v13; // rcx
  char v14; // dl
  __int64 v15; // rax
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // r9d
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // ebp
  bool v24; // zf
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rbx
  int v28; // eax
  int v29; // edx
  int v30; // eax
  __int64 v31; // rdx
  struct _MCGEN_TRACE_CONTEXT *v32; // rcx
  const GUID *v33; // r8
  char Arg2; // [rsp+28h] [rbp-60h]
  unsigned int Arg3[2]; // [rsp+30h] [rbp-58h]
  unsigned int Arg3a[2]; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+40h] [rbp-48h] BYREF
  int v39; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004B408)
                 + 8);
  if ( *(_BYTE *)(v5 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      1791LL);
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3104))(WdfDriverGlobals, a1);
  v10 = v7;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh(
      *(unsigned __int8 *)(v5 + 396),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_START,
      v9,
      *(_QWORD *)(v5 + 8),
      a2,
      v7,
      *(_BYTE *)(v5 + 396));
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_qdd(
    *(_QWORD *)(v5 + 72),
    v8,
    4,
    58,
    (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
    a1,
    a2,
    *(_DWORD *)(v5 + 348));
  if ( (unsigned int)XilRegister_ReadUlong(*(_QWORD *)(v5 + 88), *(_QWORD *)(*(_QWORD *)(v5 + 88) + 24LL)) == -1 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v5 + 72), 2u, 4u, 0x3Bu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    v6 = 1;
    v12 = -1073741823;
LABEL_8:
    DeviceSlot_DisableAllDeviceSlots(*(_QWORD *)(v5 + 136));
    v13 = v5;
    if ( v6 )
    {
      v14 = 1;
    }
    else
    {
      Controller_ReportFatalError(v5, 0, 4124, 0LL, 0LL, 0LL);
      v14 = 0;
      v13 = v5;
    }
    Controller_SetControllerGone(v13, v14);
    goto LABEL_65;
  }
  if ( *(_DWORD *)(v5 + 348) == 2 )
  {
    v15 = *(_QWORD *)(v5 + 352);
    if ( v15 && *(_DWORD *)(v15 + 584) == 4 )
    {
      v16 = Register_ControllerStop(*(_QWORD *)(v5 + 88));
      if ( v16 < 0 )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 72),
          v17,
          4,
          60,
          (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
          v16);
      }
    }
    else
    {
      v18 = Register_BiosHandoff(*(_QWORD *)(v5 + 88));
      v12 = v18;
      if ( v18 < 0 )
      {
        v19 = 61;
LABEL_57:
        Arg2 = v18;
LABEL_58:
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 72),
          v11,
          4,
          v19,
          (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
          Arg2);
        goto LABEL_59;
      }
    }
    DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v5 + 136), a2);
    v18 = Register_ControllerReset(*(_QWORD *)(v5 + 88), 0LL);
    v12 = v18;
    if ( v18 < 0 )
    {
      v19 = 62;
      goto LABEL_57;
    }
    v4 = 1;
  }
  if ( !*(_BYTE *)(v5 + 368) )
  {
    *(_DWORD *)(v5 + 372) = KeQueryTimeIncrement();
    v20 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v5 + 88) + 40LL) + 1) >> 3) & 0x7FF;
    v11 = _InterlockedExchange64(
            (volatile __int64 *)(v5 + 360),
            (v20 >> 11) | ((MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v5 + 372) / 10000LL - v20) << 21));
    *(_BYTE *)(v5 + 368) = 1;
  }
  LOBYTE(v11) = 1;
  Controller_ExecuteHSICDisconnectInU3Workaround(v5, v11);
  if ( (_mm_srli_si128(*(__m128i *)(v5 + 272), 8).m128i_u8[0] & 1) != 0 )
  {
    LOBYTE(v21) = 1;
    Controller_ExecuteKBLPowerTransitionWorkaround(v5, v21);
  }
  v23 = 1;
  v24 = 0;
  do
  {
    if ( v24
      || (*(_QWORD *)(v5 + 272) & 2) != 0
      || *(_BYTE *)(v5 + 332)
      || a2 == 5
      || *(_DWORD *)(v5 + 348) == 2
      || (_mm_srli_si128(*(__m128i *)(v5 + 272), 8).m128i_u8[0] & 8) != 0 && Controller_InUseByDebugger((_QWORD *)v5) )
    {
      LOBYTE(v22) = 0;
    }
    else
    {
      v25 = *(_QWORD *)(v5 + 88);
      Register_SetClearSSICPortUnused(v25, 0LL);
      Register_SaveRestoreCHTNonArchitecturalRegisters(v25, 0LL);
      LOBYTE(v22) = 1;
    }
    v18 = Interrupter_D0Entry(*(_QWORD *)(v5 + 128), a2, v22);
    v12 = v18;
    if ( v18 < 0 )
    {
      v19 = 63;
      goto LABEL_57;
    }
    v26 = *(_QWORD *)(v5 + 136);
    Arg3[0] = a2;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v26 + 8) + 72LL),
      4u,
      0xAu,
      0xDu,
      (__int64)&WPP_99d7b7462b58356022f2cdf06f58d24e_Traceguids,
      v26,
      *(_QWORD *)Arg3);
    v18 = DeviceSlot_Initialize(v26);
    v12 = v18;
    if ( v18 < 0 )
    {
      v19 = 64;
      goto LABEL_57;
    }
    v27 = *(_QWORD *)(v5 + 144);
    Arg3a[0] = a2;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(v27 + 16),
      4u,
      7u,
      0x10u,
      (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids,
      v27,
      *(_QWORD *)Arg3a);
    Command_Initialize(v27);
    if ( v23 == 2 || a2 == 5 || *(_DWORD *)(v5 + 348) == 2 )
      break;
    if ( (*(_QWORD *)(v5 + 272) & 2) != 0
      || *(_BYTE *)(v5 + 332)
      || (_mm_srli_si128(*(__m128i *)(v5 + 272), 8).m128i_u8[0] & 8) != 0 && Controller_InUseByDebugger((_QWORD *)v5) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v5 + 72), 4u, 4u, 0x43u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    }
    else
    {
      v28 = Controller_D0EntryRestoreState(v5);
      if ( v28 >= 0 )
        break;
      LOBYTE(v29) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v5 + 72),
        v29,
        4,
        66,
        (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
        v28);
      Controller_HwVerifierBreakIfEnabled(
        (_QWORD *)v5,
        0,
        0,
        0x400000LL,
        "Controller restore state operation failed",
        0LL,
        0LL);
    }
    DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v5 + 136), a2);
    v30 = Register_ControllerReset(*(_QWORD *)(v5 + 88), 0LL);
    v12 = v30;
    if ( v30 < 0 )
    {
      v19 = 68;
      Arg2 = v30;
      goto LABEL_58;
    }
    ++v23;
    v4 = 1;
    v24 = v23 == 2;
  }
  while ( v23 <= 2 );
  v18 = Register_D0Entry(*(_QWORD *)(v5 + 88));
  v12 = v18;
  if ( v18 < 0 )
  {
    v19 = 69;
    goto LABEL_57;
  }
  v18 = RootHub_D0Entry(*(_QWORD *)(v5 + 152));
  v12 = v18;
  if ( v18 < 0 )
  {
    v19 = 70;
    goto LABEL_57;
  }
  *(_DWORD *)(v5 + 328) = 1;
  if ( v4 == 1 )
  {
    v31 = *(_QWORD *)(v5 + 8);
    v39 = 0;
    v38 = 12LL;
    ((void (__fastcall *)(_QWORD, __int64, __int64 *))qword_1C004C858)(
      *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
      v31,
      &v38);
  }
LABEL_59:
  if ( v12 < 0 )
    goto LABEL_8;
  if ( *(_DWORD *)(v5 + 348) <= 2u )
    *(_DWORD *)(v5 + 348) = 7;
  Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(v5);
LABEL_65:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq(v32, &USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_COMPLETE, v33, *(const void **)(v5 + 8), a2, v10, v12);
  return (unsigned int)v12;
}
