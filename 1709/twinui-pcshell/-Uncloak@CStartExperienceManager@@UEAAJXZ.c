/*
 * XREFs of ?Uncloak@CStartExperienceManager@@UEAAJXZ @ 0x1800B8A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Uncloak@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D2D04 (-Uncloak@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall CStartExperienceManager::Uncloak(HWND *this)
{
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  pvAttribute = 0;
  DwmSetWindowAttribute(this[78], 0xDu, &pvAttribute, 4u);
  return CSingleViewShellExperience::Uncloak((CSingleViewShellExperience *)(this + 33));
}
