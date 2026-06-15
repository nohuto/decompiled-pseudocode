/*
 * XREFs of ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18002F690
 * Callers:
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800448C0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsFormatSensitiveClient(CAudioStream *this)
{
  return *((_BYTE *)this + 556);
}
