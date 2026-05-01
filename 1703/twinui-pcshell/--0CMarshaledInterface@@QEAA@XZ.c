/*
 * XREFs of ??0CMarshaledInterface@@QEAA@XZ @ 0x1800056F0
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180146FE0 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 *     ?GetCallingProcessId@CallerIdentity@@YAJPEAK@Z @ 0x18017611C (-GetCallingProcessId@CallerIdentity@@YAJPEAK@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x180176318 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1801765C4 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18017675C (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1801771B4 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?LockExclusive@?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18017F26C (-LockExclusive@-$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18017F8FC (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 * Callees:
 *     <none>
 */

CMarshaledInterface *__fastcall CMarshaledInterface::CMarshaledInterface(CMarshaledInterface *this)
{
  *(_QWORD *)this = 0LL;
  return this;
}
