/*
 * XREFs of ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0071B6C
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006FEE0 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0016180 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00161A4 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0058920 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D968 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00714B0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Lock(
        VIDMM_RECYCLE_RANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        struct VIDMM_SEGMENT *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rcx
  enum _LOCK_OPERATION v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  VIDMM_RECYCLE_HEAP_MGR *v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  int v19; // [rsp+30h] [rbp-18h] BYREF
  __int64 v20; // [rsp+38h] [rbp-10h]

  v4 = *((int *)this + 16);
  v8 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( (_DWORD)v8 )
  {
    v16 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v8 - 1);
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 != 1 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, a2, a3);
        v17[7] = 0LL;
        v17[3] = 270LL;
        v17[4] = 52LL;
        v17[5] = 2LL;
        v17[6] = v4;
        WdLogEvent5_WdCriticalError(v17);
        return 3221225473LL;
      }
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v16, this);
      ++*((_DWORD *)this + 23);
      VIDMM_RECYCLE_RANGE::Transition((__int64)this, 2LL);
    }
    else
    {
      ++*((_DWORD *)this + 23);
    }
    return 0LL;
  }
  v20 = 0LL;
  v19 = 8000;
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, (__int64)&EventProfilerEnter, a3, 8000);
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v12 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
          (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
          a2,
          v9,
          a4,
          *((_BYTE **)this + 4),
          *((_BYTE **)this + 5));
  if ( v12 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10);
    v18[3] = this;
    v18[4] = a2;
    v18[5] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL);
    WdLogEvent5_WdWarning(v18);
  }
  else
  {
    ++*((_DWORD *)this + 23);
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, 2LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, (__int64)&EventProfilerExit, v14, v19);
  return (unsigned int)v12;
}
