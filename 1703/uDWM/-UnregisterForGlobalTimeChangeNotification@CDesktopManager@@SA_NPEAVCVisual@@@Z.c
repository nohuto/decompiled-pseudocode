/*
 * XREFs of ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x1800196E0
 * Callers:
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001FA14 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180024894 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180025A70 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18002CA20 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18002E2A0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180041590 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004C608 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180075250 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180075F80 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800874B8 (-UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x180087D88 (-Stop@CRippleEffect@@QEAAJXZ.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800942CC (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 */

char __fastcall CDesktopManager::UnregisterForGlobalTimeChangeNotification(struct CVisual *a1)
{
  CDesktopManager *v1; // r9
  __int64 v2; // r8
  unsigned int v4; // edx
  char v5; // bl
  __int64 v6; // r11
  __int64 v8; // rcx

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0LL;
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 130);
  v5 = 1;
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 62);
  if ( v4 )
  {
    do
    {
      if ( a1 == *(struct CVisual **)(v6 + 8 * v2) )
        break;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
  }
  if ( (unsigned int)v2 >= v4 )
  {
    v5 = 0;
  }
  else
  {
    if ( (unsigned int)v2 < v4 - 1 )
    {
      do
      {
        v8 = (unsigned int)v2;
        LODWORD(v2) = v2 + 1;
        *(_QWORD *)(v6 + 8 * v8) = *(_QWORD *)(v6 + 8LL * (unsigned int)v2);
      }
      while ( (unsigned int)v2 < *((_DWORD *)v1 + 130) - 1 );
    }
    --*((_DWORD *)v1 + 130);
  }
  if ( v5 )
    CBaseObject::Release(a1);
  return v5;
}
