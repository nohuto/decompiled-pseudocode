/*
 * XREFs of std::_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std::allocator_int__void_::_Do_call @ 0x1800C4DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C2794 (-DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1800C2AB4 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1800C2BAC (-GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C5904 (-CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std::allocator_int__void_::_Do_call(
        __int64 a1)
{
  int v1; // edi
  Sarm::CSpatialAudioResourceManager *v2; // rbx
  Sarm::CStreamResource *i; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  v2 = *(Sarm::CSpatialAudioResourceManager **)(a1 + 8);
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)v2 + 64, (__int64)&lpCriticalSection);
  for ( i = Sarm::CSpatialAudioResourceManager::GetFirstStream(v2, v1);
        i;
        i = Sarm::CSpatialAudioResourceManager::GetNextStream(v2, v1) )
  {
    Sarm::CStreamResource::CompleteRevocation(i);
  }
  Sarm::CSpatialAudioResourceManager::DistributeAvailableObjectsToOtherApps(v2, v1);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
