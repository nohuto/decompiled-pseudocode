/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapter@UIVirtualDesktop@@@@QEAA@QEAV1@I@Z @ 0x18025CAA0
 * Callers:
 *     ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18025DFE0 (-Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 *     ?get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18025FC60 (-get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU-$IVectorView@PEAUIVirtualDesktop@Mul.c)
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x180261EB4 (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ @ 0x18025D66C (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObjectArrayAdapter<IVirtualDesktop>::Iterator::Iterator(__int64 a1, __int64 a2, int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  ObjectArrayAdapter<IVirtualDesktop>::Iterator::GetCurrentObject(a1);
  return a1;
}
