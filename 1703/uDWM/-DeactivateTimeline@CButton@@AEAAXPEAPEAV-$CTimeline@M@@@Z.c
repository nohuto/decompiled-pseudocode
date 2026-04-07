/*
 * XREFs of ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001FA14
 * Callers:
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18000EA08 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001FC44 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x1800205F4 (--1CButton@@MEAA@XZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x1800196E0 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     Template_qp @ 0x180077E2C (Template_qp.c)
 */

void __fastcall CButton::DeactivateTimeline(struct CVisual *a1, __int64 *a2)
{
  __int64 v4; // rax
  bool v5; // zf
  char v6; // al

  if ( *a2 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qp(a1, &UdwmAnimation_Stop, 7LL);
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(a1);
    v4 = *a2;
    if ( *a2 )
    {
      v5 = (*(_DWORD *)(v4 + 8))-- == 1;
      v6 = CDesktopManager::s_fTimelineDirty;
      if ( v5 )
        v6 = 1;
      *a2 = 0LL;
      CDesktopManager::s_fTimelineDirty = v6;
    }
  }
}
