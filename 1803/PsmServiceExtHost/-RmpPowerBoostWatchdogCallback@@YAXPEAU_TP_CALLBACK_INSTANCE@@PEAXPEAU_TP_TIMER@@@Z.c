/*
 * XREFs of ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18005EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemApplyInswapPowerBoost@@YAJK@Z @ 0x180004A30 (-RmpSystemApplyInswapPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180004A80 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180028B20 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180028B44 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180028B8C (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall RmpPowerBoostWatchdogCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  char v4; // bl
  struct _RM_POWERBOOST_CONTEXT *v5; // rdi
  int v6; // esi
  int v7; // edx
  int v8; // ebx
  UINT32 cData; // r9d
  DWORD v10; // ebx
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v13[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  char *v15; // [rsp+F0h] [rbp-10h]
  int v16; // [rsp+F8h] [rbp-8h]
  int v17; // [rsp+FCh] [rbp-4h]
  int *v18; // [rsp+100h] [rbp+0h]
  UINT32 v19; // [rsp+108h] [rbp+8h]
  int v20; // [rsp+10Ch] [rbp+Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  v4 = 0;
  v5 = (struct _RM_POWERBOOST_CONTEXT *)(a2 + 128);
  v6 = 0;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800806B7, 0LL, 0LL, 2u, &pData);
  RmpPowerBoostAcquireLockExclusive(v5);
  v7 = *((_DWORD *)a2 + 48);
  if ( (a2[2228] & 2) == 0 && (v7 & 2) != 0 )
  {
    RmpPowerBoostArmWatchdog(v5);
    v8 = *((_DWORD *)a2 + 48);
    if ( (v8 & 1) == 0 )
    {
      *((_DWORD *)a2 + 48) = v8 & 0xFFFFFFFD;
      RmpSystemApplyInswapPowerBoost(0);
      v8 = *((_DWORD *)a2 + 48);
    }
    v4 = v8 & 1;
    v6 = CempQueryUnbiasedInterruptTimeMs64() - *(_DWORD *)v5;
  }
  else
  {
    *((_DWORD *)a2 + 48) = v7 & 0xFFFFFFFE;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v17 = 0;
    v15 = &v11;
    v20 = 0;
    v18 = &v12;
    v11 = v4 ^ 1;
    v16 = 1;
    v12 = v6;
    v19 = cData;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180080645, 0LL, 0LL, cData, &pData);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 128));
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
}
