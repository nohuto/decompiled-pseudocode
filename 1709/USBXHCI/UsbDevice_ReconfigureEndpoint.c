/*
 * XREFs of UsbDevice_ReconfigureEndpoint @ 0x1C0034F0C
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001C8D0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001CB80 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C0034C10 (UsbDevice_InitializeEndpointContext.c)
 */

__int64 __fastcall UsbDevice_ReconfigureEndpoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rcx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  char v12; // al
  __int64 v13; // rsi
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // ebp
  __int64 v17; // r8
  __int64 v18; // r8
  unsigned int i; // r8d
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // r8d
  int v27; // [rsp+28h] [rbp-50h]
  int v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+80h] [rbp+8h]

  v6 = *(__int64 **)(a1 + 8);
  v8 = v6[11];
  v29 = v6[18];
  v28 = *(_DWORD *)(a2 + 144);
  v27 = *(unsigned __int8 *)(a1 + 135);
  WPP_RECORDER_SF_DD(v6[9], 4u, 0xCu, 0x43u, (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids, v27, v28);
  v9 = a1 + 568;
  if ( !*(_BYTE *)(a1 + 608) )
    v9 = a1 + 560;
  memset(*(void **)(*(_QWORD *)(v9 + 32) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(v9 + 32) + 44LL));
  v10 = a1 + 568;
  if ( !*(_BYTE *)(a1 + 608) )
    v10 = a1 + 560;
  v11 = *(_DWORD **)(*(_QWORD *)(v10 + 32) + 16LL);
  v12 = -(*(_DWORD *)(v8 + 104) & 4);
  v11[1] |= 1u;
  v13 = v12 != 0 ? 0x20 : 0;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v14 = *(_DWORD *)((char *)v11 + v13 + 32) | 0x4000000;
    *(_DWORD *)((char *)v11 + v13 + 32) = v14;
    *((_BYTE *)v11 + v13 + 39) = *(_BYTE *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 144) > 1u )
        *(_DWORD *)((char *)v11 + v13 + 32) = v14 | 0x2000000;
      *(_DWORD *)((char *)v11 + v13 + 40) ^= (*(_DWORD *)((char *)v11 + v13 + 40) ^ (*(_DWORD *)(a1 + 148) << 16)) & 0x30000;
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(a1 + 136) )
  {
    v15 = *(_QWORD *)(a1 + 24);
    if ( v15 )
    {
      if ( *(int *)(a1 + 20) < 2
        && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         v15,
                         off_1C004E2F0)
                     + 144) > 1u )
      {
        *(_DWORD *)((char *)v11 + v13 + 32) |= 0x2000000u;
      }
    }
  }
  v16 = *(_DWORD *)(a2 + 144);
  v17 = (unsigned int)(v16 - 1) + 2LL;
  if ( (*(_DWORD *)(v8 + 104) & 4) != 0 )
    v18 = v17 << 6;
  else
    v18 = 32 * v17;
  UsbDevice_InitializeEndpointContext(a1, a2, (__int64)v11 + v18);
  for ( i = 0; i < 0x20; ++i )
  {
    v20 = *(_DWORD *)(a1 + 152);
    if ( _bittest(&v20, i) )
      *(_DWORD *)((char *)v11 + v13 + 32) = (i << 27) | *(_DWORD *)((char *)v11 + v13 + 32) & 0x7FFFFFF;
  }
  v11[1] |= 1 << v16;
  *v11 |= 1 << v16;
  memset((void *)(a1 + 440), 0, 0x60uLL);
  *(_QWORD *)(a1 + 488) = a1;
  *(_QWORD *)(a1 + 480) = UsbDevice_ConfigureEndpointCompletion;
  v21 = a1 + 568;
  v22 = a1 + 568;
  *(_DWORD *)(a1 + 476) = *(_DWORD *)(a1 + 476) & 0xFFFF01FF | 0x3000;
  *(_BYTE *)(a1 + 479) = *(_BYTE *)(a1 + 135);
  if ( !*(_BYTE *)(a1 + 608) )
    v21 = a1 + 560;
  v23 = *(_QWORD *)(v21 + 32);
  v24 = a1 + 568;
  *(_QWORD *)(a1 + 464) = *(_QWORD *)(v23 + 24);
  if ( !*(_BYTE *)(a1 + 608) )
    v24 = a1 + 560;
  *(_QWORD *)(a1 + 512) = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 16LL);
  if ( !*(_BYTE *)(a1 + 608) )
    v22 = a1 + 560;
  v25 = *(_DWORD *)(*(_QWORD *)(v22 + 32) + 44LL);
  *(_QWORD *)(a1 + 536) = a3;
  *(_DWORD *)(a1 + 520) = v25;
  *(_DWORD *)(a1 + 524) = 1;
  *(_QWORD *)(a1 + 528) = a1;
  *(_QWORD *)(a1 + 544) = a4;
  return Command_SendCommand(v29, a1 + 440);
}
