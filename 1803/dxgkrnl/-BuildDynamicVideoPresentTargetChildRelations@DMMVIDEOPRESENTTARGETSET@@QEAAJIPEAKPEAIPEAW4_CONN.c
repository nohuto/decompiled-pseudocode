/*
 * XREFs of ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02213AC
 * Callers:
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C021DEB4 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _lambda_06c7fb13e4115b68176da9e8404c9d66_::operator() @ 0x1C022112C (_lambda_06c7fb13e4115b68176da9e8404c9d66_--operator().c)
 *     _lambda_9913d0abb7c2ea8d45a858df1e180213_::operator() @ 0x1C0221184 (_lambda_9913d0abb7c2ea8d45a858df1e180213_--operator().c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::BuildDynamicVideoPresentTargetChildRelations(
        DMMVIDEOPRESENTTARGETSET *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a5)
{
  unsigned int v5; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // r8d
  unsigned int *v25; // r9
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // r15d
  __int64 v29; // r10
  unsigned int v30; // eax
  __int64 v31; // rcx
  struct DMMVIDEOPRESENTTARGET *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // edi
  _QWORD *v37; // rdi
  _QWORD *v38; // rbx
  int v39; // esi
  unsigned int v40; // esi
  unsigned int v41; // eax
  __int64 v42; // rax
  unsigned int v43; // ecx
  __int64 v44; // rdx
  unsigned int *v45; // r9
  int v46; // r8d
  __int64 v47; // rax
  unsigned int v48; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v49; // [rsp+24h] [rbp-4Ch] BYREF
  unsigned int v50; // [rsp+28h] [rbp-48h] BYREF
  unsigned int *v51[3]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v52[5]; // [rsp+48h] [rbp-28h] BYREF
  char v53; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int *v54; // [rsp+B8h] [rbp+48h] BYREF

  v54 = a4;
  v5 = *a3;
  v49 = 0;
  v8 = a2;
  v50 = v5;
  v48 = v5;
  if ( v5 < 2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v8);
  if ( !TargetById )
  {
    *(_DWORD *)a5 = 1;
    v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11);
    v13[3] = v8;
    v14 = *((_QWORD *)this + 11);
    v15 = *(_QWORD *)(v14 + 8);
    if ( !v15 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v16);
      v15 = *(_QWORD *)(v14 + 8);
    }
    v17 = *(_QWORD *)(v15 + 16);
    v13[6] = 1LL;
LABEL_7:
    v13[5] = -1073741811LL;
    v13[4] = v17;
    WdLogEvent5_WdAssertion(v13);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 56) )
  {
    *(_DWORD *)a5 = 5;
    v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11);
    v13[3] = v8;
    v20 = *((_QWORD *)this + 11);
    v21 = *(_QWORD *)(v20 + 8);
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v22);
      v21 = *(_QWORD *)(v20 + 8);
    }
    v17 = *(_QWORD *)(v21 + 16);
    v13[6] = 2LL;
    goto LABEL_7;
  }
  v52[0] = &v49;
  v52[1] = &v53;
  v52[2] = &v54;
  v52[3] = &v48;
  v52[4] = &v50;
  v51[0] = &v48;
  v51[1] = &v49;
  v51[2] = (unsigned int *)&v54;
  lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(v51, v8 | 0x80000000);
  v23 = v48;
  v24 = v50;
  if ( v48 >= v50 )
  {
    v43 = v49;
  }
  else
  {
    do
    {
      v25 = v54;
      v26 = v24 - 1;
      v27 = v24 - 2;
      v28 = v54[v26];
      if ( (unsigned int)v27 >= v23 )
      {
        v29 = (unsigned int)(v27 + 1);
        while ( 1 )
        {
          v30 = v25[v27];
          v27 = (unsigned int)(v27 - 1);
          v25[v29] = v30;
          v29 = (unsigned int)(v29 - 1);
          v23 = v48;
          if ( (unsigned int)v27 < v48 )
            break;
          v25 = v54;
        }
      }
      v48 = v23 + 1;
      v32 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v28 & 0x7FFFFFFF);
      if ( !v32 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v31);
        WdLogEvent5_WdAssertion(v33);
      }
      if ( !*((_QWORD *)v32 + 56) && v28 < 0 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v31);
        WdLogEvent5_WdAssertion(v34);
      }
      v35 = *((_QWORD *)v32 + 63);
      if ( v35 )
      {
        v36 = *(_DWORD *)(v35 + 24);
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v52, v36) )
          lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(v51, v36);
      }
      v37 = (_QWORD *)((char *)v32 + 416);
      v38 = (_QWORD *)*((_QWORD *)v32 + 52);
      while ( v38 != v37 )
      {
        v39 = *((_DWORD *)v38 - 102);
        v38 = (_QWORD *)*v38;
        v40 = v39 | 0x80000000;
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v52, v40) )
          lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(v51, v40);
      }
      v41 = v49;
      if ( v49 >= v48 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v31);
        WdLogEvent5_WdAssertion(v42);
        v41 = v49;
      }
      v54[v41] = v28;
      v23 = v48;
      v43 = v49 + 1;
      v24 = v50;
      ++v49;
    }
    while ( v48 < v50 );
  }
  *a3 = 0;
  v44 = 0LL;
  if ( v43 )
  {
    v45 = v54;
    do
    {
      v46 = v45[v44];
      if ( v46 < 0 )
      {
        v47 = *a3;
        v45[v47] = v46 & 0x7FFFFFFF;
        v45 = v54;
        v43 = v49;
        *a3 = v47 + 1;
      }
      v44 = (unsigned int)(v44 + 1);
    }
    while ( (unsigned int)v44 < v43 );
  }
  return 0LL;
}
