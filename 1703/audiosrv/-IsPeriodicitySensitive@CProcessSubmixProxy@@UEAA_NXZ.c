/*
 * XREFs of ?IsPeriodicitySensitive@CProcessSubmixProxy@@UEAA_NXZ @ 0x180009D20
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180004700 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcessSubmixProxy::IsPeriodicitySensitive(CProcessSubmixProxy *this)
{
  return *((_DWORD *)this + 22) != 0;
}
