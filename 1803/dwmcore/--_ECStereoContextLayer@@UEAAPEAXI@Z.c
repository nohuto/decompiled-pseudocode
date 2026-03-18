/*
 * XREFs of ??_ECStereoContextLayer@@UEAAPEAXI@Z @ 0x18015E5F0
 * Callers:
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x180162554 (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CStereoContextLayer *__fastcall CStereoContextLayer::`vector deleting destructor'(CStereoContextLayer *this, char a2)
{
  *(_QWORD *)this = &CLayer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
