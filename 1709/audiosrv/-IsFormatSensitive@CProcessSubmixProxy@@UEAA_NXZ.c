/*
 * XREFs of ?IsFormatSensitive@CProcessSubmixProxy@@UEAA_NXZ @ 0x18000E830
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProcessSubmixProxy::IsFormatSensitive(CProcessSubmixProxy *this)
{
  return *((_DWORD *)this + 23) != 0;
}
