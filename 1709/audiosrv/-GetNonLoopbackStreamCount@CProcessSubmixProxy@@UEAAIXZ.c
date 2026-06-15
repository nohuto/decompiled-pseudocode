/*
 * XREFs of ?GetNonLoopbackStreamCount@CProcessSubmixProxy@@UEAAIXZ @ 0x180012980
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmixProxy::GetNonLoopbackStreamCount(CProcessSubmixProxy *this)
{
  return *((unsigned int *)this + 28);
}
