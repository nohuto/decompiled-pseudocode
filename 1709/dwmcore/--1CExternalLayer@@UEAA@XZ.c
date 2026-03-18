/*
 * XREFs of ??1CExternalLayer@@UEAA@XZ @ 0x180081460
 * Callers:
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x1800804F0 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18013BF30 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x18013BF70 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ??_ECHDRToSDRToneMapLayer@@UEAAPEAXI@Z @ 0x18013BFB0 (--_ECHDRToSDRToneMapLayer@@UEAAPEAXI@Z.c)
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x18013C020 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 */

void __fastcall CExternalLayer::~CExternalLayer(CExternalLayer *this)
{
  *(_QWORD *)this = &CExternalLayer::`vftable';
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 1));
  *(_QWORD *)this = &CLayer::`vftable';
}
