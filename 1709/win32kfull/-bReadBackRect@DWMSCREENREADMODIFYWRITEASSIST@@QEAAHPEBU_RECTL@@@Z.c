/*
 * XREFs of ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C012CCF4
 * Callers:
 *     NtGdiPolyPatBlt @ 0x1C001DB00 (NtGdiPolyPatBlt.c)
 *     NtGdiFrameRgn @ 0x1C012A6A0 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C012C5F0 (NtGdiFillRgn.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C027A538 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 * Callees:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 */

int __fastcall DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(
        DWMSCREENREADMODIFYWRITEASSIST *this,
        const struct _RECTL *a2)
{
  struct XDCOBJ *v2; // rcx
  int result; // eax

  v2 = (struct XDCOBJ *)*((_QWORD *)this + 3);
  result = 0;
  if ( *(_QWORD *)v2 )
    return bSpDwmValidateSurface(v2, a2->left, a2->top, a2->right - a2->left, a2->bottom - a2->top);
  return result;
}
