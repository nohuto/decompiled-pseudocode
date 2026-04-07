/*
 * XREFs of ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18001C8A0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021FE8 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800068C0 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18001D01C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18001D1DC (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18001D35C (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x18001D7E0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x18001DD3C (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x18001E2BC (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18001EBD4 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180020980 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180023260 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x18003E884 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccent::UpdateLayout(struct CRenderDataVisual **this, bool a2)
{
  int updated; // eax
  unsigned int v5; // ebx
  CVisual *v6; // rcx
  const struct tagSIZE *v7; // rdx
  __int64 (__fastcall *v8)(CVisual *__hidden, const struct tagSIZE *); // rax
  int v9; // eax
  CVisual *v10; // rcx
  void (__fastcall *v11)(CVisual *__hidden, unsigned int); // rax
  unsigned int v13; // eax
  int v14; // edx
  int v15; // ecx
  __m128i v16; // xmm0
  int v17; // eax
  float v18; // xmm0_4
  float SolidFillOpacity; // xmm0_4
  __int64 v20; // rcx
  int v21; // r9d
  unsigned int v22; // [rsp+20h] [rbp-30h]
  char *v23; // [rsp+30h] [rbp-20h] BYREF
  float v24; // [rsp+38h] [rbp-18h]
  float v25; // [rsp+3Ch] [rbp-14h]

  if ( !*((_BYTE *)this + 365) && (unsigned int)(*((_DWORD *)this + 70) - 2) > 1 )
  {
    updated = CAccent::_UpdateResources(this);
    v5 = updated;
    if ( updated >= 0 )
      goto LABEL_4;
    v22 = 530;
LABEL_29:
    v21 = updated;
LABEL_31:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v22);
    return v5;
  }
  if ( *((_DWORD *)this + 70) == 3 )
  {
    CAccent::_UpdateAccentBlurBehind((CAccent *)this);
  }
  else
  {
    v13 = 0;
    v14 = *((_DWORD *)this + 149) - *((_DWORD *)this + 147);
    v15 = *((_DWORD *)this + 148) - *((_DWORD *)this + 146);
    v23 = 0LL;
    if ( v15 >= 0 )
      v13 = v15;
    v16 = _mm_cvtsi32_si128(v13);
    v17 = 0;
    LODWORD(v18) = _mm_cvtepi32_ps(v16).m128_u32[0];
    if ( v14 >= 0 )
      v17 = v14;
    v24 = v18 + 0.0;
    v25 = (float)v17 + 0.0;
    SolidFillOpacity = CAccent::_GetSolidFillOpacity((CAccent *)this);
    updated = CAccent::_UpdateSolidFill(v20, this, *((unsigned int *)this + 86), &v23, LODWORD(SolidFillOpacity));
    v5 = updated;
    if ( updated < 0 )
    {
      v22 = 545;
      goto LABEL_29;
    }
    updated = CAccent::_AddOcclusionInstruction((CAccent *)this);
    v5 = updated;
    if ( updated < 0 )
    {
      v22 = 548;
      goto LABEL_29;
    }
  }
LABEL_4:
  if ( (*((_BYTE *)this + 284) & 0xE0) != 0 )
  {
    updated = CAccent::_EnsureBorderShadowAtlas((CAccent *)this);
    v5 = updated;
    if ( updated < 0 )
    {
      v22 = 553;
      goto LABEL_29;
    }
    updated = CAccent::_UpdateBorderShadowParts((CAccent *)this);
    v5 = updated;
    if ( updated < 0 )
    {
      v22 = 554;
      goto LABEL_29;
    }
    updated = CAccent::_UpdateBorderShadowForAccent((CAccent *)this);
    v5 = updated;
    if ( updated < 0 )
    {
      v22 = 555;
      goto LABEL_29;
    }
  }
  updated = CCanvasVisual::UpdateLayout((CCanvasVisual *)this, a2);
  v5 = updated;
  if ( updated < 0 )
  {
    v22 = 558;
    goto LABEL_29;
  }
  v6 = this[50];
  if ( v6 )
  {
    v7 = (const struct tagSIZE *)(this + 15);
    v8 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)v6 + 80LL);
    v9 = v8 == CVisual::SetSize ? CVisual::SetSize(v6, v7) : v8(v6, v7);
    v5 = v9;
    if ( v9 < 0 )
    {
      v22 = 563;
      v21 = v9;
      goto LABEL_31;
    }
  }
  v24 = NAN;
  LOWORD(v25) = 0;
  v23 = (char *)(this + 4);
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v23) )
  {
    v10 = *(CVisual **)(*((_QWORD *)v23 + 2) + 8LL * LODWORD(v24));
    v11 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v10 + 24LL);
    if ( v11 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v10, 2u);
    else
      v11(v10, 2u);
  }
  return v5;
}
