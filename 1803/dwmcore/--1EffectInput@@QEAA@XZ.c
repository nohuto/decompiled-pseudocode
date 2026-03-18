/*
 * XREFs of ??1EffectInput@@QEAA@XZ @ 0x18008F684
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall EffectInput::~EffectInput(EffectInput *this)
{
  __int64 v2; // rcx
  CRenderTargetImageSource *v3; // rcx
  void (*v4)(void); // rax

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(CRenderTargetImageSource **)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CRenderTargetImageSource::Release )
      CRenderTargetImageSource::Release(v3);
    else
      v4();
  }
}
