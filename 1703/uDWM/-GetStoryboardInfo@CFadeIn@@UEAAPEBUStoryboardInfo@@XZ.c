/*
 * XREFs of ?GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ @ 0x180017340
 * Callers:
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18000513C (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009E40 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CFadeIn::GetStoryboardInfo(CFadeIn *this)
{
  return (const struct StoryboardInfo *)&`CFadeIn::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
