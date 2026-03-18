/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0015930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000DF64 (WPP_RECORDER_SF_dddd.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C000FF58 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0010134 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0010534 (XilEndpoint_FreeStreamContextArray.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0011EBC (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     TR_Disable_Internal @ 0x1C0020398 (TR_Disable_Internal.c)
 *     TR_Enable_Internal @ 0x1C0020638 (TR_Enable_Internal.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C0032ACC (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsEnable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  _DWORD *v6; // rsi
  __int64 v7; // rbx
  int v8; // edx
  unsigned int v9; // edx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // edi
  unsigned int v14; // ebp
  __int64 DequeuePointer; // rax
  __int64 v16; // r8
  unsigned int i; // ebp
  __int64 v18; // [rsp+28h] [rbp-90h]
  __int64 v19; // [rsp+30h] [rbp-88h]
  __int64 v20; // [rsp+38h] [rbp-80h]
  int v21; // [rsp+50h] [rbp-68h] BYREF
  int v22; // [rsp+54h] [rbp-64h] BYREF
  _QWORD v23[5]; // [rsp+58h] [rbp-60h] BYREF

  memset(v23, 0, sizeof(v23));
  LOWORD(v23[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a3,
    v23);
  v5 = v23[1];
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a2,
                   off_1C004B368);
  v7 = *(_QWORD *)v6;
  v8 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 135LL);
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(*(_QWORD *)v6 + 80LL),
    v8,
    13,
    103,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 135LL),
    *(_DWORD *)(*(_QWORD *)v6 + 144LL),
    v6[2]);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01023 + 1304))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL),
    0LL,
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, int *, int *))(WdfFunctions_01023 + 1224))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL),
    &v22,
    &v21);
  if ( v22 || v21 )
  {
    LODWORD(v20) = v22;
    LODWORD(v19) = *(_DWORD *)(v7 + 144);
    LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
    result = WPP_RECORDER_SF_dddd(
               *(_QWORD *)(v7 + 80),
               2u,
               0xDu,
               0x68u,
               (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
               v18,
               v19,
               v20,
               v21);
    *(_DWORD *)(v5 + 4) = -2147482880;
    v13 = -1073741811;
    goto LABEL_16;
  }
  v9 = v6[2];
  if ( v9 && v9 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 88LL) + 112LL) )
  {
    *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                 WdfDriverGlobals,
                 a3,
                 off_1C004B098) = v6;
    result = XilEndpoint_AllocateStreamContextArray((__int64)v6);
    v13 = result;
    if ( (int)result < 0 )
    {
LABEL_6:
      *(_DWORD *)(v5 + 4) = -1073737728;
      goto LABEL_16;
    }
    v14 = 1;
    *(_QWORD *)(v7 + 136) = v6;
    if ( v6[2] )
    {
      while ( 1 )
      {
        v13 = TR_Enable_Internal(*(_QWORD *)(104LL * (v14 - 1) + *(_QWORD *)(v7 + 136) + 48));
        if ( v13 < 0 )
          break;
        DequeuePointer = Endpoint_GetDequeuePointer(v7, v14);
        v16 = v14++;
        v12 = 2 * v16;
        v11 = *(_QWORD *)(*(_QWORD *)(v7 + 136) + 32LL);
        *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8 * v12) = DequeuePointer;
        if ( v14 > v6[2] )
          goto LABEL_10;
      }
      LODWORD(v20) = v14;
      LODWORD(v19) = *(_DWORD *)(v7 + 144);
      LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
      result = WPP_RECORDER_SF_dddd(
                 *(_QWORD *)(v7 + 80),
                 2u,
                 0xDu,
                 0x6Au,
                 (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
                 v18,
                 v19,
                 v20,
                 v13);
      goto LABEL_6;
    }
LABEL_10:
    result = XilEndpoint_CommitStreamContextArrayUpdates((__int64)v6, v11, v12);
    v13 = result;
    if ( (int)result >= 0 )
      return UsbDevice_ReconfigureEndpoint(*(_QWORD *)(v7 + 16), v7, Endpoint_EndpointStaticStreamsEnableCompletion, a3);
    *(_DWORD *)(v5 + 4) = -2147481600;
LABEL_16:
    if ( v13 >= 0 )
      return result;
    goto LABEL_17;
  }
  LOBYTE(v9) = 2;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v7 + 80),
    v9,
    13,
    105,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v7 + 16) + 135LL),
    *(_DWORD *)(v7 + 144),
    v6[2]);
  *(_DWORD *)(v5 + 4) = -2147482880;
  v13 = -1073741811;
LABEL_17:
  for ( i = 1; i <= v6[2]; ++i )
  {
    LOBYTE(v11) = 1;
    TR_Disable_Internal(*(_QWORD *)&v6[26 * i - 14], v11);
  }
  *(_QWORD *)(v7 + 136) = *(_QWORD *)(v7 + 128);
  XilEndpoint_FreeStreamContextArray(v6);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1232))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a3,
           (unsigned int)v13);
}
