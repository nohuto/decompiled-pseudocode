/*
 * XREFs of ?IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x18002EEE4
 * Callers:
 *     ?OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002ED40 (-OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSP.c)
 * Callees:
 *     ?IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x18002EA94 (-IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SpatializerAsar@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18009B88C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SpatializerAsar@@@wil@@CAX_NW4Report.c)
 */

bool __fastcall Sarm::CSpatialAudioResourceManager::IsAppPinningEnabled(Sarm::CSpatialAudioResourceManager *this)
{
  bool v1; // bl
  BOOL v3; // [rsp+30h] [rbp-9h] BYREF
  _DWORD v4[2]; // [rsp+38h] [rbp-1h] BYREF
  __int64 v5; // [rsp+40h] [rbp+7h]
  CLSID pClsid; // [rsp+48h] [rbp+Fh] BYREF
  void *v7; // [rsp+58h] [rbp+1Fh] BYREF
  int v8; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+64h] [rbp+2Bh]
  void *v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+74h] [rbp+3Bh]
  BOOL *v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+80h] [rbp+47h]
  int v15; // [rsp+84h] [rbp+4Bh]

  v1 = 0;
  if ( Sarm::CSpatialAudioResourceManager::IsHolographicSpaceAvailable(this) )
  {
    wil::Feature<__WilFeatureTraits_Feature_SpatializerAsar>::ReportUsageToService();
    v1 = CoGetPSClsid(&GUID_122595e5_20a2_47d3_8604_4a613ff6cca7, &pClsid) >= 0;
  }
  if ( (unsigned int)dword_18014A370 > 4 )
  {
    v14 = 4;
    v15 = 0;
    v3 = v1;
    v13 = &v3;
    v5 = 0LL;
    v4[1] = 4;
    v7 = off_18014A378;
    v4[0] = ((unsigned int)&unk_180110D3C - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v8 = *(unsigned __int16 *)off_18014A378;
    v10 = &unk_180110D47;
    v9 = 2;
    v11 = 29;
    v12 = 1;
    EtwEventWriteTransfer(qword_18014A390, v4, 0LL, 0LL, 3, &v7);
  }
  return v1;
}
