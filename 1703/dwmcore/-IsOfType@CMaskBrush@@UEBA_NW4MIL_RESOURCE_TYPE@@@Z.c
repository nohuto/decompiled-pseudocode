/*
 * XREFs of ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800393B0
 * Callers:
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18008663C (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?HasAtlasedContent@CVisual@@MEBA_NXZ @ 0x180086930 (-HasAtlasedContent@CVisual@@MEBA_NXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMaskBrush::IsOfType(__int64 a1, int a2)
{
  int v2; // ecx
  bool result; // al

  result = 0;
  if ( (unsigned int)(a2 - 81) <= 0xA )
  {
    v2 = 1057;
    if ( _bittest(&v2, a2 - 81) )
      return 1;
  }
  return result;
}
