/*
 * XREFs of ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x180077360
 * Callers:
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180070640 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x18008BB8C (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX$$QEA$$T@Z @ 0x18008BC70 (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX$$QEA$$T@.c)
 *     ??0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView@@@Z @ 0x1802171B0 (--0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CDrawListBitmap *__fastcall CDrawListBitmap::CDrawListBitmap(CDrawListBitmap *this, const struct CDrawListBitmap *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
  return this;
}
