/*
 * XREFs of ?GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000A350
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009150 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x180009748 (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CFadeIn::GetStoryboardInfo(CFadeIn *this)
{
  return (const struct StoryboardInfo *)&`CFadeIn::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
