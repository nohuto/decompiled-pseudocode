/*
 * XREFs of ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x18004B690
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003CBC (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007E94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180038F74 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@CA.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180048D5C (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::Activate(
        ToastNotification::ActivityToastNotificationCallback *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const struct NOTIFICATION_USER_INPUT_DATA *a4)
{
  wil::details_abi *v4; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v6; // r8
  int v8; // [rsp+30h] [rbp-21h] BYREF
  __int16 v9; // [rsp+34h] [rbp-1Dh]
  _QWORD v10[2]; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v12[3]; // [rsp+58h] [rbp+7h] BYREF
  __int16 v13; // [rsp+70h] [rbp+1Fh]
  void **v14; // [rsp+78h] [rbp+27h] BYREF
  struct wil::details_abi::ThreadLocalData *v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+8Ch] [rbp+3Bh]
  _QWORD *v18; // [rsp+90h] [rbp+3Fh]
  int v19; // [rsp+98h] [rbp+47h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+57h]
  __int16 v21; // [rsp+B4h] [rbp+63h]
  const unsigned __int16 *v22; // [rsp+C0h] [rbp+6Fh] BYREF

  v22 = a3;
  v10[0] = (char *)this - 48;
  v10[1] = &v22;
  v12[0] = retaddr;
  v12[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp";
  v13 = 108;
  v12[2] = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_MobilityExperience>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_MobilityExperience>::GetCachedFeatureEnabledState();
  LOBYTE(v21) = 3;
  v8 = 0;
  v9 = v21;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_MobilityExperience>::GetFeaturePropertyCache'::`2'::data,
    0xB46EBCu,
    (const struct FEATURE_LOGGED_TRAITS *)&v8,
    1,
    1u);
  LOBYTE(v4) = 1;
  v11[0] = off_1800D36F8;
  v11[1] = v10;
  v14 = &wil::details::FeatureFunctorHost::`vftable';
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v4);
  v15 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v17 = *((_DWORD *)ThreadLocalDataCache + 4);
    v16 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v16;
  }
  v19 = 11824828;
  v18 = v12;
  wil::details::RunFunctor((wil::details *)v11, (struct wil::details::IFunctor *)&v14, v6);
  if ( v15 )
    *((_DWORD *)v15 + 4) = v17;
  return 0LL;
}
