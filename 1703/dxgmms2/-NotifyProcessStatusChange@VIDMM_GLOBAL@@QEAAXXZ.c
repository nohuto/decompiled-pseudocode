/*
 * XREFs of ?NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0060FD0
 * Callers:
 *     VidMmNotifyProcessStatusChange @ 0x1C0012BA0 (VidMmNotifyProcessStatusChange.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::NotifyProcessStatusChange(VIDMM_GLOBAL *this)
{
  VIDMM_GLOBAL::RequestNewBudget(this, 1);
}
