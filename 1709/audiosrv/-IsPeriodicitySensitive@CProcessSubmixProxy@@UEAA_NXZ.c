/*
 * XREFs of ?IsPeriodicitySensitive@CProcessSubmixProxy@@UEAA_NXZ @ 0x18000E840
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProcessSubmixProxy::IsPeriodicitySensitive(CProcessSubmixProxy *this)
{
  return *((_DWORD *)this + 22) != 0;
}
