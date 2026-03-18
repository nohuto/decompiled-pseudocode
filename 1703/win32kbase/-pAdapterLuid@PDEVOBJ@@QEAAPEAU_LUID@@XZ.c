/*
 * XREFs of ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0038770
 * Callers:
 *     DrvGetWDDMAdapterInfo @ 0x1C000BC30 (DrvGetWDDMAdapterInfo.c)
 *     ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C005BDE0 (-DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C006295C (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     NtHWCursorUpdatePointer @ 0x1C00F1DF0 (NtHWCursorUpdatePointer.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00F9BE0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00FAD40 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     <none>
 */

struct _LUID *__fastcall PDEVOBJ::pAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 2592LL);
  if ( v2 == -4 && (*(_DWORD *)(v1 + 32) & 0x20000) != 0 )
    return (struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1816) + 40LL) + 2592LL) + 264LL);
  if ( !v2 || (*(_DWORD *)(v1 + 32) & 0x20000) != 0 )
    return 0LL;
  return (struct _LUID *)(v2 + 264);
}
