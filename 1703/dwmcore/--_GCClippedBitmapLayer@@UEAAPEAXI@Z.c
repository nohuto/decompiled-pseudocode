/*
 * XREFs of ??_GCClippedBitmapLayer@@UEAAPEAXI@Z @ 0x18014AB80
 * Callers:
 *     ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@@Z @ 0x18014D2B0 (-PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@@Z.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x1800153FC (--1CExternalLayer@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CClippedBitmapLayer *__fastcall CClippedBitmapLayer::`scalar deleting destructor'(CClippedBitmapLayer *this, char a2)
{
  *(_QWORD *)this = &CClippedBitmapLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
