/*
 * XREFs of Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0011900
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000DF64 (WPP_RECORDER_SF_dddd.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0010534 (XilEndpoint_FreeStreamContextArray.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     TR_Disable_Internal @ 0x1C0020398 (TR_Disable_Internal.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_EndpointStaticStreamsEnableCompletion(__int64 a1, int a2)
{
  __int64 v4; // r15
  __int64 **v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rsi
  __int64 v8; // rbx
  int v9; // edx
  unsigned int i; // edi
  __int64 v11; // rax
  PWDF_DRIVER_GLOBALS v12; // rcx
  int v14; // [rsp+28h] [rbp-80h]
  int v15; // [rsp+30h] [rbp-78h]
  int v16; // [rsp+38h] [rbp-70h]
  int v17; // [rsp+40h] [rbp-68h]
  _QWORD v18[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v18, 0, sizeof(v18));
  LOWORD(v18[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a1,
    v18);
  v4 = v18[1];
  v5 = (__int64 **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004B098);
  v7 = *v5;
  v8 = **v5;
  if ( a2 < 0 )
  {
    for ( i = 1; i <= *((_DWORD *)v7 + 2); ++i )
    {
      LOBYTE(v6) = 1;
      TR_Disable_Internal(v7[13 * i - 7], v6);
    }
    XilEndpoint_FreeStreamContextArray(v7);
    *(_QWORD *)(v8 + 136) = *(_QWORD *)(v8 + 128);
    v17 = a2;
    v16 = *((_DWORD *)v7 + 2);
    v15 = *(_DWORD *)(v8 + 144);
    v14 = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v8 + 80),
      2u,
      0xDu,
      0x6Cu,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      v14,
      v15,
      v16,
      v17);
    v11 = WdfFunctions_01023;
    v12 = WdfDriverGlobals;
    *(_DWORD *)(v4 + 4) = -2147481600;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(v11 + 1232))(v12, *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL));
  }
  else
  {
    LOBYTE(v6) = 1;
    TR_Disable_Internal(*(_QWORD *)(v8 + 88), v6);
    XilEndpoint_FreeStreamContextArray(*(_QWORD **)(v8 + 128));
    ExFreePoolWithTag(*(PVOID *)(v8 + 128), 0x49434858u);
    *(_QWORD *)(v8 + 128) = 0LL;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v8 + 80),
      v9,
      13,
      107,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v8 + 16) + 135LL),
      *(_DWORD *)(v8 + 144),
      *((_DWORD *)v7 + 2));
    *(_DWORD *)(v4 + 4) = 0;
  }
  if ( a2 >= 0 )
    ESM_AddEvent((PVOID)(v8 + 288));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a1,
           (unsigned int)a2);
}
