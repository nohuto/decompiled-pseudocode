/*
 * XREFs of ?IsPeriodicitySensitive@CProcessSubmixProxy@@UEAA_NXZ @ 0x1800463F0
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProcessSubmixProxy::IsPeriodicitySensitive(CProcessSubmixProxy *this)
{
  return *((_DWORD *)this + 22) != 0;
}
