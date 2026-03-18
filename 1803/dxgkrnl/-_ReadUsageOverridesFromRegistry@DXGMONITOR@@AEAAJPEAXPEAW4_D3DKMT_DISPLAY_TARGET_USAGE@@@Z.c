/*
 * XREFs of ?_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0233228
 * Callers:
 *     ?_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0233194 (-_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DXGMONITOR::_ReadUsageOverridesFromRegistry(
        DXGMONITOR *this,
        void *a2,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  int v10; // [rsp+30h] [rbp-79h] BYREF
  int v11; // [rsp+34h] [rbp-75h] BYREF
  int v12; // [rsp+38h] [rbp-71h] BYREF
  int v13; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v14; // [rsp+40h] [rbp-69h] BYREF
  int v15; // [rsp+48h] [rbp-61h]
  const WCHAR *v16; // [rsp+50h] [rbp-59h]
  int *v17; // [rsp+58h] [rbp-51h]
  int v18; // [rsp+60h] [rbp-49h]
  int *v19; // [rsp+68h] [rbp-41h]
  int v20; // [rsp+70h] [rbp-39h]
  __int64 v21; // [rsp+78h] [rbp-31h]
  int v22; // [rsp+80h] [rbp-29h]
  const WCHAR *v23; // [rsp+88h] [rbp-21h]
  int *v24; // [rsp+90h] [rbp-19h]
  int v25; // [rsp+98h] [rbp-11h]
  int *v26; // [rsp+A0h] [rbp-9h]
  int v27; // [rsp+A8h] [rbp-1h]
  __int64 v28; // [rsp+B0h] [rbp+7h]
  int v29; // [rsp+B8h] [rbp+Fh]
  _BYTE v30[40]; // [rsp+C0h] [rbp+17h] BYREF

  v10 = 0;
  v12 = 0;
  v11 = 0;
  v13 = 0;
  v14 = 0LL;
  v21 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v16 = L"HMDDevicePresent";
  v17 = &v10;
  v19 = &v12;
  v23 = L"SpecialUseDevicePresent";
  v24 = &v11;
  v15 = 288;
  v22 = 288;
  v18 = 67108868;
  v20 = 4;
  v25 = 67108868;
  v27 = 4;
  v26 = &v13;
  memset(v30, 0, sizeof(v30));
  v5 = RtlQueryRegistryValuesEx(0x40000000LL, a2, &v14, 0LL, 0LL);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( v10 )
      *(_DWORD *)a3 = 1;
    else
      *(_DWORD *)a3 = v11 != 0 ? 2 : 0;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
    LODWORD(v7) = 0;
    *(_DWORD *)a3 = 0;
  }
  return (unsigned int)v7;
}
