/*
 * XREFs of ?RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800258B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180028B20 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180028B44 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180028B8C (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180028BF8 (-RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x180028CFC (-RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall RmpPowerBoostTimedBoostCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  unsigned __int64 UnbiasedInterruptTimeMs64; // rax
  int v5; // eax
  int v6; // ecx
  DWORD v7; // ebx
  bool v8; // [rsp+38h] [rbp-D0h] BYREF
  bool v9; // [rsp+39h] [rbp-CFh] BYREF
  _BYTE v10[144]; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v11; // [rsp+D8h] [rbp-30h] BYREF
  bool *v12; // [rsp+F8h] [rbp-10h]
  int v13; // [rsp+100h] [rbp-8h]
  int v14; // [rsp+104h] [rbp-4h]
  bool *v15; // [rsp+108h] [rbp+0h]
  int v16; // [rsp+110h] [rbp+8h]
  int v17; // [rsp+114h] [rbp+Ch]
  char *v18; // [rsp+118h] [rbp+10h]
  int v19; // [rsp+120h] [rbp+18h]
  int v20; // [rsp+124h] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+128h] [rbp+20h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v10);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008068F, 0LL, 0LL, 2u, &pData);
  RmpPowerBoostAcquireLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 128));
  if ( (a2[2228] & 2) == 0 && (a2[192] & 4) != 0 )
  {
    UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
    RmpPowerBoostArmTimedBoostTimer(UnbiasedInterruptTimeMs64, (struct _RM_POWERBOOST_CONTEXT *)(a2 + 128));
    v5 = *((_DWORD *)a2 + 48);
    if ( (v5 & 8) == 0 )
    {
      *((_DWORD *)a2 + 48) = v5 & 0xFFFFFFFB;
      RmpSystemApplyAppLaunchPowerBoost(0);
    }
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v6 = *((_DWORD *)a2 + 48);
    v14 = 0;
    v17 = 0;
    v8 = (v6 & 8) != 0;
    v20 = 0;
    v12 = &v8;
    v15 = &v9;
    v18 = a2 + 176;
    v13 = 1;
    v9 = (v6 & 4) != 0;
    v16 = 1;
    v19 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800806E1, 0LL, 0LL, 5u, &v11);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 128));
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
}
