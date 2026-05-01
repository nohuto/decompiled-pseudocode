/*
 * XREFs of ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800405D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpEnforcementApplyPowerBoost@@YAJK@Z @ 0x18001D53C (-RmpEnforcementApplyPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18001DEA8 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall RmpPowerBoostWatchdogCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // ebx
  int v7; // edx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  DWORD v11; // ebx
  bool v12; // [rsp+30h] [rbp-59h] BYREF
  __int64 v13; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v14[80]; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+7h] BYREF
  bool *v16; // [rsp+B0h] [rbp+27h]
  int v17; // [rsp+B8h] [rbp+2Fh]
  int v18; // [rsp+BCh] [rbp+33h]
  __int64 *v19; // [rsp+C0h] [rbp+37h]
  int v20; // [rsp+C8h] [rbp+3Fh]
  int v21; // [rsp+CCh] [rbp+43h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  RmpAcquireGlobalLock();
  v4 = *((_DWORD *)a2 + 42);
  if ( (a2[1892] & 2) == 0 && (v4 & 2) != 0 )
  {
    RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)(a2 + 144));
    v5 = *((_DWORD *)a2 + 42);
    if ( (v5 & 1) == 0 )
    {
      *((_DWORD *)a2 + 42) = v5 & 0xFFFFFFFD;
      RmpEnforcementApplyPowerBoost(0);
    }
    v6 = *((_DWORD *)a2 + 42) & 1;
    GetTickCount();
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v17 = v7;
      v16 = &v12;
      v12 = v6 == 0;
      v13 = (unsigned int)v10;
      v18 = 0;
      v21 = 0;
      v19 = &v13;
      v20 = 8;
      TlgWrite(v8, &unk_18005A34F, v9, v10, 4u, &pData);
    }
  }
  else
  {
    *((_DWORD *)a2 + 42) = v4 & 0xFFFFFFFE;
  }
  RmpReleaseGlobalLock();
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
}
