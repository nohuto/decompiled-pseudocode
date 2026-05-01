/*
 * XREFs of ?WorkAreaChanged@AccessibilityExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x1801B0F70
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyWorkspaceRect@AccessibilityExperienceManager@@UEAAXXZ @ 0x1801B0F90 (-NotifyWorkspaceRect@AccessibilityExperienceManager@@UEAAXXZ.c)
 */

__int64 __fastcall AccessibilityExperienceManager::WorkAreaChanged(
        struct tagRECT *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  this[20] = *a3;
  AccessibilityExperienceManager::NotifyWorkspaceRect((AccessibilityExperienceManager *)&this[1]);
  return 0LL;
}
