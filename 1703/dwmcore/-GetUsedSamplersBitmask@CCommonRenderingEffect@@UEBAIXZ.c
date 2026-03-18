/*
 * XREFs of ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x180077680
 * Callers:
 *     ?Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18004135C (-Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::GetUsedSamplersBitmask(CCommonRenderingEffect *this)
{
  __int64 result; // rax
  _QWORD *v2; // r9
  unsigned int i; // r8d

  result = 0LL;
  v2 = (_QWORD *)((char *)this + 16);
  for ( i = 0; i < 2; ++i )
  {
    if ( *v2 )
      result = (1 << i) | (unsigned int)result;
    ++v2;
  }
  return result;
}
