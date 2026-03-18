/*
 * XREFs of ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x1801590F0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800A62D0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x18012B408 (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18014D138 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800B779C (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180189138 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CMoveRenderPassInfo::ResetVisibleRegion(CMoveRenderPassInfo *this)
{
  signed int v2; // ebx
  __int64 v3; // rcx
  void *v4; // rcx
  HRGN RectRgn; // rax
  signed int LastError; // eax
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // r8d

  v2 = 0;
  if ( qword_18023E528 )
  {
    if ( CDisplaySet::NeedsDesktopMoves(qword_18023E528) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 224LL))(*((_QWORD *)this + 9)) )
      {
        v3 = *(_QWORD *)(*((_QWORD *)this + 8) + 400LL);
        if ( *((_QWORD *)this + 3) != v3 )
        {
          *((_QWORD *)this + 3) = v3;
          v4 = (void *)*((_QWORD *)this + 2);
          if ( v4 )
            DeleteObject(v4);
          *((_QWORD *)this + 2) = *((_QWORD *)this + 1);
          SetLastError(0);
          RectRgn = CreateRectRgn(0, 0, 0, 0);
          *((_QWORD *)this + 1) = RectRgn;
          if ( !RectRgn )
          {
            LastError = GetLastError();
            v2 = LastError;
            if ( LastError > 0 )
              v2 = (unsigned __int16)LastError | 0x80070000;
            if ( v2 >= 0 )
              v2 = CheckGUIHandleQuota(v8, v7, v9);
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x6Cu);
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
