/*
 * XREFs of ?GetType@CAudioStream@@UEAA?AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ @ 0x18002F720
 * Callers:
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800448C0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetType(__int64 a1)
{
  return *(unsigned int *)(a1 + 548);
}
