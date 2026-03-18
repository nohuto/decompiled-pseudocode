/*
 * XREFs of ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00A90A4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001100 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001638 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0058120 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0079148 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C009C7A8 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rdi
  DXGFASTMUTEX **v5; // rdx
  DXGFASTMUTEX *v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r12
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // [rsp+40h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  if ( (*(_DWORD *)(a1 + 80) & 0x6004) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
    v4 = *(_QWORD **)(a1 + 160);
    while ( v4 != (_QWORD *)(a1 + 160) )
    {
      v5 = (DXGFASTMUTEX **)(v4 - 48);
      v4 = (_QWORD *)*v4;
      v6 = v5[13];
      if ( v6 && (*((_BYTE *)v6 + 32) & 1) != 0 )
        VIDMM_WORKER_THREAD::SuspendAccessToAllocation(**(VIDMM_GLOBAL ****)(a1 + 8), v5);
    }
    v7 = *(_QWORD **)(a1 + 176);
    while ( v7 != (_QWORD *)(a1 + 176) )
    {
      v8 = (__int64)(v7 - 48);
      v7 = (_QWORD *)*v7;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v8 + 480, 0LL);
      if ( *(_DWORD *)(v8 + 344) )
      {
        ExReleasePushLockExclusiveEx(v8 + 480, 0LL);
        KeLeaveCriticalRegion();
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v8;
        if ( (*(_DWORD *)(v8 + 76) & 0x100) != 0 )
        {
          if ( g_IsInternalRelease )
          {
            v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12);
            v14[3] = 270LL;
            v14[4] = 9LL;
            v14[5] = 0LL;
            v14[6] = 0LL;
            v14[7] = 0LL;
            WdLogEvent5_WdCriticalError(v14);
          }
        }
        VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v8, a2, v13);
      }
      else
      {
        v15 = *(_QWORD *)(v8 + 104);
        if ( v15 && (*(_BYTE *)(v15 + 32) & 1) != 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v8;
          v16 = *(_QWORD *)(v8 + 104);
          KeStackAttachProcess(**(PRKPROCESS **)(v16 + 8), &ApcState);
          LODWORD(v23) = 1;
          v17 = VIDMM_GLOBAL::Rotate(
                  *(_QWORD *)(a1 + 8),
                  *(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL),
                  *(_QWORD *)(v16 + 24),
                  3u,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v23,
                  v8);
          v20 = v17;
          v21 = v17 + 0x80000000;
          if ( (int)v21 >= 0 && v17 != -1073741558 )
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v18, v19);
            v22[6] = v20;
            v22[7] = 0LL;
            v22[3] = 270LL;
            v22[4] = 4LL;
            v22[5] = 3LL;
            WdLogEvent5_WdCriticalError(v22);
          }
          *(_BYTE *)(v16 + 32) &= ~1u;
          KeUnstackDetachProcess(&ApcState);
          if ( *(_QWORD *)(v8 + 448) )
          {
            VIDMM_CPU_HOST_APERTURE::UnmapRange(
              *(VIDMM_CPU_HOST_APERTURE **)(a1 + 488),
              (struct _VIDMM_GLOBAL_ALLOC *)v8);
            VIDMM_CPU_HOST_APERTURE::ReleaseRange(
              *(VIDMM_CPU_HOST_APERTURE **)(a1 + 488),
              (struct _VIDMM_GLOBAL_ALLOC *)v8);
          }
        }
        ExReleasePushLockExclusiveEx(v8 + 480, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
}
