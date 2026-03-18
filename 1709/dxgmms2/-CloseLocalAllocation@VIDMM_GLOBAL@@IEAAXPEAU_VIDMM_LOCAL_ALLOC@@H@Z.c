/*
 * XREFs of ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C005ED4C
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0061B40 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00622B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0058648 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CloseLocalAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3,
        __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rdx
  struct _VIDMM_LOCAL_ALLOC **v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax

  v4 = (int)a3;
  v5 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v21 = WdLogNewEntry5_WdTrace(this);
    a4 = *((unsigned int *)a2 + 9);
    *(_QWORD *)(v21 + 24) = a4;
  }
  v8 = **(unsigned int **)(v5 + 504);
  if ( (v8 & 8) != 0 || (v9 = (_QWORD *)*((_QWORD *)a2 + 1), *v9 == PsGetCurrentProcess(v8, a2, a3, a4)) )
  {
    if ( !v4 )
    {
      *(_DWORD *)(v5 + 84) |= 1u;
      ++*((_DWORD *)a2 + 18);
      ++*(_DWORD *)(v5 + 380);
    }
    if ( (*((_DWORD *)a2 + 9))-- == 1 )
    {
      if ( *((_DWORD *)a2 + 19) )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v5 + 480, 0LL);
        if ( *(_DWORD *)(v5 + 344) < *((_DWORD *)a2 + 19) && g_IsInternalRelease )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18);
          v23[5] = 0LL;
          v23[6] = 0LL;
          v23[7] = 0LL;
          v23[3] = 270LL;
          v23[4] = 9LL;
          WdLogEvent5_WdCriticalError(v23);
        }
        *(_DWORD *)(v5 + 344) -= *((_DWORD *)a2 + 19);
        ExReleasePushLockExclusiveEx(v5 + 480, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( (*(_DWORD *)(v5 + 92) & 1) != 0 )
        VIDMM_GLOBAL::UncommitLocalBackingStore(this, a2, v4 != 0);
      --*(_DWORD *)(v5 + 312);
      v13 = *((_QWORD *)a2 + 7);
      if ( *(struct _VIDMM_LOCAL_ALLOC **)(v13 + 8) != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)
        || (v14 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)a2 + 8),
            *v14 != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)) )
      {
        __fastfail(3u);
      }
      *v14 = (struct _VIDMM_LOCAL_ALLOC *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      if ( *(_DWORD *)(v5 + 128) )
      {
        v14 = *(struct _VIDMM_LOCAL_ALLOC ***)(*((_QWORD *)a2 + 1) + 16LL);
        a3 = v14[*(unsigned int *)(*((_QWORD *)this + 3) + 200LL)];
        v19 = *((_QWORD *)a3 + 6) + 296LL * (*(_DWORD *)(v5 + 76) & 0x3F);
        v20 = *(_QWORD *)(v5 + 16);
        if ( (*(_DWORD *)(*(_QWORD *)(v5 + 136) + 80LL) & 0x1001) != 0 )
          *(_QWORD *)(v19 + 240) -= v20;
        else
          *(_QWORD *)(v19 + 232) -= v20;
      }
      v15 = *(_QWORD *)a2;
      if ( (**(_DWORD **)(*(_QWORD *)a2 + 504LL) & 0x20000000) != 0
        && a2 == *(struct _VIDMM_LOCAL_ALLOC **)(v15 + 104)
        && (*(_DWORD *)(v15 + 84) & 4) == 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v15, a3);
        v24[3] = 270LL;
        v24[4] = 26LL;
        v24[5] = a2;
        v24[6] = 0LL;
        v24[7] = 0LL;
        WdLogEvent5_WdCriticalError(v24);
      }
      if ( v4 )
      {
        *((_BYTE *)a2 + 32) |= 4u;
        operator delete(a2);
      }
    }
  }
  else
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, a3);
    v22[3] = 270LL;
    v22[4] = 38LL;
    v22[5] = a2;
    v22[6] = 0LL;
    v22[7] = 0LL;
    WdLogEvent5_WdCriticalError(v22);
  }
}
