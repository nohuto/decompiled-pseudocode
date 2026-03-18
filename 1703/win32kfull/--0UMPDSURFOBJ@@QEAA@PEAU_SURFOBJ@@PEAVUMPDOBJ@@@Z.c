/*
 * XREFs of ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0097294
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C0096EB0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngTextOut @ 0x1C009ABE0 (NtGdiEngTextOut.c)
 *     NtGdiEngCopyBits @ 0x1C012EC40 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C012EE90 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C012F4E0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C0290F40 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCheckAbort @ 0x1C02911B0 (NtGdiEngCheckAbort.c)
 *     NtGdiEngEraseSurface @ 0x1C02914C0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C0291620 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C0291820 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C0291C30 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C0291E30 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C0291FC0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02923F0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02926C0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C0292950 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C0293860 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C0097224 (-GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
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
