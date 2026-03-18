/*
 * XREFs of ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C00A4D84
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00A4C90 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C00A5284 (-AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgetsWithinBand(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        int a4,
        unsigned __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  __int64 v10; // r11
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r14
  _QWORD **v15; // r9
  _QWORD *v16; // r10
  __int64 v17; // r11
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  _QWORD **v22; // r15
  unsigned int *v23; // r11
  __int64 v24; // r8
  __int64 v25; // r13
  unsigned __int64 v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // rsi
  __int64 v29; // rcx
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r10
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // r10
  __int64 v36; // rcx
  _QWORD *v37; // r10
  unsigned int *v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rsi
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  unsigned __int64 *v44; // rdx
  __int64 v45; // r10
  __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  _QWORD *v48; // rcx
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  __int64 i; // rax
  unsigned __int64 v52; // rcx
  unsigned __int64 *v53; // r9
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  _QWORD *v56; // rsi
  _QWORD *v57; // rbx
  VIDMM_GLOBAL *v58; // r14
  unsigned int v59; // [rsp+30h] [rbp-51h]
  unsigned __int64 v61; // [rsp+38h] [rbp-49h]
  unsigned __int64 v62; // [rsp+40h] [rbp-41h]
  __int64 v63; // [rsp+48h] [rbp-39h]
  VIDMM_GLOBAL *v64; // [rsp+50h] [rbp-31h]
  unsigned __int64 v65[3]; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v66[3]; // [rsp+70h] [rbp-11h] BYREF

  v6 = a4;
  v7 = *(unsigned int *)(a2 + 276);
  v64 = a1;
  v8 = *((_QWORD *)a1 + 5150) + 280 * v7;
  v9 = *(unsigned int *)(a2 + 4LL * a4 + 264);
  v10 = a3;
  v63 = v8;
  v59 = v9;
  if ( (_DWORD)v9 )
  {
    v14 = 16LL * a4;
    memset(v66, 0, sizeof(v66));
    v15 = (_QWORD **)(v14 + a2);
    v16 = *(_QWORD **)(v14 + a2);
    if ( *v15 != v15 )
    {
      v17 = (int)a3 + 33 * v7;
      do
      {
        v18 = *((int *)v16 - 4);
        v19 = *(v16 - 40);
        v16 = (_QWORD *)*v16;
        v20 = *(_QWORD *)(v19 + 8 * v17 + 184);
        if ( v66[v18] > v20 )
          v20 = v66[v18];
        v66[v18] = v20;
      }
      while ( v16 != v15 );
      v9 = (unsigned int)v9;
    }
    v21 = a5;
    v22 = (_QWORD **)(v14 + a2);
    v62 = a5;
    memset(v65, 255, sizeof(v65));
    v23 = dword_1C0031408;
    v24 = 3LL;
    while ( 1 )
    {
      v25 = 0LL;
      v26 = v21 / v9;
      v27 = *v22;
      v61 = v26;
      if ( *v22 == v15 )
        break;
      do
      {
        v28 = v27 - 46;
        v29 = *((int *)v27 - 4);
        v27 = (_QWORD *)*v27;
        v30 = v26 * dword_1C0031408[v29];
        v22 = (_QWORD **)(v14 + a2);
        v31 = *(_QWORD *)(v28[6] + 8 * ((int)a3 + 33LL * *(unsigned int *)(a2 + 276)) + 184);
        if ( v31 <= v30 )
        {
          v62 -= v31;
          v32 = v30 - v31;
          v59 -= dword_1C0031408[v29];
          v33 = v28 + 46;
          v34 = (_QWORD *)v28[47];
          v25 += v32;
          v35 = v28[46];
          if ( *(_QWORD **)(v35 + 8) != v28 + 46 || (_QWORD *)*v34 != v33 )
            __fastfail(3u);
          *v34 = v35;
          *(_QWORD *)(v35 + 8) = v34;
          v36 = a2 + 16 * (v6 + 3);
          v37 = *(_QWORD **)(v36 + 8);
          if ( *v37 != v36 )
            __fastfail(3u);
          *v33 = v36;
          v28[47] = v37;
          *v37 = v33;
          *(_QWORD *)(v36 + 8) = v33;
        }
        v26 = v61;
      }
      while ( v27 != v15 );
      if ( !v25 )
        break;
      v38 = dword_1C0031408;
      v39 = 0LL;
      v40 = 3LL;
      do
      {
        v41 = v66[v39++];
        v42 = *v38++;
        v43 = v61 * v42;
        if ( v41 < v43 )
          v43 = v41;
        v65[v39 - 1] = v43 + v25;
        --v40;
      }
      while ( v40 );
      if ( *v22 == v22 )
        goto LABEL_42;
      v21 = v62;
      v9 = v59;
    }
    v44 = v65;
    v45 = 3LL;
    do
    {
      v46 = *v23++;
      v47 = v26 * v46;
      v26 = v61;
      if ( *v44 < v47 )
        v47 = *v44;
      *v44++ = v47;
      --v45;
    }
    while ( v45 );
    if ( *v15 != v15 )
    {
      v48 = (_QWORD *)(a2 + 16 * (v6 + 3));
      v49 = (_QWORD *)v48[1];
      if ( *(_QWORD **)(*v48 + 8LL) != v48 || (_QWORD *)*v49 != v48 )
        __fastfail(3u);
      if ( (_QWORD **)(*v15)[1] != v15 || (_QWORD **)*v15[1] != v15 )
        __fastfail(3u);
      *v49 = v15;
      v48[1] = v15[1];
      *v15[1] = v48;
      v15[1] = v49;
      v50 = (__int64)*v15;
      if ( (_QWORD **)(*v15)[1] != v15 || (_QWORD **)*v49 != v15 )
        __fastfail(3u);
      *v49 = v50;
      *(_QWORD *)(v50 + 8) = v49;
      v15[1] = v15;
      *v15 = v15;
    }
LABEL_42:
    for ( i = 1LL; i < 3; ++i )
    {
      v52 = v65[i - 1];
      if ( v52 > v65[i] )
        v65[i] = v52;
    }
    v53 = v65;
    v54 = 24 * ((int)a3 + v6 + 2LL * (int)a3);
    do
    {
      v55 = *(_QWORD *)(v63 + 8LL * (int)a3 + 64);
      v54 += 8LL;
      if ( *v53 < v55 )
        v55 = *v53;
      ++v53;
      *(_QWORD *)(v63 + v54 + 88) = v55;
      --v24;
    }
    while ( v24 );
    v56 = (_QWORD *)(v14 + a2 + 48);
    v57 = *(_QWORD **)(a2 + 16 * (v6 + 3));
    if ( v57 != v56 )
    {
      v58 = v64;
      do
      {
        VIDMM_GLOBAL::AssignProcessBudget(
          v58,
          (struct VIDMM_BUDGET_STATE *)a2,
          a3,
          (struct VIDMM_PROCESS_ADAPTER_INFO *)(v57 - 46),
          v65[*((int *)v57 - 4)]);
        v57 = (_QWORD *)*v57;
      }
      while ( v57 != v56 );
    }
  }
  else
  {
    v11 = a5;
    v12 = 3LL;
    if ( a5 >= *(_QWORD *)(v8 + 8 * v10 + 64) )
      v11 = *(_QWORD *)(v8 + 8 * v10 + 64);
    v13 = 24 * (v10 + a4 + 2 * v10);
    do
    {
      *(_QWORD *)(v13 + v8 + 96) = v11;
      v13 += 8LL;
      --v12;
    }
    while ( v12 );
  }
}
