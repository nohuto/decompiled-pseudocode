/*
 * XREFs of ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180008354
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x1800082F4 (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18003583C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

bool __fastcall CAccent::_IsAnimationNeeded(CAccent *this)
{
  int v2; // ecx

  return *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21)
      && !CDesktopManager::CheckAnyPreference(0x10u)
      && (v2 = *((_DWORD *)this + 77)) != 0
      && (unsigned int)(*((_DWORD *)this + 70) - 2) > 2
      && (unsigned int)(v2 - 2) > 3;
}
