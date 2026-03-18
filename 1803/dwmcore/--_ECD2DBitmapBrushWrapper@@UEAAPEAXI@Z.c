/*
 * XREFs of ??_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z @ 0x1800D9AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmapBrushWrapper@@UEAA@XZ @ 0x1800D9A74 (--1CD2DBitmapBrushWrapper@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CD2DBitmapBrushWrapper *__fastcall CD2DBitmapBrushWrapper::`vector deleting destructor'(
        CD2DBitmapBrushWrapper *this,
        char a2)
{
  CD2DBitmapBrushWrapper::~CD2DBitmapBrushWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x20uLL);
  return this;
}
