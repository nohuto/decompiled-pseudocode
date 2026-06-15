/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18001760C (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180035BF0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180048360 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180049610 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ??4?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004FFD8 (--4-$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x180050038 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005A210 (-PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANC.c)
 *     ??1?$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ @ 0x180098358 (--1-$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAA@XZ @ 0x180099EB4 (--1-$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18009D970 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800A8940 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800BC180 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x1800BEBA0 (-SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x1800BF2D0 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 *     PolicyConfigGetMixFormat @ 0x1800BF770 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetBufferSizeLimits @ 0x1800C3240 (AudioServerGetBufferSizeLimits.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800C3510 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x1800C3E80 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800C46C0 (AudioServerGetSharedModeEnginePeriod.c)
 *     AudioServerIsOffloadCapable @ 0x1800C53B0 (AudioServerIsOffloadCapable.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800CFF20 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800D1D08 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     ??_GCNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAAPEAXI@Z @ 0x1800E98A4 (--_GCNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(
        __int64 a1)
{
  unsigned int result; // eax
  __int64 v2; // r10
  unsigned int v3; // ebx

  result = ATL::SafeDecrementReferenceMultiThread((int *)(a1 + 12));
  v3 = result;
  if ( !result )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 48LL))(v2, result + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    return v3;
  }
  return result;
}
