/*
 * XREFs of ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z @ 0x18006EBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18004291C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureVariant(
        wil::details *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned int *a4)
{
  bool IsFeatureConfigured; // al
  bool v7; // zf
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(
                          (__int64)&v9,
                          (unsigned int)this,
                          (a2 & 0xFFFFFF7F) - 2 <= 1,
                          (a2 >> 7) & 1);
  *a4 = v11;
  if ( IsFeatureConfigured )
  {
    v7 = HIDWORD(v11) == 0;
    *a3 = HIDWORD(v10);
    LOBYTE(result) = BYTE4(v9);
    if ( !v7 )
      LOBYTE(result) = BYTE4(v9) | 0x80;
    return (unsigned __int8)result;
  }
  else
  {
    *a3 = 0;
    return 0LL;
  }
}
