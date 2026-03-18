/*
 * XREFs of UsbDevice_SetAddress @ 0x1C00352C0
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x1C0033DA0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0035C70 (UsbDevice_UcxEvtAddress.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001917C (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0037F54 (WPP_RECORDER_SF_dqq.c)
 */

__int64 __fastcall UsbDevice_SetAddress(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  unsigned int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rbx
  unsigned int v16; // eax
  int v17; // ecx
  unsigned int *v18; // r8
  __int64 v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // edx
  int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  char v29; // al
  int v30; // ecx
  __int64 v31; // rax
  int v32; // r8d
  __int64 v33; // r9
  char v34; // al
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int128 v39; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = a1 + 560;
  v6 = 0;
  v7 = a1 + 568;
  v8 = *(_QWORD *)(v2 + 88);
  v9 = *(_QWORD *)(v2 + 144);
  if ( !*(_BYTE *)(v3 + 48) )
    v7 = v3;
  memset(*(void **)(*(_QWORD *)(v7 + 32) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(v7 + 32) + 44LL));
  v10 = v3 + 8;
  v11 = 0;
  if ( !*(_BYTE *)(v3 + 48) )
    v10 = v3;
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 16LL);
  v13 = (*(_DWORD *)(v8 + 104) & 4) != 0 ? 0x40 : 0;
  v14 = -(__int64)((*(_DWORD *)(v8 + 104) & 4) != 0);
  *(_DWORD *)(v12 + 4) |= 3u;
  v15 = v14 & 0x20;
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(v12 + 4);
  v16 = *(_DWORD *)(a1 + 36);
  if ( v16 > 1 )
  {
    v17 = 0;
    v18 = (unsigned int *)(a1 + 48);
    v19 = v16 - 1;
    do
    {
      v20 = *v18++;
      if ( v20 > 0xF )
        v20 = 15;
      v21 = v20 << v17;
      v17 += 4;
      v11 |= v21;
      --v19;
    }
    while ( v19 );
  }
  v22 = *(_DWORD *)(v15 + v12 + 32) ^ (*(_DWORD *)(v15 + v12 + 32) ^ v11) & 0xFFFFF;
  *(_DWORD *)(v15 + v12 + 32) = v22;
  v23 = *(_DWORD *)(a1 + 20);
  if ( v23 )
  {
    switch ( v23 )
    {
      case 1:
        v24 = v22 & 0xFF0FFFFF | 0x100000;
        break;
      case 2:
        v24 = v22 & 0xFF0FFFFF | 0x300000;
        break;
      case 3:
        v24 = v22 & 0xFF0FFFFF | 0x400000;
        break;
      default:
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          0xCu,
          0x14u,
          (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
          *(unsigned __int8 *)(a1 + 135),
          *(_DWORD *)(a1 + 20));
        return (unsigned int)-1073741811;
    }
  }
  else
  {
    v24 = v22 & 0xFF0FFFFF | 0x200000;
  }
  *(_DWORD *)(v15 + v12 + 32) = v24;
  *(_DWORD *)(v15 + v12 + 32) = v24 & 0x7FFFFFF | 0x8000000;
  *(_BYTE *)(v15 + v12 + 38) = *(_BYTE *)(a1 + 44);
  v25 = *(_QWORD *)(a1 + 24);
  if ( v25 )
  {
    v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v25,
            off_1C004E2F0);
    if ( *(_DWORD *)(v26 + 144) > 1u )
      *(_DWORD *)(v15 + v12 + 32) |= 0x2000000u;
    *(_BYTE *)(v15 + v12 + 40) = *(_BYTE *)(v26 + 135);
  }
  v27 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v27 )
    *(_BYTE *)(v15 + v12 + 41) = *(_BYTE *)(a1 + 4 * v27 + 44);
  else
    *(_BYTE *)(v15 + v12 + 41) = 0;
  *(_DWORD *)(v13 + v12 + 68) ^= (*(_DWORD *)(v13 + v12 + 68) ^ (8 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 120LL))) & 0x38;
  *(_WORD *)(v13 + v12 + 70) = *(_WORD *)(*(_QWORD *)(a1 + 176) + 100LL) & 0x7FF;
  v28 = *(_QWORD *)(a1 + 176);
  v29 = *(_BYTE *)(v28 + 99) & 3;
  v39 = *(_OWORD *)(*(_QWORD *)v28 + 272LL);
  if ( v29 == 1 )
  {
    v30 = 0;
  }
  else if ( ((v29 == 3) & _bittest64((const signed __int64 *)&v39, 0x34u)) == 0
         || *(char *)(v28 + 98) >= 0
         || (v31 = *(_QWORD *)(v28 + 16), *(_WORD *)(v31 + 124) != 1529)
         || *(_WORD *)(v31 + 126) != 4353
         || (v30 = 0, *(_DWORD *)(v31 + 36) <= 1u) )
  {
    v30 = 6;
  }
  *(_DWORD *)(v13 + v12 + 68) = v30 | *(_DWORD *)(v13 + v12 + 68) & 0xFFFFFFF9;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 152LL) = *(unsigned __int16 *)(v13 + v12 + 70);
  *(_QWORD *)(v13 + v12 + 72) = Endpoint_GetDequeuePointer(*(_QWORD *)(a1 + 176), 0);
  WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), *(unsigned __int8 *)(a1 + 135), v32, 21);
  memset((void *)(a1 + 440), 0, 0x60uLL);
  *(_QWORD *)(a1 + 488) = a1;
  *(_QWORD *)(a1 + 480) = UsbDevice_SetAddressCompletion;
  v33 = v3 + 8;
  v34 = *(_BYTE *)(a1 + 135);
  *(_DWORD *)(a1 + 476) = *(_DWORD *)(a1 + 476) & 0xFFFF2DFF | ((a2 & 1 | 0x16) << 9);
  v35 = v3 + 8;
  *(_BYTE *)(a1 + 479) = v34;
  if ( !*(_BYTE *)(v3 + 48) )
    v35 = v3;
  v36 = *(_QWORD *)(v35 + 32);
  v37 = v3 + 8;
  *(_QWORD *)(a1 + 464) = *(_QWORD *)(v36 + 24);
  if ( !*(_BYTE *)(v3 + 48) )
    v37 = v3;
  *(_QWORD *)(a1 + 512) = *(_QWORD *)(*(_QWORD *)(v37 + 32) + 16LL);
  if ( !*(_BYTE *)(v3 + 48) )
    v33 = v3;
  *(_DWORD *)(a1 + 520) = *(_DWORD *)(*(_QWORD *)(v33 + 32) + 44LL);
  *(_DWORD *)(a1 + 524) = 1;
  *(_QWORD *)(a1 + 528) = a1;
  Command_SendCommand(v9, a1 + 440);
  return v6;
}
