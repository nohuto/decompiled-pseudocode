/*
 * XREFs of ?UnmapPagingBuffer@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AAAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::UnmapPagingBuffer(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2, __int64 a3)
{
  _QWORD *v3; // rax

  v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
  v3[5] = 0LL;
  v3[6] = 0LL;
  v3[7] = 0LL;
  v3[3] = 270LL;
  v3[4] = 13LL;
  WdLogEvent5_WdCriticalError(v3);
}
