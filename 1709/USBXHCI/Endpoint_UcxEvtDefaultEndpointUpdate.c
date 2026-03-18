/*
 * XREFs of Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001BBE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000FA0C (CommonBuffer_ReleaseBuffer.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C0017374 (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001917C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C0019248 (Endpoint_InitializeTransferRing.c)
 */

__int64 __fastcall Endpoint_UcxEvtDefaultEndpointUpdate(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 *v7; // r14
  int v8; // edx
  _DWORD *v9; // rax
  int v10; // ebx
  _DWORD *v11; // rdx
  __int64 v13; // rsi
  __int64 v14; // r10
  __int64 v15; // r10
  __int16 v16; // ax
  char v17; // al
  __int64 v18; // rax
  __int64 DequeuePointer; // rax
  __int64 v20; // r10
  __int64 v21; // [rsp+28h] [rbp-80h]
  __int64 v22; // [rsp+30h] [rbp-78h]
  __int128 v23; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v24[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v24, 0, sizeof(v24));
  LOWORD(v24[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v24);
  v3 = v24[1];
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v24[1] + 24LL),
         off_1C004E1D8);
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)v4 + 72LL),
    4u,
    0xDu,
    0x1Eu,
    (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL),
    *(_DWORD *)(v4 + 144),
    *(_DWORD *)(v3 + 32));
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 88LL);
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 144LL);
  v7 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a2,
                    off_1C004E098);
  memset(v7, 0, 0x78uLL);
  *v7 = v4;
  *((_DWORD *)v7 + 4) = *(_DWORD *)(v3 + 32);
  v8 = 2112;
  if ( (*(_DWORD *)(v5 + 104) & 4) == 0 )
    v8 = 1056;
  v9 = XilEndpoint_AcquireBuffer((_BYTE *)v4, v8, v4, 829714501);
  v10 = 0;
  v7[1] = (__int64)v9;
  if ( v9 )
  {
    v13 = *((_QWORD *)v9 + 2);
    v14 = -(__int64)((*(_BYTE *)(v5 + 104) & 4) != 0);
    *(_DWORD *)(v13 + 4) |= 2u;
    v15 = v14 & 0x40;
    *(_DWORD *)(v13 + v15 + 68) ^= (*(_DWORD *)(v13 + v15 + 68) ^ (8 * *(_DWORD *)(v4 + 120))) & 0x38;
    v16 = *((_WORD *)v7 + 8);
    *(_BYTE *)(v13 + v15 + 66) = 0;
    *(_DWORD *)(v13 + v15 + 64) &= 0xFFFF80FF;
    *(_WORD *)(v13 + v15 + 70) = v16;
    *(_BYTE *)(v13 + v15 + 69) = 0;
    v17 = *(_BYTE *)(v4 + 99) & 3;
    v23 = *(_OWORD *)(*(_QWORD *)v4 + 272LL);
    if ( v17 != 1 )
    {
      if ( ((v17 == 3) & _bittest64((const signed __int64 *)&v23, 0x34u)) == 0
        || *(char *)(v4 + 98) >= 0
        || (v18 = *(_QWORD *)(v4 + 16), *(_WORD *)(v18 + 124) != 1529)
        || *(_WORD *)(v18 + 126) != 4353
        || *(_DWORD *)(v18 + 36) <= 1u )
      {
        v10 = 6;
      }
    }
    *(_DWORD *)(v13 + v15 + 68) = v10 & 0xFFFFFFFE | *(_DWORD *)(v13 + v15 + 68) & 0xFFFFFFF8;
    DequeuePointer = Endpoint_GetDequeuePointer(v4, 0);
    *(_QWORD *)(v13 + v20 + 72) = DequeuePointer;
    *(_DWORD *)(v4 + 152) = *(unsigned __int16 *)(v13 + v20 + 70);
    Endpoint_InitializeTransferRing((__int64 *)v4, 0);
    memset(v7 + 3, 0, 0x60uLL);
    v7[9] = (__int64)v7;
    v7[8] = (__int64)Endpoint_EvaluateContextCompletion;
    *((_DWORD *)v7 + 15) = *((_DWORD *)v7 + 15) & 0xFFFF03FF | 0x3400;
    *((_BYTE *)v7 + 63) = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL);
    v7[6] = *(_QWORD *)(v7[1] + 24);
    v7[12] = v13;
    *((_DWORD *)v7 + 26) = *(_DWORD *)(v7[1] + 44);
    *((_DWORD *)v7 + 27) = 2;
    v7[14] = v4;
    return Command_SendCommand(v6, (__int64)(v7 + 3));
  }
  else
  {
    LODWORD(v22) = *(_DWORD *)(v4 + 144);
    LODWORD(v21) = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)v4 + 72LL),
      2u,
      0xDu,
      0x1Fu,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      v21,
      v22);
    v11 = (_DWORD *)v7[1];
    if ( v11 )
    {
      CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v4 + 120LL), v11);
      v7[1] = 0LL;
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             3221225626LL);
  }
}
