/*
 * XREFs of ?EnsureRealization@CImmediateBrushRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x180160F60
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801E6D84 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmediateBrushRealizer::EnsureRealization(
        CImmediateBrushRealizer *this,
        struct LegacyMilBrushContext *a2,
        const struct CContextState *a3,
        const struct PixelFormatInfo *a4)
{
  __int64 v4; // rcx

  if ( a4 )
  {
    *((_QWORD *)a2 + 27) = *(_QWORD *)a4;
    *((_DWORD *)a2 + 56) = *((_DWORD *)a4 + 2);
    v4 = *((_QWORD *)this + 11);
    *(_QWORD *)(v4 + 8) = *(_QWORD *)a4;
    *(_DWORD *)(v4 + 16) = *((_DWORD *)a4 + 2);
  }
  return 0LL;
}
