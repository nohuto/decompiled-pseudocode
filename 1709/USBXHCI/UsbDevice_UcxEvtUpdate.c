/*
 * XREFs of UsbDevice_UcxEvtUpdate @ 0x1C0037000
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C00373D4 (UsbDevice_UpdateUsbDevice.c)
 */

__int64 __fastcall UsbDevice_UcxEvtUpdate(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int16 v15; // ax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // rax
  _QWORD v24[5]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  memset(v24, 0, sizeof(v24));
  LOWORD(v24[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v24);
  v4 = v24[1];
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v24[1] + 16LL),
         off_1C004E2F0);
  v6 = v5;
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v7 + 144);
  v9 = *(_QWORD *)(v7 + 88);
  if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
  {
    v10 = v5 + 560;
    v11 = v5 + 568;
    if ( !*(_BYTE *)(v5 + 608) )
      v11 = v5 + 560;
    memset(*(void **)(*(_QWORD *)(v11 + 32) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(v11 + 32) + 44LL));
    v12 = v10 + 8;
    if ( !*(_BYTE *)(v10 + 48) )
      v12 = v10;
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 16LL);
    v14 = -(__int64)((*(_DWORD *)(v9 + 104) & 4) != 0);
    *(_DWORD *)(v13 + 4) |= 1u;
    v15 = *(_WORD *)(v4 + 48);
    v16 = v14 & 0x20;
    *(_DWORD *)(v16 + v13 + 40) &= 0x3FFFFFu;
    *(_WORD *)(v16 + v13 + 36) = v15;
    memset((void *)(v6 + 440), 0, 0x60uLL);
    *(_QWORD *)(v6 + 488) = v6;
    *(_QWORD *)(v6 + 480) = UsbDevice_UpdateCompletion;
    v17 = v10 + 8;
    *(_DWORD *)(v6 + 476) = *(_DWORD *)(v6 + 476) & 0xFFFF03FF | 0x3400;
    *(_BYTE *)(v6 + 479) = *(_BYTE *)(v6 + 135);
    if ( !*(_BYTE *)(v10 + 48) )
      v17 = v10;
    v18 = *(_QWORD *)(v17 + 32);
    v19 = v10 + 8;
    *(_QWORD *)(v6 + 464) = *(_QWORD *)(v18 + 24);
    if ( !*(_BYTE *)(v10 + 48) )
      v19 = v10;
    *(_QWORD *)(v6 + 512) = *(_QWORD *)(*(_QWORD *)(v19 + 32) + 16LL);
    v20 = v10 + 8;
    if ( !*(_BYTE *)(v10 + 48) )
      v20 = v10;
    *(_DWORD *)(v6 + 520) = *(_DWORD *)(*(_QWORD *)(v20 + 32) + 44LL);
    v21 = *(_QWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 524) = 1;
    *(_QWORD *)(v6 + 528) = v6;
    if ( Controller_IsControllerAccessible(v21) )
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
  v23 = WdfFunctions_01015;
  *(_QWORD *)(v6 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v23 + 2104))(WdfDriverGlobals, a2, v3);
}
