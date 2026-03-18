/*
 * XREFs of ?RegisterForEnergyReporting@CProcessAttribution@@AEAAXXZ @ 0x18013293C
 * Callers:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?RegisterProcessAttribution@CEnergyReporter@@QEAAJPEAVCProcessAttribution@@@Z @ 0x180134550 (-RegisterProcessAttribution@CEnergyReporter@@QEAAJPEAVCProcessAttribution@@@Z.c)
 */

void __fastcall CProcessAttribution::RegisterForEnergyReporting(CProcessAttribution *this)
{
  if ( !*((_BYTE *)this + 36)
    && (int)CEnergyReporter::RegisterProcessAttribution(*((CEnergyReporter **)this + 3), this) >= 0 )
  {
    *((_BYTE *)this + 36) = 1;
  }
}
