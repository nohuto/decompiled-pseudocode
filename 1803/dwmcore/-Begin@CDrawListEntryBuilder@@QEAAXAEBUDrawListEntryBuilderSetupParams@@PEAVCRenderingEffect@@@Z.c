/*
 * XREFs of ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800AF2E8
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B35A0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180185584 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x180074BB0 (-GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntryBuilder::Begin(
        CDrawListEntryBuilder *this,
        const struct DrawListEntryBuilderSetupParams *a2,
        struct CRenderingEffect *a3)
{
  int v4; // eax
  struct CRenderingEffect *v6; // rcx
  __int64 (__fastcall *v7)(CCommonRenderingEffect *); // rax
  int UsedSamplersBitmask; // eax
  _QWORD *v9; // rax
  bool v10; // al

  v4 = 2;
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  if ( *(_DWORD *)this > 2u )
    v4 = 4;
  *(_DWORD *)this = v4;
  v6 = (struct CRenderingEffect *)*((_QWORD *)this + 4);
  if ( v6 != a3 )
  {
    if ( a3 )
    {
      (**(void (__fastcall ***)(struct CRenderingEffect *))a3)(a3);
      v6 = (struct CRenderingEffect *)*((_QWORD *)this + 4);
    }
    *((_QWORD *)this + 4) = a3;
    if ( v6 )
      (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v7 = *(__int64 (__fastcall **)(CCommonRenderingEffect *))(*(_QWORD *)a3 + 32LL);
  if ( v7 == CCommonRenderingEffect::GetUsedSamplersBitmask )
    UsedSamplersBitmask = CCommonRenderingEffect::GetUsedSamplersBitmask(a3);
  else
    UsedSamplersBitmask = v7(a3);
  *((_DWORD *)this + 613) = UsedSamplersBitmask;
  v9 = (_QWORD *)*((_QWORD *)this + 2);
  *((_BYTE *)this + 2465) = 0;
  if ( !*v9 && !v9[2] || *((_DWORD *)this + 3) == 1 )
    *((_BYTE *)this + 28) = 0;
  v10 = ((*((_BYTE *)this + 24) & 0x20) != 0 || !*v9) && CCommonRegistryData::m_fEnableCpuClipping != 0;
  *((_BYTE *)this + 2464) = v10;
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 344) = 0;
  *((_DWORD *)this + 594) = 0;
  *((_DWORD *)this + 586) = 0;
  *((_DWORD *)this + 612) = 0;
}
