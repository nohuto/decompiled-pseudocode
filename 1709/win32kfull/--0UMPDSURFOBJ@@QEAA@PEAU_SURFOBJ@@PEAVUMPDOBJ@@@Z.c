/*
 * XREFs of ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00B9358
 * Callers:
 *     NtGdiEngTextOut @ 0x1C00B84F0 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C00B8F70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C0131CB0 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C0131F00 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0132370 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C028D620 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCheckAbort @ 0x1C028D890 (NtGdiEngCheckAbort.c)
 *     NtGdiEngEraseSurface @ 0x1C028DBD0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C028DD30 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C028DF30 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C028E330 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C028E530 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C028E6C0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C028EAF0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C028EDD0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C028F060 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C028FF80 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C00B92E4 (-GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 */

UMPDSURFOBJ *__fastcall UMPDSURFOBJ::UMPDSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2, struct UMPDOBJ *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  struct _SURFOBJ *LockedSURFOBJ; // rax

  v3 = 0;
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( a2 == *((struct _SURFOBJ **)a3 + 9) )
    {
      v5 = *((_QWORD *)a3 + 8);
    }
    else if ( a2 == *((struct _SURFOBJ **)a3 + 11) )
    {
      v5 = *((_QWORD *)a3 + 10);
    }
    else if ( a2 == *((struct _SURFOBJ **)a3 + 13) )
    {
      v5 = *((_QWORD *)a3 + 12);
    }
    else
    {
      v5 = 0LL;
    }
    *(_QWORD *)this = v5;
    if ( !v5 )
    {
      LockedSURFOBJ = UMPDSURFOBJ::GetLockedSURFOBJ(this, a2);
      *(_QWORD *)this = LockedSURFOBJ;
      if ( LockedSURFOBJ )
        v3 = 1;
    }
  }
  *((_DWORD *)this + 2) = v3;
  return this;
}
