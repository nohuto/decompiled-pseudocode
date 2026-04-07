/*
 * XREFs of ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x180022EC8
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800229E0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180022CD4 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180022D78 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18003583C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x180035EF0 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006B6BC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

char __fastcall CTopLevelWindow3D::ShouldShowTransition(CTopLevelWindow3D *this)
{
  char v2; // dl
  __int64 v3; // rdx
  char v4; // bl
  CLivePreview *v6; // rcx
  bool v7; // al
  __int64 v8; // rax

  v2 = *(_BYTE *)(*((_QWORD *)this + 41) + 592LL);
  if ( (v2 & 0x10) != 0 )
    return 0;
  if ( (v2 & 0x20) != 0 )
    return 0;
  if ( CDesktopManager::CheckAnyPreference(0x10u) )
    return 0;
  v3 = *((_QWORD *)this + 41);
  if ( (*(_DWORD *)(v3 + 100) & 0xC00000) != 0xC00000 && (*(_BYTE *)(v3 + 596) & 0x40) == 0 )
    return 0;
  if ( *(char *)(v3 + 104) < 0 )
    return 0;
  v4 = 1;
  if ( (*(_BYTE *)(v3 + 592) & 1) == 0 )
    return 0;
  if ( (*(_BYTE *)(v3 + 596) & 1) != 0 )
    return 0;
  if ( !*(_BYTE *)(v3 + 352) )
    return 0;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) )
    return 0;
  if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) >= *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 173) )
  {
    v8 = *((_QWORD *)this + 45);
    if ( !v8 || *(_BYTE *)(v8 + 72) )
      return 0;
  }
  v6 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60);
  v7 = *((_BYTE *)v6 + 280) && v3 && CLivePreview::_IsInLivePreview(v6, (const struct CWindowData *)v3);
  if ( v7 || !(unsigned __int8)CDesktopManager::IsFeatureEnabled(1LL) )
    return 0;
  return v4;
}
