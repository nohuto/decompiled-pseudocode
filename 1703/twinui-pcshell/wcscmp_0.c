/*
 * XREFs of wcscmp_0 @ 0x1801976B2
 * Callers:
 *     ?GetViewPropertyAsUInt@Win32BackedViewHostItem@@UEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800E2A60 (-GetViewPropertyAsUInt@Win32BackedViewHostItem@@UEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?GetViewPropertyAsUInt@ApplicationViewBackedViewHostItem@@UEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800E6490 (-GetViewPropertyAsUInt@ApplicationViewBackedViewHostItem@@UEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x18014D460 (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *String1, const wchar_t *String2)
{
  return wcscmp(String1, String2);
}
