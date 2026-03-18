/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0003F2C (GreCreateBitmapFromDxSurface.c)
 *     NtGdiGetDCObject @ 0x1C000E960 (NtGdiGetDCObject.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C00150D4 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     NtGdiGetRandomRgn @ 0x1C0022270 (NtGdiGetRandomRgn.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C00318B4 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0074420 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C007B5CC (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007DB44 (GreCreateCompatibleBitmapInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0080550 (GreSetDIBitsToDeviceInternal.c)
 *     GreDrawStream @ 0x1C0086090 (GreDrawStream.c)
 *     GreExtTextOutWInternal @ 0x1C0090298 (GreExtTextOutWInternal.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     GreExtTextOutRect @ 0x1C0092F90 (GreExtTextOutRect.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C00936F4 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C0093B84 (GreStretchDIBitsInternal.c)
 *     GreGetAppClipBox @ 0x1C009499C (GreGetAppClipBox.c)
 *     GreGetDIBColorTable @ 0x1C009F140 (GreGetDIBColorTable.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A6188 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGetBoundsRect @ 0x1C00E0588 (GreGetBoundsRect.c)
 *     GrePolyTextOutW @ 0x1C00E0E9C (GrePolyTextOutW.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00E65A0 (vAccNotifyDeleteSurfaceWrap.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00E8F78 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreRectVisible @ 0x1C00EB3C0 (GreRectVisible.c)
 *     GreGetRandomRgn @ 0x1C00F84A0 (GreGetRandomRgn.c)
 *     GreRealizePalette @ 0x1C0108418 (GreRealizePalette.c)
 *     NtGdiOffsetClipRgn @ 0x1C0109CC0 (NtGdiOffsetClipRgn.c)
 *     GreRealizeDefaultPalette @ 0x1C0112954 (GreRealizeDefaultPalette.c)
 *     NtGdiFrameRgn @ 0x1C011E410 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0120E28 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C0122720 (NtGdiFillRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiExtFloodFill @ 0x1C012BE60 (NtGdiExtFloodFill.c)
 *     GreExtSelectClipRgnInternal @ 0x1C013EDB0 (GreExtSelectClipRgnInternal.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C024ECC8 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreWindowResizeComplete @ 0x1C024EE98 (GreWindowResizeComplete.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C024FCF4 (DxEngSyncPaletteTableWithDevice.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C0254B9C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02555A8 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C0255A14 (GreDrawEscape.c)
 *     GreDeleteWnd @ 0x1C02683A0 (GreDeleteWnd.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0273C54 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0273DE4 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C027AC60 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027AE50 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C027B100 (-RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C027B290 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027B4A0 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C027B660 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027B870 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C027BA60 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C027BC80 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C027BEF0 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C027C160 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027C400 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C027C590 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C027C770 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C027C990 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiPtVisible @ 0x1C027DF10 (NtGdiPtVisible.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02941DC (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     GreSetDIBColorTable @ 0x1C0295CB0 (GreSetDIBColorTable.c)
 *     GreSetSystemPaletteUse @ 0x1C0295F24 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02965B0 (NtGdiUpdateColors.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02988B8 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C0298974 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C0298AC0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C001C23C (GreDereferenceObject.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C006D990 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA14 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA54 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C0075304 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007B200 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C007B4C4 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027A734 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C027CBD0 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  DC *v7; // rcx
  __int64 v8; // rax
  DCVISRGNSHARELOCK *v9; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  HDC v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  HSURF *v20; // rdi
  __int64 v21; // rax
  DC *v22; // rbp
  __int64 v23; // rbx
  HSURF v24; // rsi
  DC *v25; // rcx
  char v26; // bl
  __int64 v27; // rax
  DCVISRGNSHARELOCK *v28; // rcx
  __int64 v29; // rax
  _BYTE v30[8]; // [rsp+30h] [rbp-48h] BYREF
  DC *v31[8]; // [rsp+38h] [rbp-40h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 6);
    v4 = *(_QWORD *)(v1 + 48);
    if ( (v3 & 0x1000) != 0 )
    {
      if ( (v3 & 0x400) != 0 )
      {
        bUnHookRedir((DEVLOCKOBJ *)((char *)this + 32));
        *((_DWORD *)this + 6) &= ~0x400u;
      }
      if ( (*((_DWORD *)this + 6) & 0x2000) != 0 )
      {
        bUnHookBmpDrv((DEVLOCKOBJ *)((char *)this + 32));
        *((_DWORD *)this + 6) &= ~0x2000u;
      }
      v5 = *((_QWORD *)this + 4);
      if ( v5 && (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        if ( (*(_DWORD *)(v5 + 44) & 1) == 0 )
          SURFACE::bUnMap(*(SURFACE **)(v5 + 512), this, *((struct DC **)this + 4));
        *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) &= ~1u;
        v6 = *((_QWORD *)this + 4);
        if ( (*(_DWORD *)(v6 + 36) & 0x4000) != 0 && *(_QWORD *)(v6 + 488) && *(_DWORD *)(v6 + 504) )
          GreUpdateSpriteDevLockEnd((DEVLOCKOBJ *)((char *)this + 32), *((_DWORD *)this + 6) & 0x400000);
      }
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) &= ~0x4000u;
        v7 = (DC *)*((_QWORD *)this + 4);
        *((_QWORD *)v7 + 64) = *(_QWORD *)(v4 + 2568);
        DC::vInheritSurfaceDpiScale(v7);
      }
      v8 = *((_QWORD *)this + 4);
      if ( v8 && (*(_DWORD *)(v8 + 36) & 0x200) != 0 && (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
        if ( !*((_QWORD *)this + 6) )
          DC::vClearRendering(*((DC **)this + 4));
        if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( ThreadWin32Thread )
          {
            v11 = *ThreadWin32Thread;
            if ( v11 )
              *(_BYTE *)(v11 + 328) = 0;
          }
        }
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v9);
      }
    }
    if ( *((_QWORD *)this + 4) )
    {
      XDCOBJ::RestoreAttributes((DEVLOCKOBJ *)((char *)this + 32));
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 4) + 12LL));
      *((_QWORD *)this + 4) = 0LL;
    }
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    v12 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v12 )
    {
      v13 = *v12;
      if ( v13 )
      {
        *(_QWORD *)(v13 + 320) = 0LL;
        *(_QWORD *)(v13 + 312) = 0LL;
      }
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v14 = *((_DWORD *)this + 6);
  if ( (v14 & 8) != 0 )
    *((_DWORD *)this + 6) = v14 & 0xFFFFFFF7;
  v15 = *((_QWORD *)this + 1);
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v15);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  if ( *((_QWORD *)this + 7) )
  {
    v16 = (HDC)*((_QWORD *)this + 8);
    v31[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v31, v16);
    LOBYTE(v17) = 5;
    v18 = HmgShareLock(*((_QWORD *)this + 6), v17);
    LOBYTE(v19) = 5;
    v20 = (HSURF *)v18;
    v21 = HmgShareLock(*((_QWORD *)this + 7), v19);
    v22 = v31[0];
    v23 = v21;
    v24 = *v20;
    v25 = v31[0];
    *((_QWORD *)v31[0] + 64) = v21;
    DC::vInheritSurfaceDpiScale(v25);
    DEC_SHARE_REF_CNT(v20);
    DEC_SHARE_REF_CNT(v23);
    GreDereferenceObject(v24, 1u);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    if ( this != (DEVLOCKOBJ *)-72LL )
      *((_DWORD *)v22 + 9) |= *((_DWORD *)this + 18);
    if ( (*((_DWORD *)v22 + 9) & 0x200) != 0 )
    {
      v26 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v26 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v30);
      v27 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 7), 0LL, 0LL, 0LL, 5);
      if ( v27 )
        SURFACE::bDeleteSurface(v27, 0LL, 1LL);
      *((_QWORD *)v22 + 65) = 0LL;
      DC::vClearRendering(v22);
      *((_QWORD *)this + 7) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v28);
      if ( v26 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v29 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 7), 0LL, 0LL, 0LL, 5);
      if ( v29 )
        SURFACE::bDeleteSurface(v29, 0LL, 1LL);
      *((_QWORD *)v22 + 65) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
    }
    XDCOBJ::vUnlock((XDCOBJ *)v31);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
}
