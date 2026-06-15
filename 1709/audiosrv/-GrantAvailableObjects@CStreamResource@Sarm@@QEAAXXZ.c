/*
 * XREFs of ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C4908
 * Callers:
 *     ?DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C0100 (-DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C0998 (-HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x1800C4530 (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z.c)
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x1800C526C (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 */

void __fastcall Sarm::CStreamResource::GrantAvailableObjects(Sarm::CStreamResource *this)
{
  unsigned int v2; // eax

  v2 = Sarm::CStreamResource::CalculateDynamicObjectGrantCount(this, *((_DWORD *)this + 18));
  if ( *((_DWORD *)this + 20) < v2 )
    Sarm::CStreamResource::SetDynamicObjects(this, v2, 0LL);
}
