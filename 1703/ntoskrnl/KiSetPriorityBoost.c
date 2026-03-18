/*
 * XREFs of KiSetPriorityBoost @ 0x14001ACCC
 * Callers:
 *     KiPrepareReadyThreadForRescheduling @ 0x14001AD38 (KiPrepareReadyThreadForRescheduling.c)
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 * Callees:
 *     KiSetPriorityThread @ 0x140042AF0 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1401147E0 (KiUpdateThreadPriority.c)
 */

__int64 __fastcall KiSetPriorityBoost(__int64 a1, __int64 a2, char a3, unsigned __int64 a4)
{
  __int64 v6; // r8
  __int64 result; // rax
  unsigned __int64 v8; // rcx

  *(_BYTE *)(a2 + 564) += 16 * (a3 - *(_BYTE *)(a2 + 195));
  v6 = (unsigned int)a3;
  if ( a1 )
    result = KiSetPriorityThread(a2, a1, v6);
  else
    result = KiUpdateThreadPriority(0LL, a2, v6, 0LL);
  v8 = *(_QWORD *)(a2 + 32);
  if ( a4 > v8 || v8 - a4 < (unsigned int)KiLockQuantumTarget )
  {
    result = a4 + (unsigned int)KiLockQuantumTarget;
    *(_QWORD *)(a2 + 32) = result;
  }
  return result;
}
