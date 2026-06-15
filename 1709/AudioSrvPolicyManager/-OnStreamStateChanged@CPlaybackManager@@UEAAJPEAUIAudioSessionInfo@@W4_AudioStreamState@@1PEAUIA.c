/*
 * XREFs of ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180017CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180017EDC (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 */

__int64 __fastcall CPlaybackManager::OnStreamStateChanged(
        CPlaybackManager *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        struct IAudioStreamInfo *a5)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_DWORD *)a1 + 2) )
  {
    if ( a4 == 1 )
    {
      return CPlaybackManager::QueueStreamStartedWorkItem(a1, a5);
    }
    else if ( !a4 )
    {
      return CPlaybackManager::QueueStreamStoppedWorkItem(a1, a5);
    }
  }
  return result;
}
