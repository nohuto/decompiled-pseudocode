/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x180035240
 * Callers:
 *     dllmain_crt_process_detach @ 0x180034C5C (dllmain_crt_process_detach.c)
 * Callees:
 *     ?OnStreamCreate@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000AD50 (-OnStreamCreate@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180035A40 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x180035A92 (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  struct IAudioSessionInfo *v0; // rdx
  CPlaybackManager *v1; // rcx
  struct IAudioStreamInfo *v2; // r8
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = CPlaybackManager::OnStreamCreate(v1, v0, v2);
  if ( !result )
    return o__cexit_0();
  return result;
}
