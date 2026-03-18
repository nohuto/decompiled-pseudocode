/*
 * XREFs of ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0074C40
 * Callers:
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00F36A0 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     NtGdiStartPage @ 0x1C00FFFF0 (NtGdiStartPage.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0100328 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C01027C0 (-GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z.c)
 *     NtGdiExtFloodFill @ 0x1C012BE60 (NtGdiExtFloodFill.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C013E78C (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiEndPage @ 0x1C0256240 (NtGdiEndPage.c)
 *     GrePlgBlt @ 0x1C026DEAC (GrePlgBlt.c)
 *     NtGdiUpdateColors @ 0x1C02965B0 (NtGdiUpdateColors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bValidSurf(XDCOBJ *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)this;
  v2 = 0;
  if ( v1 && *(_QWORD *)(v1 + 512) )
    return (*(_DWORD *)(v1 + 36) & 0x5000) != 4096;
  return v2;
}
