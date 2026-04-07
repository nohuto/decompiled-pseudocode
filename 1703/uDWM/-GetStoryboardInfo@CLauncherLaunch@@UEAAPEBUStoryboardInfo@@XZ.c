/*
 * XREFs of ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x180017100
 * Callers:
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18000513C (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x180005C18 (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009E40 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CLauncherLaunch::GetStoryboardInfo(CLauncherLaunch *this)
{
  return (const struct StoryboardInfo *)&`CLauncherLaunch::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
