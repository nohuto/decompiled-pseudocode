/*
 * XREFs of HUBHTX_SendInterruptTransfer @ 0x1C0003114
 * Callers:
 *     HUBHSM_SendingInterruptTransfer @ 0x1C0007F10 (HUBHSM_SendingInterruptTransfer.c)
 *     HUBHSM_SendingInterruptTransferAfterResettingPipe @ 0x1C0007F50 (HUBHSM_SendingInterruptTransferAfterResettingPipe.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBHTX_SendInterruptTransfer(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ebx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // r14d
  __int64 (__fastcall *v10)(PWDF_DRIVER_GLOBALS, __int64, __int64 *); // rax
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // [rsp+28h] [rbp-31h]
  int v14; // [rsp+28h] [rbp-31h]
  __int64 v15; // [rsp+30h] [rbp-29h] BYREF
  __int64 v16; // [rsp+38h] [rbp-21h]
  __int64 v17; // [rsp+40h] [rbp-19h]
  _QWORD v18[9]; // [rsp+48h] [rbp-11h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  v16 = 0LL;
  v17 = 0LL;
  v15 = 24LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v1,
         &v15);
  if ( v3 < 0 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005B110);
    v14 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
      v14);
  }
  memset((void *)(a1 + 968), 0, 0x80uLL);
  *(_QWORD *)(a1 + 976) = *(_QWORD *)(a1 + 240);
  *(_DWORD *)(a1 + 1000) = 2;
  v5 = *(_DWORD *)(a1 + 1000);
  *(_DWORD *)(a1 + 968) = 589952;
  if ( *(_BYTE *)(a1 + 2264) )
    v5 = 18;
  *(_DWORD *)(a1 + 1000) = v5;
  *(_QWORD *)(a1 + 1008) = *(_QWORD *)(a1 + 1112);
  if ( *(_BYTE *)(a1 + 232) )
    v6 = *(unsigned __int16 *)(a1 + 88);
  else
    v6 = *(unsigned __int16 *)(a1 + 1120);
  *(_QWORD *)(a1 + 1016) = 0LL;
  *(_DWORD *)(a1 + 1004) = v6;
  *(_QWORD *)(a1 + 992) = *(_QWORD *)(a1 + 1096);
  if ( *(_BYTE *)(a1 + 1104) )
  {
    *(_DWORD *)(a1 + 984) |= 0x80000000;
    *(_BYTE *)(a1 + 1104) = 0;
  }
  memset(v18, 0, sizeof(v18));
  LOBYTE(v18[0]) = 15;
  LODWORD(v18[3]) = 2228227;
  v18[1] = a1 + 968;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v1,
    v18);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v1,
    HUBHTX_SendInterruptTransferComplete,
    a1);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v1,
             v7,
             0LL);
  if ( !(_BYTE)result )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v1);
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v10 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992);
    LODWORD(v15) = 24;
    result = v10(WdfDriverGlobals, v1, &v15);
    v11 = result;
    if ( (int)result < 0 )
    {
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C005B110);
      LODWORD(v13) = v11;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(v12 + 64),
                 2u,
                 2u,
                 0x3Bu,
                 (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
                 v13);
    }
    if ( v9 < 0 )
      return HUBSM_AddEvent(a1 + 1256, 2030LL);
  }
  return result;
}
