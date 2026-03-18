/*
 * XREFs of ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18004D638
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004D868 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004E20C (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FBA0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180050F80 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801CFE6C (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

void __fastcall CVisual::NotifyMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  struct CManipulationManager *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_BYTE *)(a3 + 93) & 0x40) != 0 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v6);
    if ( (int)CComposition::GetManipulationManager(*(CComposition **)(a1 + 16), &v6) >= 0 )
      CManipulationManager::QueueMidManipulationUpdate(v6, a2, a3);
    Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v6);
  }
}
