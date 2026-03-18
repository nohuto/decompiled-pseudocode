/*
 * XREFs of ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800751C4
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180007210 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x180073DA8 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRE.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x180074530 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180075160 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x18014EAC8 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x180154CB0 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x18015A398 (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?GetDirtyRects@CHolographicInteropTexture@@UEAAXIPEAIPEAUtagRECT@@PEA_N@Z @ 0x1801A3D90 (-GetDirtyRects@CHolographicInteropTexture@@UEAAXIPEAIPEAUtagRECT@@PEA_N@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1801B5A18 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CRgnData::StepIterator(
        FastRegion::Internal::CRgnData *this,
        struct FastRegion::CRegion::Iterator *a2)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx

  if ( ++*((_DWORD *)a2 + 8) >= *((_DWORD *)a2 + 9) )
  {
    while ( 1 )
    {
      *((_QWORD *)a2 + 2) += 8LL;
      v3 = *((_QWORD *)a2 + 2);
      v4 = v3 + *(int *)(v3 + 4);
      *((_QWORD *)a2 + 3) = v4;
      v5 = (__int64)(v3 + 8 + *(int *)(v3 + 12) - v4) >> 3;
      *((_DWORD *)a2 + 9) = v5;
      if ( (_DWORD)v5 )
        break;
      if ( v3 >= *((_QWORD *)a2 + 1) )
        return;
    }
    *((_DWORD *)a2 + 8) = 0;
  }
}
