/*
 * XREFs of ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C0024044
 * Callers:
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C01824C8 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(VIDMM_FLIP_QUEUE_REFERENCES *this)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    if ( *((_DWORD *)this + 2) )
    {
      v2 = *((int *)this + 2);
      v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v3[7] = 0LL;
      v3[3] = 270LL;
      v3[4] = 42LL;
      v3[5] = this;
      v3[6] = v2;
      WdLogEvent5_WdCriticalError(v3);
    }
    operator delete(this);
  }
}
