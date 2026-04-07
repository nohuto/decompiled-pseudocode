/*
 * XREFs of ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180025A70
 * Callers:
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x18002AD8C (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x18003D584 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 * Callees:
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180080858 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

void __fastcall CTopLevelWindow::StopIconicAnimation(CTopLevelWindow *this)
{
  unsigned __int8 v1; // al
  struct CVisual *v2; // rcx

  v1 = *((_BYTE *)this + 240);
  if ( v1 >= 0x80u )
  {
    *((_BYTE *)this + 240) = v1 & 0x7F;
    if ( !CTopLevelWindow::HasAnimation(this) )
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(v2);
  }
}
