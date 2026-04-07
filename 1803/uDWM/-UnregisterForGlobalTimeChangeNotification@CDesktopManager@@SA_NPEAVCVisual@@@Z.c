/*
 * XREFs of ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037048
 * Callers:
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x1800168A4 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18001A5A4 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18001FB24 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180021240 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180022AA0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18003DCC4 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180070920 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180071A00 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180071A70 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800879B8 (-UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x1800882D4 (-Stop@CRippleEffect@@QEAAJXZ.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x180098F74 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 */

char __fastcall CDesktopManager::UnregisterForGlobalTimeChangeNotification(struct CVisual *this)
{
  CDesktopManager *v1; // r9
  char v2; // bl
  unsigned int v4; // r8d
  unsigned int v5; // edx
  __int64 v6; // r10
  __int64 v8; // rcx
  __int64 v9; // rax

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  v4 = 0;
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 140);
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 67);
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
    while ( v4 < v5 - 1 )
    {
      v8 = v4;
      v9 = *(_QWORD *)(v6 + 8LL * ++v4);
      *(_QWORD *)(v6 + 8 * v8) = v9;
      v5 = *((_DWORD *)v1 + 140);
    }
    *((_DWORD *)v1 + 140) = v5 - 1;
    v2 = 1;
    CBaseObject::Release(this);
  }
  return v2;
}
