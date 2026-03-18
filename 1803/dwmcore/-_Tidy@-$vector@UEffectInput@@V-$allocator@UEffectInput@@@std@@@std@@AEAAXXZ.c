/*
 * XREFs of ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x18008BAC0
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?Release@CRenderTargetImageSource@@UEAAKXZ @ 0x180089ED0 (-Release@CRenderTargetImageSource@@UEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<EffectInput>::_Tidy(__int64 a1)
{
  CRenderTargetImageSource **v1; // rbx
  CRenderTargetImageSource **v3; // rsi
  CRenderTargetImageSource *v4; // rcx
  CRenderTargetImageSource *v5; // rcx
  void (*v6)(void); // rax

  v1 = *(CRenderTargetImageSource ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(CRenderTargetImageSource ***)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        v4 = v1[1];
        if ( v4 )
        {
          v1[1] = 0LL;
          (*(void (__fastcall **)(CRenderTargetImageSource *))(*(_QWORD *)v4 + 16LL))(v4);
        }
        v5 = *v1;
        if ( *v1 )
        {
          *v1 = 0LL;
          v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
          if ( (char *)v6 == (char *)CRenderTargetImageSource::Release )
            CRenderTargetImageSource::Release(v5);
          else
            v6();
        }
        v1 += 13;
      }
      while ( v1 != v3 );
      v1 = *(CRenderTargetImageSource ***)a1;
    }
    std::_Deallocate(v1, (*(_QWORD *)(a1 + 16) - (_QWORD)v1) / 104LL, 0x68uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
