/*
 * XREFs of ?GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x1800173D0
 * Callers:
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18000513C (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009E40 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CSlideOutCharm::GetStoryboardInfo(CSlideOutCharm *this)
{
  return (const struct StoryboardInfo *)&`CSlideOutCharm::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
