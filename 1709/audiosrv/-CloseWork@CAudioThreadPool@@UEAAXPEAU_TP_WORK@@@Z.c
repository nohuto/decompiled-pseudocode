/*
 * XREFs of ?CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x18001F490
 * Callers:
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180019F00 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::CloseWork(CAudioThreadPool *this, struct _TP_WORK *a2)
{
  CloseThreadpoolWork(a2);
}
