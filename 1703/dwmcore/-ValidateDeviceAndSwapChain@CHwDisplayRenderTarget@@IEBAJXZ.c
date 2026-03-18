/*
 * XREFs of ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180039EAC
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18003A360 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18003ADC0 (-DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@.c)
 *     ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x1800CDD70 (-WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z.c)
 *     ?DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18019C3B0 (-DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801A01C0 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180039C30 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ValidateDeviceAndSwapChain(CHwDisplayRenderTarget *this)
{
  __int64 v1; // rax
  int v2; // ebx
  __int64 (*v3)(void); // rax
  char IsValid; // al

  v1 = *((_QWORD *)this + 23);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 872);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v2, 0x516u);
    }
    else
    {
      v3 = *(__int64 (**)(void))(*(_QWORD *)this + 48LL);
      if ( (char *)v3 == (char *)CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(this);
      else
        IsValid = v3();
      if ( !IsValid )
      {
        v2 = -2003304442;
        MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, -2003304442, 0x522u);
      }
    }
  }
  else
  {
    v2 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, -2003304307, 0x51Au);
  }
  return (unsigned int)v2;
}
