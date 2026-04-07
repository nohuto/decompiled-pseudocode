/*
 * XREFs of ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000A330
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009150 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x180009748 (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x180009C7C (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CLauncherDismiss::GetStoryboardInfo(CLauncherDismiss *this)
{
  return (const struct StoryboardInfo *)&`CLauncherDismiss::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
