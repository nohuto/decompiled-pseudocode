/*
 * XREFs of ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0093064
 * Callers:
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0126860 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C026DEAC (GrePlgBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DestSurfaceAccessCheck(struct SURFACE *a1)
{
  if ( ((*((_DWORD *)a1 + 29) & 8) != 0 || *((_QWORD *)a1 + 29)) && (*((_WORD *)a1 + 51) & 0x200) != 0 )
    return 0LL;
  else
    return _SurfaceAccessCheck(a1);
}
