/*
 * XREFs of ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C003CDE0
 * Callers:
 *     DrvGetWDDMAdapterInfo @ 0x1C000D100 (DrvGetWDDMAdapterInfo.c)
 *     ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C0068300 (-DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C006B684 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00764C0 (NtGdiGetGammaRampCapability.c)
 *     NtHWCursorUpdatePointer @ 0x1C00F4B30 (NtHWCursorUpdatePointer.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00F9DC0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 * Callees:
 *     <none>
 */

struct _LUID *__fastcall PDEVOBJ::pAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 2592LL);
  if ( v2 == -4 )
  {
    if ( (*(_DWORD *)(v1 + 32) & 0x20000) == 0 )
      return (struct _LUID *)(v2 + 264);
    return (struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1816) + 40LL) + 2592LL) + 264LL);
  }
  else
  {
    if ( v2 && (*(_DWORD *)(v1 + 32) & 0x20000) == 0 )
      return (struct _LUID *)(v2 + 264);
    return 0LL;
  }
}
