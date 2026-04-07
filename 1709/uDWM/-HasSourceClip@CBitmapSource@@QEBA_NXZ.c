/*
 * XREFs of ?HasSourceClip@CBitmapSource@@QEBA_NXZ @ 0x180025244
 * Callers:
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x180013A48 (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ?CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z @ 0x18006D370 (-CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CBitmapSource::HasSourceClip(CBitmapSource *this)
{
  char result; // al

  result = 0;
  if ( *((int *)this + 20) > 0 && *((int *)this + 22) > 0 && *((int *)this + 21) > 0 && *((int *)this + 23) > 0 )
    return 1;
  return result;
}
