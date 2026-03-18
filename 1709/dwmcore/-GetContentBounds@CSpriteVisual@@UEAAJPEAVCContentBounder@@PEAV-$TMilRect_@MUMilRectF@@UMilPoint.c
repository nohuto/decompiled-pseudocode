/*
 * XREFs of ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180022460
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180022CC0 (-GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMil.c)
 *     ?GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180024DB0 (-GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180025960 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800C2790 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisual::GetContentBounds(CSpriteVisual *this, __int64 a2, _DWORD *a3)
{
  int v3; // ebx
  CSpriteVisualContent *v7; // rcx
  char *v8; // r8
  __int64 (__fastcall *v9)(CSpriteVisualContent *); // rax
  int Bounds; // eax
  struct CDropShadow *DropShadow; // rax
  int v13; // eax
  _BYTE v14[16]; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  a3[3] = 0;
  a3[2] = 0;
  a3[1] = 0;
  *a3 = 0;
  v7 = (CSpriteVisualContent *)*((_QWORD *)this + 30);
  if ( v7 )
  {
    v8 = (char *)this + 132;
    v9 = *(__int64 (__fastcall **)(CSpriteVisualContent *))(*(_QWORD *)v7 + 168LL);
    if ( (char *)v9 == (char *)CSpriteVisualContent::GetBounds )
    {
      Bounds = CSpriteVisualContent::GetBounds(v7, a2, v8, a3);
    }
    else if ( v9 == CMaskBrush::GetBounds )
    {
      Bounds = CMaskBrush::GetBounds(v7);
    }
    else if ( v9 == CSurfaceBrush::GetBounds )
    {
      Bounds = CSurfaceBrush::GetBounds(v7);
    }
    else
    {
      Bounds = ((__int64 (__fastcall *)(CSpriteVisualContent *, __int64, char *, _DWORD *))v9)(v7, a2, v8, a3);
    }
    v3 = Bounds;
    if ( Bounds >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0xC53u);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB0u);
    return (unsigned int)v3;
  }
LABEL_7:
  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x100) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    v13 = (*(__int64 (__fastcall **)(struct CDropShadow *, __int64, char *, _BYTE *))(*(_QWORD *)DropShadow + 168LL))(
            DropShadow,
            a2,
            (char *)this + 132,
            v14);
    v3 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xB7u);
    else
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v14);
  }
  return (unsigned int)v3;
}
