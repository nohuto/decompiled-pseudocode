/*
 * XREFs of UsbDevice_SetAddress @ 0x1C0032E78
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x1C0031890 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0033820 (UsbDevice_UcxEvtAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0011EBC (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0035B34 (WPP_RECORDER_SF_dqq.c)
 *     XilCoreUsbDevice_GetInputContextBufferLA @ 0x1C003FC6C (XilCoreUsbDevice_GetInputContextBufferLA.c)
 *     XilCoreUsbDevice_GetInputContextBufferSize @ 0x1C003FC84 (XilCoreUsbDevice_GetInputContextBufferSize.c)
 *     XilCoreUsbDevice_GetInputContextBufferVA @ 0x1C003FC98 (XilCoreUsbDevice_GetInputContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_SetAddress(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  unsigned int v4; // edi
  __int64 v5; // r12
  bool v6; // zf
  __int64 v8; // rcx
  __int64 v10; // rbx
  void *InputContextBufferVA; // rax
  size_t v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rbp
  int v15; // r8d
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int *v21; // rdx
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // r8d
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  char v31; // cl
  __int64 v32; // rcx
  char v33; // al
  int v34; // eax
  __int64 v35; // rax
  bool v36; // cc
  unsigned int v37; // ecx
  __int64 v38; // rcx
  int v39; // r8d
  unsigned int v40; // ecx
  char v41; // al
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v45; // [rsp+30h] [rbp-48h]
  __int64 v46; // [rsp+80h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = a1 + 560;
  v4 = 0;
  v5 = a1 + 568;
  v6 = *(_BYTE *)(a1 + 609) == 0;
  v8 = a1 + 568;
  v10 = *(_QWORD *)(v2 + 88);
  if ( v6 )
    v8 = v3;
  v46 = *(_QWORD *)(v2 + 144);
  InputContextBufferVA = (void *)XilCoreUsbDevice_GetInputContextBufferVA(v8);
  memset(InputContextBufferVA, 0, v12);
  v13 = v3 + 8;
  if ( !*(_BYTE *)(v3 + 49) )
    v13 = v3;
  v14 = XilCoreUsbDevice_GetInputContextBufferVA(v13);
  v15 = 0;
  v16 = v14 + ((*(_DWORD *)(v10 + 104) & 4) != 0 ? 128LL : 64LL);
  v17 = -(__int64)((*(_DWORD *)(v10 + 104) & 4) != 0);
  *(_DWORD *)(v14 + 4) |= 3u;
  v18 = v17 & 0x20;
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(v14 + 4);
  v19 = *(_DWORD *)(a1 + 36);
  if ( v19 > 1 )
  {
    v20 = 0;
    v21 = (unsigned int *)(a1 + 48);
    v22 = v19 - 1;
    do
    {
      v23 = *v21++;
      if ( v23 > 0xF )
        v23 = 15;
      v24 = v23 << v20;
      v20 += 4;
      v15 |= v24;
      --v22;
    }
    while ( v22 );
  }
  v25 = *(_DWORD *)(v18 + v14 + 32) ^ (v15 ^ *(_DWORD *)(v18 + v14 + 32)) & 0xFFFFF;
  *(_DWORD *)(v18 + v14 + 32) = v25;
  v26 = *(_DWORD *)(a1 + 20);
  if ( v26 )
  {
    switch ( v26 )
    {
      case 1:
        v27 = v25 & 0xFF0FFFFF | 0x100000;
        break;
      case 2:
        v27 = v25 & 0xFF0FFFFF | 0x300000;
        break;
      case 3:
        v27 = v25 & 0xFF0FFFFF | 0x400000;
        break;
      default:
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          0xCu,
          0x14u,
          (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
          *(unsigned __int8 *)(a1 + 135),
          *(_DWORD *)(a1 + 20));
        return (unsigned int)-1073741811;
    }
  }
  else
  {
    v27 = v25 & 0xFF0FFFFF | 0x200000;
  }
  *(_DWORD *)(v18 + v14 + 32) = v27 & 0x7FFFFFF | 0x8000000;
  *(_BYTE *)(v18 + v14 + 38) = *(_BYTE *)(a1 + 44);
  v28 = *(_QWORD *)(a1 + 24);
  if ( v28 )
  {
    v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v28,
            off_1C004B2F0);
    if ( *(_DWORD *)(v29 + 144) > 1u )
      *(_DWORD *)(v18 + v14 + 32) |= 0x2000000u;
    *(_BYTE *)(v18 + v14 + 40) = *(_BYTE *)(v29 + 135);
  }
  v30 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v30 )
    v31 = *(_BYTE *)(a1 + 4 * v30 + 44);
  else
    v31 = 0;
  *(_BYTE *)(v18 + v14 + 41) = v31;
  *(_DWORD *)(v16 + 4) ^= (*(_DWORD *)(v16 + 4) ^ (8 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 120LL))) & 0x38;
  *(_WORD *)(v16 + 6) = *(_WORD *)(*(_QWORD *)(a1 + 176) + 100LL) & 0x7FF;
  v32 = *(_QWORD *)(a1 + 176);
  v33 = *(_BYTE *)(v32 + 99) & 3;
  if ( v33 == 1 )
  {
    v34 = 0;
  }
  else if ( (*(_QWORD *)(*(_QWORD *)v32 + 272LL) & 0x10000000000000LL) == 0
         || v33 != 3
         || *(char *)(v32 + 98) >= 0
         || (v35 = *(_QWORD *)(v32 + 16), *(_WORD *)(v35 + 124) != 1529)
         || *(_WORD *)(v35 + 126) != 4353
         || (v36 = *(_DWORD *)(v35 + 36) <= 1u, v34 = 0, v36) )
  {
    v34 = 6;
  }
  v37 = v34 | *(_DWORD *)(v16 + 4) & 0xFFFFFFF9;
  *(_DWORD *)(v16 + 4) = v37;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 152LL) = HIWORD(v37);
  *(_QWORD *)(v16 + 8) = Endpoint_GetDequeuePointer(*(_QWORD *)(a1 + 176), 0);
  v38 = v5;
  if ( !*(_BYTE *)(v3 + 49) )
    v38 = v3;
  v45 = XilCoreUsbDevice_GetInputContextBufferVA(v38);
  WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), v45, v39, 21);
  memset((void *)(a1 + 440), 0, 0x60uLL);
  *(_QWORD *)(a1 + 480) = UsbDevice_SetAddressCompletion;
  v40 = *(_DWORD *)(a1 + 476) & 0xFFFF2DFF | ((a2 & 1 | 0x16) << 9);
  *(_QWORD *)(a1 + 488) = a1;
  v41 = *(_BYTE *)(a1 + 135);
  *(_DWORD *)(a1 + 476) = v40;
  v42 = v5;
  *(_BYTE *)(a1 + 479) = v41;
  if ( !*(_BYTE *)(v3 + 49) )
    v42 = v3;
  *(_QWORD *)(a1 + 464) = XilCoreUsbDevice_GetInputContextBufferLA(v42);
  v43 = v5;
  if ( !*(_BYTE *)(v3 + 49) )
    v43 = v3;
  *(_QWORD *)(a1 + 512) = XilCoreUsbDevice_GetInputContextBufferVA(v43);
  if ( !*(_BYTE *)(v3 + 49) )
    v5 = v3;
  *(_DWORD *)(a1 + 520) = XilCoreUsbDevice_GetInputContextBufferSize(v5);
  *(_DWORD *)(a1 + 524) = 1;
  *(_QWORD *)(a1 + 528) = a1;
  Command_SendCommand(v46, a1 + 440);
  return v4;
}
