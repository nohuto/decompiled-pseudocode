/*
 * XREFs of ?HasSourceClip@CBitmapSource@@QEBA_NXZ @ 0x180013E34
 * Callers:
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x180030E3C (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ?CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z @ 0x180074130 (-CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z.c)
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
