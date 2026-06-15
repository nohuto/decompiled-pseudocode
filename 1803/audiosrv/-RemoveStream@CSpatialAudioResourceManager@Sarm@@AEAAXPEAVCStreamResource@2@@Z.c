/*
 * XREFs of ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1800F447C
 * Callers:
 *     ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x180044670 (-OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@.c)
 *     ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x1800F4C00 (-Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B38F0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800F4344 (-RemoveAtPos@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudio.c)
 *     ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800F4EA8 (-UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x1800F62FC (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x1800F7690 (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::RemoveStream(
        Sarm::CSpatialAudioResourceManager *this,
        struct Sarm::CStreamResource *a2)
{
  const char *v4; // r9
  __int64 v5; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::RemoveStream", 0x84u);
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      134LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v4);
    __debugbreak();
  }
  Sarm::CSpatialAudioResourceManager::UnregisterForApplicationPolicyChanges(this, *((_DWORD *)a2 + 13));
  v5 = *((_QWORD *)a2 + 4);
  Sarm::CStreamResource::Reclaim(a2);
  if ( v5 )
    ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAtPos(
      (__int64)this + 232,
      v5);
}
