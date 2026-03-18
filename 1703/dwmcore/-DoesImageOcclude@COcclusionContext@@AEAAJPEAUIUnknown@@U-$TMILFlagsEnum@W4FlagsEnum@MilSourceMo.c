/*
 * XREFs of ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18009B300
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D100 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D9BC (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18009B4BC (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?HasContent@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180054700 (-HasContent@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x180056DC0 (-IsOpaque@CImageSource@@UEBA_NXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C4A14 (--$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DoesImageOcclude(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, CGdiSpriteBitmap **),
        char a3,
        _BYTE *a4)
{
  CGdiSpriteBitmap *v4; // rbx
  _BOOL8 (__fastcall *v6)(CGdiSpriteBitmap *); // rax
  bool HasContent; // al
  bool (__fastcall *v8)(CImageSource *); // rax
  bool IsOpaque; // al
  CGdiSpriteBitmap *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  *a4 = 0;
  if ( a2 && (a3 & 2) == 0 )
  {
    if ( (a3 & 1) != 0 )
    {
      *a4 = 1;
      goto LABEL_13;
    }
    if ( (**a2)(a2, &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552, &v11) < 0 )
      goto LABEL_12;
    v4 = v11;
    v6 = *(_BOOL8 (__fastcall **)(CGdiSpriteBitmap *))(*(_QWORD *)v11 + 80LL);
    if ( v6 == CGdiSpriteBitmap::HasContent )
    {
      HasContent = CGdiSpriteBitmap::HasContent(v11);
    }
    else
    {
      HasContent = v6(v11);
      v4 = v11;
    }
    if ( HasContent )
    {
      v8 = *(bool (__fastcall **)(CImageSource *))(*(_QWORD *)v4 + 96LL);
      if ( v8 == CImageSource::IsOpaque )
        IsOpaque = CImageSource::IsOpaque(v4);
      else
        IsOpaque = v8(v4);
      if ( IsOpaque )
        *a4 = 1;
LABEL_12:
      v4 = v11;
    }
  }
LABEL_13:
  ReleaseInterfaceNoNULL<IImageSource>(v4);
  return 0LL;
}
