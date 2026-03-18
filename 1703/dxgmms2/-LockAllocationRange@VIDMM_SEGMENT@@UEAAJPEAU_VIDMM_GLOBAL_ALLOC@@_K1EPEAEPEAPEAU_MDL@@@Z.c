/*
 * XREFs of ?LockAllocationRange@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00A2170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::LockAllocationRange(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2, __int64 a3)
{
  _QWORD *v3; // rax

  v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
  v3[5] = 0LL;
  v3[6] = 0LL;
  v3[7] = 0LL;
  v3[3] = 270LL;
  v3[4] = 13LL;
  WdLogEvent5_WdCriticalError(v3);
  return 3223191809LL;
}
