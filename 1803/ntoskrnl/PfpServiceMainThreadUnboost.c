/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x14014E7D0
 * Callers:
 *     PfPowerActionNotify @ 0x140471F34 (PfPowerActionNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  PVOID v2; // rbx
  KIRQL v3; // si

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_1403CD748);
  if ( !P || dword_1403CD750 == P[41] )
  {
    v2 = qword_1403CD738;
    if ( qword_1403CD738 )
    {
      qword_1403CD738 = 0LL;
      KeSetActualBasePriorityThread((__int64)v2, (unsigned int)dword_1403CD740);
    }
  }
  KxReleaseSpinLock(&qword_1403CD748);
  __writecr8(v3);
  if ( v2 )
    ObDereferenceObjectDeferDelete(v2);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
