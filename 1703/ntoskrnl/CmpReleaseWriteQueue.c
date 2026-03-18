/*
 * XREFs of CmpReleaseWriteQueue @ 0x1404D86B8
 * Callers:
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1405BCF50 (CmpFinishBeingActiveFlusherAndReconciler.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     KeRemovePriorityBoost @ 0x140153BF0 (KeRemovePriorityBoost.c)
 */

__int64 __fastcall CmpReleaseWriteQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  *(_QWORD *)a2 = 0LL;
  v2 = a2;
  v3 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    LOBYTE(a2) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), a2);
    KeRemovePriorityBoost((__int64)KeGetCurrentThread());
    *(_DWORD *)(v2 + 16) = 0;
  }
  return v3;
}
