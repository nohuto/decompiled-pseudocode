/*
 * XREFs of ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A1E7C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00010E0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001558 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00556A0 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 */

void __fastcall VIDMM_SEGMENT::InvalidateAllVirtualAddress(VIDMM_SEGMENT *this)
{
  char *v2; // rbp
  char *v3; // rsi
  _QWORD **v4; // r12
  _QWORD *v5; // r14
  _QWORD **v6; // rax
  _QWORD *v7; // r15
  _QWORD *v8; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  VIDMM_CPU_HOST_APERTURE *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD **v22; // [rsp+58h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v2 = (char *)this + 160;
  v3 = (char *)*((_QWORD *)this + 20);
  while ( v3 != v2 )
  {
    v4 = (_QWORD **)(v3 + 16);
    v3 = *(char **)v3;
    v5 = *v4;
    v22 = v4;
    if ( *v4 != v4 )
    {
      do
      {
        v6 = (_QWORD **)(v5 + 2);
        v5 = (_QWORD *)*v5;
        v7 = *v6;
        if ( *v6 != v6 )
        {
          v8 = v6;
          do
          {
            v9 = (__int64 *)*(v7 - 7);
            v7 = (_QWORD *)*v7;
            v10 = *v9;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v10 + 512, 0LL);
            DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v10 + 320));
            v12 = *(_QWORD *)(v10 + 104);
            if ( v12 && (*(_BYTE *)(v12 + 32) & 1) != 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v10;
              KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v10 + 104) + 8LL), &ApcState);
              v13 = VIDMM_GLOBAL::Rotate(
                      *((VIDMM_GLOBAL **)this + 1),
                      *(struct VIDMM_PROCESS_HEAP_INTERFACE **)(*(_QWORD *)(*(_QWORD *)(v10 + 104) + 8LL) + 24LL),
                      *(void **)(*(_QWORD *)(v10 + 104) + 24LL),
                      3u,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      1,
                      (struct _VIDMM_GLOBAL_ALLOC *)v10);
              v16 = v13;
              v17 = v13 + 0x80000000;
              if ( (v17 & 0x80000000) == 0 && v13 != -1073741558 )
              {
                v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v15);
                v18[7] = 0LL;
                v18[3] = 270LL;
                v18[4] = 4LL;
                v18[5] = 3LL;
                v18[6] = v16;
                WdLogEvent5_WdCriticalError(v18);
              }
              *(_BYTE *)(*(_QWORD *)(v10 + 104) + 32LL) &= ~1u;
              *(_DWORD *)(v10 + 76) |= 0x100000u;
              KeUnstackDetachProcess(&ApcState);
            }
            if ( *(_QWORD *)(v10 + 480) )
            {
              v19 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 63);
              VIDMM_CPU_HOST_APERTURE::UnmapRange(v19, (struct _VIDMM_GLOBAL_ALLOC *)v10);
              VIDMM_CPU_HOST_APERTURE::ReleaseRange(v19, (struct _VIDMM_GLOBAL_ALLOC *)v10);
            }
            ExReleasePushLockExclusiveEx(v10 + 512, 0LL);
            KeLeaveCriticalRegion();
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v10 + 320), v20, v21);
          }
          while ( v7 != v8 );
          v4 = v22;
        }
      }
      while ( v5 != v4 );
      v2 = (char *)this + 160;
    }
  }
}
