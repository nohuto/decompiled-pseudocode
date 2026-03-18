/*
 * XREFs of UsbDevice_ReconfigureEndpoint @ 0x1C0032ACC
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0015680 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0015930 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C0032754 (UsbDevice_InitializeEndpointContext.c)
 *     XilCoreUsbDevice_GetInputContextBufferLA @ 0x1C003FC6C (XilCoreUsbDevice_GetInputContextBufferLA.c)
 *     XilCoreUsbDevice_GetInputContextBufferSize @ 0x1C003FC84 (XilCoreUsbDevice_GetInputContextBufferSize.c)
 *     XilCoreUsbDevice_GetInputContextBufferVA @ 0x1C003FC98 (XilCoreUsbDevice_GetInputContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_ReconfigureEndpoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rcx
  __int64 v8; // r13
  __int64 v9; // rcx
  void *InputContextBufferVA; // rax
  size_t v11; // r8
  __int64 v12; // rcx
  _DWORD *v13; // rbp
  char v14; // cl
  char *v15; // rbx
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // r15d
  __int64 v19; // r8
  __int64 v20; // r8
  unsigned int i; // r8d
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  int v28; // [rsp+28h] [rbp-50h]
  int v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+80h] [rbp+8h]

  v6 = *(__int64 **)(a1 + 8);
  v8 = v6[11];
  v30 = v6[18];
  v29 = *(_DWORD *)(a2 + 144);
  v28 = *(unsigned __int8 *)(a1 + 135);
  WPP_RECORDER_SF_dd(v6[9], 4u, 0xCu, 0x45u, (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids, v28, v29);
  v9 = a1 + 568;
  if ( !*(_BYTE *)(a1 + 609) )
    v9 = a1 + 560;
  InputContextBufferVA = (void *)XilCoreUsbDevice_GetInputContextBufferVA(v9);
  memset(InputContextBufferVA, 0, v11);
  v12 = a1 + 568;
  if ( !*(_BYTE *)(a1 + 609) )
    v12 = a1 + 560;
  v13 = (_DWORD *)XilCoreUsbDevice_GetInputContextBufferVA(v12);
  v14 = -(*(_DWORD *)(v8 + 104) & 4);
  v13[1] |= 1u;
  v15 = (char *)v13 + (v14 != 0 ? 64LL : 32LL);
  if ( *(_BYTE *)(a1 + 136) )
  {
    v16 = *(_DWORD *)v15 | 0x4000000;
    *(_DWORD *)v15 = v16;
    v15[7] = *(_BYTE *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 144) > 1u )
        *(_DWORD *)v15 = v16 | 0x2000000;
      *((_DWORD *)v15 + 2) ^= (*((_DWORD *)v15 + 2) ^ (*(_DWORD *)(a1 + 148) << 16)) & 0x30000;
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(a1 + 136) )
  {
    v17 = *(_QWORD *)(a1 + 24);
    if ( v17 )
    {
      if ( *(int *)(a1 + 20) < 2
        && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                         WdfDriverGlobals,
                         v17,
                         off_1C004B2F0)
                     + 144) > 1u )
      {
        *(_DWORD *)v15 |= 0x2000000u;
      }
    }
  }
  v18 = *(_DWORD *)(a2 + 144);
  v19 = (unsigned int)(v18 - 1) + 2LL;
  if ( (*(_DWORD *)(v8 + 104) & 4) != 0 )
    v20 = v19 << 6;
  else
    v20 = 32 * v19;
  UsbDevice_InitializeEndpointContext(a1, a2, (__int64)v13 + v20);
  for ( i = 0; i < 0x20; ++i )
  {
    v22 = *(_DWORD *)(a1 + 152);
    if ( _bittest(&v22, i) )
      *(_DWORD *)v15 = (i << 27) | *(_DWORD *)v15 & 0x7FFFFFF;
  }
  v13[1] |= 1 << v18;
  *v13 |= 1 << v18;
  memset((void *)(a1 + 440), 0, 0x60uLL);
  *(_QWORD *)(a1 + 488) = a1;
  *(_QWORD *)(a1 + 480) = UsbDevice_ConfigureEndpointCompletion;
  v23 = a1 + 568;
  *(_DWORD *)(a1 + 476) = *(_DWORD *)(a1 + 476) & 0xFFFF01FF | 0x3000;
  *(_BYTE *)(a1 + 479) = *(_BYTE *)(a1 + 135);
  if ( !*(_BYTE *)(a1 + 609) )
    v23 = a1 + 560;
  *(_QWORD *)(a1 + 464) = XilCoreUsbDevice_GetInputContextBufferLA(v23);
  v25 = v24;
  if ( !*(_BYTE *)(a1 + 609) )
    v25 = a1 + 560;
  *(_QWORD *)(a1 + 512) = XilCoreUsbDevice_GetInputContextBufferVA(v25);
  if ( !*(_BYTE *)(a1 + 609) )
    v26 = a1 + 560;
  *(_DWORD *)(a1 + 520) = XilCoreUsbDevice_GetInputContextBufferSize(v26);
  *(_QWORD *)(a1 + 536) = a3;
  *(_DWORD *)(a1 + 524) = 1;
  *(_QWORD *)(a1 + 528) = a1;
  *(_QWORD *)(a1 + 544) = a4;
  return Command_SendCommand(v30, a1 + 440);
}
