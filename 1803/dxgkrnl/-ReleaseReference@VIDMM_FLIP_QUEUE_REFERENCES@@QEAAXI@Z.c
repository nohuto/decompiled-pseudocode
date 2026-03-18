/*
 * XREFs of ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C002C1D8
 * Callers:
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C016A680 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(int *P)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax

  if ( _InterlockedExchangeAdd(P, 0xFFFFFFFF) == 1 )
  {
    if ( P[2] )
    {
      v2 = P[2];
      v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(P);
      v3[7] = 0LL;
      v3[3] = 270LL;
      v3[4] = 42LL;
      v3[5] = P;
      v3[6] = v2;
      WdLogEvent5_WdCriticalError(v3);
    }
    ExFreePoolWithTag(P, 0);
  }
}
