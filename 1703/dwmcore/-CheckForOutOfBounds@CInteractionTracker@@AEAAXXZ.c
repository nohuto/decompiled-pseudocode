/*
 * XREFs of ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18016C71C
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18002CE40 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z @ 0x18012CE14 (-ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION.c)
 * Callees:
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18016CA00 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18016CA6C (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18016CAD8 (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::CheckForOutOfBounds(CInteractionTracker *this)
{
  CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin(this);
  CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax(this);
  CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(this);
  CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(this);
}
