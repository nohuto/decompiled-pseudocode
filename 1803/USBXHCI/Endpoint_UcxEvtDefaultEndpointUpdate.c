/*
 * XREFs of Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0014980
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C00068AC (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C000FF24 (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0011EBC (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C0011F7C (Endpoint_InitializeTransferRing.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall Endpoint_UcxEvtDefaultEndpointUpdate(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // edx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 *v8; // rsi
  char *v9; // rax
  int v10; // ebx
  _DWORD *v11; // rdx
  __int64 v13; // rbp
  __int64 v14; // r11
  __int64 v15; // r11
  __int16 v16; // ax
  char v17; // al
  __int64 v18; // rax
  __int64 DequeuePointer; // rax
  unsigned int v20; // r10d
  __int64 v21; // r11
  __int64 v22; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+30h] [rbp-78h]
  __int128 v24; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v25[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v25, 0, sizeof(v25));
  LOWORD(v25[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v25);
  v3 = v25[1];
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v25[1] + 24LL),
         off_1C004B1D8);
  v5 = *(_DWORD *)(v4 + 144);
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(*(_QWORD *)v4 + 72LL),
    v5,
    13,
    30,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL),
    *(_DWORD *)(v4 + 144),
    *(_DWORD *)(v3 + 32));
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 88LL);
  v7 = *(_QWORD *)(*(_QWORD *)v4 + 144LL);
  v8 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WdfDriverGlobals,
                    a2,
                    off_1C004B098);
  memset(v8, 0, 0x78uLL);
  *v8 = v4;
  *((_DWORD *)v8 + 4) = *(_DWORD *)(v3 + 32);
  v9 = XilEndpoint_AcquireBuffer((_BYTE *)v4, (*(_DWORD *)(v6 + 104) & 4) != 0 ? 2112 : 1056, v4, 829714501);
  v10 = 0;
  v8[1] = (__int64)v9;
  if ( v9 )
  {
    v13 = *((_QWORD *)v9 + 2);
    v14 = -(__int64)((*(_DWORD *)(v6 + 104) & 4) != 0);
    *(_DWORD *)(v13 + 4) |= 2u;
    v15 = v13 + (v14 & 0x40) + 64;
    *(_DWORD *)(v15 + 4) ^= (*(_DWORD *)(v15 + 4) ^ (8 * *(_DWORD *)(v4 + 120))) & 0x38;
    v16 = *((_WORD *)v8 + 8);
    *(_BYTE *)(v15 + 2) = 0;
    *(_DWORD *)v15 &= 0xFFFF80FF;
    *(_WORD *)(v15 + 6) = v16;
    *(_BYTE *)(v15 + 5) = 0;
    v17 = *(_BYTE *)(v4 + 99) & 3;
    v24 = *(_OWORD *)(*(_QWORD *)v4 + 272LL);
    if ( v17 != 1 )
    {
      if ( ((v17 == 3) & _bittest64((const signed __int64 *)&v24, 0x34u)) == 0
        || *(char *)(v4 + 98) >= 0
        || (v18 = *(_QWORD *)(v4 + 16), *(_WORD *)(v18 + 124) != 1529)
        || *(_WORD *)(v18 + 126) != 4353
        || *(_DWORD *)(v18 + 36) <= 1u )
      {
        v10 = 6;
      }
    }
    *(_DWORD *)(v15 + 4) = v10 & 0xFFFFFFFE | *(_DWORD *)(v15 + 4) & 0xFFFFFFF8;
    DequeuePointer = Endpoint_GetDequeuePointer(v4, 0);
    *(_QWORD *)(v21 + 8) = DequeuePointer;
    *(_DWORD *)(v4 + 152) = HIWORD(v20);
    Endpoint_InitializeTransferRing((__int64 *)v4, 0);
    memset(v8 + 3, 0, 0x60uLL);
    v8[9] = (__int64)v8;
    v8[8] = (__int64)Endpoint_EvaluateContextCompletion;
    *((_DWORD *)v8 + 15) = *((_DWORD *)v8 + 15) & 0xFFFF03FF | 0x3400;
    *((_BYTE *)v8 + 63) = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL);
    v8[6] = *(_QWORD *)(v8[1] + 24);
    v8[12] = v13;
    *((_DWORD *)v8 + 26) = *(_DWORD *)(v8[1] + 44);
    *((_DWORD *)v8 + 27) = 2;
    v8[14] = v4;
    return Command_SendCommand(v7, (__int64)(v8 + 3));
  }
  else
  {
    LODWORD(v23) = *(_DWORD *)(v4 + 144);
    LODWORD(v22) = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)v4 + 72LL),
      2u,
      0xDu,
      0x1Fu,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      v22,
      v23);
    v11 = (_DWORD *)v8[1];
    if ( v11 )
    {
      CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v4 + 120LL), v11);
      v8[1] = 0LL;
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             3221225626LL);
  }
}
