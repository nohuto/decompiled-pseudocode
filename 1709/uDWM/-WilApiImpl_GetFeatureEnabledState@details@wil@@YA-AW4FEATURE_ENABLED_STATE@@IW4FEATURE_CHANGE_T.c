/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x18003FB60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18003FBBC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 */

enum FEATURE_ENABLED_STATE __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(
        wil::details *this,
        unsigned int a2,
        __int64 a3)
{
  char IsFeatureConfigured; // al
  int v4; // edx
  enum FEATURE_ENABLED_STATE result; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  LOBYTE(a3) = (a2 & 0xFFFFFF7F) - 2 <= 1;
  v6[0] = 0LL;
  v6[1] = 0LL;
  v7 = 0;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(v6, (unsigned int)this, a3, (a2 >> 7) & 1);
  v4 = 0;
  if ( IsFeatureConfigured )
    v4 = v6[0];
  result = v4 | 0x80;
  if ( !v7 )
    return v4;
  return result;
}
