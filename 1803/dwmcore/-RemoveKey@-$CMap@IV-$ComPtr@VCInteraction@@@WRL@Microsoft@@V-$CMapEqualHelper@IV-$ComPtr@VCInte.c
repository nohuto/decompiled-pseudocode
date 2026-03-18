/*
 * XREFs of ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x1801DB690
 * Callers:
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1801DAD20 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1801DAECC (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801DB920 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801DA4EC (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 */

__int64 __fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveKey(
        __int64 a1,
        int *a2)
{
  unsigned int Key; // eax
  __int64 v3; // r10

  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          a1,
          a2);
  if ( Key == -1 )
    return 0LL;
  else
    return CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveRange(
             v3,
             Key);
}
