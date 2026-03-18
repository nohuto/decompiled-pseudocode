/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0008554 (GreCreateBitmapFromDxSurface.c)
 *     GreGetAppClipBox @ 0x1C000DDFC (GreGetAppClipBox.c)
 *     GreDrawStream @ 0x1C000E420 (GreDrawStream.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0016100 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiExtSelectClipRgn @ 0x1C00170F0 (NtGdiExtSelectClipRgn.c)
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     GreExtTextOutRect @ 0x1C001CE28 (GreExtTextOutRect.c)
 *     GreExtTextOutWInternal @ 0x1C001D2B0 (GreExtTextOutWInternal.c)
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C002808C (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C002B184 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C003E124 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C004C00C (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreExtSelectClipRgn @ 0x1C008074C (GreExtSelectClipRgn.c)
 *     GreGetRandomRgn @ 0x1C00808C0 (GreGetRandomRgn.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C008C12C (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     NtGdiGetRandomRgn @ 0x1C0092950 (NtGdiGetRandomRgn.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C009B814 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreRealizeDefaultPalette @ 0x1C00DF9CC (GreRealizeDefaultPalette.c)
 *     NtGdiGetDCObject @ 0x1C00E25B0 (NtGdiGetDCObject.c)
 *     GrePolyTextOutW @ 0x1C00E3088 (GrePolyTextOutW.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E7D30 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     GreGetBoundsRect @ 0x1C00F2548 (GreGetBoundsRect.c)
 *     GreRectVisible @ 0x1C00F7654 (GreRectVisible.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00F86E0 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreGetDIBColorTable @ 0x1C00FF920 (GreGetDIBColorTable.c)
 *     GreRealizePalette @ 0x1C010EC68 (GreRealizePalette.c)
 *     NtGdiOffsetClipRgn @ 0x1C0113A70 (NtGdiOffsetClipRgn.c)
 *     NtGdiExtFloodFill @ 0x1C01294D0 (NtGdiExtFloodFill.c)
 *     NtGdiFrameRgn @ 0x1C012A6A0 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C012B6D0 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C012C5F0 (NtGdiFillRgn.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C025073C (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreWindowResizeComplete @ 0x1C0250914 (GreWindowResizeComplete.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C0251744 (DxEngSyncPaletteTableWithDevice.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C025666C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0257078 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C0257504 (GreDrawEscape.c)
 *     GreDeleteWnd @ 0x1C0267160 (GreDeleteWnd.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0270428 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02705B8 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0277650 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0277840 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C0277AF0 (-RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C0277C80 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0277E90 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0278050 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0278260 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C0278450 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C0278670 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02788E0 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0278B50 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0278DF0 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0278F80 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0279160 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0279380 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiPtVisible @ 0x1C027AA20 (NtGdiPtVisible.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C0290918 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     GreSetDIBColorTable @ 0x1C0292360 (GreSetDIBColorTable.c)
 *     GreSetSystemPaletteUse @ 0x1C02925D4 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C0292C60 (NtGdiUpdateColors.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C0294F70 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C029502C (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C0295150 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00277E0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027CB0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0027F84 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEA8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEE8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     GreDereferenceObject @ 0x1C00E3F0C (GreDereferenceObject.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C0277128 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02795C0 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  DC *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  int v19; // eax
  struct _KTHREAD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  HDC v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 *v33; // rdi
  __int64 v34; // rax
  DC *v35; // rbp
  __int64 v36; // rbx
  __int64 v37; // rsi
  DC *v38; // rcx
  char v39; // bl
  __int64 v40; // rax
  DCVISRGNSHARELOCK *v41; // rcx
  __int64 v42; // rax
  _BYTE v43[4]; // [rsp+30h] [rbp-48h] BYREF
  int v44; // [rsp+34h] [rbp-44h] BYREF
  DC *v45[8]; // [rsp+38h] [rbp-40h] BYREF

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
      if ( v8 )
      {
        if ( (*((_DWORD *)this + 6) & 0x801000) != 0 )
          *(_DWORD *)(v8 + 40) &= ~2u;
        if ( (*((_DWORD *)this + 6) & 0x1000) != 0 && (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x200) != 0 )
        {
          GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
          if ( !*((_QWORD *)this + 6) )
            DC::vClearRendering(*((DC **)this + 4));
          if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9, v11, v12) )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
              {
                v15 = *ThreadWin32Thread;
                if ( v15 )
                  *(_BYTE *)(v15 + 328) = 0;
              }
            }
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
          GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        }
      }
    }
    if ( *((_QWORD *)this + 4) )
    {
      XDCOBJ::RestoreAttributes((DEVLOCKOBJ *)((char *)this + 32));
      v16 = (__int64 *)*((_QWORD *)this + 4);
      v17 = *((unsigned int *)this + 11);
      v44 = 0;
      v18 = *v16;
      HmgDecrementExclusiveReferenceCountEx(v16, v17, &v44);
      if ( v44 )
        bDeleteDCInternalEx(v18, 0LL);
    }
    *((_QWORD *)this + 4) = 0LL;
  }
  v19 = *((_DWORD *)this + 6);
  if ( (v19 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    v20 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v22, v21, v23, v24) )
    {
      v25 = (__int64 *)PsGetThreadWin32Thread(v20);
      if ( v25 )
      {
        v26 = *v25;
        if ( v26 )
        {
          *(_QWORD *)(v26 + 320) = 0LL;
          *(_QWORD *)(v26 + 312) = 0LL;
        }
      }
    }
  }
  else if ( (v19 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v27 = *((_DWORD *)this + 6);
  if ( (v27 & 8) != 0 )
    *((_DWORD *)this + 6) = v27 & 0xFFFFFFF7;
  v28 = *((_QWORD *)this + 1);
  if ( v28 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v28);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  if ( *((_QWORD *)this + 7) )
  {
    v29 = (HDC)*((_QWORD *)this + 8);
    v45[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v45, v29);
    LOBYTE(v30) = 5;
    v31 = HmgShareLock(*((_QWORD *)this + 6), v30);
    LOBYTE(v32) = 5;
    v33 = (__int64 *)v31;
    v34 = HmgShareLock(*((_QWORD *)this + 7), v32);
    v35 = v45[0];
    v36 = v34;
    v37 = *v33;
    v38 = v45[0];
    *((_QWORD *)v45[0] + 64) = v34;
    DC::vInheritSurfaceDpiScale(v38);
    DEC_SHARE_REF_CNT(v33);
    DEC_SHARE_REF_CNT(v36);
    GreDereferenceObject(v37, 1LL);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    if ( this != (DEVLOCKOBJ *)-72LL )
      *((_DWORD *)v35 + 9) |= *((_DWORD *)this + 18);
    if ( (*((_DWORD *)v35 + 9) & 0x200) != 0 )
    {
      v39 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v39 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v43);
      v40 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 7), 0LL, 0LL, 0LL, 5);
      if ( v40 )
        SURFACE::bDeleteSurface(v40, 0LL, 1LL);
      *((_QWORD *)v35 + 65) = 0LL;
      DC::vClearRendering(v35);
      *((_QWORD *)this + 7) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v41);
      if ( v39 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v42 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 7), 0LL, 0LL, 0LL, 5);
      if ( v42 )
        SURFACE::bDeleteSurface(v42, 0LL, 1LL);
      *((_QWORD *)v35 + 65) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v45);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
}
