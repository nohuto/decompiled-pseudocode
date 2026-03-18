/*
 * XREFs of ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x18008BB8C
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x180077360 (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector<EffectInput>::reserve(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // r8
  unsigned __int64 result; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rsi
  char v12; // cl
  __int64 v13; // rsi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a1[2] - *a1;
  result = (unsigned __int64)((unsigned __int128)(v3 * (__int128)0x4EC4EC4EC4EC4EC5LL) >> 64) >> 63;
  if ( a2 > v3 / 104 )
  {
    if ( a2 > 0x276276276276276LL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v6 = (a1[1] - *a1) / 104;
    v7 = std::_Allocate<std::_Default_allocate_traits<1>>(a2, 104LL);
    v8 = a1[1];
    v9 = v7;
    v10 = *a1;
    if ( *a1 != v8 )
    {
      v11 = v7 + 40;
      do
      {
        CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(v11 - 40), (const struct CDrawListBitmap *)v10);
        *(_OWORD *)(v11 - 16) = *(_OWORD *)(v10 + 24);
        *(_DWORD *)v11 = *(_DWORD *)(v10 + 40);
        v12 = *(_BYTE *)(v10 + 44);
        *(_BYTE *)(v11 + 4) = v12;
        *(_BYTE *)(v11 + 5) = *(_BYTE *)(v10 + 45);
        *(_OWORD *)(v11 + 8) = *(_OWORD *)(v10 + 48);
        if ( v12 )
        {
          *(_OWORD *)(v11 + 24) = *(_OWORD *)(v10 + 64);
          *(_OWORD *)(v11 + 40) = *(_OWORD *)(v10 + 80);
          *(_QWORD *)(v11 + 56) = *(_QWORD *)(v10 + 96);
        }
        v11 += 104LL;
        v10 += 104LL;
      }
      while ( v10 != v8 );
      v10 = *a1;
    }
    if ( v10 )
    {
      v13 = a1[1];
      if ( v10 != v13 )
      {
        do
        {
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(v10 + 8));
          Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)v10);
          v10 += 104LL;
        }
        while ( v10 != v13 );
        v10 = *a1;
      }
      std::_Deallocate((void *)v10, (a1[2] - v10) / 104, 0x68uLL);
    }
    *a1 = v9;
    a1[1] = v9 + 104 * v6;
    result = v9 + 104 * a2;
    a1[2] = result;
  }
  return result;
}
