/*
 * XREFs of ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1800C3FE0
 * Callers:
 *     ?OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18002B5F0 (-OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x1800C4770 (-Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AD6C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800C3EA8 (-RemoveAtPos@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudio.c)
 *     ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C4A00 (-UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C64CC (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x1800C71DC (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::RemoveStream(
        Sarm::CSpatialAudioResourceManager *this,
        struct Sarm::CStreamResource *a2)
{
  const char *v4; // r9
  __int64 v5; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::RemoveStream", 0x4Eu);
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x50,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v4);
    __debugbreak();
  }
  Sarm::CSpatialAudioResourceManager::UnregisterForApplicationPolicyChanges(this, *((_DWORD *)a2 + 13));
  v5 = *((_QWORD *)a2 + 4);
  Sarm::CStreamResource::Reclaim(a2);
  if ( v5 )
    ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAtPos(
      (__int64)this + 192,
      v5);
}
