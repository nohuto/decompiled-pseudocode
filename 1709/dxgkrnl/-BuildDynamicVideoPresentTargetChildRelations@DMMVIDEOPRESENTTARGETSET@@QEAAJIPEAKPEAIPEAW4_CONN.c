/*
 * XREFs of ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01F48C8
 * Callers:
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01F2444 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _lambda_06c7fb13e4115b68176da9e8404c9d66_::operator() @ 0x1C01F47C4 (_lambda_06c7fb13e4115b68176da9e8404c9d66_--operator().c)
 *     _lambda_9913d0abb7c2ea8d45a858df1e180213_::operator() @ 0x1C01F4814 (_lambda_9913d0abb7c2ea8d45a858df1e180213_--operator().c)
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
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // r8d
  unsigned int *v23; // r9
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // r12d
  __int64 v27; // r10
  unsigned int v28; // eax
  __int64 v29; // rcx
  struct DMMVIDEOPRESENTTARGET *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // edi
  _QWORD *v35; // rdi
  _QWORD *v36; // rbx
  int v37; // esi
  unsigned int v38; // esi
  unsigned int v39; // eax
  __int64 v40; // rax
  unsigned int v41; // ecx
  __int64 v42; // rdx
  unsigned int *v43; // r9
  int v44; // r8d
  __int64 v45; // rax
  unsigned int v46; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v47; // [rsp+24h] [rbp-4Ch] BYREF
  unsigned int v48; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v49[3]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v50[5]; // [rsp+48h] [rbp-28h] BYREF
  char v51; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int *v52; // [rsp+B8h] [rbp+48h] BYREF

  v52 = a4;
  v5 = *a3;
  v47 = 0;
  v8 = a2;
  v48 = v5;
  v46 = v5;
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
    if ( !*(_QWORD *)(v14 + 8) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL);
    v13[6] = 1LL;
LABEL_7:
    v13[5] = -1073741811LL;
    v13[4] = v16;
    WdLogEvent5_WdAssertion(v13);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 56) )
  {
    *(_DWORD *)a5 = 5;
    v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11);
    v13[3] = v8;
    v19 = *((_QWORD *)this + 11);
    if ( !*(_QWORD *)(v19 + 8) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v20);
    }
    v16 = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL);
    v13[6] = 2LL;
    goto LABEL_7;
  }
  v50[0] = &v47;
  v50[1] = &v51;
  v50[2] = &v52;
  v50[3] = &v46;
  v50[4] = &v48;
  v49[0] = &v46;
  v49[1] = &v47;
  v49[2] = &v52;
  lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()((__int64)v49, v8 | 0x80000000);
  v21 = v46;
  v22 = v48;
  if ( v46 >= v48 )
  {
    v41 = v47;
  }
  else
  {
    do
    {
      v23 = v52;
      v24 = v22 - 1;
      v25 = v22 - 2;
      v26 = v52[v24];
      if ( (unsigned int)v25 >= v21 )
      {
        v27 = (unsigned int)(v25 + 1);
        while ( 1 )
        {
          v28 = v23[v25];
          v25 = (unsigned int)(v25 - 1);
          v23[v27] = v28;
          v27 = (unsigned int)(v27 - 1);
          v21 = v46;
          if ( (unsigned int)v25 < v46 )
            break;
          v23 = v52;
        }
      }
      v46 = v21 + 1;
      v30 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v26 & 0x7FFFFFFF);
      if ( !v30 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v29);
        WdLogEvent5_WdAssertion(v31);
      }
      if ( !*((_QWORD *)v30 + 56) && v26 < 0 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v29);
        WdLogEvent5_WdAssertion(v32);
      }
      v33 = *((_QWORD *)v30 + 63);
      if ( v33 )
      {
        v34 = *(_DWORD *)(v33 + 24);
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v50, v34) )
          lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()((__int64)v49, v34);
      }
      v35 = (_QWORD *)((char *)v30 + 416);
      v36 = (_QWORD *)*((_QWORD *)v30 + 52);
      while ( v36 != v35 )
      {
        v37 = *((_DWORD *)v36 - 102);
        v36 = (_QWORD *)*v36;
        v38 = v37 | 0x80000000;
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v50, v38) )
          lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()((__int64)v49, v38);
      }
      v39 = v47;
      if ( v47 >= v46 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v29);
        WdLogEvent5_WdAssertion(v40);
        v39 = v47;
      }
      v52[v39] = v26;
      v21 = v46;
      v41 = v47 + 1;
      v22 = v48;
      ++v47;
    }
    while ( v46 < v48 );
  }
  *a3 = 0;
  v42 = 0LL;
  if ( v41 )
  {
    v43 = v52;
    do
    {
      v44 = v43[v42];
      if ( v44 < 0 )
      {
        v45 = *a3;
        v43[v45] = v44 & 0x7FFFFFFF;
        v43 = v52;
        v41 = v47;
        *a3 = v45 + 1;
      }
      v42 = (unsigned int)(v42 + 1);
    }
    while ( (unsigned int)v42 < v41 );
  }
  return 0LL;
}
