/*
 * XREFs of UsbDevice_SetAddressCompletion @ 0x1C0033250
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C000FB04 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0033598 (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00354D8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqD @ 0x1C0035604 (WPP_RECORDER_SF_dqD.c)
 *     WPP_RECORDER_SF_dqdL @ 0x1C0035A20 (WPP_RECORDER_SF_dqdL.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C003FC54 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

void __fastcall UsbDevice_SetAddressCompletion(__int64 a1, int a2, _QWORD *a3, int a4)
{
  __int64 v4; // rdi
  int v7; // edx
  __int64 v8; // r8
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // eax
  __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rbp
  unsigned int v24; // eax
  int v25; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v26[5]; // [rsp+58h] [rbp-50h] BYREF

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
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
      *(_BYTE *)(v4 + 135),
      *(_QWORD *)v4);
    if ( (*(_DWORD *)(v4 + 476) & 0x200) != 0 )
    {
      UsbDevice_SetDeviceDisabled(v4);
      return;
    }
    v8 = *(_BYTE *)(v4 + 432) == 0 ? 0xC0000001 : 0;
    goto LABEL_20;
  }
  v9 = *(_DWORD *)(v4 + 476);
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( (v9 & 0x200) != 0 )
    {
      v19 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v19,
        12,
        24,
        (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
        *(_BYTE *)(a1 + 61),
        *(_QWORD *)v4);
    }
    else
    {
      memset(v26, 0, sizeof(v26));
      v10 = *(_QWORD *)(v4 + 424);
      LOWORD(v26[0]) = 40;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
        WdfDriverGlobals,
        v10,
        v26);
      v11 = v26[1];
      v12 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 136LL);
      v13 = *(_QWORD *)(v12 + 88);
      v14 = v12 + 16;
      v15 = *(_QWORD *)(v13 + 8);
      if ( *(_BYTE *)(v14 + 64) && (*(_BYTE *)(v4 + 608) && *(_DWORD *)(v15 + 444) == 2 || *(_DWORD *)(v15 + 444) == 1) )
      {
        XilDeviceSlot_SendQuerySlotContextInfoRequest((_QWORD *)v14, v4, &v25, 0LL);
        v17 = v25;
      }
      else
      {
        v18 = v4 + 568;
        if ( !*(_BYTE *)(v4 + 609) )
          v18 = v4 + 560;
        v17 = (unsigned __int8)*(_DWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v18) + 12);
      }
      *(_DWORD *)(v11 + 28) = v17;
      WPP_RECORDER_SF_dqD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), v16, 23);
    }
    v8 = 0LL;
    goto LABEL_20;
  }
  WPP_RECORDER_SF_dqdL(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(v4 + 135), (v9 >> 9) & 1, a4);
  if ( (*(_DWORD *)(v4 + 476) & 0x200) == 0 )
  {
    v8 = 3221225473LL;
LABEL_20:
    v20 = WdfFunctions_01023;
    v21 = *(_QWORD *)(v4 + 424);
    *(_QWORD *)(v4 + 424) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v20 + 2104))(WdfDriverGlobals, v21, v8);
    return;
  }
  v22 = *(_QWORD **)(v4 + 8);
  v23 = v22[18];
  if ( *(_BYTE *)(v4 + 432) )
  {
    Controller_HwVerifierBreakIfEnabled(
      v22,
      *(_QWORD *)v4,
      0,
      0x40000LL,
      "Set Address Command with BSR=1 failed",
      (_QWORD *)(a1 + 24),
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
    v24 = *(_DWORD *)(v4 + 476) & 0xFFFF2BFF;
    *(_QWORD *)(v4 + 488) = v4;
    *(_DWORD *)(v4 + 476) = v24 | 0x2800;
    *(_BYTE *)(v4 + 479) = *(_BYTE *)(v4 + 135);
    Command_SendCommand(v23, v4 + 440);
  }
}
