/*
 * XREFs of ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180035C7C
 * Callers:
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180015C04 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180019674 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18001A75C (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020F40 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800227F0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180039F70 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180069C00 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x18006AC58 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18006ACC8 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18007E8C0 (-UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x18007F1D4 (-Stop@CRippleEffect@@QEAAJXZ.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800907C4 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 */

char __fastcall CDesktopManager::UnregisterForGlobalTimeChangeNotification(struct CVisual *this)
{
  CDesktopManager *v1; // r9
  char v2; // bl
  unsigned int v4; // r8d
  unsigned int v5; // edx
  __int64 v6; // r11
  __int64 v8; // rcx

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  v4 = 0;
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 142);
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 68);
  if ( v5 )
  {
    do
    {
      if ( this == *(struct CVisual **)(v6 + 8LL * v4) )
        break;
      ++v4;
    }
    while ( v4 < v5 );
  }
  if ( v4 < v5 )
  {
    if ( v4 < v5 - 1 )
    {
      do
      {
        v8 = v4++;
        *(_QWORD *)(v6 + 8 * v8) = *(_QWORD *)(v6 + 8LL * v4);
      }
      while ( v4 < *((_DWORD *)v1 + 142) - 1 );
    }
    --*((_DWORD *)v1 + 142);
    v2 = 1;
    CBaseObject::Release(this);
  }
  return v2;
}
