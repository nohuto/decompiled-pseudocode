/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390
 * Callers:
 *     GreGetAppClipBox @ 0x1C000DDFC (GreGetAppClipBox.c)
 *     GreDrawStream @ 0x1C000E420 (GreDrawStream.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0016100 (GreSetDIBitsToDeviceInternal.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0018A24 (GreBeginGdiRenderingToDxSurface.c)
 *     GreGetDIBitsInternal @ 0x1C0018D1C (GreGetDIBitsInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     GreExtTextOutRect @ 0x1C001CE28 (GreExtTextOutRect.c)
 *     GreExtTextOutWInternal @ 0x1C001D2B0 (GreExtTextOutWInternal.c)
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     NtGdiPolyPatBlt @ 0x1C001DB00 (NtGdiPolyPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00224A4 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00272A0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     GreSelectRedirectionBitmap @ 0x1C0029120 (GreSelectRedirectionBitmap.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0029360 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     GreHintDCWnd @ 0x1C002A080 (GreHintDCWnd.c)
 *     NtGdiSetPixel @ 0x1C002AA00 (NtGdiSetPixel.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiGetPixel @ 0x1C002B850 (NtGdiGetPixel.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006B8C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreSaveDC @ 0x1C0080270 (GreSaveDC.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0080648 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     GreGetDCDpiScaleValue @ 0x1C0082CD4 (GreGetDCDpiScaleValue.c)
 *     NtGdiGetRandomRgn @ 0x1C0092950 (NtGdiGetRandomRgn.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C009B814 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreGetTextFaceW @ 0x1C00AEF00 (GreGetTextFaceW.c)
 *     GreGetCharSet @ 0x1C00B0B68 (GreGetCharSet.c)
 *     NtGdiGetDCDword @ 0x1C00E2350 (NtGdiGetDCDword.c)
 *     NtGdiGetDCObject @ 0x1C00E25B0 (NtGdiGetDCObject.c)
 *     GrePolyTextOutW @ 0x1C00E3088 (GrePolyTextOutW.c)
 *     NtGdiModifyWorldTransform @ 0x1C00F0C60 (NtGdiModifyWorldTransform.c)
 *     GreGetBoundsRect @ 0x1C00F2548 (GreGetBoundsRect.c)
 *     GreRealizePalette @ 0x1C010EC68 (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x1C0292950 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::RestoreAttributes(XDCOBJ *this)
{
  _OWORD *v1; // rax
  _OWORD *v2; // rdx
  __int64 v3; // r8

  if ( *((_DWORD *)this + 2) )
  {
    v1 = (_OWORD *)(*(_QWORD *)this + 984LL);
    if ( *(_OWORD **)(*(_QWORD *)this + 80LL) == v1 )
    {
      if ( !*((_DWORD *)this + 3) )
      {
        v2 = *(_OWORD **)(*(_QWORD *)this + 976LL);
        v3 = 3LL;
        do
        {
          *v2 = *v1;
          v2[1] = v1[1];
          v2[2] = v1[2];
          v2[3] = v1[3];
          v2[4] = v1[4];
          v2[5] = v1[5];
          v2[6] = v1[6];
          v2 += 8;
          *(v2 - 1) = v1[7];
          v1 += 8;
          --v3;
        }
        while ( v3 );
        *v2 = *v1;
        v2[1] = v1[1];
      }
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 976LL);
      *((_DWORD *)this + 2) = 0;
    }
  }
}
