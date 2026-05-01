/*
 * XREFs of ??0CMarshaledInterface@@QEAA@XZ @ 0x1800059B0
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x18017BC90 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 *     ?GetCallingProcessId@CallerIdentity@@YAJPEAK@Z @ 0x1801C19C4 (-GetCallingProcessId@CallerIdentity@@YAJPEAK@Z.c)
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x1801C1A14 (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1801C1C7C (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x1801C1DA8 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1801C20F8 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1801C2290 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1801C2E60 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1801C30C4 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1801C3158 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1801CA8A4 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 *     ?LockExclusive@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801CC55C (-LockExclusive@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x1801CD2A0 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ??$MakeAndInitializeOnSharedSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@AEAPEAUHSTRING__@@AEAPEAU6@@ComTaskPool@Internal@Windows@@SAJPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEAPEAUHSTRING__@@1@Z @ 0x1801CE43C (--$MakeAndInitializeOnSharedSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activatio.c)
 *     ??0CLaunchActivatedEventArgs@@QEAA@XZ @ 0x1801CE918 (--0CLaunchActivatedEventArgs@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CMarshaledInterface *__fastcall CMarshaledInterface::CMarshaledInterface(CMarshaledInterface *this)
{
  *(_QWORD *)this = 0LL;
  return this;
}
