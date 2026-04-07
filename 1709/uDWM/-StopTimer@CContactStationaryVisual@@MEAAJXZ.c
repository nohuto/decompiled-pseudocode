/*
 * XREFs of ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x180084D80
 * Callers:
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x18008470C (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800848C8 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x180084D60 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x180084DF0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180039F70 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::StopTimer(CContactStationaryVisual *this)
{
  __int64 v1; // rax
  bool v2; // zf
  bool v3; // al
  __int64 v4; // rdx

  v1 = *((_QWORD *)this + 45);
  if ( v1 )
  {
    v2 = (*(_DWORD *)(v1 + 8))-- == 1;
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 45) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  else
  {
    v3 = CDesktopManager::s_fTimelineDirty;
  }
  v4 = *((_QWORD *)this + 44);
  if ( v4 )
  {
    v2 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 44) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
