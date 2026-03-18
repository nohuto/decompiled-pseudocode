/*
 * XREFs of Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0018BC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C00178C8 (XilEndpoint_FreeStreamContextArray.c)
 *     TR_Disable_Internal @ 0x1C0022ADC (TR_Disable_Internal.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_EndpointStaticStreamsEnableCompletion(__int64 a1, int a2)
{
  __int64 v4; // r15
  __int64 **v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rsi
  __int64 v8; // rbx
  unsigned int i; // edi
  __int64 v10; // rax
  PWDF_DRIVER_GLOBALS v11; // rcx
  int v13; // [rsp+28h] [rbp-80h]
  int v14; // [rsp+28h] [rbp-80h]
  int v15; // [rsp+30h] [rbp-78h]
  int v16; // [rsp+30h] [rbp-78h]
  int v17; // [rsp+38h] [rbp-70h]
  int v18; // [rsp+38h] [rbp-70h]
  int v19; // [rsp+40h] [rbp-68h]
  _QWORD v20[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v20, 0, sizeof(v20));
  LOWORD(v20[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a1,
    v20);
  v4 = v20[1];
  v5 = (__int64 **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004E098);
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
    v19 = a2;
    v18 = *((_DWORD *)v7 + 2);
    v16 = *(_DWORD *)(v8 + 144);
    v14 = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v8 + 80),
      2u,
      0xDu,
      0x6Cu,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      v14,
      v16,
      v18,
      v19);
    v10 = WdfFunctions_01015;
    v11 = WdfDriverGlobals;
    *(_DWORD *)(v4 + 4) = -2147481600;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(v10 + 1232))(v11, *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL));
  }
  else
  {
    LOBYTE(v6) = 1;
    TR_Disable_Internal(*(_QWORD *)(v8 + 88), v6);
    XilEndpoint_FreeStreamContextArray(*(_QWORD **)(v8 + 128));
    ExFreePoolWithTag(*(PVOID *)(v8 + 128), 0x49434858u);
    *(_QWORD *)(v8 + 128) = 0LL;
    v17 = *((_DWORD *)v7 + 2);
    v15 = *(_DWORD *)(v8 + 144);
    v13 = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v8 + 80),
      4u,
      0xDu,
      0x6Bu,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      v13,
      v15,
      v17);
    *(_DWORD *)(v4 + 4) = 0;
  }
  if ( a2 >= 0 )
    ESM_AddEvent((PVOID)(v8 + 288));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a1,
           (unsigned int)a2);
}
