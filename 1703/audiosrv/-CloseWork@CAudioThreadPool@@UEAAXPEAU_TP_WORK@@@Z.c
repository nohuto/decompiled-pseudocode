/*
 * XREFs of ?CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x1800241B0
 * Callers:
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x1800158A0 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::CloseWork(CAudioThreadPool *this, struct _TP_WORK *a2)
{
  CloseThreadpoolWork(a2);
}
