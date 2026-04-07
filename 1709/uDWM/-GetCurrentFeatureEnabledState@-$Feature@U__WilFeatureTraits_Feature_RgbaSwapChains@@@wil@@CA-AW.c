/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@@Z @ 0x18003FB08
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18003F6B0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18006867C (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetCurrentFeatureEnabledState(
        char a1,
        _DWORD *a2)
{
  int v3; // eax
  int v4; // edx
  unsigned int v5; // edx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v7) = a1;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(11786145LL, 0LL);
  }
  else
  {
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v4 = 0;
      goto LABEL_4;
    }
    if ( (unsigned int)wil_HasFeatureTestState(0xB3D7A1u, (enum wil_FeatureEnabledState *)&v7) )
    {
      v4 = v7;
      goto LABEL_4;
    }
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(11786145LL, 0LL);
  }
  v4 = v3;
LABEL_4:
  *a2 = ((v4 & 0x80u) != 0) + 1;
  v5 = v4 & 0xFFFFFF7F;
  if ( !v5 )
    return 1LL;
  result = 2LL;
  if ( v5 != 2 )
    return 1LL;
  return result;
}
