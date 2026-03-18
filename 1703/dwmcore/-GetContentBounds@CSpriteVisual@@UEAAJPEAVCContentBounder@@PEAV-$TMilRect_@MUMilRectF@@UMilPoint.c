/*
 * XREFs of ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008C840
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038CC0 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800398E0 (-GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008D480 (-GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMil.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisual::GetContentBounds(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  CSurfaceBrush **v7; // rcx
  const struct D2D_SIZE_F *v8; // r8
  __int64 (__fastcall *v9)(CSurfaceBrush **, __int64, const struct D2D_SIZE_F *, __int64); // rax
  int Bounds; // eax
  __int64 v11; // rcx
  int v13; // eax
  float v14[4]; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  v7 = *(CSurfaceBrush ***)(a1 + 240);
  if ( v7 )
  {
    v8 = (const struct D2D_SIZE_F *)(a1 + 128);
    v9 = (__int64 (__fastcall *)(CSurfaceBrush **, __int64, const struct D2D_SIZE_F *, __int64))*((_QWORD *)*v7 + 19);
    if ( (char *)v9 == (char *)CSpriteVisualContent::GetBounds )
    {
      Bounds = CSpriteVisualContent::GetBounds(v7, a2, v8, a3);
    }
    else if ( (char *)v9 == (char *)CMaskBrush::GetBounds )
    {
      Bounds = CMaskBrush::GetBounds(v7, a2, v8, (float *)a3);
    }
    else if ( (char *)v9 == (char *)CSurfaceBrush::GetBounds )
    {
      Bounds = CSurfaceBrush::GetBounds((CSurfaceBrush *)v7, a2, v8, (_DWORD *)a3);
    }
    else
    {
      Bounds = v9(v7, a2, v8, a3);
    }
    v3 = Bounds;
    if ( Bounds >= 0 )
      goto LABEL_5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0xC1Au);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x9Eu);
    return (unsigned int)v3;
  }
LABEL_5:
  v11 = *(_QWORD *)(a1 + 496);
  if ( v11 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, float *))(*(_QWORD *)v11 + 152LL))(
            v11,
            a2,
            a1 + 128,
            v14);
    v3 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA6u);
    else
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, v14);
  }
  return (unsigned int)v3;
}
