/*
 * XREFs of ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C08EC
 * Callers:
 *     std::_Func_impl__lambda_a41f02c335b415f2b3b1d26bfab90ccd__std::allocator_int__void_::_Do_call @ 0x1800C2AA0 (std--_Func_impl__lambda_a41f02c335b415f2b3b1d26bfab90ccd__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18002EFF0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1800C0420 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C0890 (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C1D70 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ @ 0x1800C4C18 (-IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange(
        Sarm::CSpatialAudioResourceManager *this,
        unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  Sarm::CStreamResource *FirstStream; // rax
  Sarm::CStreamResource *v6; // rdi
  char IsProcessMuted; // al

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange", 806);
  FirstStream = Sarm::CSpatialAudioResourceManager::GetFirstStream(this, a2);
  v6 = FirstStream;
  if ( FirstStream )
  {
    IsProcessMuted = Sarm::CStreamResource::IsProcessMuted(FirstStream);
    if ( IsProcessMuted != *((_BYTE *)v6 + 88) )
    {
      *((_BYTE *)v6 + 88) = IsProcessMuted;
      if ( IsProcessMuted )
        Sarm::CSpatialAudioResourceManager::RevokeApplicationResources(this, a2);
      else
        Sarm::CSpatialAudioResourceManager::GrantApplicationResources(this, a2);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
