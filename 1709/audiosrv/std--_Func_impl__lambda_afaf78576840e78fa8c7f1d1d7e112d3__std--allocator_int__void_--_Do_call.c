/*
 * XREFs of std::_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std::allocator_int__void_::_Do_call @ 0x1800C2AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C0100 (-DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1800C0420 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1800C0570 (-GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C46D4 (-CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std::allocator_int__void_::_Do_call(
        __int64 a1)
{
  int v1; // esi
  __int64 v2; // rdi
  Sarm::CStreamResource *i; // rax

  v1 = *(_DWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 64));
  for ( i = Sarm::CSpatialAudioResourceManager::GetFirstStream((Sarm::CSpatialAudioResourceManager *)v2, v1);
        i;
        i = Sarm::CSpatialAudioResourceManager::GetNextStream((Sarm::CSpatialAudioResourceManager *)v2, v1) )
  {
    Sarm::CStreamResource::CompleteRevocation(i);
  }
  Sarm::CSpatialAudioResourceManager::DistributeAvailableObjectsToOtherApps(
    (Sarm::CSpatialAudioResourceManager *)v2,
    v1);
  if ( v2 != -64 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 64));
}
