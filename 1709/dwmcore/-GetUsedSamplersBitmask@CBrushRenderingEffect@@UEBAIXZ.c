/*
 * XREFs of ?GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ @ 0x18006CA70
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?SetRenderingEffect@CBrushDrawListGenerator@@QEAAXPEAVCRenderingEffect@@@Z @ 0x18004ACD0 (-SetRenderingEffect@CBrushDrawListGenerator@@QEAAXPEAVCRenderingEffect@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrushRenderingEffect::GetUsedSamplersBitmask(CBrushRenderingEffect *this)
{
  return (unsigned int)((1 << *(_DWORD *)(*((_QWORD *)this + 2) + 92LL)) - 1);
}
