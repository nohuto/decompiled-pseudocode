/*
 * XREFs of ?GetType@CAudioStream@@UEAA?AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ @ 0x180019E10
 * Callers:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015200 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetType(__int64 a1)
{
  return *(unsigned int *)(a1 + 532);
}
