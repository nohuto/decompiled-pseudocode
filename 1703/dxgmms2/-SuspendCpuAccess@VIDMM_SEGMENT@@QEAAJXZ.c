/*
 * XREFs of ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00A39B0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00556A0 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0056F40 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SuspendCpuAccess(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  char *v3; // r15
  char *v4; // rdi
  __int64 v5; // rbx
  _QWORD **v7; // r12
  _QWORD *v8; // rsi
  _QWORD **v9; // r13
  _QWORD *v10; // r14
  VIDMM_DEVICE **v11; // rdx
  __int64 v12; // rcx
  VIDMM_SEGMENT *v13; // rsi
  char *v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  VIDMM_SEGMENT *v23; // rsi
  char *v24; // rdi
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  int v34; // [rsp+20h] [rbp-C8h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-98h] BYREF
  struct _KAPC_STATE v36; // [rsp+80h] [rbp-68h] BYREF

  v3 = (char *)this + 160;
  v4 = (char *)*((_QWORD *)this + 20);
  LODWORD(v5) = 0;
  do
  {
    if ( v4 == v3 )
      break;
    v7 = (_QWORD **)(v4 + 16);
    v4 = *(char **)v4;
    v8 = *v7;
    do
    {
      if ( v8 == v7 )
        break;
      v9 = (_QWORD **)(v8 + 2);
      v8 = (_QWORD *)*v8;
      v10 = *v9;
      while ( v10 != v9 )
      {
        v11 = (VIDMM_DEVICE **)(v10 - 7);
        v10 = (_QWORD *)*v10;
        v12 = *(_QWORD *)*v11;
        if ( *(_DWORD *)(v12 + 164) && *(_DWORD *)(v12 + 344) )
        {
          LODWORD(v5) = -1071775486;
          break;
        }
        if ( *(_DWORD *)(v12 + 344) )
          VIDMM_GLOBAL::FaultOneAllocation(*((VIDMM_GLOBAL **)this + 1), v11);
      }
    }
    while ( (int)v5 >= 0 );
  }
  while ( (int)v5 >= 0 );
  if ( (int)v5 >= 0 )
  {
    v13 = (VIDMM_SEGMENT *)*((_QWORD *)this + 23);
    while ( v13 != (VIDMM_SEGMENT *)((char *)this + 184) )
    {
      v14 = (char *)v13 - 416;
      v13 = *(VIDMM_SEGMENT **)v13;
      v15 = *((_QWORD *)v14 + 13);
      if ( v15 && (*(_BYTE *)(v15 + 32) & 1) != 0 )
      {
        DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v14 + 40));
        KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)v14 + 13) + 8LL), &ApcState);
        v16 = VIDMM_GLOBAL::Rotate(
                *((VIDMM_GLOBAL **)this + 1),
                *(struct VIDMM_PROCESS_HEAP_INTERFACE **)(*(_QWORD *)(*((_QWORD *)v14 + 13) + 8LL) + 24LL),
                *(void **)(*((_QWORD *)v14 + 13) + 24LL),
                3u,
                0LL,
                0LL,
                0LL,
                0LL,
                1,
                (struct _VIDMM_GLOBAL_ALLOC *)v14);
        v5 = v16;
        if ( v16 < 0 )
        {
          if ( v16 == -1073741558 )
          {
            *((_DWORD *)v14 + 19) |= 0x100000u;
            LODWORD(v5) = 0;
          }
          else
          {
            v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v19);
            v20[3] = 270LL;
            v20[4] = 4LL;
            v20[5] = 3LL;
            v20[6] = v5;
            v20[7] = 0LL;
            WdLogEvent5_WdCriticalError(v20);
          }
        }
        *(_BYTE *)(*((_QWORD *)v14 + 13) + 32LL) &= ~1u;
        KeUnstackDetachProcess(&ApcState);
        DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v14 + 40), v21, v22);
      }
    }
    if ( (int)v5 >= 0 )
    {
      v23 = (VIDMM_SEGMENT *)*((_QWORD *)this + 25);
      while ( v23 != (VIDMM_SEGMENT *)((char *)this + 200) )
      {
        v24 = (char *)v23 - 416;
        v23 = *(VIDMM_SEGMENT **)v23;
        if ( *((_DWORD *)v24 + 86) )
        {
          LOBYTE(a3) = 1;
          LOBYTE(v34) = 0;
          (*(void (__fastcall **)(_QWORD, char *, __int64, _QWORD, int, _QWORD))(**((_QWORD **)v24 + 17) + 48LL))(
            *((_QWORD *)v24 + 17),
            v24,
            a3,
            0LL,
            v34,
            0LL);
        }
        else
        {
          v25 = *((_QWORD *)v24 + 13);
          if ( v25 && (*(_BYTE *)(v25 + 32) & 1) != 0 )
          {
            DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v24 + 40));
            KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)v24 + 13) + 8LL), &v36);
            v26 = VIDMM_GLOBAL::Rotate(
                    *((VIDMM_GLOBAL **)this + 1),
                    *(struct VIDMM_PROCESS_HEAP_INTERFACE **)(*(_QWORD *)(*((_QWORD *)v24 + 13) + 8LL) + 24LL),
                    *(void **)(*((_QWORD *)v24 + 13) + 24LL),
                    3u,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    1,
                    (struct _VIDMM_GLOBAL_ALLOC *)v24);
            v5 = v26;
            if ( v26 < 0 )
            {
              if ( v26 == -1073741558 )
              {
                *((_DWORD *)v24 + 19) |= 0x100000u;
                LODWORD(v5) = 0;
              }
              else
              {
                v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27, v29);
                v30[3] = 270LL;
                v30[4] = 4LL;
                v30[5] = 3LL;
                v30[6] = v5;
                v30[7] = 0LL;
                WdLogEvent5_WdCriticalError(v30);
              }
            }
            *(_BYTE *)(*((_QWORD *)v24 + 13) + 32LL) &= ~1u;
            KeUnstackDetachProcess(&v36);
            DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v24 + 40), v31, v32);
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
