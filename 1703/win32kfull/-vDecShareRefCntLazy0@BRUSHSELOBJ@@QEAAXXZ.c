/*
 * XREFs of ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C0122B84
 * Callers:
 *     NtGdiFrameRgn @ 0x1C011E410 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0122720 (NtGdiFillRgn.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C00EC9F8 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::vDecShareRefCntLazy0(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT_LAZY0(*(struct BRUSH **)this);
    *(_QWORD *)this = 0LL;
  }
}
