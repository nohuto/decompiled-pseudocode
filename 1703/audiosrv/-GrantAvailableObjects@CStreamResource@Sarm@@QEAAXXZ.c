/*
 * XREFs of ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C5C30
 * Callers:
 *     ?DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C2794 (-DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     std::_Func_impl__lambda_89a0787bba8806c8a7e5dbf71cc10f49__std::allocator_int__void_::_Do_call @ 0x1800C4D30 (std--_Func_impl__lambda_89a0787bba8806c8a7e5dbf71cc10f49__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x1800C5760 (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z.c)
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x1800C667C (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 */

void __fastcall Sarm::CStreamResource::GrantAvailableObjects(Sarm::CStreamResource *this)
{
  unsigned int v2; // eax

  v2 = Sarm::CStreamResource::CalculateDynamicObjectGrantCount(this, *((_DWORD *)this + 18));
  if ( *((_DWORD *)this + 20) < v2 )
    Sarm::CStreamResource::SetDynamicObjects(this, v2, 0LL);
}
