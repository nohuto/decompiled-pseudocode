/*
 * XREFs of CortanaHelpers::AllowCortanaAttractModeAboveLock @ 0x18018502C
 * Callers:
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180186948 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_CortanaOnLockOutProcModel@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180186E18 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_CortanaOnLockOutProcModel@@@wil@@CAX.c)
 */

char CortanaHelpers::AllowCortanaAttractModeAboveLock()
{
  wil::Feature<__WilFeatureTraits_Feature_CortanaOnLockOutProcModel>::ReportUsageToService();
  return 0;
}
