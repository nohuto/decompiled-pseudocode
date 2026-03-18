/*
 * XREFs of ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00B389C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005E61C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0079D04 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A0F34 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00A28A0 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::PurgeContent(__int64 a1, struct _VIDMM_GLOBAL_ALLOC *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD *v6; // rcx
  _QWORD *v7; // r12
  _QWORD *v8; // rax
  int v9; // edi
  _QWORD *v10; // r15
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // r8
  __int64 **v18; // rsi
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 **v22; // rcx
  __int64 *v23; // rax
  __int64 *v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 *v27; // r8
  __int64 **v28; // rsi
  __int64 *v29; // rdi
  __int64 v30; // rdx
  __int64 *v31; // rax
  __int64 **v32; // rcx
  __int64 *v33; // rax
  __int64 result; // rax
  __int64 *v35; // rcx
  __int64 *v36; // rax
  _QWORD *v37; // [rsp+20h] [rbp-20h]
  __int64 v38; // [rsp+28h] [rbp-18h] BYREF
  __int64 *v39; // [rsp+30h] [rbp-10h]
  struct _VIDMM_GLOBAL_ALLOC *v40; // [rsp+80h] [rbp+40h]
  __int64 v41; // [rsp+90h] [rbp+50h]
  _QWORD *v42; // [rsp+98h] [rbp+58h]

  v41 = a3;
  v4 = (unsigned int)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
LABEL_3:
    a3 = v41;
  }
  v6 = (_QWORD *)(a1 + 136);
  v7 = *(_QWORD **)(a1 + 136);
  while ( v7 != v6 )
  {
    v8 = v7 - 3;
    v7 = (_QWORD *)*v7;
    v9 = (v4 >> 3) & 1;
    if ( !v9 || *v8 == a3 )
    {
      v37 = v8 + 5;
      v10 = (_QWORD *)v8[5];
      if ( (_QWORD *)*v37 != v37 )
      {
        do
        {
          v11 = v10;
          v10 = (_QWORD *)*v10;
          v42 = v11 + 2;
          v12 = (_QWORD *)v11[2];
          if ( (_QWORD *)*v42 != v42 )
          {
            while ( 1 )
            {
              v13 = (__int64)(v12 - 7);
              v12 = (_QWORD *)*v12;
              v40 = **(struct _VIDMM_GLOBAL_ALLOC ***)v13;
              v14 = **((unsigned int **)v40 + 63);
              if ( (v14 & 0x40000000) != 0 && (int)v14 >= 0 && !v9 )
              {
                v15 = WdLogNewEntry5_WdWarning(v14, a2);
                *(_QWORD *)(v15 + 24) = v13;
                WdLogEvent5_WdWarning(v15);
                if ( VIDMM_GLOBAL::InvalidateOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (DXGFASTMUTEX **)v40) )
                  goto LABEL_3;
              }
              if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
                goto LABEL_18;
              if ( !v9 )
                break;
              v16 = WdLogNewEntry5_WdError(v14, a2, a3, a4);
              *(_QWORD *)(v16 + 24) = v13;
              WdLogEvent5_WdError(v16);
LABEL_22:
              if ( v12 == v42 )
                goto LABEL_23;
            }
            VIDMM_GLOBAL::UnpinOneAllocation(*(struct VIDMM_ALLOC ***)(a1 + 8), v13, 3LL, 0);
LABEL_18:
            a2 = v40;
            if ( (**((_DWORD **)v40 + 63) & 0x10000000) == 0
              && (*((_DWORD *)v40 + 19) & 0x100) == 0
              && (*(_DWORD *)(v13 + 28) & 3) != 0 )
            {
              VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (VIDMM_DEVICE **)v13);
            }
            goto LABEL_22;
          }
LABEL_23:
          ;
        }
        while ( v10 != v37 );
        a3 = v41;
        v6 = (_QWORD *)(a1 + 136);
      }
    }
  }
  v17 = &v38;
  v39 = &v38;
  v38 = (__int64)&v38;
  v18 = (__int64 **)(a1 + 160);
  while ( 1 )
  {
    v19 = *v18;
    if ( *v18 == (__int64 *)v18 )
      break;
    v20 = (__int64)(v19 - 48);
    if ( (*(_DWORD *)v19[15] & 0x10000000) == 0
      && (*(_DWORD *)(v20 + 76) & 0x100) == 0
      && ((v4 & 4) == 0 || *(_QWORD *)(v20 + 16) + *(_QWORD *)(v20 + 144) > *(_QWORD *)(a1 + 128))
      && !*(_DWORD *)(v20 + 160) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v20, v4, a4);
      v17 = v39;
    }
    v21 = (__int64 *)*v19;
    if ( *v19 )
    {
      if ( (__int64 *)v21[1] != v19 || (v22 = (__int64 **)v19[1], *v22 != v19) )
        __fastfail(3u);
      *v22 = v21;
      v21[1] = (__int64)v22;
      v23 = v39;
      if ( (__int64 *)*v39 != &v38 )
        __fastfail(3u);
      v19[1] = (__int64)v39;
      *v19 = (__int64)&v38;
      v17 = v19;
      *v23 = (__int64)v19;
      v39 = v19;
    }
  }
  if ( (__int64 *)v38 != &v38 )
  {
    v24 = *(__int64 **)(a1 + 168);
    if ( (__int64 **)v19[1] != v18 || (__int64 **)*v24 != v18 )
      __fastfail(3u);
    if ( *(__int64 **)(v38 + 8) != &v38 || (__int64 *)*v17 != &v38 )
      __fastfail(3u);
    *v24 = (__int64)&v38;
    v25 = v39;
    *(_QWORD *)(a1 + 168) = v39;
    *v25 = (__int64)v18;
    v26 = v38;
    v39 = v24;
    if ( *(__int64 **)(v38 + 8) != &v38 || (__int64 *)*v24 != &v38 )
      __fastfail(3u);
    *v24 = v38;
    *(_QWORD *)(v26 + 8) = v24;
  }
  v27 = &v38;
  v39 = &v38;
  v38 = (__int64)&v38;
  v28 = (__int64 **)(a1 + 176);
  while ( 1 )
  {
    v29 = *v28;
    if ( *v28 == (__int64 *)v28 )
      break;
    v30 = (__int64)(v29 - 48);
    if ( (*(_DWORD *)v29[15] & 0x10000000) == 0
      && (*(_DWORD *)(v30 + 76) & 0x100) == 0
      && ((v4 & 4) == 0
       || (*(_DWORD *)(a1 + 80) & 0x200) == 0
       || *(_QWORD *)(v30 + 16) + *(_QWORD *)(v30 + 144) > *(_QWORD *)(a1 + 128))
      && !*(_DWORD *)(v30 + 160) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v30, v4, a4);
      v27 = v39;
    }
    v31 = (__int64 *)*v29;
    if ( *v29 )
    {
      if ( (__int64 *)v31[1] != v29 || (v32 = (__int64 **)v29[1], *v32 != v29) )
        __fastfail(3u);
      *v32 = v31;
      v31[1] = (__int64)v32;
      v33 = v39;
      if ( (__int64 *)*v39 != &v38 )
        __fastfail(3u);
      v29[1] = (__int64)v39;
      *v29 = (__int64)&v38;
      v27 = v29;
      *v33 = (__int64)v29;
      v39 = v29;
    }
  }
  result = v38;
  if ( (__int64 *)v38 != &v38 )
  {
    v35 = *(__int64 **)(a1 + 184);
    if ( (__int64 **)v29[1] != v28 || (__int64 **)*v35 != v28 )
      __fastfail(3u);
    if ( *(__int64 **)(v38 + 8) != &v38 || (__int64 *)*v27 != &v38 )
      __fastfail(3u);
    *v35 = (__int64)&v38;
    v36 = v39;
    *(_QWORD *)(a1 + 184) = v39;
    *v36 = (__int64)v28;
    result = v38;
    v39 = v35;
    if ( *(__int64 **)(v38 + 8) != &v38 || (__int64 *)*v35 != &v38 )
      __fastfail(3u);
    *v35 = v38;
    *(_QWORD *)(result + 8) = v35;
  }
  return result;
}
