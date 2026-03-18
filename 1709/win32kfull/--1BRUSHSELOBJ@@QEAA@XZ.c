/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00F98EC
 * Callers:
 *     GreMarkDeletableBrush @ 0x1C00F9454 (GreMarkDeletableBrush.c)
 *     GreExtCreatePen @ 0x1C00F954C (GreExtCreatePen.c)
 *     NtGdiFrameRgn @ 0x1C012A6A0 (NtGdiFrameRgn.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C012BF1C (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     NtGdiFillRgn @ 0x1C012C5F0 (NtGdiFillRgn.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C0290C64 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C0290E4C (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreGetObjectBitmapHandle @ 0x1C0291FC0 (GreGetObjectBitmapHandle.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C00F9918 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
  }
}
