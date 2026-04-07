/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@@Z @ 0x180046044
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180045BF4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18008157C (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::GetCurrentFeatureEnabledState(
        char a1,
        _DWORD *a2)
{
  int v2; // ebx
  int v4; // eax
  unsigned int v5; // ebx
  bool v6; // al
  int v8; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v8) = a1;
  v2 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v4 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(10095438LL, 0LL);
LABEL_3:
    v2 = v4;
    goto LABEL_4;
  }
  if ( g_wil_details_apiGetFeatureEnabledState )
  {
    if ( !(unsigned int)wil_HasFeatureTestState(0x9A0B4Eu, (enum wil_FeatureEnabledState *)&v8) )
    {
      v4 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(10095438LL, 0LL);
      goto LABEL_3;
    }
    v2 = v8;
  }
LABEL_4:
  *a2 = ((v2 & 0x80u) != 0) + 1;
  v5 = v2 & 0xFFFFFF7F;
  if ( v5 )
    v6 = v5 == 2;
  else
    v6 = 1;
  return (unsigned int)v6 + 1;
}
