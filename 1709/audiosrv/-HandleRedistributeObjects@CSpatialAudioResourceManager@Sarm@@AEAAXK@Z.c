/*
 * XREFs of ?HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C0998
 * Callers:
 *     std::_Func_impl__lambda_89a0787bba8806c8a7e5dbf71cc10f49__std::allocator_int__void_::_Do_call @ 0x1800C2A90 (std--_Func_impl__lambda_89a0787bba8806c8a7e5dbf71cc10f49__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18002EFF0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C0100 (-DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1800C0420 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1800C0570 (-GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C4908 (-GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::HandleRedistributeObjects(
        Sarm::CSpatialAudioResourceManager *this,
        int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  Sarm::CStreamResource *i; // rax

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleRedistributeObjects", 577);
  for ( i = Sarm::CSpatialAudioResourceManager::GetFirstStream(this, a2);
        i;
        i = Sarm::CSpatialAudioResourceManager::GetNextStream(this, a2) )
  {
    Sarm::CStreamResource::GrantAvailableObjects(i);
  }
  Sarm::CSpatialAudioResourceManager::DistributeAvailableObjectsToOtherApps(this, a2);
  if ( v4 )
    LeaveCriticalSection(v4);
}
