/*
 * XREFs of ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00ABF24
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0058120 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0059D30 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SuspendCpuAccess(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  char *v3; // r15
  char *v4; // rdi
  __int64 v5; // rbx
  char *v7; // r12
  _QWORD **v8; // r12
  _QWORD *v9; // rsi
  _QWORD *v10; // r13
  _QWORD **v11; // r13
  _QWORD *v12; // r14
  VIDMM_DEVICE **v13; // rdx
  __int64 v14; // rcx
  VIDMM_SEGMENT *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  VIDMM_SEGMENT *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  int v36; // [rsp+20h] [rbp-C8h]
  __int64 v37; // [rsp+40h] [rbp-A8h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-98h] BYREF
  struct _KAPC_STATE v39; // [rsp+80h] [rbp-68h] BYREF

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
        v14 = *(_QWORD *)*v13;
        if ( *(_DWORD *)(v14 + 164) && *(_DWORD *)(v14 + 344) )
        {
          LODWORD(v5) = -1071775486;
          break;
        }
        if ( *(_DWORD *)(v14 + 344) )
          VIDMM_GLOBAL::FaultOneAllocation(*((VIDMM_GLOBAL **)this + 1), v13);
      }
    }
    while ( (int)v5 >= 0 );
  }
  while ( (int)v5 >= 0 );
  if ( (int)v5 >= 0 )
  {
    v15 = (VIDMM_SEGMENT *)*((_QWORD *)this + 20);
    while ( v15 != (VIDMM_SEGMENT *)((char *)this + 160) )
    {
      v16 = (__int64)v15 - 384;
      v15 = *(VIDMM_SEGMENT **)v15;
      v17 = *(_QWORD *)(v16 + 104);
      if ( v17 && (*(_BYTE *)(v17 + 32) & 1) != 0 )
      {
        DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v16 + 320));
        KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v16 + 104) + 8LL), &ApcState);
        LODWORD(v37) = 1;
        v18 = VIDMM_GLOBAL::Rotate(
                *((_QWORD *)this + 1),
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 104) + 8LL) + 24LL),
                *(_QWORD *)(*(_QWORD *)(v16 + 104) + 24LL),
                3u,
                0LL,
                0LL,
                0LL,
                0LL,
                v37,
                v16);
        v5 = v18;
        if ( v18 < 0 )
        {
          if ( v18 == -1073741558 )
          {
            *(_DWORD *)(v16 + 76) |= 0x100000u;
            LODWORD(v5) = 0;
          }
          else
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
            v22[3] = 270LL;
            v22[4] = 4LL;
            v22[5] = 3LL;
            v22[6] = v5;
            v22[7] = 0LL;
            WdLogEvent5_WdCriticalError(v22);
          }
        }
        *(_BYTE *)(*(_QWORD *)(v16 + 104) + 32LL) &= ~1u;
        KeUnstackDetachProcess(&ApcState);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16 + 320), v23, v24);
      }
    }
    if ( (int)v5 >= 0 )
    {
      v25 = (VIDMM_SEGMENT *)*((_QWORD *)this + 22);
      while ( v25 != (VIDMM_SEGMENT *)((char *)this + 176) )
      {
        v26 = (__int64)v25 - 384;
        v25 = *(VIDMM_SEGMENT **)v25;
        if ( *(_DWORD *)(v26 + 344) )
        {
          LOBYTE(a3) = 1;
          LOBYTE(v36) = 0;
          (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v26 + 136) + 48LL))(
            *(_QWORD *)(v26 + 136),
            v26,
            a3,
            0LL,
            v36,
            0LL);
        }
        else
        {
          v27 = *(_QWORD *)(v26 + 104);
          if ( v27 && (*(_BYTE *)(v27 + 32) & 1) != 0 )
          {
            DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v26 + 320));
            KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v26 + 104) + 8LL), &v39);
            LODWORD(v37) = 1;
            v28 = VIDMM_GLOBAL::Rotate(
                    *((_QWORD *)this + 1),
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 104) + 8LL) + 24LL),
                    *(_QWORD *)(*(_QWORD *)(v26 + 104) + 24LL),
                    3u,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    v37,
                    v26);
            v5 = v28;
            if ( v28 < 0 )
            {
              if ( v28 == -1073741558 )
              {
                *(_DWORD *)(v26 + 76) |= 0x100000u;
                LODWORD(v5) = 0;
              }
              else
              {
                v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
                v32[3] = 270LL;
                v32[4] = 4LL;
                v32[5] = 3LL;
                v32[6] = v5;
                v32[7] = 0LL;
                WdLogEvent5_WdCriticalError(v32);
              }
            }
            *(_BYTE *)(*(_QWORD *)(v26 + 104) + 32LL) &= ~1u;
            KeUnstackDetachProcess(&v39);
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 320), v33, v34);
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
