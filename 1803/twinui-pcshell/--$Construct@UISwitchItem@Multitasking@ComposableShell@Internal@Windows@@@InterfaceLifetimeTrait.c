/*
 * XREFs of ??$Construct@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAU23456@@Z @ 0x18025BBAC
 * Callers:
 *     ?GetAt@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@@Z @ 0x180249230 (-GetAt@-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultEqualityPre.c)
 *     ?IndexOf@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@25@PEAIPEAE@Z @ 0x180249A90 (-IndexOf@-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultE.c)
 *     ??$?0PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$AutoValue@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@@XWinRT@@QEAA@AEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAJ@Z @ 0x18025BAE0 (--$-0PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@-$AutoValue@PEAUISwitchItem.c)
 *     ?GetMany@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@25@PEAI@Z @ 0x18025D960 (-GetMany@-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultE.c)
 *     ?ReplaceAll@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@@Z @ 0x18025EB40 (-ReplaceAll@-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultEquali.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return 0LL;
}
