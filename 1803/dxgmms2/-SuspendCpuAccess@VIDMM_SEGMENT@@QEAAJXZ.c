/*
 * XREFs of ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00B47EC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005DCA0 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005E61C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SuspendCpuAccess(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  char *v3; // r15
  char *v4; // rbx
  __int64 v5; // rdi
  char *v7; // r12
  _QWORD **v8; // r12
  _QWORD *v9; // rsi
  _QWORD *v10; // r13
  _QWORD **v11; // r13
  _QWORD *v12; // r14
  VIDMM_DEVICE **v13; // rdx
  VIDMM_SEGMENT *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  VIDMM_SEGMENT *v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  int v35; // [rsp+20h] [rbp-C8h]
  __int64 v36; // [rsp+40h] [rbp-A8h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-98h] BYREF
  struct _KAPC_STATE v38; // [rsp+80h] [rbp-68h] BYREF

  v3 = (char *)this + 136;
  v4 = (char *)*((_QWORD *)this + 17);
  LODWORD(v5) = 0;
  do
  {
    v7 = v4;
    if ( v4 == v3 )
      break;
    v4 = *(char **)v4;
    v8 = (_QWORD **)(v7 + 16);
    v9 = *v8;
    do
    {
      v10 = v9;
      if ( v9 == v8 )
        break;
      v9 = (_QWORD *)*v9;
      v11 = (_QWORD **)(v10 + 2);
      v12 = *v11;
      while ( v12 != v11 )
      {
        v13 = (VIDMM_DEVICE **)(v12 - 7);
        v12 = (_QWORD *)*v12;
        a3 = *(_QWORD *)*v13;
        if ( *(_DWORD *)(*(_QWORD *)(a3 + 504) + 12LL) && *(_DWORD *)(a3 + 344) )
        {
          LODWORD(v5) = -1071775486;
          break;
        }
        if ( *(_DWORD *)(a3 + 344) )
          VIDMM_GLOBAL::FaultOneAllocation(*((VIDMM_GLOBAL **)this + 1), v13);
      }
    }
    while ( (int)v5 >= 0 );
  }
  while ( (int)v5 >= 0 );
  if ( (int)v5 >= 0 )
  {
    v14 = (VIDMM_SEGMENT *)*((_QWORD *)this + 20);
    while ( v14 != (VIDMM_SEGMENT *)((char *)this + 160) )
    {
      v15 = (__int64)v14 - 384;
      v14 = *(VIDMM_SEGMENT **)v14;
      v16 = *(_QWORD *)(v15 + 104);
      if ( v16 && (*(_BYTE *)(v16 + 32) & 1) != 0 )
      {
        DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v15 + 320));
        KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v15 + 104) + 8LL), &ApcState);
        LODWORD(v36) = 1;
        v17 = VIDMM_GLOBAL::Rotate(
                *((_QWORD *)this + 1),
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 104) + 8LL) + 24LL),
                *(_QWORD *)(*(_QWORD *)(v15 + 104) + 24LL),
                3u,
                0LL,
                0LL,
                0LL,
                0LL,
                v36,
                v15);
        v5 = v17;
        if ( v17 < 0 )
        {
          if ( v17 == -1073741558 )
          {
            *(_DWORD *)(v15 + 76) |= 0x100000u;
            LODWORD(v5) = 0;
          }
          else
          {
            v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20);
            v21[3] = 270LL;
            v21[4] = 4LL;
            v21[5] = 3LL;
            v21[6] = v5;
            v21[7] = 0LL;
            WdLogEvent5_WdCriticalError(v21);
          }
        }
        *(_BYTE *)(*(_QWORD *)(v15 + 104) + 32LL) &= ~1u;
        KeUnstackDetachProcess(&ApcState);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v15 + 320), v22, v23);
      }
    }
    if ( (int)v5 >= 0 )
    {
      v24 = (VIDMM_SEGMENT *)*((_QWORD *)this + 22);
      while ( v24 != (VIDMM_SEGMENT *)((char *)this + 176) )
      {
        v25 = (__int64)v24 - 384;
        v24 = *(VIDMM_SEGMENT **)v24;
        if ( *(_DWORD *)(v25 + 344) )
        {
          LOBYTE(a3) = 1;
          LOBYTE(v35) = 0;
          (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v25 + 136) + 48LL))(
            *(_QWORD *)(v25 + 136),
            v25,
            a3,
            0LL,
            v35,
            0LL);
        }
        else
        {
          v26 = *(_QWORD *)(v25 + 104);
          if ( v26 && (*(_BYTE *)(v26 + 32) & 1) != 0 )
          {
            DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v25 + 320));
            KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v25 + 104) + 8LL), &v38);
            LODWORD(v36) = 1;
            v27 = VIDMM_GLOBAL::Rotate(
                    *((_QWORD *)this + 1),
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 104) + 8LL) + 24LL),
                    *(_QWORD *)(*(_QWORD *)(v25 + 104) + 24LL),
                    3u,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    v36,
                    v25);
            v5 = v27;
            if ( v27 < 0 )
            {
              if ( v27 == -1073741558 )
              {
                *(_DWORD *)(v25 + 76) |= 0x100000u;
                LODWORD(v5) = 0;
              }
              else
              {
                v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28, v30);
                v31[3] = 270LL;
                v31[4] = 4LL;
                v31[5] = 3LL;
                v31[6] = v5;
                v31[7] = 0LL;
                WdLogEvent5_WdCriticalError(v31);
              }
            }
            *(_BYTE *)(*(_QWORD *)(v25 + 104) + 32LL) &= ~1u;
            KeUnstackDetachProcess(&v38);
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 320), v32, v33);
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
