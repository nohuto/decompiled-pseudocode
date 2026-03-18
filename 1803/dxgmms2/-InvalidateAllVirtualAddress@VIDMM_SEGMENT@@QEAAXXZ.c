/*
 * XREFs of ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00B28B4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001E44 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C000235C (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005DCA0 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 */

void __fastcall VIDMM_SEGMENT::InvalidateAllVirtualAddress(VIDMM_SEGMENT *this)
{
  char *v2; // r15
  char *v3; // rsi
  char *v4; // r12
  _QWORD **v5; // r12
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  _QWORD **v8; // rax
  _QWORD *v9; // rbp
  _QWORD *v10; // r15
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  VIDMM_CPU_HOST_APERTURE *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // [rsp+40h] [rbp-88h]
  _QWORD **v24; // [rsp+58h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v2 = (char *)this + 136;
  v3 = (char *)*((_QWORD *)this + 17);
  while ( v3 != v2 )
  {
    v4 = v3;
    v3 = *(char **)v3;
    v5 = (_QWORD **)(v4 + 16);
    v24 = v5;
    v6 = *v5;
    if ( *v5 != v5 )
    {
      do
      {
        v7 = v6;
        v6 = (_QWORD *)*v6;
        v8 = (_QWORD **)(v7 + 2);
        v9 = *v8;
        if ( *v8 != v8 )
        {
          v10 = v8;
          do
          {
            v11 = (__int64 *)*(v9 - 7);
            v9 = (_QWORD *)*v9;
            v12 = *v11;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v12 + 480, 0LL);
            DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v12 + 320));
            v13 = *(_QWORD *)(v12 + 104);
            if ( v13 && (*(_BYTE *)(v13 + 32) & 1) != 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v13) + 24) = v12;
                v13 = *(_QWORD *)(v12 + 104);
              }
              KeStackAttachProcess(**(PRKPROCESS **)(v13 + 8), &ApcState);
              LODWORD(v23) = 1;
              v14 = VIDMM_GLOBAL::Rotate(
                      *((_QWORD *)this + 1),
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 104) + 8LL) + 24LL),
                      *(_QWORD *)(*(_QWORD *)(v12 + 104) + 24LL),
                      3u,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      v23,
                      v12);
              v17 = v14;
              v18 = v14 + 0x80000000;
              if ( (v18 & 0x80000000) == 0 && v14 != -1073741558 )
              {
                v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v15, v16);
                v19[7] = 0LL;
                v19[3] = 270LL;
                v19[4] = 4LL;
                v19[5] = 3LL;
                v19[6] = v17;
                WdLogEvent5_WdCriticalError(v19);
              }
              *(_BYTE *)(*(_QWORD *)(v12 + 104) + 32LL) &= ~1u;
              *(_DWORD *)(v12 + 76) |= 0x100000u;
              KeUnstackDetachProcess(&ApcState);
            }
            if ( *(_QWORD *)(v12 + 448) )
            {
              v20 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 61);
              VIDMM_CPU_HOST_APERTURE::UnmapRange(v20, (struct _VIDMM_GLOBAL_ALLOC *)v12);
              VIDMM_CPU_HOST_APERTURE::ReleaseRange(v20, (struct _VIDMM_GLOBAL_ALLOC *)v12);
            }
            ExReleasePushLockExclusiveEx(v12 + 480, 0LL);
            KeLeaveCriticalRegion();
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 320), v21, v22);
          }
          while ( v9 != v10 );
          v5 = v24;
        }
      }
      while ( v6 != v5 );
      v2 = (char *)this + 136;
    }
  }
}
