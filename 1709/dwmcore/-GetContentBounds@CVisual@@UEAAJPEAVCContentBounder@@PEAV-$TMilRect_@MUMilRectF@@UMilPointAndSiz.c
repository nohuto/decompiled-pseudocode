/*
 * XREFs of ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180054190
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E3F0 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetBounds@CPrimitiveGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180027F90 (-GetBounds@CPrimitiveGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF.c)
 *     ?GetBounds@CAtlasedRectsGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006ACC0 (-GetBounds@CAtlasedRectsGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetContentBounds(__int64 a1, CContentBounder *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v7; // r10
  __int64 (__fastcall *v8)(__int64, CContentBounder *, __int64, __int64); // rax
  int Bounds; // eax

  v3 = 0;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  v5 = *(_QWORD *)(a1 + 240);
  if ( v5 )
  {
    v7 = a1 + 132;
    v8 = *(__int64 (__fastcall **)(__int64, CContentBounder *, __int64, __int64))(*(_QWORD *)v5 + 168LL);
    if ( (char *)v8 == (char *)CRenderData::GetBounds )
    {
      Bounds = CRenderData::GetBounds(v5, a2, v7, (float *)a3);
    }
    else if ( (char *)v8 == (char *)CPrimitiveGroup::GetBounds )
    {
      Bounds = CPrimitiveGroup::GetBounds(v5, (__int64)a2, v7, (_OWORD *)a3);
    }
    else if ( (char *)v8 == (char *)CAtlasedRectsGroup::GetBounds )
    {
      Bounds = CAtlasedRectsGroup::GetBounds(v5, a2, v7, a3);
    }
    else
    {
      Bounds = v8(v5, a2, v7, a3);
    }
    v3 = Bounds;
    if ( Bounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0xC53u);
  }
  return v3;
}
