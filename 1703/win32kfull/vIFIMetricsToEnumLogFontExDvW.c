/*
 * XREFs of vIFIMetricsToEnumLogFontExDvW @ 0x1C000C87C
 * Callers:
 *     bInitOneStockFontInternal @ 0x1C0388494 (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C038A16C (bInitSystemFont.c)
 * Callees:
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C000C8E0 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     ?IsTrueTypeVariation@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C002F7C4 (-IsTrueTypeVariation@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     ?vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z @ 0x1C002F97C (-vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall vIFIMetricsToEnumLogFontExDvW(__int64 a1, struct _IFIMETRICS *a2)
{
  unsigned int v4; // r8d
  unsigned int *v5; // rdx
  __int64 v6; // rbx

  vIFIMetricsToEnumLogFontW((struct tagENUMLOGFONTW *)a1, a2);
  vLookupScript(a2->jWinCharSet, (unsigned __int16 *)(a1 + 284), v4);
  if ( ((a2->flInfo & 0x4000) != 0 || IsTrueTypeVariation(a2)) && a2->cjIfiExtra > 0xC )
  {
    v5 = (ULONG *)((char *)&a2->cjThis + a2[1].dpwszStyleName);
    v6 = v5[1];
    if ( (unsigned int)v6 > 0x10 )
      v6 = 16LL;
    memmove((void *)(a1 + 348), v5, 4 * v6 + 8);
    *(_DWORD *)(a1 + 352) = v6;
  }
  else
  {
    *(_DWORD *)(a1 + 352) = 0;
    *(_DWORD *)(a1 + 348) = 134248036;
  }
}
