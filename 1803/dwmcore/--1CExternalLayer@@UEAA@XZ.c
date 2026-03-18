/*
 * XREFs of ??1CExternalLayer@@UEAA@XZ @ 0x1800248D4
 * Callers:
 *     ??_ECTreeEffectLayer@@UEAAPEAXI@Z @ 0x1800092B0 (--_ECTreeEffectLayer@@UEAAPEAXI@Z.c)
 *     ??_ECOffScreenRenderingLayer@@UEAAPEAXI@Z @ 0x180024620 (--_ECOffScreenRenderingLayer@@UEAAPEAXI@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x18015E440 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18015E480 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x18015E4C0 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ??_ECHDRToSDRToneMapLayer@@UEAAPEAXI@Z @ 0x18015E500 (--_ECHDRToSDRToneMapLayer@@UEAAPEAXI@Z.c)
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x18015E570 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 *     ??_GCResampleLayer@@UEAAPEAXI@Z @ 0x18015E5B0 (--_GCResampleLayer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 */

void __fastcall CExternalLayer::~CExternalLayer(CExternalLayer *this)
{
  *(_QWORD *)this = &CExternalLayer::`vftable';
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 1));
  *(_QWORD *)this = &CLayer::`vftable';
}
