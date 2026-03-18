/*
 * XREFs of ?bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z @ 0x1C0296F98
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C012BE60 (NtGdiExtFloodFill.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025C9AC (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bConvertDfbDcToDib(struct XDCOBJ *a1)
{
  return pProcessDfbSurfaces(*(_QWORD *)(*(_QWORD *)a1 + 512LL), 1LL) != 0;
}
