/*
 * XREFs of IsCurrentDesktopComposed @ 0x1C00780E0
 * Callers:
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     SetAppCompatFlags @ 0x1C00759F0 (SetAppCompatFlags.c)
 *     StoreQMessage @ 0x1C00ABB30 (StoreQMessage.c)
 *     _DwmLockScreenUpdates @ 0x1C0124070 (_DwmLockScreenUpdates.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AD21C (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01BB688 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsCurrentDesktopComposed()
{
  unsigned int v0; // ecx
  __int64 v1; // rax

  v0 = 0;
  if ( grpdeskRitInput )
  {
    v1 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v1 )
      return *(_DWORD *)(*(_QWORD *)v1 + 52LL) & 1;
  }
  return v0;
}
