/*
 * XREFs of ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008140
 * Callers:
 *     ?RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180005BC4 (-RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@P.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     ?GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x1800018E0 (-GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?RmpResourceSetIsValidPredecessor@@YAKPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004164 (-RmpResourceSetIsValidPredecessor@@YAKPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COMMIT_THRESHOLDS@@1PEA_K2@Z @ 0x180006210 (-RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COM.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006354 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035650 (-RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpActivityHostAggregateCommitValues(struct _RM_ACTIVITY_HOST *a1)
{
  bool v1; // zf
  struct _RM_ACTIVITY_HOST *v2; // rbx
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // rsi
  int v5; // eax
  __int64 **v6; // rdi
  struct _RM_ACTIVITY_HOST ***v7; // rcx
  struct _RM_ACTIVITY_HOST **v8; // rdx
  int v9; // eax
  _QWORD **v10; // rcx
  _QWORD *v11; // rdx
  int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // rdi
  int v18; // r8d
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rbx
  int v24; // eax
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int128 *v29; // rax
  _QWORD *v30; // rax
  unsigned __int128 v31; // kr00_16
  unsigned __int128 v32; // kr10_16
  _OWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // rax
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // r10
  __int64 v58; // rcx
  struct ExecutionModel::ResourceSet *v59; // r10
  struct _RM_ACTIVITY_HOST *v60; // r8
  __int64 v61; // r11
  __int64 v62; // rcx
  __int64 First; // r9
  struct _RM_ACTIVITY_HOST *v64; // rdx
  int v65; // r11d
  _QWORD *v66; // r14
  ExecutionModel::ResourceSet *v67; // rsi
  struct ExecutionModel::ResourceSet *v68; // r10
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // r11
  int v72; // eax
  ExecutionModel::ResourceSet *v73; // r10
  int v74; // r11d
  unsigned __int64 EnforcedMemoryCap; // r15
  unsigned __int64 v76; // rax
  struct ExecutionModel::ResourceSet *Next; // r10
  int v78; // r11d
  struct ExecutionModel::ResourceSet *v79; // r12
  __int128 v80; // xmm0
  int v81; // esi
  int v82; // r11d
  unsigned __int64 v83; // rax
  struct ExecutionModel::ResourceSet *v84; // r10
  int v85; // r11d
  _QWORD *v86; // rdx
  unsigned __int128 v87; // xmm0
  unsigned __int128 v88; // xmm1
  __int64 v89; // rax
  __int128 v90; // xmm1
  unsigned __int64 v91; // rcx
  __int64 v92; // rax
  __int128 v93; // [rsp+38h] [rbp-79h] BYREF
  __int128 v94; // [rsp+48h] [rbp-69h]
  unsigned __int64 v95; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int64 v96; // [rsp+60h] [rbp-51h] BYREF
  __int128 v97; // [rsp+68h] [rbp-49h] BYREF
  __int128 v98; // [rsp+78h] [rbp-39h]
  struct _RM_ACTIVITY_HOST *v99; // [rsp+88h] [rbp-29h]
  _OWORD v100[2]; // [rsp+98h] [rbp-19h] BYREF
  _OWORD v101[2]; // [rsp+B8h] [rbp+7h] BYREF

  v1 = (*((_BYTE *)a1 + 772) & 1) == 0;
  v2 = a1;
  v99 = a1;
  if ( !v1 )
  {
    RmpActivityHostAggregateHamCommitValues(a1);
    return;
  }
  memset_0(&v93, 0, 0x20uLL);
  memset_0(&v97, 0, 0x20uLL);
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v95 = 0LL;
  v6 = (__int64 **)((char *)v2 + 816);
  *((_QWORD *)&v100[0] + 1) = 1LL;
  v7 = (struct _RM_ACTIVITY_HOST ***)((char *)v2 + 816);
  v96 = 0LL;
  *(_QWORD *)&v100[0] = 0LL;
  while ( 1 )
  {
    if ( !v5 )
    {
      v8 = *v7;
      if ( *v7 != (struct _RM_ACTIVITY_HOST **)v7 )
      {
        v59 = (struct ExecutionModel::ResourceSet *)(v8 - 177);
        if ( v8 != (struct _RM_ACTIVITY_HOST **)1416 )
          break;
      }
    }
    ++v5;
    v7 += 3;
    if ( v5 >= 2 )
      goto LABEL_6;
  }
  v60 = *v8;
  v61 = *((int *)v59 + 362);
  v62 = *((_QWORD *)v59 + 180);
  First = 0LL;
  v64 = (struct _RM_ACTIVITY_HOST *)(v62 + 24 * (v61 + 34));
  if ( v60 != v64 )
    First = (__int64)v60 - 1416;
  if ( !First )
    First = RmpActivityHostEnumerateResourceSetGetFirst(v62, 1, (int)v61 + 1);
  *(_QWORD *)&v100[0] = First;
  do
  {
    v65 = *((_DWORD *)v59 + 363);
    if ( (v65 & 0x20) == 0 )
    {
      if ( *((_DWORD *)v59 + 350) == 1 )
      {
        *((_DWORD *)v59 + 363) = v65 | 0x20;
      }
      else
      {
        v66 = (_QWORD *)((char *)v59 + 1880);
        v67 = (ExecutionModel::ResourceSet *)*((_QWORD *)v59 + 235);
        if ( v67 )
        {
          if ( RmpResourceSetIsValidPredecessor(*((struct ExecutionModel::ResourceSet **)v59 + 235), v64) )
          {
            EnforcedMemoryCap = ExecutionModel::ResourceSet::GetEnforcedMemoryCap(v73);
            v76 = ExecutionModel::ResourceSet::GetEnforcedMemoryCap(v67);
            if ( EnforcedMemoryCap > v76 )
            {
              v79 = Next;
            }
            else
            {
              v79 = v67;
              EnforcedMemoryCap = v76;
            }
            v80 = v100[0];
            *((_DWORD *)Next + 363) = v78 | 0x20;
            *((_DWORD *)v67 + 363) |= 0x20u;
            v81 = (*((_DWORD *)Next + 363) >> 6) & 1;
            v101[0] = v80;
            do
            {
              v82 = *((_DWORD *)Next + 363);
              if ( (v82 & 0x40) != 0 )
                v81 = 1;
              if ( (v82 & 0x20) == 0 && *((_DWORD *)Next + 350) != 1 && *((_QWORD *)Next + 235) == *v66 )
              {
                v83 = ExecutionModel::ResourceSet::GetEnforcedMemoryCap(Next);
                if ( v83 > EnforcedMemoryCap )
                {
                  EnforcedMemoryCap = v83;
                  v79 = v84;
                }
                *((_DWORD *)v84 + 363) = v85 | 0x20;
              }
              Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v101);
            }
            while ( Next );
            if ( !v81 )
              RmpActivityHostAggregateResourceSetCommitValues(
                v79,
                (struct _RM_COMMIT_THRESHOLDS *)&v93,
                (struct _RM_COMMIT_THRESHOLDS *)&v97,
                &v96,
                &v95);
          }
          else if ( (v74 & 0x40) == 0 )
          {
            *((_DWORD *)v73 + 363) = v74 | 0x20;
          }
        }
      }
    }
    v59 = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v100);
  }
  while ( v59 );
  v4 = v95;
  v3 = v96;
LABEL_6:
  v9 = 0;
  v10 = (_QWORD **)((char *)v2 + 816);
  *((_QWORD *)&v100[0] + 1) = 1LL;
  *(_QWORD *)&v100[0] = 0LL;
  while ( 1 )
  {
    if ( !v9 )
    {
      v11 = *v10;
      if ( *v10 != v10 )
      {
        v68 = (struct ExecutionModel::ResourceSet *)(v11 - 177);
        if ( v11 != (_QWORD *)1416 )
          break;
      }
    }
    ++v9;
    v10 += 3;
    if ( v9 >= 2 )
      goto LABEL_10;
  }
  v69 = *((int *)v68 + 362);
  v70 = *((_QWORD *)v68 + 180);
  v71 = 0LL;
  if ( *v11 != v70 + 24 * (v69 + 34) )
    v71 = *v11 - 1416LL;
  if ( !v71 )
    v71 = RmpActivityHostEnumerateResourceSetGetFirst(v70, 1, (int)v69 + 1);
  *(_QWORD *)&v100[0] = v71;
  do
  {
    v72 = *((_DWORD *)v68 + 363);
    if ( (v72 & 0x20) != 0 )
    {
      *((_DWORD *)v68 + 363) = v72 & 0xFFFFFFDF;
    }
    else if ( (v72 & 0x40) == 0 || *((_QWORD *)v68 + 235) )
    {
      RmpActivityHostAggregateResourceSetCommitValues(
        v68,
        (struct _RM_COMMIT_THRESHOLDS *)&v93,
        (struct _RM_COMMIT_THRESHOLDS *)&v97,
        &v96,
        &v95);
    }
    v68 = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v100);
  }
  while ( v68 );
  v4 = v95;
  v3 = v96;
LABEL_10:
  v12 = 0;
  while ( 1 )
  {
    if ( v12 == 1 && *v6 != (__int64 *)v6 )
    {
      v13 = (__int64)(*v6 - 177);
      if ( *v6 != (__int64 *)1416 )
        break;
    }
    ++v12;
    v6 += 3;
    if ( v12 >= 2 )
      goto LABEL_55;
  }
  v14 = **v6;
  v15 = *(int *)(v13 + 1448);
  v16 = *(_QWORD *)(v13 + 1440);
  v17 = 0LL;
  if ( v14 != v16 + 24 * (v15 + 34) )
    v17 = v14 - 1416;
  if ( !v17 )
  {
    v18 = v15 + 1;
    if ( v18 < 2 )
    {
      v86 = (_QWORD *)(v16 + 24 * (v18 + 34LL));
      while ( 1 )
      {
        if ( v18 == 1 && (_QWORD *)*v86 != v86 )
        {
          v17 = *v86 - 1416LL;
          if ( *v86 != 1416LL )
            break;
        }
        ++v18;
        v86 += 3;
        if ( v18 >= 2 )
          goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      v17 = 0LL;
    }
  }
  v19 = *((_QWORD *)&v93 + 1);
  v20 = v93;
  v21 = *((_QWORD *)&v97 + 1);
  v22 = v97;
  v23 = v98;
  do
  {
    v24 = *(_DWORD *)(v13 + 1452);
    if ( (v24 & 0x20) != 0 )
    {
      *(_DWORD *)(v13 + 1452) = v24 & 0xFFFFFFDF;
      goto LABEL_52;
    }
    v25 = *(_QWORD **)(v13 + 1432);
    if ( v4 == -1LL || (v26 = v25[7], v26 == -1) || v26 + v4 < v4 )
      v4 = -1LL;
    else
      v4 += v26;
    if ( v3 == -1LL || (v27 = v25[8], v27 == -1) || v27 + v3 < v3 )
      v3 = -1LL;
    else
      v3 += v27;
    v28 = v25[18];
    if ( v28 )
    {
      v87 = *(_OWORD *)(v28 + 8);
      v88 = *(_OWORD *)(v28 + 24);
    }
    else
    {
      v29 = (unsigned __int128 *)v25[19];
      if ( !v29 )
      {
        v30 = (_QWORD *)v25[5];
        v31 = __PAIR128__(v30[190], v30[228]);
        v32 = __PAIR128__(v30[191], v30[185]);
        goto LABEL_34;
      }
      v87 = *v29;
      v88 = v29[1];
    }
    v101[0] = v87;
    v31 = v87;
    v101[1] = v88;
    v32 = v88;
LABEL_34:
    if ( *((_QWORD *)&v32 + 1) == -1LL || *((_QWORD *)&v94 + 1) == -1LL )
    {
      *((_QWORD *)&v94 + 1) = -1LL;
    }
    else
    {
      v89 = -1LL;
      if ( *((_QWORD *)&v94 + 1) + *((_QWORD *)&v32 + 1) >= *((_QWORD *)&v94 + 1) )
        v89 = *((_QWORD *)&v94 + 1) + *((_QWORD *)&v32 + 1);
      *((_QWORD *)&v94 + 1) = v89;
    }
    if ( (_QWORD)v32 == -1LL || (_QWORD)v94 == -1LL || (_QWORD)v94 + (_QWORD)v32 < (unsigned __int64)v94 )
      *(_QWORD *)&v94 = -1LL;
    else
      *(_QWORD *)&v94 = v94 + v32;
    if ( *((_QWORD *)&v31 + 1) == -1LL
      || v19 == -1LL
      || (v51 = *((_QWORD *)&v31 + 1) + v19, *((_QWORD *)&v31 + 1) + v19 < v19) )
    {
      v19 = -1LL;
      *((_QWORD *)&v93 + 1) = -1LL;
    }
    else
    {
      v19 += *((_QWORD *)&v31 + 1);
      *((_QWORD *)&v93 + 1) = v51;
    }
    if ( (_QWORD)v31 == -1LL || v20 == -1LL || (v52 = v20 + v31, v20 + (unsigned __int64)v31 < v20) )
    {
      v20 = -1LL;
      *(_QWORD *)&v93 = -1LL;
    }
    else
    {
      v20 += v31;
      *(_QWORD *)&v93 = v52;
    }
    v33 = (_OWORD *)v25[19];
    if ( v33 )
    {
      v90 = v33[1];
      v100[0] = *v33;
      v37 = *((_QWORD *)&v100[0] + 1);
      v38 = *(_QWORD *)&v100[0];
      v100[1] = v90;
      v35 = *((_QWORD *)&v90 + 1);
      v36 = v90;
    }
    else
    {
      v34 = (_QWORD *)v25[5];
      v35 = v34[191];
      v36 = v34[185];
      v37 = v34[190];
      v38 = v34[228];
    }
    if ( v35 == -1 || *((_QWORD *)&v98 + 1) == -1LL )
    {
      *((_QWORD *)&v98 + 1) = -1LL;
    }
    else
    {
      v91 = *((_QWORD *)&v98 + 1) + v35;
      v92 = -1LL;
      if ( v91 >= *((_QWORD *)&v98 + 1) )
        v92 = v91;
      *((_QWORD *)&v98 + 1) = v92;
    }
    if ( v36 == -1 || v23 == -1LL || (v53 = v23 + v36, v23 + v36 < v23) )
    {
      v23 = -1LL;
      *(_QWORD *)&v98 = -1LL;
    }
    else
    {
      v23 += v36;
      *(_QWORD *)&v98 = v53;
    }
    if ( v37 == -1 || v21 == -1LL || (v54 = v21 + v37, v21 + v37 < v21) )
    {
      v21 = -1LL;
      *((_QWORD *)&v97 + 1) = -1LL;
    }
    else
    {
      v21 += v37;
      *((_QWORD *)&v97 + 1) = v54;
    }
    if ( v38 == -1 || v22 == -1LL || (v55 = v22 + v38, v22 + v38 < v22) )
    {
      v22 = -1LL;
      *(_QWORD *)&v97 = -1LL;
    }
    else
    {
      v22 += v38;
      *(_QWORD *)&v97 = v55;
    }
LABEL_52:
    v13 = v17;
    if ( v17 )
    {
      v56 = *(_QWORD *)(v17 + 1416);
      v57 = *(int *)(v17 + 1448);
      v58 = *(_QWORD *)(v17 + 1440);
      v17 = 0LL;
      if ( v56 != v58 + 24 * (v57 + 34) )
        v17 = v56 - 1416;
      if ( !v17 )
        v17 = RmpActivityHostEnumerateResourceSetGetFirst(v58, 2, (int)v57 + 1);
    }
  }
  while ( v13 );
  v2 = v99;
LABEL_55:
  if ( v4 == -1LL || v3 == -1LL || (v39 = v3 + v4, v3 + v4 < v3) )
    v39 = -1LL;
  v40 = v94;
  *((_OWORD *)v2 + 72) = v93;
  v41 = v97;
  *((_OWORD *)v2 + 73) = v40;
  v42 = v98;
  *((_OWORD *)v2 + 74) = v41;
  *((_OWORD *)v2 + 75) = v42;
  v43 = *((_QWORD *)v2 + 147);
  if ( v43 == -1LL )
  {
    *((_QWORD *)v2 + 147) = -1LL;
  }
  else if ( v43 < v39 )
  {
    *((_QWORD *)v2 + 147) = 0LL;
  }
  else
  {
    *((_QWORD *)v2 + 147) = v43 - v39;
  }
  v44 = *((_QWORD *)v2 + 146);
  if ( v44 == -1LL )
  {
    *((_QWORD *)v2 + 146) = -1LL;
  }
  else if ( v44 < v39 )
  {
    *((_QWORD *)v2 + 146) = 0LL;
  }
  else
  {
    *((_QWORD *)v2 + 146) = v44 - v39;
  }
  v45 = *((_QWORD *)v2 + 145);
  if ( v45 == -1LL )
  {
    *((_QWORD *)v2 + 145) = -1LL;
  }
  else if ( v45 < v39 )
  {
    *((_QWORD *)v2 + 145) = 0LL;
  }
  else
  {
    *((_QWORD *)v2 + 145) = v45 - v39;
  }
  v46 = *((_QWORD *)v2 + 144);
  if ( v46 == -1LL )
  {
    *((_QWORD *)v2 + 144) = -1LL;
  }
  else if ( v46 < v39 )
  {
    *((_QWORD *)v2 + 144) = 0LL;
  }
  else
  {
    *((_QWORD *)v2 + 144) = v46 - v39;
  }
  v47 = *((_QWORD *)v2 + 151);
  if ( v47 == -1LL )
  {
    *((_QWORD *)v2 + 151) = -1LL;
  }
  else if ( v47 < v39 )
  {
    *((_QWORD *)v2 + 151) = 0LL;
  }
  else
  {
    *((_QWORD *)v2 + 151) = v47 - v39;
  }
  v48 = *((_QWORD *)v2 + 150);
  if ( v48 == -1LL )
  {
    *((_QWORD *)v2 + 150) = -1LL;
  }
  else if ( v48 < v39 )
  {
    *((_QWORD *)v2 + 150) = 0LL;
  }
  else
  {
    *((_QWORD *)v2 + 150) = v48 - v39;
  }
  v49 = *((_QWORD *)v2 + 149);
  if ( v49 == -1LL )
  {
    *((_QWORD *)v2 + 149) = -1LL;
  }
  else if ( v49 < v39 )
  {
    *((_QWORD *)v2 + 149) = 0LL;
  }
  else
  {
    *((_QWORD *)v2 + 149) = v49 - v39;
  }
  v50 = *((_QWORD *)v2 + 148);
  if ( v50 == -1LL )
  {
    *((_QWORD *)v2 + 148) = -1LL;
  }
  else if ( v50 < v39 )
  {
    *((_QWORD *)v2 + 148) = 0LL;
  }
  else
  {
    *((_QWORD *)v2 + 148) = v50 - v39;
  }
  *((_QWORD *)v2 + 141) = v4;
  *((_QWORD *)v2 + 142) = v3;
}
