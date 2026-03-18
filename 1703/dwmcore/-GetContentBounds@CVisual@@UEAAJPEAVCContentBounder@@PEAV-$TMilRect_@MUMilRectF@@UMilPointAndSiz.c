/*
 * XREFs of ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180087A80
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CPrimitiveGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004CA60 (-GetBounds@CPrimitiveGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800847E0 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetBounds@CAtlasedRectsGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AF6D0 (-GetBounds@CAtlasedRectsGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetContentBounds(__int64 a1, struct CComposition **a2, __int64 a3)
{
  unsigned int v3; // ebx
  CRenderData *v5; // rcx
  __int64 v7; // r10
  __int64 (__fastcall *v8)(CRenderData *, struct CComposition **, __int64, __int64); // rax
  int Bounds; // eax

  v3 = 0;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  v5 = *(CRenderData **)(a1 + 240);
  if ( v5 )
  {
    v7 = a1 + 128;
    v8 = *(__int64 (__fastcall **)(CRenderData *, struct CComposition **, __int64, __int64))(*(_QWORD *)v5 + 152LL);
    if ( v8 == CRenderData::GetBounds )
    {
      Bounds = CRenderData::GetBounds(v5, a2, v7, a3);
    }
    else if ( (char *)v8 == (char *)CPrimitiveGroup::GetBounds )
    {
      Bounds = CPrimitiveGroup::GetBounds((__int64)v5, (__int64)a2, v7, (_OWORD *)a3);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0xC1Au);
  }
  return v3;
}
