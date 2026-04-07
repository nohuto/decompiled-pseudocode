/*
 * XREFs of ?GetStoryboardInfo@CWindowClose@@UEAAPEBUStoryboardInfo@@XZ @ 0x1800369C0
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800070A0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CWindowClose::GetStoryboardInfo(CWindowClose *this)
{
  return (const struct StoryboardInfo *)&`CWindowClose::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
