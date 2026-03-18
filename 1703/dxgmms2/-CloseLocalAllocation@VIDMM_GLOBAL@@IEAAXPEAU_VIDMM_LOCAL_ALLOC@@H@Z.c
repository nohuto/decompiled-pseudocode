/*
 * XREFs of ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C005B98C
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C005EE20 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C005F450 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0055AEC (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CloseLocalAllocation(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, __int64 a3)
{
  int v3; // ebp
  __int64 v4; // rsi
  VIDMM_GLOBAL *v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v10; // rdx
  struct _VIDMM_LOCAL_ALLOC **v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax

  v3 = a3;
  v4 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = *((unsigned int *)a2 + 9);
  v6 = (VIDMM_GLOBAL *)**(unsigned int **)(v4 + 520);
  if ( ((unsigned __int8)v6 & 8) != 0 || (v7 = (_QWORD *)*((_QWORD *)a2 + 1), *v7 == PsGetCurrentProcess(v6)) )
  {
    if ( !v3 )
    {
      *(_DWORD *)(v4 + 84) |= 1u;
      ++*((_DWORD *)a2 + 18);
      ++*(_DWORD *)(v4 + 412);
    }
    if ( (*((_DWORD *)a2 + 9))-- == 1 )
    {
      if ( *((_DWORD *)a2 + 19) )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v4 + 512, 0LL);
        if ( *(_DWORD *)(v4 + 344) < *((_DWORD *)a2 + 19) && g_IsInternalRelease )
        {
          v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13, v15);
          v17[5] = 0LL;
          v17[6] = 0LL;
          v17[7] = 0LL;
          v17[3] = 270LL;
          v17[4] = 9LL;
          WdLogEvent5_WdCriticalError(v17);
        }
        *(_DWORD *)(v4 + 344) -= *((_DWORD *)a2 + 19);
        ExReleasePushLockExclusiveEx(v4 + 512, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( (*(_DWORD *)(v4 + 92) & 1) != 0 )
        VIDMM_GLOBAL::UncommitLocalBackingStore(v6, a2, v3 != 0);
      --*(_DWORD *)(v4 + 312);
      v10 = *((_QWORD *)a2 + 7);
      v11 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)a2 + 8);
      if ( *(struct _VIDMM_LOCAL_ALLOC **)(v10 + 8) != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)
        || *v11 != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56) )
      {
        __fastfail(3u);
      }
      *v11 = (struct _VIDMM_LOCAL_ALLOC *)v10;
      *(_QWORD *)(v10 + 8) = v11;
      v12 = *(_QWORD *)a2;
      if ( (**(_DWORD **)(*(_QWORD *)a2 + 520LL) & 0x20000000) != 0
        && a2 == *(struct _VIDMM_LOCAL_ALLOC **)(v12 + 104)
        && (*(_DWORD *)(v12 + 84) & 4) == 0 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v12, a3);
        v18[3] = 270LL;
        v18[4] = 26LL;
        v18[5] = a2;
        v18[6] = 0LL;
        v18[7] = 0LL;
        WdLogEvent5_WdCriticalError(v18);
      }
      if ( v3 )
      {
        *((_BYTE *)a2 + 32) |= 4u;
        operator delete(a2);
      }
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v8, a3);
    v16[3] = 270LL;
    v16[4] = 38LL;
    v16[5] = a2;
    v16[6] = 0LL;
    v16[7] = 0LL;
    WdLogEvent5_WdCriticalError(v16);
  }
}
