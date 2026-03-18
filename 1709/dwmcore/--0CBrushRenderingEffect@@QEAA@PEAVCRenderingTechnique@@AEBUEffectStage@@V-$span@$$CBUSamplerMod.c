/*
 * XREFs of ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@V?$span@$$CBUSamplerMode@@@gsl@@@Z @ 0x18006CEDC
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 * Callees:
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x180048570 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180048580 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x180048A10 (--0SamplerMode@@QEAA@XZ.c)
 *     ?AddRef@CRenderingTechnique@@UEAAKXZ @ 0x18006D040 (-AddRef@CRenderingTechnique@@UEAAKXZ.c)
 *     ?Release@CRenderingTechnique@@UEAAKXZ @ 0x18006DA70 (-Release@CRenderingTechnique@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingEffect::CBrushRenderingEffect(
        __int64 a1,
        CRenderingTechnique *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rbp
  CDrawListBitmap *v5; // r14
  __int64 v10; // rsi
  SamplerMode *v11; // rsi
  unsigned int (__fastcall *v12)(CRenderingTechnique *__hidden); // rax
  CRenderingTechnique *v13; // rcx
  void (*v14)(void); // rax
  __int64 i; // rdi
  _BYTE *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  bool v19; // al

  v4 = 4LL;
  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  v5 = (CDrawListBitmap *)(a1 + 24);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CBrushRenderingEffect::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  v10 = 4LL;
  do
  {
    CDrawListBitmap::CDrawListBitmap(v5);
    v5 = (CDrawListBitmap *)((char *)v5 + 24);
    --v10;
  }
  while ( v10 );
  v11 = (SamplerMode *)(a1 + 120);
  do
  {
    SamplerMode::SamplerMode(v11);
    v11 = (SamplerMode *)((char *)v11 + 3);
    --v4;
  }
  while ( v4 );
  if ( *(CRenderingTechnique **)(a1 + 16) != a2 )
  {
    if ( a2 )
    {
      v12 = **(unsigned int (__fastcall ***)(CRenderingTechnique *__hidden))a2;
      if ( v12 == CRenderingTechnique::AddRef )
        CRenderingTechnique::AddRef(a2);
      else
        v12(a2);
    }
    v13 = *(CRenderingTechnique **)(a1 + 16);
    *(_QWORD *)(a1 + 16) = a2;
    if ( v13 )
    {
      v14 = *(void (**)(void))(*(_QWORD *)v13 + 8LL);
      if ( (char *)v14 == (char *)CRenderingTechnique::Release )
        CRenderingTechnique::Release(v13);
      else
        v14();
    }
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a3 + 4); i = (unsigned int)(i + 1) )
  {
    v16 = (_BYTE *)(a3 + 104LL * (unsigned int)i);
    if ( !v16[53] )
    {
      CDrawListBitmap::operator=((CArrayBasedCoverageSet **)(a1 + 24 * (i + 1)), (__int64)(v16 + 8));
      v17 = *a4;
      v18 = a1 + 2 * i;
      *(_WORD *)(i + v18 + 120) = *(_WORD *)(3 * i + *a4);
      *(_BYTE *)(i + v18 + 122) = *(_BYTE *)(3 * i + v17 + 2);
      v19 = v16[52] && v16[110];
      *(_BYTE *)(a1 + i + 132) = v19;
    }
  }
  return a1;
}
