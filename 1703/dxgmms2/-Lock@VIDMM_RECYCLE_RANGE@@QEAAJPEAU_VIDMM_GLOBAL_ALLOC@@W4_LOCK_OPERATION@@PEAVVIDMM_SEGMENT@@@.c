/*
 * XREFs of ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0068F1C
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006831C (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0048C88 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064A6C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0068964 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Lock(
        VIDMM_RECYCLE_RANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        struct VIDMM_SEGMENT *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  VIDMM_RECYCLE_HEAP_MGR *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax

  v4 = *((int *)this + 16);
  v8 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( (_DWORD)v8 )
  {
    v15 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v8 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 != 1 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, a2, a3);
        v16[7] = 0LL;
        v16[3] = 270LL;
        v16[4] = 52LL;
        v16[5] = 2LL;
        v16[6] = v4;
        WdLogEvent5_WdCriticalError(v16);
        return 3221225473LL;
      }
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v15, this);
      ++*((_DWORD *)this + 23);
      VIDMM_RECYCLE_RANGE::Transition((__int64)this, 2LL);
    }
    else
    {
      ++*((_DWORD *)this + 23);
    }
    return 0LL;
  }
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerEnter, a3, 8000);
  v11 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
          (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
          a2,
          (enum _LOCK_OPERATION)a3,
          a4,
          *((void **)this + 4),
          *((_BYTE **)this + 5));
  if ( v11 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9);
    v17[3] = this;
    v17[4] = a2;
    v17[5] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL);
    WdLogEvent5_WdWarning(v17);
  }
  else
  {
    ++*((_DWORD *)this + 23);
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, 2LL);
  }
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 8000);
  return (unsigned int)v11;
}
