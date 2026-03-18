/*
 * XREFs of ?IsTrueTypeVariation@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C002F7C4
 * Callers:
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C000C87C (vIFIMetricsToEnumLogFontExDvW.c)
 *     cjCopyFontDataW @ 0x1C002EE8C (cjCopyFontDataW.c)
 *     ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1C002FBA4 (-dpNtmi@PFEOBJ@@QEAAKXZ.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C008ACCC (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsTrueTypeVariation(struct _IFIMETRICS *a1)
{
  char v1; // dl
  _DWORD *v2; // rax

  v1 = 1;
  if ( (a1->flInfo & 1) == 0 || a1->cjIfiExtra <= 0xC )
    return 0;
  v2 = (ULONG *)((char *)&a1->cjThis + (unsigned int)a1[1].dpwszStyleName);
  if ( !v2[1] || *v2 != 134248052 )
    return 0;
  return v1;
}
