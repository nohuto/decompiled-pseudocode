/*
 * XREFs of ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18007FCC8
 * Callers:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18007D794 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?ClipRect@CDwmMetaRegion@@SAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180178A58 (-ClipRect@CDwmMetaRegion@@SAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x180178DB4 (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180179018 (-CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801793E4 (-GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x180179500 (-GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z.c)
 *     ?EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ @ 0x1801E8D3C (-EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ.c)
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801EB580 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801F0FF0 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall HrgnToRgnData(HRGN hrgn, struct _RGNDATA **a2, unsigned int *a3)
{
  signed int v5; // ebx
  struct _RGNDATA *v6; // rdi
  DWORD RegionData; // esi
  __int64 result; // rax
  signed int v9; // eax
  unsigned int v10; // eax
  signed int LastError; // eax

  v5 = 0;
  v6 = 0LL;
  SetLastError(0);
  RegionData = GetRegionData(hrgn, 0, 0LL);
  if ( RegionData )
  {
    v6 = (struct _RGNDATA *)HeapAlloc(WPF::g_processHeap, 0, RegionData);
    if ( !v6 )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Du);
      goto LABEL_17;
    }
    SetLastError(0);
    if ( GetRegionData(hrgn, RegionData, v6) )
      goto LABEL_4;
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    v10 = 144;
  }
  else
  {
    v9 = GetLastError();
    v5 = v9;
    if ( v9 > 0 )
      v5 = (unsigned __int16)v9 | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    v10 = 135;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v10);
LABEL_17:
  if ( v6 )
  {
    operator delete(v6);
    v6 = 0LL;
  }
LABEL_4:
  result = (unsigned int)v5;
  *a2 = v6;
  return result;
}
