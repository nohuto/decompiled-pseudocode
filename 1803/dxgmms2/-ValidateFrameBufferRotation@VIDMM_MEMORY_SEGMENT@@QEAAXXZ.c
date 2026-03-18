/*
 * XREFs of ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1C00B1660
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(VIDMM_MEMORY_SEGMENT *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  _QWORD *v9; // rax

  v3 = *((unsigned int *)this + 124);
  if ( (_DWORD)v3 )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v5[7] = 0LL;
    v5[3] = 270LL;
    v5[4] = 59LL;
    v5[5] = this;
    v5[6] = v3;
    WdLogEvent5_WdCriticalError(v5);
  }
  v6 = *((_QWORD *)this + 61);
  if ( v6 )
  {
    v7 = *(unsigned int *)(v6 + 56);
    v8 = *(unsigned int *)(v6 + 60);
    if ( (_DWORD)v7 != (_DWORD)v8 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
      v9[3] = 270LL;
      v9[4] = 60LL;
      v9[5] = v6;
      v9[6] = v7;
      v9[7] = v8;
      WdLogEvent5_WdCriticalError(v9);
    }
  }
}
