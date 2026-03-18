/*
 * XREFs of ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9F10
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01A98BC (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 * Callees:
 *     ?GetActivePpi@CRotationMgr@@SAPEAUtagPROCESSINFO@@XZ @ 0x1C0007B60 (-GetActivePpi@CRotationMgr@@SAPEAUtagPROCESSINFO@@XZ.c)
 *     IsCurrentDesktopComposed @ 0x1C0018CD0 (IsCurrentDesktopComposed.c)
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C0116458 (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?IsExtendTopology@@YAHXZ @ 0x1C01A8EC0 (-IsExtendTopology@@YAHXZ.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C024B9DC (DwmAsyncNotifyRotationModeChange.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxSmoothRotateScreen(
        CLegacyRotationMgr *this,
        struct DISPLAYCONFIG_PATH_INFO *a2,
        struct DISPLAYCONFIG_MODE_INFO *a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  int v5; // ecx
  unsigned int v8; // esi
  struct tagPROCESSINFO *ActivePpi; // rax
  unsigned int v10; // r9d
  int v11; // r14d
  int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  void *v31; // rax
  const GUID *v32; // r8
  const GUID *v33; // r9
  int v35; // [rsp+60h] [rbp-81h] BYREF
  unsigned int v36; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v37; // [rsp+70h] [rbp-71h] BYREF
  unsigned int v38; // [rsp+74h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-61h] BYREF
  int *v40; // [rsp+A0h] [rbp-41h]
  __int64 v41; // [rsp+A8h] [rbp-39h]
  unsigned int *v42; // [rsp+B0h] [rbp-31h]
  __int64 v43; // [rsp+B8h] [rbp-29h]
  int *v44; // [rsp+C0h] [rbp-21h]
  __int64 v45; // [rsp+C8h] [rbp-19h]
  unsigned int *v46; // [rsp+D0h] [rbp-11h]
  __int64 v47; // [rsp+D8h] [rbp-9h]

  v5 = *((_DWORD *)a2 + 10);
  v36 = a4;
  v8 = ConvertDisplayConfigRotationToDMDO(v5);
  ActivePpi = CRotationMgr::GetActivePpi();
  EtwTraceSmoothRotationStart(v8, v10, ActivePpi);
  v11 = 8;
  DrvLogDiagDisplayChange(0LL, 8LL);
  v12 = IsExtendTopology();
  v13 = IsCurrentDesktopComposed();
  v35 = v13;
  if ( v13 )
  {
    if ( !v12 )
    {
      v18 = (void *)ReferenceDwmApiPort(v15, v14, v16, v17);
      DwmAsyncNotifyRotationModeChange(v18);
      if ( gdwInAtomicOperation )
      {
        v19 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      v22 = UserReferenceDwmApiPort(v19, gdwInAtomicOperation, v20, v21);
      UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
      DwmSyncFlushAndWaitForBatch(v22);
      EnterCrit(0LL, 1LL);
      v13 = v35;
    }
    if ( v13 )
      v11 = 24;
  }
  v37 = xxxUserSetDisplayConfig(1LL, a2, 2LL, a3, 672, v11, 0LL, 0, 0LL, 0LL, a5);
  if ( v35 && !v12 )
  {
    v31 = (void *)ReferenceDwmApiPort(v28, v27, v29, v30);
    DwmAsyncNotifyRotationModeChange(v31);
  }
  EtwTraceSmoothRotationStop(v8, v36);
  if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000001uLL) )
  {
    v38 = v8;
    v40 = (int *)&v38;
    v42 = &v36;
    v44 = &v35;
    v46 = &v37;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBAB7, v32, v33, 6u, &pData);
  }
  return v37;
}
