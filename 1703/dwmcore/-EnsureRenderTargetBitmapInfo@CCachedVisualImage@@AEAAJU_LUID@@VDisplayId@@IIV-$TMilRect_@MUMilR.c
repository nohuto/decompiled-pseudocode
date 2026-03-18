/*
 * XREFs of ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180047A70
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180047874 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 * Callees:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800466C0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180047B70 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x180047D18 (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x180047ED0 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmapInfo(
        CCachedVisualImage *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        _QWORD *a8)
{
  unsigned int v11; // esi
  _DWORD *ExistingRenderTarget; // rbp
  int v13; // eax
  int v15; // eax
  _DWORD *v17; // [rsp+48h] [rbp-40h] BYREF

  v11 = 0;
  CCachedVisualImage::RemoveInvalidTargets(a1, a4, a5);
  ExistingRenderTarget = (_DWORD *)CCachedVisualImage::FindExistingRenderTarget(a1, a2, a3);
  v17 = ExistingRenderTarget;
  if ( ExistingRenderTarget )
    goto LABEL_2;
  v15 = CCachedVisualImage::CreateNewRenderTarget(a1, a2, a3, a4, a5, a6, a7, &v17);
  if ( v15 == -2003292287 )
    return v11;
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x506u);
    return v11;
  }
  ExistingRenderTarget = v17;
  if ( v17 )
  {
LABEL_2:
    v13 = CCachedVisualImage::RenderTargetBitmapInfo::Update(
            ExistingRenderTarget,
            a6,
            a3,
            *(_BYTE *)(*((_QWORD *)a1 + 4) + 1360LL),
            a7);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x520u);
      return v11;
    }
  }
  *a8 = ExistingRenderTarget;
  return v11;
}
