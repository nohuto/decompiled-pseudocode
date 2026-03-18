/*
 * XREFs of ?Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18004135C
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x180077680 (-GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ.c)
 *     ?GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ @ 0x1800C5A60 (-GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListPrimitiveBuilder::Begin(
        CDrawListPrimitiveBuilder *this,
        const struct PrimitiveBuilderSetupParams *a2,
        struct CRenderingEffect *a3)
{
  int v4; // eax
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(CCommonRenderingEffect *__hidden); // rax
  unsigned int UsedSamplersBitmask; // eax
  _QWORD *v9; // rax

  v4 = 2;
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  if ( *(_DWORD *)this > 2u )
    v4 = 4;
  *(_DWORD *)this = v4;
  if ( *((struct CRenderingEffect **)this + 4) != a3 )
  {
    if ( a3 )
      (**(void (__fastcall ***)(struct CRenderingEffect *))a3)(a3);
    v6 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a3;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v7 = *(unsigned int (__fastcall **)(CCommonRenderingEffect *__hidden))(*(_QWORD *)a3 + 24LL);
  if ( v7 == CCommonRenderingEffect::GetUsedSamplersBitmask )
  {
    UsedSamplersBitmask = CCommonRenderingEffect::GetUsedSamplersBitmask(a3);
  }
  else if ( v7 == CBrushRenderingEffect::GetUsedSamplersBitmask )
  {
    UsedSamplersBitmask = CBrushRenderingEffect::GetUsedSamplersBitmask(a3);
  }
  else
  {
    UsedSamplersBitmask = v7(a3);
  }
  *((_DWORD *)this + 613) = UsedSamplersBitmask;
  v9 = (_QWORD *)*((_QWORD *)this + 2);
  *((_BYTE *)this + 2465) = 0;
  if ( !*v9 && !v9[2] || *((_DWORD *)this + 3) == 1 )
    *((_BYTE *)this + 28) = 0;
  *((_BYTE *)this + 2464) = ((*((_BYTE *)this + 24) & 0x20) != 0 || !*v9)
                         && CCommonRegistryData::m_fEnableCpuClipping != 0;
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 344) = 0;
  *((_DWORD *)this + 594) = 0;
  *((_DWORD *)this + 586) = 0;
  *((_DWORD *)this + 612) = 0;
}
