/*
 * XREFs of UsbDevice_UcxEvtUpdate @ 0x1C0034BC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C0034FB4 (UsbDevice_UpdateUsbDevice.c)
 *     XilCoreUsbDevice_GetInputContextBufferLA @ 0x1C003FC6C (XilCoreUsbDevice_GetInputContextBufferLA.c)
 *     XilCoreUsbDevice_GetInputContextBufferSize @ 0x1C003FC84 (XilCoreUsbDevice_GetInputContextBufferSize.c)
 *     XilCoreUsbDevice_GetInputContextBufferVA @ 0x1C003FC98 (XilCoreUsbDevice_GetInputContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_UcxEvtUpdate(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rcx
  void *InputContextBufferVA; // rax
  size_t v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int InputContextBufferSize; // eax
  __int64 v22; // rcx
  __int64 v24; // rax
  _QWORD v25[5]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  memset(v25, 0, sizeof(v25));
  LOWORD(v25[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v25);
  v4 = v25[1];
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v25[1] + 16LL),
         off_1C004B2F0);
  v6 = v5;
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v7 + 144);
  v9 = *(_QWORD *)(v7 + 88);
  if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
  {
    v10 = v5 + 560;
    v11 = v5 + 568;
    v12 = v5 + 568;
    if ( !*(_BYTE *)(v5 + 609) )
      v12 = v5 + 560;
    InputContextBufferVA = (void *)XilCoreUsbDevice_GetInputContextBufferVA(v12);
    memset(InputContextBufferVA, 0, v14);
    v15 = v10 + 8;
    if ( !*(_BYTE *)(v10 + 49) )
      v15 = v10;
    v16 = XilCoreUsbDevice_GetInputContextBufferVA(v15);
    v17 = -(__int64)((*(_DWORD *)(v9 + 104) & 4) != 0);
    *(_DWORD *)(v16 + 4) |= 1u;
    v18 = v16 + (v17 & 0x20) + 32;
    LOWORD(v16) = *(_WORD *)(v4 + 48);
    *(_DWORD *)(v18 + 8) &= 0x3FFFFFu;
    *(_WORD *)(v18 + 4) = v16;
    memset((void *)(v6 + 440), 0, 0x60uLL);
    *(_QWORD *)(v6 + 488) = v6;
    *(_QWORD *)(v6 + 480) = UsbDevice_UpdateCompletion;
    v19 = v11;
    *(_DWORD *)(v6 + 476) = *(_DWORD *)(v6 + 476) & 0xFFFF03FF | 0x3400;
    *(_BYTE *)(v6 + 479) = *(_BYTE *)(v6 + 135);
    if ( !*(_BYTE *)(v10 + 49) )
      v19 = v10;
    *(_QWORD *)(v6 + 464) = XilCoreUsbDevice_GetInputContextBufferLA(v19);
    v20 = v11;
    if ( !*(_BYTE *)(v10 + 49) )
      v20 = v10;
    *(_QWORD *)(v6 + 512) = XilCoreUsbDevice_GetInputContextBufferVA(v20);
    if ( !*(_BYTE *)(v10 + 49) )
      v11 = v10;
    InputContextBufferSize = XilCoreUsbDevice_GetInputContextBufferSize(v11);
    v22 = *(_QWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 520) = InputContextBufferSize;
    *(_DWORD *)(v6 + 524) = 1;
    *(_QWORD *)(v6 + 528) = v6;
    if ( Controller_IsControllerAccessible(v22) )
    {
      *(_QWORD *)(v6 + 424) = a2;
      *(_BYTE *)(v6 + 432) = 0;
      return Command_SendCommand(v8, v6 + 440);
    }
    v3 = -1073741810;
  }
  else
  {
    UsbDevice_UpdateUsbDevice(v5, v4);
  }
  v24 = WdfFunctions_01023;
  *(_QWORD *)(v6 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v24 + 2104))(WdfDriverGlobals, a2, v3);
}
