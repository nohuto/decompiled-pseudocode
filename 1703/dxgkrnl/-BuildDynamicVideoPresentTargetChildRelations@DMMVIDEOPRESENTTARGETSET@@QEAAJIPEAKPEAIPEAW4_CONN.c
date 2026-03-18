/*
 * XREFs of ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01DBFA0
 * Callers:
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01D9284 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _lambda_06c7fb13e4115b68176da9e8404c9d66_::operator() @ 0x1C01DBEAC (_lambda_06c7fb13e4115b68176da9e8404c9d66_--operator().c)
 *     _lambda_9913d0abb7c2ea8d45a858df1e180213_::operator() @ 0x1C01DBEFC (_lambda_9913d0abb7c2ea8d45a858df1e180213_--operator().c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::BuildDynamicVideoPresentTargetChildRelations(
        DMMVIDEOPRESENTTARGETSET *this,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a5)
{
  unsigned int v5; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // r8d
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // r12d
  __int64 v36; // r10
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct DMMVIDEOPRESENTTARGET *v41; // rbx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int v47; // edi
  _QWORD *v48; // rdi
  _QWORD *v49; // rbx
  int v50; // esi
  unsigned int v51; // esi
  unsigned int v52; // eax
  __int64 v53; // rax
  unsigned int v54; // ecx
  __int64 v55; // rdx
  unsigned int *v56; // r9
  int v57; // r8d
  __int64 v58; // rax
  unsigned int v59; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v60; // [rsp+24h] [rbp-4Ch] BYREF
  unsigned int v61; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v62[3]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v63[5]; // [rsp+48h] [rbp-28h] BYREF
  char v64; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int *v65; // [rsp+B8h] [rbp+48h] BYREF

  v65 = a4;
  v5 = *a3;
  v60 = 0;
  v8 = (unsigned int)a2;
  v61 = v5;
  v59 = v5;
  if ( v5 < 2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, (unsigned int)v8, (__int64)a3, (__int64)a4);
  if ( !TargetById )
  {
    *(_DWORD *)a5 = 1;
    v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    v17[3] = v8;
    v20 = *((_QWORD *)this + 11);
    if ( !*(_QWORD *)(v20 + 8) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
      WdLogEvent5_WdAssertion(v21);
    }
    v22 = *(_QWORD *)(*(_QWORD *)(v20 + 8) + 16LL);
    v17[6] = 1LL;
LABEL_7:
    v17[5] = -1073741811LL;
    v17[4] = v22;
    WdLogEvent5_WdAssertion(v17);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 56) )
  {
    *(_DWORD *)a5 = 5;
    v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    v17[3] = v8;
    v28 = *((_QWORD *)this + 11);
    if ( !*(_QWORD *)(v28 + 8) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
      WdLogEvent5_WdAssertion(v29);
    }
    v22 = *(_QWORD *)(*(_QWORD *)(v28 + 8) + 16LL);
    v17[6] = 2LL;
    goto LABEL_7;
  }
  v63[0] = &v60;
  v63[1] = &v64;
  v63[2] = &v65;
  v63[3] = &v59;
  v63[4] = &v61;
  v62[0] = &v59;
  v62[1] = &v60;
  v62[2] = &v65;
  lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()((__int64)v62, (unsigned int)v8 | 0x80000000, v13, v14);
  v30 = v59;
  v31 = v61;
  if ( v59 >= v61 )
  {
    v54 = v60;
  }
  else
  {
    do
    {
      v32 = (__int64)v65;
      v33 = v31 - 1;
      v34 = v31 - 2;
      v35 = v65[v33];
      if ( (unsigned int)v34 >= v30 )
      {
        v36 = (unsigned int)(v34 + 1);
        while ( 1 )
        {
          v37 = *(_DWORD *)(v32 + 4 * v34);
          v34 = (unsigned int)(v34 - 1);
          *(_DWORD *)(v32 + 4 * v36) = v37;
          v36 = (unsigned int)(v36 - 1);
          v30 = v59;
          if ( (unsigned int)v34 < v59 )
            break;
          v32 = (__int64)v65;
        }
      }
      v59 = v30 + 1;
      v38 = (unsigned int)v35;
      LODWORD(v38) = v35 & 0x7FFFFFFF;
      v41 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v38, v34, v32);
      if ( !v41 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v40, v39, v42, v43);
        WdLogEvent5_WdAssertion(v44);
      }
      if ( !*((_QWORD *)v41 + 56) && v35 < 0 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v40, v39, v42, v43);
        WdLogEvent5_WdAssertion(v45);
      }
      v46 = *((_QWORD *)v41 + 63);
      if ( v46 )
      {
        v47 = *(_DWORD *)(v46 + 24);
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v63, v47) )
          lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()((__int64)v62, v47, v42, v43);
      }
      v48 = (_QWORD *)((char *)v41 + 416);
      v49 = (_QWORD *)*((_QWORD *)v41 + 52);
      while ( v49 != v48 )
      {
        v50 = *((_DWORD *)v49 - 102);
        v49 = (_QWORD *)*v49;
        v51 = v50 | 0x80000000;
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v63, v51) )
          lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()((__int64)v62, v51, v42, v43);
      }
      v52 = v60;
      if ( v60 >= v59 )
      {
        v53 = WdLogNewEntry5_WdAssertion(v40, v39, v42, v43);
        WdLogEvent5_WdAssertion(v53);
        v52 = v60;
      }
      v65[v52] = v35;
      v30 = v59;
      v54 = v60 + 1;
      v31 = v61;
      ++v60;
    }
    while ( v59 < v61 );
  }
  *a3 = 0;
  v55 = 0LL;
  if ( v54 )
  {
    v56 = v65;
    do
    {
      v57 = v56[v55];
      if ( v57 < 0 )
      {
        v58 = *a3;
        v56[v58] = v57 & 0x7FFFFFFF;
        v56 = v65;
        v54 = v60;
        *a3 = v58 + 1;
      }
      v55 = (unsigned int)(v55 + 1);
    }
    while ( (unsigned int)v55 < v54 );
  }
  return 0LL;
}
