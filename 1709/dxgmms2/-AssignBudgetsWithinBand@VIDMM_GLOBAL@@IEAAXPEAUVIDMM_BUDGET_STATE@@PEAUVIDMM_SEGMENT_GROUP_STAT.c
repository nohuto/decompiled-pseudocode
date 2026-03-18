/*
 * XREFs of ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C00AD450
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00AD1FC (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C00AD914 (-AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@P.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgetsWithinBand(
        VIDMM_GLOBAL *a1,
        struct VIDMM_BUDGET_STATE *a2,
        int *a3,
        int a4,
        unsigned __int64 a5)
{
  __int64 v5; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  int *v13; // r9
  __int64 v14; // r14
  _QWORD *v15; // r11
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  int *v22; // r15
  unsigned int *v23; // rdi
  _QWORD *v24; // r11
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rtt
  __int64 v27; // r12
  _QWORD *v28; // rsi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  int **v32; // rax
  __int64 v33; // rdx
  int ***v34; // rcx
  int *v35; // rcx
  int **v36; // rdx
  unsigned int *v37; // r11
  __int64 v38; // rdx
  __int64 v39; // rsi
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 *v43; // rdx
  __int64 v44; // r11
  __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  int *v47; // rcx
  int **v48; // rdx
  int *v49; // rcx
  __int64 i; // rax
  unsigned __int64 v51; // rcx
  __int64 v52; // rdx
  unsigned __int64 *v53; // r9
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  int *v56; // rsi
  _QWORD *v57; // rdi
  VIDMM_GLOBAL *v58; // r14
  unsigned int v59; // [rsp+30h] [rbp-61h]
  unsigned __int64 v60; // [rsp+38h] [rbp-59h]
  unsigned __int64 v61; // [rsp+40h] [rbp-51h]
  VIDMM_GLOBAL *v63; // [rsp+58h] [rbp-39h]
  unsigned __int64 v64[3]; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v65[3]; // [rsp+78h] [rbp-19h] BYREF

  v5 = a4;
  v63 = a1;
  v7 = (unsigned int)a3[a4 + 77];
  v59 = v7;
  if ( (_DWORD)v7 )
  {
    v12 = a4 + 8LL;
    memset(v65, 0, sizeof(v65));
    v13 = &a3[4 * v12];
    v14 = (__int64)&a3[4 * v5 + 32];
    v15 = *(_QWORD **)v13;
    if ( *(_QWORD *)v13 != v14 )
    {
      v16 = *a3 + 37LL * *(unsigned int *)a2;
      do
      {
        v17 = *((int *)v15 - 4);
        v18 = *(v15 - 44);
        v15 = (_QWORD *)*v15;
        v19 = *(_QWORD *)(v18 + 8 * v16 + 184);
        if ( v65[v17] > v19 )
          v19 = v65[v17];
        v65[v17] = v19;
      }
      while ( v15 != (_QWORD *)v14 );
      v7 = (unsigned int)v7;
    }
    v20 = a5;
    v61 = a5;
    memset(v64, 255, sizeof(v64));
    v21 = 3LL;
    v22 = &a3[4 * v12];
    v23 = dword_1C0034D48;
    while ( 1 )
    {
      v24 = *(_QWORD **)v22;
      v26 = v20;
      v25 = v20 / v7;
      v27 = 0LL;
      v60 = v26 / v7;
      if ( *(_QWORD *)v22 == v14 )
        break;
      do
      {
        v28 = v24 - 50;
        v24 = (_QWORD *)*v24;
        v29 = v25 * dword_1C0034D48[*((int *)v28 + 96)];
        v30 = *(_QWORD *)(v28[6] + 8 * (*a3 + 37LL * *(unsigned int *)a2) + 184);
        if ( v30 <= v29 )
        {
          v61 -= v30;
          v31 = v29 - v30;
          v59 -= dword_1C0034D48[*((int *)v28 + 96)];
          v32 = (int **)(v28 + 50);
          v27 += v31;
          v33 = v28[50];
          if ( *(_QWORD **)(v33 + 8) != v28 + 50 || (v34 = (int ***)v28[51], *v34 != v32) )
            __fastfail(3u);
          *v34 = (int **)v33;
          *(_QWORD *)(v33 + 8) = v34;
          v35 = &a3[4 * v5 + 44];
          v36 = (int **)*((_QWORD *)v35 + 1);
          if ( *v36 != v35 )
            __fastfail(3u);
          *v32 = v35;
          v28[51] = v36;
          *v36 = (int *)v32;
          *((_QWORD *)v35 + 1) = v32;
        }
        v25 = v60;
      }
      while ( v24 != (_QWORD *)v14 );
      if ( !v27 )
        break;
      v37 = dword_1C0034D48;
      v38 = 0LL;
      v39 = 3LL;
      do
      {
        v40 = v65[v38++];
        v41 = *v37++;
        v42 = v60 * v41;
        if ( v40 < v42 )
          v42 = v40;
        v64[v38 - 1] = v42 + v27;
        --v39;
      }
      while ( v39 );
      if ( *(int **)v22 == v22 )
        goto LABEL_42;
      v7 = v59;
      v20 = v61;
    }
    v43 = v64;
    v44 = 3LL;
    do
    {
      v45 = *v23++;
      v46 = v25 * v45;
      if ( *v43 < v46 )
        v46 = *v43;
      v25 = v60;
      *v43++ = v46;
      --v44;
    }
    while ( v44 );
    if ( *(int **)v13 != v13 )
    {
      v47 = &a3[4 * v5 + 44];
      v48 = (int **)*((_QWORD *)v47 + 1);
      if ( *(int **)(*(_QWORD *)v47 + 8LL) != v47 || *v48 != v47 )
        __fastfail(3u);
      if ( *(int **)(*(_QWORD *)v13 + 8LL) != v13 || **((int ***)v13 + 1) != v13 )
        __fastfail(3u);
      *v48 = v13;
      *((_QWORD *)v47 + 1) = *((_QWORD *)v13 + 1);
      **((_QWORD **)v13 + 1) = v47;
      *((_QWORD *)v13 + 1) = v48;
      v49 = *(int **)v13;
      if ( *(int **)(*(_QWORD *)v13 + 8LL) != v13 || *v48 != v13 )
        __fastfail(3u);
      *v48 = v49;
      *((_QWORD *)v49 + 1) = v48;
      *((_QWORD *)v13 + 1) = v13;
      *(_QWORD *)v13 = v13;
    }
LABEL_42:
    for ( i = 1LL; i < 3; ++i )
    {
      v51 = v64[i - 1];
      if ( v51 > v64[i] )
        v64[i] = v51;
    }
    v52 = 6 * v5;
    v53 = v64;
    do
    {
      v54 = *v53;
      v52 += 2LL;
      v55 = *((_QWORD *)a3 + 3);
      ++v53;
      if ( v54 < v55 )
        v55 = v54;
      *(_QWORD *)&a3[v52 + 8] = v55;
      --v21;
    }
    while ( v21 );
    v56 = &a3[4 * v5 + 44];
    v57 = *(_QWORD **)&a3[4 * v5 + 44];
    if ( v57 != (_QWORD *)v56 )
    {
      v58 = v63;
      do
      {
        VIDMM_GLOBAL::AssignProcessBudget(
          v58,
          a2,
          (struct VIDMM_SEGMENT_GROUP_STATE *)a3,
          (struct VIDMM_PROCESS_ADAPTER_INFO *)(v57 - 50),
          v64[*((int *)v57 - 4)]);
        v57 = (_QWORD *)*v57;
      }
      while ( v57 != (_QWORD *)v56 );
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
