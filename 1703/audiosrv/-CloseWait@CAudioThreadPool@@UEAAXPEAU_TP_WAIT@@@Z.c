/*
 * XREFs of ?CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z @ 0x1800241C0
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180016D9C (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::CloseWait(CAudioThreadPool *this, struct _TP_WAIT *a2)
{
  CloseThreadpoolWait(a2);
}
