/*
 * XREFs of ?bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z @ 0x1C0293658
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C01294D0 (NtGdiExtFloodFill.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025D114 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bConvertDfbDcToDib(struct XDCOBJ *a1)
{
  return pProcessDfbSurfaces(*(_QWORD *)(*(_QWORD *)a1 + 512LL), 1LL) != 0;
}
