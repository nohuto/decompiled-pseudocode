/*
 * XREFs of ??1CD2DBitmapBrushWrapper@@UEAA@XZ @ 0x1800D9A74
 * Callers:
 *     ??_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z @ 0x1800D9AB0 (--_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 */

void __fastcall CD2DBitmapBrushWrapper::~CD2DBitmapBrushWrapper(CD2DBitmapBrushWrapper *this)
{
  *(_QWORD *)this = &CD2DBitmapBrushWrapper::`vftable';
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 2));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 3));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
