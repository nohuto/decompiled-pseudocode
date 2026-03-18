/*
 * XREFs of IsCurrentDesktopComposed @ 0x1C0018CD0
 * Callers:
 *     _DwmLockScreenUpdates @ 0x1C0015B30 (_DwmLockScreenUpdates.c)
 *     SetAppCompatFlags @ 0x1C0018610 (SetAppCompatFlags.c)
 *     StoreQMessage @ 0x1C0055990 (StoreQMessage.c)
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9F10 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_M.c)
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01B64D8 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
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
