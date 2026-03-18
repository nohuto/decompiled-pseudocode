/*
 * XREFs of ??1CHDRConvertLayer@@UEAA@XZ @ 0x18014AACC
 * Callers:
 *     ??_GCHDRConvertLayer@@UEAAPEAXI@Z @ 0x18014AC00 (--_GCHDRConvertLayer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 */

void __fastcall CHDRConvertLayer::~CHDRConvertLayer(CHDRConvertLayer *this)
{
  *(_QWORD *)this = &CHDRConvertLayer::`vftable';
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 15));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 14));
  CExternalLayer::~CExternalLayer(this);
}
