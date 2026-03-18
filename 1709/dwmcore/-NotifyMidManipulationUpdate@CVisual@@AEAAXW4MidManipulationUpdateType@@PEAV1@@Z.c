/*
 * XREFs of ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18004F664
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004F894 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180054D00 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800AACB0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801977AC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

void __fastcall CVisual::NotifyMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  struct CManipulationManager *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_BYTE *)(a3 + 93) & 4) != 0 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v6);
    if ( (int)CComposition::GetManipulationManager(*(CComposition **)(a1 + 16), &v6) >= 0 )
      CManipulationManager::QueueMidManipulationUpdate(v6, a2, a3);
    Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v6);
  }
}
