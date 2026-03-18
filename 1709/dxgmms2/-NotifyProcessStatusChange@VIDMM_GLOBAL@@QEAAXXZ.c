/*
 * XREFs of ?NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006419C
 * Callers:
 *     VidMmNotifyProcessStatusChange @ 0x1C0013E60 (VidMmNotifyProcessStatusChange.c)
 * Callees:
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00670C0 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyProcessStatusChange(VIDMM_GLOBAL *this)
{
  VIDMM_GLOBAL::RequestNewBudget(this, 1);
}
