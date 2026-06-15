/*
 * XREFs of ?OnStreamDisconnectedFromSaDevice@CAudioStream@@UEAAXXZ @ 0x180044280
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180046D50 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::OnStreamDisconnectedFromSaDevice(CAudioStream *this)
{
  struct IAudioStreamInfo *v1; // rdx
  void (__fastcall *v2)(Sarm::CSpatialAudioResourceManager *__hidden, struct IAudioStreamInfo *); // rax

  v1 = (struct IAudioStreamInfo *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v2 = *(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *__hidden, struct IAudioStreamInfo *))(*(_QWORD *)g_SpatialAudioResourceManager + 32LL);
  if ( v2 == Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice )
    Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice(g_SpatialAudioResourceManager, v1);
  else
    v2(g_SpatialAudioResourceManager, v1);
}
