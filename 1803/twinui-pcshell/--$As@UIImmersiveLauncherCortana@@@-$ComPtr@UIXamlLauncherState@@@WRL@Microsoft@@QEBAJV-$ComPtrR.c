/*
 * XREFs of ??$As@UIImmersiveLauncherCortana@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveLauncherCortana@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800933D8
 * Callers:
 *     ?IsCortanaShowing@XamlLauncher@@UEAAJPEAH@Z @ 0x180077DB0 (-IsCortanaShowing@XamlLauncher@@UEAAJPEAH@Z.c)
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x180226740 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?Hide@XamlLauncher@@UEAAJXZ @ 0x180226850 (-Hide@XamlLauncher@@UEAAJXZ.c)
 *     ?SetPositioningAnchorRect@XamlLauncher@@UEAAJUtagRECT@@0@Z @ 0x180228830 (-SetPositioningAnchorRect@XamlLauncher@@UEAAJUtagRECT@@0@Z.c)
 *     ?Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x180228970 (-Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x18022A0D0 (-Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IImmersiveLauncherCortana>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce,
           a2);
}
