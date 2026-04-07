/*
 * XREFs of ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180010650
 * Callers:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800178A0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180002CD0 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180002E10 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800030EC (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180003460 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800038E0 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x180010824 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180017800 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180018770 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800256C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18003BDBC (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180080EF8 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180080F44 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 */

__int64 __fastcall CAccent::UpdateLayout(CAccent *this, bool a2)
{
  int updated; // eax
  unsigned int v5; // ebx
  CVisual *v6; // rcx
  const struct tagSIZE *v7; // rdx
  __int64 (__fastcall *v8)(CVisual *__hidden, const struct tagSIZE *); // rax
  int v9; // eax
  CVisual *v10; // rcx
  void (__fastcall *v11)(CVisual *__hidden, unsigned int); // rax
  int v13; // eax
  int v14; // r9d
  unsigned int v15; // eax
  int v16; // edx
  int v17; // ecx
  __m128i v18; // xmm0
  int v19; // eax
  float v20; // xmm0_4
  int v21; // xmm0_4
  _DWORD *v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-30h]
  __m128i v24; // [rsp+30h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 373) && (unsigned int)(*((_DWORD *)this + 70) - 2) > 2 )
  {
    updated = CAccent::_UpdateResources((struct CRenderDataVisual **)this);
    v5 = updated;
    if ( updated >= 0 )
      goto LABEL_4;
    v23 = 528;
LABEL_24:
    v14 = updated;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v23);
    return v5;
  }
  v13 = *((_DWORD *)this + 70);
  if ( v13 == 3 )
  {
    CAccent::_UpdateAccentBlurBehind(this);
  }
  else if ( v13 == 4 )
  {
    updated = CAccent::_UpdateAcrylicBlurBehind(this);
    v5 = updated;
    if ( updated < 0 )
    {
      v23 = 536;
      goto LABEL_24;
    }
  }
  else
  {
    v15 = 0;
    v16 = *((_DWORD *)this + 151) - *((_DWORD *)this + 149);
    v17 = *((_DWORD *)this + 150) - *((_DWORD *)this + 148);
    v24.m128i_i64[0] = 0LL;
    if ( v17 >= 0 )
      v15 = v17;
    v18 = _mm_cvtsi32_si128(v15);
    v19 = 0;
    LODWORD(v20) = _mm_cvtepi32_ps(v18).m128_u32[0];
    if ( v16 >= 0 )
      v19 = v16;
    *(float *)&v24.m128i_i32[2] = v20 + 0.0;
    *(float *)&v24.m128i_i32[3] = (float)v19 + 0.0;
    *(float *)&v21 = CAccent::_GetSolidFillOpacity(this);
    updated = CAccent::_UpdateSolidFill(v22, this, *((_DWORD *)this + 88), &v24, v21);
    v5 = updated;
    if ( updated < 0 )
    {
      v23 = 547;
      goto LABEL_24;
    }
    updated = CAccent::_AddOcclusionInstruction(this);
    v5 = updated;
    if ( updated < 0 )
    {
      v23 = 550;
      goto LABEL_24;
    }
  }
LABEL_4:
  if ( (*((_BYTE *)this + 284) & 0xE0) != 0 )
  {
    updated = CAccent::_EnsureBorderShadowAtlas(this);
    v5 = updated;
    if ( updated < 0 )
    {
      v23 = 555;
      goto LABEL_24;
    }
    updated = CAccent::_UpdateBorderShadowParts(this);
    v5 = updated;
    if ( updated < 0 )
    {
      v23 = 556;
      goto LABEL_24;
    }
    updated = CAccent::_UpdateBorderShadowForAccent((CVisual **)this);
    v5 = updated;
    if ( updated < 0 )
    {
      v23 = 557;
      goto LABEL_24;
    }
  }
  updated = CCanvasVisual::UpdateLayout(this, a2);
  v5 = updated;
  if ( updated < 0 )
  {
    v23 = 560;
    goto LABEL_24;
  }
  v6 = (CVisual *)*((_QWORD *)this + 51);
  if ( v6 )
  {
    v7 = (const struct tagSIZE *)((char *)this + 120);
    v8 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)v6 + 80LL);
    v9 = v8 == CVisual::SetSize ? CVisual::SetSize(v6, v7) : v8(v6, v7);
    v5 = v9;
    if ( v9 < 0 )
    {
      v23 = 565;
      v14 = v9;
      goto LABEL_26;
    }
  }
  v24.m128i_i32[2] = -1;
  v24.m128i_i16[6] = 0;
  v24.m128i_i64[0] = (__int64)this + 32;
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v24) )
  {
    v10 = *(CVisual **)(*(_QWORD *)(v24.m128i_i64[0] + 16) + 8LL * v24.m128i_u32[2]);
    v11 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v10 + 24LL);
    if ( v11 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v10, 2u);
    else
      v11(v10, 2u);
  }
  return v5;
}
