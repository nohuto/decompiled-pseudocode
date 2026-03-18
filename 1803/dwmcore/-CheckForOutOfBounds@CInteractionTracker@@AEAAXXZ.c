/*
 * XREFs of ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x180193D7C
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z @ 0x180194D0C (-ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION.c)
 * Callees:
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x1801941F0 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18019425C (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x1801942C8 (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::CheckForOutOfBounds(CInteractionTracker *this)
{
  CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin(this);
  CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax(this);
  CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(this);
  CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(this);
}
