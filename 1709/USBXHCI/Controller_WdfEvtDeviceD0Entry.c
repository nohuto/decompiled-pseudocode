/*
 * XREFs of Controller_WdfEvtDeviceD0Entry @ 0x1C0005680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C0002090 (Interrupter_InterrupterRegisterIntialize.c)
 *     Register_ControllerReset @ 0x1C0002420 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0002780 (Register_BiosHandoff.c)
 *     Register_ControllerStop @ 0x1C00028B4 (Register_ControllerStop.c)
 *     RootHub_D0Entry @ 0x1C0002A70 (RootHub_D0Entry.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005F70 (WPP_RECORDER_SF_qd.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0006048 (Register_SetClearSSICPortUnused.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0006A60 (WPP_RECORDER_SF_qLL.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C0006BC4 (XilCoreDeviceSlot_Initialize.c)
 *     XilCoreCommand_Initialize @ 0x1C0006C98 (XilCoreCommand_Initialize.c)
 *     Register_D0Entry @ 0x1C0006D68 (Register_D0Entry.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     McTemplateK0pqqh @ 0x1C0007870 (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C0007904 (McTemplateK0pqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000E29C (WPP_RECORDER_SF_qL.c)
 *     XilCommand_InitializeSecureResources @ 0x1C000EFA0 (XilCommand_InitializeSecureResources.c)
 *     Controller_D0EntryRestoreState @ 0x1C0010234 (Controller_D0EntryRestoreState.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_InUseByDebugger @ 0x1C0011070 (Controller_InUseByDebugger.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C00123D0 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C00163BC (DeviceSlot_D0EntryCleanupState.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0016450 (DeviceSlot_DisableAllDeviceSlots.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C001699C (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0016AAC (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     Interrupter_D0Entry @ 0x1C001DDA0 (Interrupter_D0Entry.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001F548 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C00359BC (UsbDevice_SetDeviceDisabled.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C0055020 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C0055044 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0057418 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Entry(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  char v5; // r15
  unsigned int v6; // eax
  int v7; // r8d
  unsigned int v8; // r12d
  __int64 v9; // rcx
  int *v10; // rdx
  int v11; // eax
  signed int Arg3; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // edx
  __int64 v18; // rbp
  int v19; // eax
  unsigned __int16 v20; // r9
  __int64 *i; // rbx
  unsigned int j; // ebx
  __int64 v23; // rcx
  unsigned __int64 v24; // r8
  __int64 v25; // rdx
  unsigned int v26; // r12d
  void *v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // r8
  int v30; // eax
  int v31; // edx
  unsigned __int16 v32; // r9
  __int64 v33; // r15
  unsigned int k; // r14d
  __int64 v35; // rbp
  __int64 *v36; // rsi
  __int64 *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rcx
  int v41; // eax
  int v42; // edx
  __int64 v43; // rbx
  int v44; // eax
  char v45; // si
  int v46; // eax
  int v47; // edx
  unsigned __int16 v48; // r9
  struct _MCGEN_TRACE_CONTEXT *v49; // rcx
  const GUID *v50; // r8
  __int64 v51; // rdx
  unsigned int Arg2[2]; // [rsp+28h] [rbp-70h]
  unsigned int Arg2a[2]; // [rsp+28h] [rbp-70h]
  char v55; // [rsp+40h] [rbp-58h]
  unsigned int v56; // [rsp+44h] [rbp-54h]
  int v57; // [rsp+48h] [rbp-50h] BYREF
  int v58; // [rsp+50h] [rbp-48h] BYREF
  __int64 v59; // [rsp+54h] [rbp-44h]

  v55 = 0;
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004E408)
                 + 8);
  if ( *(_BYTE *)(v4 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      1686LL);
  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v8 = v6;
  v56 = v6;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh(
      *(unsigned __int8 *)(v4 + 396),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v6,
      *(_BYTE *)(v4 + 396));
  WPP_RECORDER_SF_qLL(
    *(_QWORD *)(v4 + 72),
    4,
    4,
    58,
    (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
    a1,
    a2,
    *(_DWORD *)(v4 + 348));
  v9 = *(_QWORD *)(v4 + 88);
  v10 = *(int **)(v9 + 24);
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 8) + 441LL) )
  {
    Register_ReadSecureMmio(v9, (int)v10, 2, 1, &v57);
    v11 = v57;
  }
  else
  {
    v11 = *v10;
  }
  if ( v11 == -1 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), 2u, 4u, 0x3Bu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
    v5 = 1;
    Arg3 = -1073741823;
LABEL_11:
    DeviceSlot_DisableAllDeviceSlots(*(_QWORD *)(v4 + 136));
    v14 = v4;
    if ( v5 )
    {
      LOBYTE(v13) = 1;
    }
    else
    {
      Controller_ReportFatalError(v4, 0, 4124, 0, 0LL, 0LL);
      v13 = 0LL;
      v14 = v4;
    }
    Controller_SetControllerGone(v14, v13);
    goto LABEL_102;
  }
  if ( *(_DWORD *)(v4 + 348) == 2 )
  {
    v15 = *(_QWORD *)(v4 + 352);
    if ( v15 && *(_DWORD *)(v15 + 584) == 4 )
    {
      v16 = Register_ControllerStop(*(_QWORD *)(v4 + 88));
      if ( v16 < 0 )
      {
        Arg2[0] = v16;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v4 + 72),
          2u,
          4u,
          0x3Cu,
          (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
          *(_QWORD *)Arg2);
      }
    }
    else
    {
      v19 = Register_BiosHandoff(*(_QWORD **)(v4 + 88));
      Arg3 = v19;
      if ( v19 < 0 )
      {
        v20 = 61;
LABEL_22:
        Arg2[0] = v19;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v4 + 72),
          2u,
          4u,
          v20,
          (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
          *(_QWORD *)Arg2);
        goto LABEL_90;
      }
    }
    v18 = *(_QWORD *)(v4 + 136);
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v18 + 8) + 72LL),
      v17,
      10,
      14,
      (__int64)&WPP_66090ce59e283cef293d375cad1686b0_Traceguids,
      v18,
      a2);
    if ( *(_BYTE *)(v18 + 80) )
    {
      XilDeviceSlot_InitializeSecureScratchpadBuffers(v18 + 16);
    }
    else
    {
      for ( i = *(__int64 **)(v18 + 56); i != (__int64 *)(v18 + 56); i = (__int64 *)*i )
        memset((void *)i[2], 0, *((unsigned int *)i + 10));
    }
    for ( j = 1; j <= *(_DWORD *)(v18 + 96); ++j )
    {
      if ( *(_BYTE *)(v18 + 80) )
        v23 = *(_QWORD *)(v18 + 24);
      else
        v23 = *(_QWORD *)(v18 + 72);
      if ( *(_QWORD *)(v23 + 8LL * j) )
        UsbDevice_SetDeviceDisabled();
    }
    v19 = Register_ControllerReset(*(_QWORD *)(v4 + 88), 0);
    Arg3 = v19;
    if ( v19 < 0 )
    {
      v20 = 62;
      goto LABEL_22;
    }
    v55 = 1;
  }
  if ( !*(_BYTE *)(v4 + 368) )
  {
    *(_DWORD *)(v4 + 372) = KeQueryTimeIncrement();
    v24 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v4 + 88) + 40LL) + 1) >> 3) & 0x7FF;
    v10 = (int *)_InterlockedExchange64(
                   (volatile __int64 *)(v4 + 360),
                   (v24 >> 11) | ((MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v4 + 372) / 10000LL - v24) << 21));
    *(_BYTE *)(v4 + 368) = 1;
  }
  LOBYTE(v10) = 1;
  Controller_ExecuteHSICDisconnectInU3Workaround(v4, v10);
  if ( (_mm_srli_si128(*(__m128i *)(v4 + 272), 8).m128i_u8[0] & 1) != 0 )
  {
    LOBYTE(v25) = 1;
    Controller_ExecuteKBLPowerTransitionWorkaround(v4, v25);
  }
  v26 = 1;
  while ( 1 )
  {
    v27 = &WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids;
    if ( v26 == 2 || (*(_QWORD *)(v4 + 272) & 2) != 0 || *(_BYTE *)(v4 + 332) || a2 == 5 || *(_DWORD *)(v4 + 348) == 2 )
      goto LABEL_52;
    if ( (_mm_srli_si128(*(__m128i *)(v4 + 272), 8).m128i_u8[0] & 8) != 0
      && (unsigned __int8)Controller_InUseByDebugger(v4) )
    {
      v27 = &WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids;
LABEL_52:
      v33 = *(_QWORD *)(v4 + 128);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v27) = 5;
        WPP_RECORDER_SF_qL(
          *(_QWORD *)(*(_QWORD *)(v33 + 8) + 72LL),
          (_DWORD)v27,
          9,
          25,
          (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids,
          v33,
          a2);
      }
      if ( (unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(v33 + 8)) )
      {
        for ( k = 0; k < *(_DWORD *)(v33 + 24); *(_DWORD *)(v35 + 128) = 0 )
        {
          v35 = *(_QWORD *)(*(_QWORD *)(v33 + 32) + 8LL * k);
          v36 = (__int64 *)(v35 + 160);
          v37 = *(__int64 **)(v35 + 160);
          if ( v37 != (__int64 *)(v35 + 160) )
          {
            do
            {
              memset((void *)v37[2], 0, *((unsigned int *)v37 + 10));
              v37 = (__int64 *)*v37;
            }
            while ( v37 != v36 );
          }
          v38 = *v36;
          ++k;
          *(_QWORD *)(v35 + 144) = *v36;
          *(_QWORD *)(v35 + 136) = *(_QWORD *)(v38 + 16);
          *(_QWORD *)(v35 + 120) = 1LL;
        }
        Interrupter_InterrupterRegisterIntialize(v33);
      }
      goto LABEL_60;
    }
    v28 = *(_QWORD *)(v4 + 88);
    Register_SetClearSSICPortUnused(v28, 0LL);
    Register_SaveRestoreCHTNonArchitecturalRegisters(v28, 0LL);
    LOBYTE(v29) = 1;
    v30 = Interrupter_D0Entry(*(_QWORD *)(v4 + 128), a2, v29);
    Arg3 = v30;
    if ( v30 < 0 )
    {
      v32 = 63;
LABEL_49:
      Arg2[0] = v30;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 72),
        2u,
        4u,
        v32,
        (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
        *(_QWORD *)Arg2);
      goto LABEL_50;
    }
LABEL_60:
    v39 = *(_QWORD *)(v4 + 136);
    LOBYTE(v31) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v39 + 8) + 72LL),
      v31,
      10,
      13,
      (__int64)&WPP_66090ce59e283cef293d375cad1686b0_Traceguids,
      v39,
      a2);
    if ( !(unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(v39 + 8)) )
    {
      Arg3 = -1073741630;
LABEL_99:
      Arg2a[0] = Arg3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 72),
        2u,
        4u,
        0x40u,
        (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
        *(_QWORD *)Arg2a);
LABEL_50:
      v5 = 0;
      goto LABEL_89;
    }
    v40 = v39 + 16;
    if ( *(_BYTE *)(v39 + 80) )
      v41 = XilDeviceSlot_InitializeSecureResources(v40);
    else
      v41 = XilCoreDeviceSlot_Initialize(v40);
    Arg3 = v41;
    if ( v41 < 0 )
      goto LABEL_99;
    v43 = *(_QWORD *)(v4 + 144);
    LOBYTE(v42) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(v43 + 16),
      v42,
      7,
      16,
      (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
      v43,
      a2);
    if ( (unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(v43 + 8)) )
    {
      if ( *(_BYTE *)(v43 + 136) )
        XilCommand_InitializeSecureResources();
      else
        XilCoreCommand_Initialize(v43 + 152);
      *(_QWORD *)(v43 + 40) = 0LL;
      *(_DWORD *)(v43 + 64) = 1;
    }
    if ( v26 == 2 || a2 == 5 || *(_DWORD *)(v4 + 348) == 2 )
      break;
    if ( (*(_QWORD *)(v4 + 272) & 2) != 0
      || *(_BYTE *)(v4 + 332)
      || (_mm_srli_si128(*(__m128i *)(v4 + 272), 8).m128i_u8[0] & 8) != 0
      && (unsigned __int8)Controller_InUseByDebugger(v4) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), 4u, 4u, 0x43u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
    }
    else
    {
      v44 = Controller_D0EntryRestoreState(v4);
      if ( v44 >= 0 )
        break;
      Arg2[0] = v44;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 72),
        4u,
        4u,
        0x42u,
        (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
        *(_QWORD *)Arg2);
      Controller_HwVerifierBreakIfEnabled(
        v4,
        0,
        0,
        0x400000,
        (__int64)"Controller restore state operation failed",
        0LL,
        0LL);
    }
    DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v4 + 136), a2);
    v30 = Register_ControllerReset(*(_QWORD *)(v4 + 88), 0);
    Arg3 = v30;
    if ( v30 < 0 )
    {
      v32 = 68;
      goto LABEL_49;
    }
    ++v26;
    v45 = 1;
    v55 = 1;
    if ( v26 > 2 )
      goto LABEL_85;
  }
  v45 = v55;
LABEL_85:
  v46 = Register_D0Entry(*(_QWORD *)(v4 + 88));
  Arg3 = v46;
  if ( v46 < 0 )
  {
    v48 = 69;
    goto LABEL_87;
  }
  v46 = RootHub_D0Entry(*(_QWORD *)(v4 + 152), v47);
  Arg3 = v46;
  if ( v46 >= 0 )
  {
    *(_DWORD *)(v4 + 328) = 1;
    if ( v45 != 1 )
      goto LABEL_88;
    v51 = *(_QWORD *)(v4 + 8);
    v59 = 0LL;
    v58 = 12;
    ((void (__fastcall *)(_QWORD, __int64, int *))qword_1C004F858)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, v51, &v58);
    v5 = 0;
  }
  else
  {
    v48 = 70;
LABEL_87:
    Arg2[0] = v46;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 72),
      2u,
      4u,
      v48,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      *(_QWORD *)Arg2);
LABEL_88:
    v5 = 0;
  }
LABEL_89:
  v8 = v56;
LABEL_90:
  if ( Arg3 < 0 )
    goto LABEL_11;
  if ( *(_DWORD *)(v4 + 348) <= 2u )
    *(_DWORD *)(v4 + 348) = 7;
  Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(v4);
LABEL_102:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq(v49, &USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_COMPLETE, v50, *(const void **)(v4 + 8), a2, v8, Arg3);
  return (unsigned int)Arg3;
}
