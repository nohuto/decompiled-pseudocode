/*
 * XREFs of ?CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z @ 0x18001F4A0
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x18001D400 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::CloseWait(CAudioThreadPool *this, struct _TP_WAIT *a2)
{
  CloseThreadpoolWait(a2);
}
