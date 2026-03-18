/*
 * XREFs of ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C00B5D18
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00B5AC0 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C00B61CC (-AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@P.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgetsWithinBand(
        VIDMM_GLOBAL *a1,
        struct VIDMM_BUDGET_STATE *a2,
        int *a3,
        int a4,
        unsigned __int64 a5)
{
  __int64 v5; // r10
  unsigned int v7; // r15d
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  int *v12; // r9
  __int64 v13; // r14
  int **v14; // r11
  int **v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned int *v21; // rsi
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rtt
  __int64 v25; // r12
  int **v26; // rdx
  int **v27; // rdi
  __int64 v28; // rcx
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rdx
  int ***v31; // rax
  int *v32; // rax
  int **v33; // rcx
  unsigned int *v34; // r11
  __int64 v35; // rdx
  __int64 v36; // rdi
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 *v40; // rdx
  __int64 v41; // r11
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  int *v45; // rcx
  int **v46; // rdx
  int *v47; // rax
  __int64 i; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // r9
  unsigned __int64 *v51; // rdx
  unsigned __int64 v52; // rcx
  __int64 v53; // rsi
  _QWORD *v54; // rdi
  VIDMM_GLOBAL *v55; // r14
  unsigned int v56; // [rsp+30h] [rbp-61h]
  unsigned __int64 v57; // [rsp+38h] [rbp-59h]
  unsigned __int64 v58; // [rsp+40h] [rbp-51h]
  VIDMM_GLOBAL *v60; // [rsp+58h] [rbp-39h]
  unsigned __int64 v61[3]; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v62[3]; // [rsp+78h] [rbp-19h] BYREF

  v5 = a4;
  v60 = a1;
  v7 = a3[a4 + 77];
  v56 = v7;
  if ( v7 )
  {
    v12 = &a3[4 * a4 + 32];
    memset(v62, 0, sizeof(v62));
    v13 = (__int64)&a3[4 * v5 + 32];
    v14 = *(int ***)v12;
    v15 = *(int ***)v12;
    if ( *(_QWORD *)v12 != v13 )
    {
      v16 = *a3 + 37LL * *(unsigned int *)a2;
      do
      {
        v17 = *((int *)v15 - 4);
        v18 = (__int64)*(v15 - 44);
        v15 = (int **)*v15;
        v19 = v62[v17];
        if ( v19 <= *(_QWORD *)(v18 + 8 * v16 + 184) )
          v19 = *(_QWORD *)(v18 + 8 * v16 + 184);
        v62[v17] = v19;
      }
      while ( v15 != (int **)v13 );
    }
    v20 = a5;
    v21 = dword_1C003BDF8;
    v58 = a5;
    memset(v61, 255, sizeof(v61));
    v22 = 3LL;
    while ( 1 )
    {
      v24 = v20;
      v23 = v20 / v7;
      v25 = 0LL;
      v57 = v24 / v7;
      if ( v14 == (int **)v13 )
        break;
      do
      {
        v26 = v14 - 50;
        v27 = v14;
        v28 = *((int *)v14 - 4);
        v14 = (int **)*v14;
        v29 = v57 * dword_1C003BDF8[v28];
        v30 = *(_QWORD *)&v26[6][74 * *(unsigned int *)a2 + 46 + 2 * *a3];
        if ( v30 <= v29 )
        {
          v58 -= v30;
          v25 += v29 - v30;
          v56 -= dword_1C003BDF8[v28];
          if ( v14[1] != (int *)v27 || (v31 = (int ***)v27[1], *v31 != v27) )
            __fastfail(3u);
          *v31 = v14;
          v14[1] = (int *)v31;
          v32 = &a3[4 * v5 + 44];
          v33 = (int **)*((_QWORD *)v32 + 1);
          if ( *v33 != v32 )
            __fastfail(3u);
          *v27 = v32;
          v27[1] = (int *)v33;
          *v33 = (int *)v27;
          *((_QWORD *)v32 + 1) = v27;
        }
      }
      while ( v14 != (int **)v13 );
      if ( !v25 )
      {
        v23 = v57;
        break;
      }
      v34 = dword_1C003BDF8;
      v35 = 0LL;
      v36 = 3LL;
      do
      {
        v37 = v62[v35++];
        v38 = *v34++;
        v39 = v57 * v38;
        if ( v37 >= v39 )
          v37 = v39;
        v61[v35 - 1] = v25 + v37;
        --v36;
      }
      while ( v36 );
      v14 = *(int ***)v12;
      v7 = v56;
      if ( *(int **)v12 == v12 )
        goto LABEL_42;
      v20 = v58;
    }
    v40 = v61;
    v41 = 3LL;
    do
    {
      v42 = *v21++;
      v43 = v23 * v42;
      v44 = *v40;
      if ( *v40 >= v43 )
        v44 = v43;
      *v40++ = v44;
      v23 = v57;
      --v41;
    }
    while ( v41 );
    if ( *(int **)v12 != v12 )
    {
      v45 = &a3[4 * v5 + 44];
      v46 = (int **)*((_QWORD *)v45 + 1);
      if ( *(int **)(*(_QWORD *)v45 + 8LL) != v45 || *v46 != v45 )
        __fastfail(3u);
      if ( *(int **)(*(_QWORD *)v12 + 8LL) != v12 || **((int ***)v12 + 1) != v12 )
        __fastfail(3u);
      *v46 = v12;
      *((_QWORD *)v45 + 1) = *((_QWORD *)v12 + 1);
      **((_QWORD **)v12 + 1) = v45;
      *((_QWORD *)v12 + 1) = v46;
      v47 = *(int **)v12;
      if ( *(int **)(*(_QWORD *)v12 + 8LL) != v12 || *v46 != v12 )
        __fastfail(3u);
      *v46 = v47;
      *((_QWORD *)v47 + 1) = v46;
      *((_QWORD *)v12 + 1) = v12;
      *(_QWORD *)v12 = v12;
    }
LABEL_42:
    for ( i = 1LL; i < 3; ++i )
    {
      v49 = v61[i - 1];
      if ( v49 > v61[i] )
        v61[i] = v49;
    }
    v50 = 24 * v5 + 40;
    v51 = v61;
    do
    {
      v52 = *v51++;
      if ( v52 >= *((_QWORD *)a3 + 3) )
        v52 = *((_QWORD *)a3 + 3);
      *(_QWORD *)((char *)a3 + v50) = v52;
      v50 += 8LL;
      --v22;
    }
    while ( v22 );
    v53 = (__int64)&a3[4 * v5 + 44];
    v54 = *(_QWORD **)&a3[4 * v5 + 44];
    if ( v54 != (_QWORD *)v53 )
    {
      v55 = v60;
      do
      {
        VIDMM_GLOBAL::AssignProcessBudget(
          v55,
          a2,
          (struct VIDMM_SEGMENT_GROUP_STATE *)a3,
          (struct VIDMM_PROCESS_ADAPTER_INFO *)(v54 - 50),
          v61[*((int *)v54 - 4)]);
        v54 = (_QWORD *)*v54;
      }
      while ( v54 != (_QWORD *)v53 );
    }
  }
  else
  {
    v8 = *((_QWORD *)a3 + 3);
    v9 = 3LL;
    v10 = a5;
    if ( a5 >= v8 )
      v10 = v8;
    v11 = 6LL * a4;
    do
    {
      *(_QWORD *)&a3[v11 + 10] = v10;
      v11 += 2LL;
      --v9;
    }
    while ( v9 );
  }
}
