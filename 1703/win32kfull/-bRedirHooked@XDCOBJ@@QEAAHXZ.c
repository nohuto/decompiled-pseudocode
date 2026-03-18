/*
 * XREFs of ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02513F8
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C0126860 (NtGdiTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XDCOBJ::bRedirHooked(XDCOBJ *this)
{
  struct PDEV *v1; // rcx

  v1 = *(struct PDEV **)(*(_QWORD *)this + 48LL);
  return v1 == gpRedirDev || v1 == gpBmpDev;
}
