/*
 * XREFs of ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C006F5EC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0056F40 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C006DF40 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0073594 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00949F8 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 */

__int64 *__fastcall VIDMM_SEGMENT::PurgeContent(__int64 a1, struct _VIDMM_GLOBAL_ALLOC *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD *v6; // rcx
  _QWORD *v7; // r15
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  _QWORD **v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 *v14; // r8
  __int64 **v15; // rsi
  __int64 *v16; // rdi
  __int64 *v17; // rdx
  __int64 *v18; // rax
  __int64 **v19; // rcx
  __int64 *v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 *v24; // r8
  __int64 **v25; // rsi
  __int64 *v26; // rdi
  __int64 *result; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rdx
  __int64 *v31; // rax
  __int64 **v32; // rcx
  __int64 *v33; // rax
  __int64 *v34; // rcx
  __int64 *v35; // rax
  _QWORD *v36; // [rsp+20h] [rbp-20h]
  __int64 v37; // [rsp+28h] [rbp-18h] BYREF
  __int64 *v38; // [rsp+30h] [rbp-10h]
  struct _VIDMM_GLOBAL_ALLOC *v39; // [rsp+80h] [rbp+40h]
  __int64 v40; // [rsp+90h] [rbp+50h]
  _QWORD *v41; // [rsp+98h] [rbp+58h]

  v40 = a3;
  v4 = (unsigned int)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
LABEL_37:
    a3 = v40;
  }
  v6 = (_QWORD *)(a1 + 160);
  v7 = *(_QWORD **)(a1 + 160);
  while ( v7 != v6 )
  {
    v8 = v7 - 3;
    v7 = (_QWORD *)*v7;
    if ( (v4 & 8) == 0 || *v8 == a3 )
    {
      v36 = v8 + 5;
      v9 = (_QWORD *)v8[5];
      if ( (_QWORD *)*v36 != v36 )
      {
        do
        {
          v10 = (_QWORD **)(v9 + 2);
          v9 = (_QWORD *)*v9;
          v11 = *v10;
          v41 = v10;
          if ( *v10 != v10 )
          {
            while ( 1 )
            {
              v12 = (__int64)(v11 - 7);
              v11 = (_QWORD *)*v11;
              v39 = **(struct _VIDMM_GLOBAL_ALLOC ***)v12;
              v13 = **((unsigned int **)v39 + 65);
              if ( (v13 & 0x40000000) != 0 && (unsigned int)v13 < 0x80000000 && (v4 & 8) == 0 )
              {
                v28 = WdLogNewEntry5_WdWarning(v13, a2);
                *(_QWORD *)(v28 + 24) = v12;
                WdLogEvent5_WdWarning(v28);
                if ( VIDMM_GLOBAL::InvalidateOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v39) )
                  goto LABEL_37;
              }
              if ( (*(_BYTE *)(v12 + 25) & 1) == 0 )
                goto LABEL_9;
              if ( (v4 & 8) == 0 )
                break;
              v29 = WdLogNewEntry5_WdError(v13, a2, a3, a4);
              *(_QWORD *)(v29 + 24) = v12;
              WdLogEvent5_WdError(v29);
LABEL_11:
              if ( v11 == v41 )
                goto LABEL_12;
            }
            VIDMM_GLOBAL::UnpinOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v12, 3LL, 0);
LABEL_9:
            a2 = v39;
            if ( (**((_DWORD **)v39 + 65) & 0x10000000) == 0
              && (*((_DWORD *)v39 + 19) & 0x100) == 0
              && (*(_DWORD *)(v12 + 28) & 3) != 0 )
            {
              VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (VIDMM_DEVICE **)v12);
            }
            goto LABEL_11;
          }
LABEL_12:
          ;
        }
        while ( v9 != v36 );
        a3 = v40;
        v6 = (_QWORD *)(a1 + 160);
      }
    }
  }
  v14 = &v37;
  v38 = &v37;
  v37 = (__int64)&v37;
  v15 = (__int64 **)(a1 + 184);
  while ( 1 )
  {
    v16 = *v15;
    if ( *v15 == (__int64 *)v15 )
      break;
    v17 = v16 - 52;
    if ( (*(_DWORD *)v16[13] & 0x10000000) == 0
      && (*((_DWORD *)v17 + 19) & 0x100) == 0
      && ((v4 & 4) == 0 || (unsigned __int64)(v17[2] + v17[18]) > *(_QWORD *)(a1 + 152))
      && !*((_DWORD *)v17 + 40) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(_QWORD *)(a1 + 8), v17, v4);
      v14 = v38;
    }
    v18 = (__int64 *)*v16;
    if ( *v16 )
    {
      v19 = (__int64 **)v16[1];
      if ( (__int64 *)v18[1] != v16 || *v19 != v16 )
        __fastfail(3u);
      *v19 = v18;
      v18[1] = (__int64)v19;
      v20 = v38;
      if ( (__int64 *)*v38 != &v37 )
        __fastfail(3u);
      v16[1] = (__int64)v38;
      *v16 = (__int64)&v37;
      v14 = v16;
      *v20 = (__int64)v16;
      v38 = v16;
    }
  }
  if ( (__int64 *)v37 != &v37 )
  {
    v21 = *(__int64 **)(a1 + 192);
    if ( (__int64 **)v16[1] != v15 || (__int64 **)*v21 != v15 )
      __fastfail(3u);
    if ( *(__int64 **)(v37 + 8) != &v37 || (__int64 *)*v14 != &v37 )
      __fastfail(3u);
    *v21 = (__int64)&v37;
    v22 = v38;
    *(_QWORD *)(a1 + 192) = v38;
    *v22 = (__int64)v15;
    v23 = v37;
    v38 = v21;
    if ( *(__int64 **)(v37 + 8) != &v37 || (__int64 *)*v21 != &v37 )
      __fastfail(3u);
    *v21 = v37;
    *(_QWORD *)(v23 + 8) = v21;
  }
  v24 = &v37;
  v38 = &v37;
  v37 = (__int64)&v37;
  v25 = (__int64 **)(a1 + 200);
  while ( 1 )
  {
    v26 = *v25;
    if ( *v25 == (__int64 *)v25 )
      break;
    v30 = v26 - 52;
    if ( (*(_DWORD *)v26[13] & 0x10000000) == 0
      && (*((_DWORD *)v30 + 19) & 0x100) == 0
      && ((v4 & 4) == 0
       || (*(_DWORD *)(a1 + 80) & 0x200) == 0
       || (unsigned __int64)(v30[2] + v30[18]) > *(_QWORD *)(a1 + 152))
      && !*((_DWORD *)v30 + 40) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(_QWORD *)(a1 + 8), v30, v4);
      v24 = v38;
    }
    v31 = (__int64 *)*v26;
    if ( *v26 )
    {
      v32 = (__int64 **)v26[1];
      if ( (__int64 *)v31[1] != v26 || *v32 != v26 )
        __fastfail(3u);
      *v32 = v31;
      v31[1] = (__int64)v32;
      v33 = v38;
      if ( (__int64 *)*v38 != &v37 )
        __fastfail(3u);
      v26[1] = (__int64)v38;
      *v26 = (__int64)&v37;
      v24 = v26;
      *v33 = (__int64)v26;
      v38 = v26;
    }
  }
  result = &v37;
  if ( (__int64 *)v37 != &v37 )
  {
    v34 = *(__int64 **)(a1 + 208);
    if ( (__int64 **)v26[1] != v25 || (__int64 **)*v34 != v25 )
      __fastfail(3u);
    if ( *(__int64 **)(v37 + 8) != &v37 || (__int64 *)*v24 != &v37 )
      __fastfail(3u);
    *v34 = (__int64)&v37;
    v35 = v38;
    *(_QWORD *)(a1 + 208) = v38;
    *v35 = (__int64)v25;
    result = (__int64 *)v37;
    v38 = v34;
    if ( *(__int64 **)(v37 + 8) != &v37 || (__int64 *)*v34 != &v37 )
      __fastfail(3u);
    *v34 = v37;
    result[1] = (__int64)v34;
  }
  return result;
}
