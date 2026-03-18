/*
 * XREFs of ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180073C98
 * Callers:
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18008B040 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 * Callees:
 *     ?AddRef@CRenderingTechnique@@UEAAKXZ @ 0x180070C70 (-AddRef@CRenderingTechnique@@UEAAKXZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x18007314C (--0SamplerMode@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x180077350 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ?AddRef@CRenderTargetImageSource@@UEAAKXZ @ 0x180089F70 (-AddRef@CRenderTargetImageSource@@UEAAKXZ.c)
 *     ?ComputeSurfaceClampData@CBrushRenderingEffect@@CAXPEBVCSurfaceDrawListBrush@@PEATSurfaceSamplerData@CRenderingTechnique@@@Z @ 0x18008B29C (-ComputeSurfaceClampData@CBrushRenderingEffect@@CAXPEBVCSurfaceDrawListBrush@@PEATSurfaceSampler.c)
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x18008DB20 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingEffect::CBrushRenderingEffect(
        __int64 a1,
        CRenderingTechnique *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v4; // r12
  CDrawListBitmap *v5; // r14
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v11; // r13
  SamplerMode *v12; // rbp
  __int64 (__fastcall *v13)(CRenderingTechnique *); // rax
  __int64 v14; // rcx
  int v15; // ebp
  __int64 *v16; // rax
  _OWORD *v17; // rbx
  __int64 *v18; // r14
  __int64 v19; // r15
  float *v20; // rsi
  __int64 (__fastcall *v21)(float *, __int64); // rax
  char v22; // al
  __int64 v23; // rbx
  unsigned int (__fastcall *v24)(CRenderTargetImageSource *__hidden); // rax
  CRenderTargetImageSource *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rbx
  float v30[18]; // [rsp+20h] [rbp-48h]
  _OWORD *v31; // [rsp+70h] [rbp+8h]

  v4 = 0LL;
  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  v5 = (CDrawListBitmap *)(a1 + 24);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CBrushRenderingEffect::`vftable';
  v7 = 4LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v8 = 4LL;
  do
  {
    CDrawListBitmap::CDrawListBitmap(v5);
    v5 = (CDrawListBitmap *)((char *)v5 + 24);
    --v8;
  }
  while ( v8 );
  v11 = a1 + 120;
  v12 = (SamplerMode *)(a1 + 120);
  do
  {
    SamplerMode::SamplerMode(v12);
    v12 = (SamplerMode *)((char *)v12 + 3);
    --v7;
  }
  while ( v7 );
  if ( *(CRenderingTechnique **)(a1 + 16) != a2 )
  {
    if ( a2 )
    {
      v13 = **(__int64 (__fastcall ***)(CRenderingTechnique *))a2;
      if ( v13 == CRenderingTechnique::AddRef )
        CRenderingTechnique::AddRef(a2);
      else
        v13(a2);
    }
    v14 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = a2;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
  v15 = 0;
  if ( *a3 > 0 )
  {
    v16 = a3;
    v17 = (_OWORD *)(a1 + 132);
    v31 = (_OWORD *)(a1 + 132);
    v18 = (__int64 *)(a1 + 32);
    v19 = 0LL;
    do
    {
      v20 = *(float **)(v16[1] + 8 * v19);
      v21 = *(__int64 (__fastcall **)(float *, __int64))(*(_QWORD *)v20 + 8LL);
      if ( (char *)v21 == (char *)CSurfaceDrawListBrush::IsOfType )
        v22 = CSurfaceDrawListBrush::IsOfType(v20, 2LL);
      else
        v22 = v21(v20, 2LL);
      if ( v22 )
      {
        v23 = *((_QWORD *)v20 + 7);
        if ( *(v18 - 1) != v23 )
        {
          if ( v23 )
          {
            v24 = *(unsigned int (__fastcall **)(CRenderTargetImageSource *__hidden))(*(_QWORD *)v23 + 8LL);
            v25 = (CRenderTargetImageSource *)*((_QWORD *)v20 + 7);
            if ( v24 == CRenderTargetImageSource::AddRef )
              CRenderTargetImageSource::AddRef(v25);
            else
              v24(v25);
          }
          v26 = *(v18 - 1);
          *(v18 - 1) = v23;
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v27 = *v18;
        v28 = *((_QWORD *)v20 + 8);
        if ( *v18 != v28 )
        {
          if ( v28 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28 + 8LL))(*((_QWORD *)v20 + 8));
            v27 = *v18;
          }
          *v18 = v28;
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        *((_BYTE *)v18 + 8) = *((_BYTE *)v20 + 72);
        *(_WORD *)v11 = *((_WORD *)v20 + 48);
        *(_BYTE *)(v11 + 2) = *((_BYTE *)v20 + 98);
        *(_BYTE *)(v19 + a1 + 196) = *(_BYTE *)(v19 + *(_QWORD *)(a4 + 8));
        CBrushRenderingEffect::ComputeSurfaceClampData(
          (const struct CSurfaceDrawListBrush *)v20,
          (union CRenderingTechnique::SurfaceSamplerData *)(16 * v4 + a1 + 132));
        v17 = v31;
      }
      else
      {
        v30[3] = v20[17];
        v30[0] = v30[3] * v20[14];
        v30[1] = v30[3] * v20[15];
        v30[2] = v30[3] * v20[16];
        *v17 = *(_OWORD *)v30;
      }
      v16 = a3;
      ++v15;
      ++v17;
      v4 = v15;
      ++v19;
      v31 = v17;
      v11 += 3LL;
      v18 += 3;
    }
    while ( v15 < *a3 );
  }
  return a1;
}
