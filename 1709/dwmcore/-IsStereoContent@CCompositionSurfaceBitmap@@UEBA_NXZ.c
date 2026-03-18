/*
 * XREFs of ?IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028F80
 * Callers:
 *     ?IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z @ 0x180048924 (-IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z.c)
 *     ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18015E090 (-NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::IsStereoContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 5);
  result = 0;
  if ( v1 )
    return *(_DWORD *)(v1 + 272) == 3;
  return result;
}
