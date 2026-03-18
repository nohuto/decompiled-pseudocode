/*
 * XREFs of CmpDelayFreeCmRm @ 0x1404CA7C4
 * Callers:
 *     CmpRunDownCmRM @ 0x1404CA648 (CmpRunDownCmRM.c)
 * Callees:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

void __fastcall CmpDelayFreeCmRm(_QWORD *a1)
{
  _QWORD *v2; // rax
  bool v3; // zf

  ExAcquireFastMutex(&CmpDelayFreeRMLock);
  v2 = (_QWORD *)qword_14036AC08;
  if ( *(PVOID **)qword_14036AC08 != &CmpDelayFreeRMListHead )
    __fastfail(3u);
  v3 = CmpDelayFreeRMWorkItemActive == 0;
  *a1 = &CmpDelayFreeRMListHead;
  a1[1] = v2;
  *v2 = a1;
  qword_14036AC08 = (__int64)a1;
  if ( v3 )
  {
    CmpDelayFreeRMWorkItemActive = 1;
    KiSetTimerEx((__int64)&CmpDelayFreeRMTimer, -300000000LL, 0, 0, (__int64)&CmpDelayFreeRMDpc);
  }
  KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
}
