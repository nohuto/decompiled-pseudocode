/*
 * XREFs of ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x18001FB60
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800630C8 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
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
    v2 += 3;
  }
  return result;
}
