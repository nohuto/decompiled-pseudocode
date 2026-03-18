/*
 * XREFs of ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BE58
 * Callers:
 *     GrePlgBlt @ 0x1C0001CD0 (GrePlgBlt.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0101358 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     GreMaskBlt @ 0x1C01023EC (GreMaskBlt.c)
 *     NtGdiStartPage @ 0x1C010C710 (NtGdiStartPage.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C010D740 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C010EFA0 (-GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z.c)
 *     NtGdiExtFloodFill @ 0x1C01294D0 (NtGdiExtFloodFill.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0144730 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiEndPage @ 0x1C0257D40 (NtGdiEndPage.c)
 *     NtGdiUpdateColors @ 0x1C0292C60 (NtGdiUpdateColors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bValidSurf(XDCOBJ *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // ecx

  v1 = *(_QWORD *)this;
  result = 0LL;
  if ( *(_QWORD *)this )
  {
    if ( *(_QWORD *)(v1 + 512) )
    {
      v3 = *(_DWORD *)(v1 + 36);
      if ( (v3 & 0x1000) == 0 || (v3 & 0x4000) != 0 )
        return 1LL;
    }
  }
  return result;
}
