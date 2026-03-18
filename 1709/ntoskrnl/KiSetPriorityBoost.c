/*
 * XREFs of KiSetPriorityBoost @ 0x1400D1540
 * Callers:
 *     KiQuantumEnd @ 0x140090E30 (KiQuantumEnd.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D14D0 (KiPrepareReadyThreadForRescheduling.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 */

unsigned __int64 __fastcall KiSetPriorityBoost(_QWORD *a1, __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 result; // rax

  *(_BYTE *)(a2 + 564) += 16 * (a3 - *(_BYTE *)(a2 + 195));
  if ( a1 )
    KiSetPriorityThread(a2, a1, a3);
  else
    KiUpdateThreadPriority(0LL, a2, a3, 0);
  v6 = *(_QWORD *)(a2 + 32);
  if ( a4 > v6 || (result = (unsigned int)KiLockQuantumTarget, v6 - a4 < (unsigned int)KiLockQuantumTarget) )
  {
    result = a4 + (unsigned int)KiLockQuantumTarget;
    *(_QWORD *)(a2 + 32) = result;
  }
  return result;
}
