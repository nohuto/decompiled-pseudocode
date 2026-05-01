/*
 * XREFs of ?v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18008D6D0
 * Callers:
 *     ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18008D390 (-MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 *     ?GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18008D560 (-GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008D9B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@wil@@CAX_N.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::v_GetAdditionalDataSizeMax(
        unsigned __int64 this,
        const struct _GUID *a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned int v10; // eax
  signed int v11; // ebx
  unsigned int v13; // eax

  *a7 = 0;
  v7 = 0xFFFFFFFFLL;
  v8 = -1;
  v9 = *(_BYTE *)(this + 136) != 0 ? 27 : 23;
  v10 = *(_BYTE *)(this + 136) != 0 ? 28 : 24;
  if ( v10 >= (unsigned int)v9 )
    v8 = *(_BYTE *)(this + 136) != 0 ? 28 : 24;
  v11 = v10 < (unsigned int)v9 ? 0x80070216 : 0;
  if ( v10 >= (unsigned int)v9 && *(_BYTE *)(this + 144) )
  {
    v13 = v8 + 4;
    this = v8;
    if ( v8 + 4 >= v8 )
      v7 = v13;
    v8 = v7;
    v11 = v13 < (unsigned int)this ? 0x80070216 : 0;
  }
  wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::ReportUsageToService(this, v9, v7, 2147942934LL);
  if ( v11 >= 0 )
    *a7 = v8;
  return (unsigned int)v11;
}
