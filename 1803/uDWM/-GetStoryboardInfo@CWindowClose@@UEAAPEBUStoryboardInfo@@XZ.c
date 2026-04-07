/*
 * XREFs of ?GetStoryboardInfo@CWindowClose@@UEAAPEBUStoryboardInfo@@XZ @ 0x180009740
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009150 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x180009748 (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CWindowClose::GetStoryboardInfo(CWindowClose *this)
{
  return (const struct StoryboardInfo *)&`CWindowClose::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
