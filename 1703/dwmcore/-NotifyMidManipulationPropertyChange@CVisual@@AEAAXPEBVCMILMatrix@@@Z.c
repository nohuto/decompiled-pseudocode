/*
 * XREFs of ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x180086A24
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D8E4 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18018A6F4 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

void __fastcall CVisual::NotifyMidManipulationPropertyChange(CComposition **this, const struct CMILMatrix *a2)
{
  struct CManipulationManager *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 90) & 4) != 0 )
  {
    v4 = 0LL;
    Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v4);
    if ( (int)CComposition::GetManipulationManager(this[2], &v4) >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(v4, (struct CVisual *)this, a2);
    Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v4);
  }
}
