/*
 * XREFs of ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180012990
 * Callers:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180015830 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016C9C (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800081C8 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18000839C (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180008720 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180008B64 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800124D4 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x1800127C8 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180014E24 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180016910 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180038878 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180077A68 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x180077BF0 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
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
  unsigned int v14; // eax
  int v15; // edx
  int v16; // ecx
  __m128i v17; // xmm0
  int v18; // eax
  float v19; // xmm0_4
  int v20; // xmm0_4
  _DWORD *v21; // rcx
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-30h]
  __m128i v24; // [rsp+30h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 373) && (unsigned int)(*((_DWORD *)this + 70) - 2) > 2 )
  {
    updated = CAccent::_UpdateResources((struct CRenderDataVisual **)this);
    v5 = updated;
    if ( updated >= 0 )
      goto LABEL_4;
    v23 = 531;
LABEL_29:
    v22 = updated;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, v23);
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
      v23 = 539;
      goto LABEL_29;
    }
  }
  else
  {
    v14 = 0;
    v15 = *((_DWORD *)this + 151) - *((_DWORD *)this + 149);
    v16 = *((_DWORD *)this + 150) - *((_DWORD *)this + 148);
    v24.m128i_i64[0] = 0LL;
    if ( v16 >= 0 )
      v14 = v16;
    v17 = _mm_cvtsi32_si128(v14);
    v18 = 0;
    LODWORD(v19) = _mm_cvtepi32_ps(v17).m128_u32[0];
    if ( v15 >= 0 )
      v18 = v15;
    *(float *)&v24.m128i_i32[2] = v19 + 0.0;
    *(float *)&v24.m128i_i32[3] = (float)v18 + 0.0;
    *(float *)&v20 = CAccent::_GetSolidFillOpacity(this);
    updated = CAccent::_UpdateSolidFill(v21, this, *((_DWORD *)this + 88), &v24, v20);
    v5 = updated;
    if ( updated < 0 )
    {
      v23 = 550;
      goto LABEL_29;
    }
    updated = CAccent::_AddOcclusionInstruction(this);
    v5 = updated;
    if ( updated < 0 )
    {
      v23 = 553;
      goto LABEL_29;
    }
  }
LABEL_4:
  if ( (*((_BYTE *)this + 284) & 0xE0) != 0 )
  {
    updated = CAccent::_EnsureBorderShadowAtlas(this);
    v5 = updated;
    if ( updated < 0 )
    {
      v23 = 558;
      goto LABEL_29;
    }
    updated = CAccent::_UpdateBorderShadowParts(this);
    v5 = updated;
    if ( updated < 0 )
    {
      v23 = 559;
      goto LABEL_29;
    }
    updated = CAccent::_UpdateBorderShadowForAccent((CVisual **)this);
    v5 = updated;
    if ( updated < 0 )
    {
      v23 = 560;
      goto LABEL_29;
    }
  }
  updated = CCanvasVisual::UpdateLayout(this, a2);
  v5 = updated;
  if ( updated < 0 )
  {
    v23 = 563;
    goto LABEL_29;
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
      v23 = 568;
      v22 = v9;
      goto LABEL_31;
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
