/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x1401383E0
 * Callers:
 *     PfPowerActionNotify @ 0x140409780 (PfPowerActionNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  PVOID v2; // rbx
  KIRQL v3; // si
  _SINGLE_LIST_ENTRY *v4; // r8
  __int64 v5; // r9

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_14036DEC8);
  if ( !P || dword_14036DED0 == P[41] )
  {
    v2 = qword_14036DEB8;
    if ( qword_14036DEB8 )
    {
      qword_14036DEB8 = 0LL;
      KeSetActualBasePriorityThread((__int64)v2, dword_14036DEC0, v4, v5);
    }
  }
  KxReleaseSpinLock(&qword_14036DEC8);
  __writecr8(v3);
  if ( v2 )
    ObDereferenceObjectDeferDelete(v2);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
