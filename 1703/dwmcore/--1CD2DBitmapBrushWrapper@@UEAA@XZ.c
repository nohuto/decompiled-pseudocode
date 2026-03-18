/*
 * XREFs of ??1CD2DBitmapBrushWrapper@@UEAA@XZ @ 0x1800C82F4
 * Callers:
 *     ??_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z @ 0x1800C8390 (--_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 */

void __fastcall CD2DBitmapBrushWrapper::~CD2DBitmapBrushWrapper(CD2DBitmapBrushWrapper *this)
{
  *(_QWORD *)this = &CD2DBitmapBrushWrapper::`vftable';
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 2));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 3));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
