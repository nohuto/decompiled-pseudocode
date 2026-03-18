/*
 * XREFs of ?IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B3DF0
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180056940 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x18006C6F0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCachedVisualImage::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  unsigned __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 15;
  result = 0;
  if ( v2 <= 0x3F )
  {
    v3 = 0x8000000002000001uLL;
    if ( _bittest64((const __int64 *)&v3, (int)v2) )
      return 1;
  }
  return result;
}
