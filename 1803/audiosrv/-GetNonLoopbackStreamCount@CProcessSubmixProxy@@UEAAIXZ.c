/*
 * XREFs of ?GetNonLoopbackStreamCount@CProcessSubmixProxy@@UEAAIXZ @ 0x18001D630
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmixProxy::GetNonLoopbackStreamCount(CProcessSubmixProxy *this)
{
  return *((unsigned int *)this + 28);
}
