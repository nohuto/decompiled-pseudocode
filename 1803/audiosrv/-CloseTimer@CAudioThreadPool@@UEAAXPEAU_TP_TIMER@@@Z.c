/*
 * XREFs of ?CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z @ 0x180043F90
 * Callers:
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180047790 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::CloseTimer(CAudioThreadPool *this, struct _TP_TIMER *a2)
{
  CloseThreadpoolTimer(a2);
}
