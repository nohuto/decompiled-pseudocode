/*
 * XREFs of ??1CExternalLayer@@UEAA@XZ @ 0x1800153FC
 * Callers:
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x180002330 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x180014200 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x18001C1F0 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 *     ??1CHDRConvertLayer@@UEAA@XZ @ 0x18014AACC (--1CHDRConvertLayer@@UEAA@XZ.c)
 *     ??_GCClippedBitmapLayer@@UEAAPEAXI@Z @ 0x18014AB80 (--_GCClippedBitmapLayer@@UEAAPEAXI@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18014ABC0 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 */

void __fastcall CExternalLayer::~CExternalLayer(CExternalLayer *this)
{
  *(_QWORD *)this = &CExternalLayer::`vftable';
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 1));
  *(_QWORD *)this = &CLayer::`vftable';
}
