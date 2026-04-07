/*
 * XREFs of ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180024260
 * Callers:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x180024400 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x1800247FC (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ @ 0x18002D860 (-OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031220 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035260 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180038390 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetDirtyChildren(CVisual *this)
{
  *((_DWORD *)this + 20) |= 1u;
}
