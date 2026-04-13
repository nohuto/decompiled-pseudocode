/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x18000B410
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18000B18C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(
        wil::details *this,
        unsigned int a2,
        enum FEATURE_CHANGE_TIME a3)
{
  int v4; // r10d
  volatile signed __int32 *v5; // rcx
  unsigned __int8 v6; // r8
  int v7; // edx
  unsigned int v8; // ebx
  unsigned int v9; // r9d
  bool IsFeatureConfigured; // al
  _QWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v4 = (int)this;
  v5 = (volatile signed __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  v6 = (a2 & 0xFFFFFF7F) - 2 <= 1;
  v7 = 0;
  v8 = 0;
  v12[0] = 0LL;
  v9 = (a2 >> 7) & 1;
  v12[1] = 0LL;
  v13 = 0LL;
  if ( !v9 )
    v5 = (volatile signed __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( (*v5 & 3) != 1 )
  {
    IsFeatureConfigured = wil::details::IsFeatureConfigured((__int64)v12, v4, v6, v9, v5);
    v7 = v13;
    if ( IsFeatureConfigured )
      v8 = v12[0];
  }
  if ( v7 )
    v8 |= 0x80u;
  if ( HIDWORD(v13) )
    v8 |= 0x40u;
  return v8;
}
