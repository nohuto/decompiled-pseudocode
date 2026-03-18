/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x140239840
 * Callers:
 *     PfPowerActionNotify @ 0x1404309DC (PfPowerActionNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  void *v2; // rbx
  KIRQL v3; // si
  _SINGLE_LIST_ENTRY *v4; // r8
  __int64 v5; // r9

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_14038D328);
  if ( !P || dword_14038D330 == P[41] )
  {
    v2 = (void *)qword_14038D318;
    if ( qword_14038D318 )
    {
      qword_14038D318 = 0LL;
      KeSetActualBasePriorityThread((__int64)v2, dword_14038D320, v4, v5);
    }
  }
  KxReleaseSpinLock(&qword_14038D328);
  __writecr8(v3);
  if ( v2 )
    ObDereferenceObjectDeferDelete(v2);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
