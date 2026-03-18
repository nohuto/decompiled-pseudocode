/*
 * XREFs of ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AD21C
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01ACB9C (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C0043734 (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     IsCurrentDesktopComposed @ 0x1C00780E0 (IsCurrentDesktopComposed.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?IsExtendTopology@@YAHXZ @ 0x1C01AC298 (-IsExtendTopology@@YAHXZ.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C024D39C (DwmAsyncNotifyRotationModeChange.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxSmoothRotateScreen(
        CLegacyRotationMgr *this,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  int v4; // ecx
  unsigned int v7; // r14d
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // esi
  int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  void *v22; // rax
  const GUID *v23; // r8
  const GUID *v24; // r9
  unsigned int v26; // [rsp+50h] [rbp-69h] BYREF
  int v27; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v28; // [rsp+5Ch] [rbp-5Dh] BYREF
  _DWORD v29[4]; // [rsp+60h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-49h] BYREF
  _DWORD *v31; // [rsp+90h] [rbp-29h]
  int v32; // [rsp+98h] [rbp-21h]
  int v33; // [rsp+9Ch] [rbp-1Dh]
  unsigned int *v34; // [rsp+A0h] [rbp-19h]
  int v35; // [rsp+A8h] [rbp-11h]
  int v36; // [rsp+ACh] [rbp-Dh]
  int *v37; // [rsp+B0h] [rbp-9h]
  int v38; // [rsp+B8h] [rbp-1h]
  int v39; // [rsp+BCh] [rbp+3h]
  unsigned int *v40; // [rsp+C0h] [rbp+7h]
  int v41; // [rsp+C8h] [rbp+Fh]
  int v42; // [rsp+CCh] [rbp+13h]

  v4 = *((_DWORD *)a2 + 26);
  v26 = a3;
  v7 = ConvertDisplayConfigRotationToDMDO(v4);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v29, gRotationProcessLock);
  if ( grpdeskRitInput && (v8 = *(_QWORD *)(grpdeskRitInput + 256LL)) != 0 )
  {
    v9 = *(_DWORD *)(v8 + 56);
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v29);
  }
  else
  {
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v29);
    v9 = 0;
  }
  EtwTraceSmoothRotationStart(v7, v26, v9);
  v10 = 8;
  DrvLogDiagDisplayChange(0LL, 8LL);
  v11 = IsExtendTopology();
  v12 = IsCurrentDesktopComposed();
  v27 = v12;
  if ( v12 )
  {
    if ( !v11 )
    {
      v14 = (void *)ReferenceDwmApiPort(v13);
      DwmAsyncNotifyRotationModeChange(v14);
      if ( gdwInAtomicOperation )
      {
        v15 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      v18 = UserReferenceDwmApiPort(v15, gdwInAtomicOperation, v16, v17);
      UserSessionSwitchLeaveCrit(v20, v19);
      DwmSyncFlushAndWaitForBatch(v18);
      EnterCrit(0LL, 1LL);
      v12 = v27;
    }
    if ( v12 )
      v10 = 24;
  }
  v28 = xxxUserSetDisplayConfig(1LL, a2, 672LL, v10, 0LL, 0, 0LL, 0LL, a4);
  if ( v27 && !v11 )
  {
    v22 = (void *)ReferenceDwmApiPort(v21);
    DwmAsyncNotifyRotationModeChange(v22);
  }
  EtwTraceSmoothRotationStop(v7, v26);
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
  {
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v31 = v29;
    v34 = &v26;
    v37 = &v27;
    v40 = &v28;
    v29[0] = v7;
    v32 = 4;
    v35 = 4;
    v38 = 4;
    v41 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E85BA, v23, v24, 6u, &pData);
  }
  return v28;
}
