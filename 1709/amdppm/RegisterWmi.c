/*
 * XREFs of RegisterWmi @ 0x1C001AA88
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C001A8F0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C000C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CA40 (memset.c)
 */

__int64 __fastcall RegisterWmi(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r15
  int v5; // eax
  unsigned int v6; // edi
  _DWORD *v7; // rbx
  __int128 *v8; // rax
  __int128 v9; // xmm0
  int v10; // esi
  unsigned int v11; // ebx
  __int64 *i; // rdi
  __int128 *v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // r14
  unsigned __int16 v17; // r9
  __int64 v18; // [rsp+30h] [rbp-A1h]
  int v19; // [rsp+30h] [rbp-A1h]
  _QWORD v20[2]; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v21[8]; // [rsp+48h] [rbp-89h] BYREF
  _DWORD v22[10]; // [rsp+88h] [rbp-49h] BYREF
  void *v23; // [rsp+B0h] [rbp-21h]
  _QWORD v24[5]; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v25; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+F0h] [rbp+1Fh]
  wchar_t v27; // [rsp+F8h] [rbp+27h]

  v27 = aProcessorwmi[12];
  v20[1] = &v25;
  v23 = &ProcessorPerfStateEvent_GUID;
  v24[0] = a1 + 158;
  v24[1] = &ProcessorCStateEvent_GUID;
  v24[2] = a1 + 162;
  v24[3] = &ProcessorThrottleStateEvent_GUID;
  v24[4] = a1 + 166;
  v25 = *(_OWORD *)L"PROCESSORWMI";
  LODWORD(v20[0]) = 1703960;
  v26 = *(_QWORD *)L"RWMI";
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = WdfFunctions_01015;
  a1[164] = 0;
  v4 = v2;
  a1[160] = 4;
  a1[168] = 4;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(v3 + 328))(WdfDriverGlobals, v2, v20);
  if ( v5 < 0 )
  {
    v19 = v5;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xAu,
      (__int64)&WPP_cb5f71ea482639e335a027a099a63a22_Traceguids,
      v19);
  }
  v6 = 0;
  v7 = &unk_1C000D350;
  do
  {
    memset(v22, 0, sizeof(v22));
    v8 = (__int128 *)*((_QWORD *)v7 - 2);
    v22[0] = 40;
    v9 = *v8;
    v22[6] = *v7;
    *(_OWORD *)&v22[1] = v9;
    memset(v21, 0, sizeof(v21));
    v21[2] = v22;
    v21[4] = *((_QWORD *)v7 - 1);
    LODWORD(v21[0]) = 64;
    BYTE1(v21[3]) = 1;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
            WdfDriverGlobals,
            v4,
            v21,
            0LL,
            0LL);
    if ( v10 < 0 )
    {
      v17 = 11;
      goto LABEL_12;
    }
    ++v6;
    v7 += 6;
  }
  while ( v6 < 4 );
  v11 = 0;
  for ( i = v24; ; i += 2 )
  {
    memset(v22, 0, sizeof(v22));
    v13 = (__int128 *)*(i - 1);
    v22[0] = 40;
    v14 = *v13;
    v22[5] = 2;
    *(_OWORD *)&v22[1] = v14;
    memset(v21, 0, sizeof(v21));
    v15 = *i;
    v21[2] = v22;
    LODWORD(v21[0]) = 64;
    BYTE1(v21[3]) = 1;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
            WdfDriverGlobals,
            v4,
            v21,
            0LL,
            v15);
    if ( v10 < 0 )
      break;
    ++v11;
    *(_BYTE *)(v15 + 12) = 1;
    if ( v11 >= 3 )
      return 0LL;
  }
  v17 = 12;
LABEL_12:
  LODWORD(v18) = v10;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    4u,
    v17,
    (__int64)&WPP_cb5f71ea482639e335a027a099a63a22_Traceguids,
    v18);
  return (unsigned int)v10;
}
