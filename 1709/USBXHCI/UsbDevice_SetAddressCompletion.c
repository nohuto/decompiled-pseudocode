/*
 * XREFs of UsbDevice_SetAddressCompletion @ 0x1C00356A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0016F60 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00333D0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C00359BC (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00378F8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqD @ 0x1C0037A24 (WPP_RECORDER_SF_dqD.c)
 *     WPP_RECORDER_SF_dqdL @ 0x1C0037E40 (WPP_RECORDER_SF_dqdL.c)
 */

void __fastcall UsbDevice_SetAddressCompletion(__int64 a1, int a2, __int64 *a3, int a4)
{
  __int64 v4; // rdi
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // r8d
  int v13; // eax
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rbp
  unsigned int v19; // eax
  int v20; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v21[5]; // [rsp+58h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    v7 = *(unsigned __int8 *)(v4 + 135);
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v7,
      12,
      22,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      *(_BYTE *)(v4 + 135),
      *(_QWORD *)v4);
    if ( (*(_DWORD *)(v4 + 476) & 0x200) != 0 )
    {
      UsbDevice_SetDeviceDisabled(v4);
      return;
    }
    v8 = *(_BYTE *)(v4 + 432) == 0 ? 0xC0000001 : 0;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( (*(_DWORD *)(v4 + 476) & 0x200) != 0 )
    {
      v14 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v14,
        12,
        24,
        (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
        *(_BYTE *)(a1 + 61),
        *(_QWORD *)v4);
    }
    else
    {
      memset(v21, 0, sizeof(v21));
      v9 = *(_QWORD *)(v4 + 424);
      LOWORD(v21[0]) = 40;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
        WdfDriverGlobals,
        v9,
        v21);
      v10 = *(_QWORD *)(v4 + 8);
      v11 = v21[1];
      if ( *(_BYTE *)(*(_QWORD *)(v10 + 136) + 80LL) )
      {
        XilDeviceSlot_SendQuerySlotContextInfoRequest((_QWORD *)(*(_QWORD *)(v10 + 136) + 16LL), v4, &v20, 0LL);
        v13 = v20;
      }
      else
      {
        v13 = (unsigned __int8)*(_DWORD *)(XilUsbDevice_GetDeviceContextBufferVA(v4) + 12);
      }
      *(_DWORD *)(v11 + 28) = v13;
      WPP_RECORDER_SF_dqD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), v12, 23);
    }
    v8 = 0LL;
    goto LABEL_15;
  }
  WPP_RECORDER_SF_dqdL(
    *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
    *(unsigned __int8 *)(v4 + 135),
    (*(_DWORD *)(v4 + 476) >> 9) & 1,
    a4);
  if ( (*(_DWORD *)(v4 + 476) & 0x200) == 0 )
  {
    v8 = 3221225473LL;
LABEL_15:
    v15 = WdfFunctions_01015;
    v16 = *(_QWORD *)(v4 + 424);
    *(_QWORD *)(v4 + 424) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v15 + 2104))(WdfDriverGlobals, v16, v8);
    return;
  }
  v17 = *(_QWORD **)(v4 + 8);
  v18 = v17[18];
  if ( *(_BYTE *)(v4 + 432) )
  {
    Controller_HwVerifierBreakIfEnabled(
      v17,
      *(_QWORD *)v4,
      0LL,
      0x40000LL,
      "Set Address Command with BSR=1 failed",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)(v4 + 8), 2, 4117, 0LL, 0LL, 0LL);
  }
  else
  {
    memset((void *)(v4 + 440), 0, 0x60uLL);
    *(_QWORD *)(v4 + 512) = 0LL;
    *(_DWORD *)(v4 + 520) = 0;
    *(_DWORD *)(v4 + 524) = 0;
    *(_QWORD *)(v4 + 528) = 0LL;
    *(_QWORD *)(v4 + 480) = UsbDevice_DisableCompletionReturnFailure;
    v19 = *(_DWORD *)(v4 + 476) & 0xFFFF2BFF;
    *(_QWORD *)(v4 + 488) = v4;
    *(_DWORD *)(v4 + 476) = v19 | 0x2800;
    *(_BYTE *)(v4 + 479) = *(_BYTE *)(v4 + 135);
    Command_SendCommand(v18, v4 + 440);
  }
}
