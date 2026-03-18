/*
 * XREFs of ??1CLegacyMilBrush@@UEAA@XZ @ 0x1800B8C5C
 * Callers:
 *     ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x1800B5F54 (--1CSolidColorLegacyMilBrush@@MEAA@XZ.c)
 *     ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x1800B8284 (--1CTileLegacyMilBrush@@MEAA@XZ.c)
 *     ??_GCLegacyMilBrush@@UEAAPEAXI@Z @ 0x18016E7E0 (--_GCLegacyMilBrush@@UEAAPEAXI@Z.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x1801B2FF8 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 */

void __fastcall CLegacyMilBrush::~CLegacyMilBrush(CLegacyMilBrush *this)
{
  *(_QWORD *)this = &CLegacyMilBrush::`vftable';
  ReleaseInterfaceNoNULL<CPolygon>(*((_QWORD *)this + 7));
  CResource::~CResource(this);
}
