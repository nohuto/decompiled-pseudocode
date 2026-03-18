/*
 * XREFs of ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1C00A0F9C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(VIDMM_MEMORY_SEGMENT *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rdi
  _QWORD *v10; // rax

  v3 = *((unsigned int *)this + 128);
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
  v6 = *((_QWORD *)this + 63);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 60);
    if ( *(_DWORD *)(v6 + 56) != v7 )
    {
      v8 = *(unsigned int *)(v6 + 56);
      v9 = v7;
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
      v10[3] = 270LL;
      v10[4] = 60LL;
      v10[5] = v6;
      v10[6] = v8;
      v10[7] = v9;
      WdLogEvent5_WdCriticalError(v10);
    }
  }
}
