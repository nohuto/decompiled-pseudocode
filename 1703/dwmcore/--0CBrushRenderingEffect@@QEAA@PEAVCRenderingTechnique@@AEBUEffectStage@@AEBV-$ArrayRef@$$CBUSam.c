/*
 * XREFs of ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@AEBV?$ArrayRef@$$CBUSamplerMode@@@@@Z @ 0x180015D50
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 * Callees:
 *     ?AddRef@CRenderingTechnique@@UEAAKXZ @ 0x1800176A0 (-AddRef@CRenderingTechnique@@UEAAKXZ.c)
 *     ?AddRef@CArrayBasedCoverageSet@@UEAAKXZ @ 0x18004B200 (-AddRef@CArrayBasedCoverageSet@@UEAAKXZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1800C2624 (--0SamplerMode@@QEAA@XZ.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingEffect::CBrushRenderingEffect(
        __int64 a1,
        CRenderingTechnique *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v8; // rbp
  SamplerMode *v9; // r14
  unsigned int (__fastcall *v10)(CRenderingTechnique *__hidden); // rax
  __int64 i; // rbx
  __int64 v12; // rax
  bool v13; // r15
  CArrayBasedCoverageSet *v14; // r14
  unsigned int (__fastcall *v15)(CArrayBasedCoverageSet *__hidden); // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx

  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CBrushRenderingEffect::`vftable';
  memset_0((void *)(a1 + 24), 0, 0x20uLL);
  v8 = 4LL;
  v9 = (SamplerMode *)(a1 + 56);
  do
  {
    SamplerMode::SamplerMode(v9);
    v9 = (SamplerMode *)((char *)v9 + 3);
    --v8;
  }
  while ( v8 );
  *(_QWORD *)(a1 + 16) = a2;
  if ( a2 )
  {
    v10 = **(unsigned int (__fastcall ***)(CRenderingTechnique *__hidden))a2;
    if ( v10 == CRenderingTechnique::AddRef )
      CRenderingTechnique::AddRef(a2);
    else
      v10(a2);
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a3 + 4); i = (unsigned int)(i + 1) )
  {
    v12 = 88LL * (unsigned int)i;
    if ( !*(_BYTE *)(v12 + a3 + 37) )
    {
      v13 = *(_BYTE *)(v12 + a3 + 36) && *(_BYTE *)(v12 + a3 + 94);
      v14 = *(CArrayBasedCoverageSet **)(v12 + a3 + 8);
      v15 = *(unsigned int (__fastcall **)(CArrayBasedCoverageSet *__hidden))(*(_QWORD *)v14 + 8LL);
      if ( v15 == CArrayBasedCoverageSet::AddRef )
        CArrayBasedCoverageSet::AddRef(v14);
      else
        v15(v14);
      v16 = a1 + 2 * i;
      *(_QWORD *)(a1 + 8LL * (int)i + 24) = (unsigned __int64)v14 | v13;
      v17 = 3LL * (int)i;
      v18 = *a4;
      *(_WORD *)(v16 + i + 56) = *(_WORD *)(v17 + *a4);
      *(_BYTE *)(v16 + i + 58) = *(_BYTE *)(v17 + v18 + 2);
    }
  }
  return a1;
}
