/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18001F954
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001FA44 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // edx
  enum FEATURE_ENABLED_STATE (*v7)(unsigned int, enum FEATURE_CHANGE_TIME); // r8
  int v8; // ebx
  struct wil_details_FeatureTestState *i; // rax
  unsigned int v10; // edx
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-28h]

  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v5 = ((__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState)(10164710LL, 3LL);
LABEL_3:
    v6 = v5;
    goto LABEL_16;
  }
  v7 = g_wil_details_apiGetFeatureEnabledState;
  if ( !g_wil_details_apiGetFeatureEnabledState )
  {
    v6 = 0;
    goto LABEL_16;
  }
  v8 = 0;
  if ( g_wil_details_testStates )
  {
    AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
    for ( i = g_wil_details_testStates; i; i = (struct wil_details_FeatureTestState *)*((_QWORD *)i + 3) )
    {
      if ( *((_DWORD *)i + 1) == 10164710 && !*(_DWORD *)i )
      {
        v8 = 1;
        v12 = *(_OWORD *)i;
        break;
      }
    }
    ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
    v7 = g_wil_details_apiGetFeatureEnabledState;
  }
  v6 = v8 != 0 ? DWORD2(v12) : 0;
  if ( !v8 )
  {
    v5 = ((__int64 (__fastcall *)(__int64, __int64))v7)(10164710LL, 3LL);
    goto LABEL_3;
  }
LABEL_16:
  *a3 = (v6 >> 6) & 1;
  *a2 = ((v6 & 0x80u) != 0) + 1;
  v10 = v6 & 0xFFFFFF3F;
  if ( !v10 )
    return 1LL;
  result = 2LL;
  if ( v10 != 2 )
    return 1LL;
  return result;
}
