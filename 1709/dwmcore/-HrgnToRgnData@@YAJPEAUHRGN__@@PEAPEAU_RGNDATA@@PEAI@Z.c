/*
 * XREFs of ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180089E8C
 * Callers:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180088C68 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?ClipRect@CDwmMetaRegion@@SAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18014F20C (-ClipRect@CDwmMetaRegion@@SAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x18014F56C (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014F7D4 (-CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014FBA0 (-GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x18014FCC4 (-GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x18018B8C4 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 *     ?EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ @ 0x1801AC088 (-EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ.c)
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801B2C8C (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801B7C60 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall HrgnToRgnData(HRGN hrgn, struct _RGNDATA **a2, unsigned int *a3)
{
  signed int v5; // ebx
  struct _RGNDATA *v6; // rdi
  DWORD RegionData; // esi
  __int64 result; // rax
  signed int LastError; // eax
  signed int v10; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = 0LL;
  SetLastError(0);
  RegionData = GetRegionData(hrgn, 0, 0LL);
  if ( !RegionData )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    v11 = 135;
LABEL_12:
    if ( v5 >= 0 )
      v5 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, v11);
    goto LABEL_15;
  }
  v6 = (struct _RGNDATA *)HeapAlloc(WPF::g_processHeap, 0, RegionData);
  if ( v6 )
  {
    SetLastError(0);
    if ( GetRegionData(hrgn, RegionData, v6) )
      goto LABEL_4;
    v10 = GetLastError();
    v5 = v10;
    if ( v10 > 0 )
      v5 = (unsigned __int16)v10 | 0x80070000;
    v11 = 144;
    goto LABEL_12;
  }
  v5 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x8Du);
LABEL_15:
  if ( v6 )
  {
    WPF::ProcessHeapImpl::Free(v6);
    v6 = 0LL;
  }
LABEL_4:
  result = (unsigned int)v5;
  *a2 = v6;
  return result;
}
