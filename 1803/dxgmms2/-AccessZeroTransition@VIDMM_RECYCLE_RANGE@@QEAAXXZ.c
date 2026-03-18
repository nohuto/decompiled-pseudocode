/*
 * XREFs of ?AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00717A4
 * Callers:
 *     ?MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C006D480 (-MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_RANGE::AccessZeroTransition(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  int v4; // edx
  _QWORD *v5; // rax

  v3 = *((unsigned int *)this + 21);
  if ( (_DWORD)v3 )
  {
    v4 = v3 - 1;
    if ( !v4 || v4 == 2 )
      *((_DWORD *)this + 21) = 2;
  }
  else if ( g_IsInternalRelease )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v3, a3);
    v5[5] = 0LL;
    v5[6] = 0LL;
    v5[7] = 0LL;
    v5[3] = 270LL;
    v5[4] = 9LL;
    WdLogEvent5_WdCriticalError(v5);
  }
}
