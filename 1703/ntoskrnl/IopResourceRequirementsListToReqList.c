/*
 * XREFs of IopResourceRequirementsListToReqList @ 0x1405B1A14
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140156B64 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14055B65C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1405B1160 (IopAllocateBootResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x1406A7E70 (PnpRestoreResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x1406AB614 (IopQueryConflictListInternal.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     IopFreeReqList @ 0x1405B1290 (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x1405B12E8 (IopFreeReqAlternative.c)
 *     IopSetupArbiterAndTranslators @ 0x1405B1FC8 (IopSetupArbiterAndTranslators.c)
 */

__int64 __fastcall IopResourceRequirementsListToReqList(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // r13
  unsigned int v3; // r10d
  unsigned int *v4; // r14
  int v5; // r8d
  unsigned int *v6; // rsi
  unsigned int *v7; // rdx
  int v8; // ebp
  char v9; // r9
  int v10; // r15d
  int v11; // eax
  char v12; // bl
  unsigned int *v13; // rcx
  unsigned int *v14; // rcx
  unsigned int *v15; // rdi
  unsigned int v16; // r8d
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // r8d
  signed int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // ebp
  _QWORD *PoolWithTag; // rax
  _QWORD *v33; // rdi
  _QWORD *v34; // rbx
  int v35; // ebp
  unsigned int v36; // eax
  int v37; // r13d
  int v38; // r15d
  unsigned int *v39; // r12
  unsigned int *v40; // rsi
  _QWORD *v41; // rdx
  unsigned int *v42; // rbx
  __int64 v43; // r14
  unsigned int v44; // eax
  int **v45; // rax
  int v46; // r8d
  int *v47; // rcx
  char v48; // al
  bool v49; // zf
  char v50; // al
  _BYTE *v51; // r8
  int v52; // eax
  __int64 v53; // r8
  int v54; // ebp
  unsigned int v55; // esi
  int v57; // eax
  int v58; // [rsp+20h] [rbp-98h]
  int v59; // [rsp+24h] [rbp-94h]
  int v60; // [rsp+28h] [rbp-90h]
  _QWORD *v61; // [rsp+30h] [rbp-88h]
  _QWORD *v62; // [rsp+38h] [rbp-80h]
  unsigned int *v63; // [rsp+40h] [rbp-78h]
  int v64; // [rsp+40h] [rbp-78h]
  int *v65; // [rsp+50h] [rbp-68h]
  int **v66; // [rsp+58h] [rbp-60h]
  _QWORD *v67; // [rsp+60h] [rbp-58h]
  int v70; // [rsp+D0h] [rbp+18h]
  int v71; // [rsp+D8h] [rbp+20h]

  *a2 = 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v70 = 0;
  v63 = v2;
  v3 = v2[7];
  if ( !v3 )
    return 0LL;
  v4 = v2 + 8;
  v5 = 0;
  v6 = (unsigned int *)((char *)v2 + *v2);
  v7 = v2 + 8;
  v8 = 0;
LABEL_10:
  while ( (--v3 & 0x80000000) == 0 )
  {
    v14 = v7 + 2;
    v7 += 8 * v7[1] + 2;
    if ( v14 == v7 )
      return 0LL;
    if ( v14 > v7 || v14 > v6 || v7 > v6 )
      return 3221225485LL;
    v15 = v14 + 8;
    v12 = 1;
    if ( *((_BYTE *)v14 + 1) != 0x80 )
      v15 = v14;
    v13 = v15;
    if ( v15 < v7 )
    {
      while ( 1 )
      {
        v9 = *((_BYTE *)v13 + 1);
        v10 = v5;
        if ( (unsigned __int8)v9 == 128 )
          return 3221225485LL;
        if ( *((unsigned __int8 *)v13 + 1) == 129 )
          break;
        v11 = ++v5;
        if ( v9 <= 0 )
        {
          *(_BYTE *)v13 = 1;
          v5 = v10;
          v13 += 8;
          if ( v9 != -16 )
            v5 = v11;
LABEL_25:
          v12 = 1;
          goto LABEL_9;
        }
        if ( (*(_BYTE *)v13 & 8) != 0 )
        {
          if ( v12 )
            return 3221225485LL;
          ++v8;
        }
        else
        {
          v12 = 0;
        }
        v13 += 8;
LABEL_9:
        if ( v13 >= v7 )
          goto LABEL_10;
      }
      while ( v13 < v7 && *((_BYTE *)v13 + 1) == 0x81 )
      {
        if ( v13 == v15 )
          return 3221225485LL;
        ++v5;
        v13 += 8;
      }
      goto LABEL_25;
    }
  }
  v16 = v5 - v8;
  v17 = v2[7];
  v18 = 296LL * v16;
  v60 = -1073741823;
  if ( v18 > 0xFFFFFFFF )
    return 2147483653LL;
  if ( v16 <= 1 )
  {
    LODWORD(v19) = 0;
  }
  else
  {
    v19 = 8LL * (v16 - 1);
    if ( v19 > 0xFFFFFFFF )
    {
      LODWORD(v19) = -1;
      v20 = -1073741675;
      goto LABEL_30;
    }
  }
  v20 = 0;
LABEL_30:
  if ( v20 < 0 )
    return 2147483653LL;
  if ( (int)v19 + 32 < (unsigned int)v19 )
    return 2147483653LL;
  v21 = v17 * (unsigned int)(v19 + 32);
  if ( v21 > 0xFFFFFFFF )
    return 2147483653LL;
  if ( (unsigned int)v17 <= 1 )
  {
    LODWORD(v22) = 0;
LABEL_35:
    v23 = 0;
    goto LABEL_36;
  }
  v22 = 8LL * (unsigned int)(v17 - 1);
  if ( v22 <= 0xFFFFFFFF )
    goto LABEL_35;
  LODWORD(v22) = -1;
  v23 = -1073741675;
LABEL_36:
  if ( v23 < 0 || (int)v22 + 48 < (unsigned int)v22 )
    return 2147483653LL;
  v24 = v22 + 48;
  v25 = v21 + v22 + 48;
  v26 = -1;
  if ( (unsigned int)v21 + v24 >= v24 )
    v26 = v21 + v24;
  v27 = v25 < v24 ? 0xC0000095 : 0;
  if ( v25 >= v24 )
  {
    v28 = v18 + v26;
    v29 = v26;
    v30 = -1;
    if ( (unsigned int)v18 + v26 >= v26 )
      v30 = v18 + v26;
    v26 = v30;
    v27 = v28 < v29 ? 0xC0000095 : 0;
  }
  if ( v27 < 0 )
    return 2147483653LL;
  v31 = v26;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x20207050u);
  v33 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v31);
  v61 = (_QWORD *)((char *)v33 + v24);
  memset(v61, 0, (unsigned int)v21);
  v65 = (int *)((char *)v61 + (unsigned int)v21);
  memset(v65, 0, (unsigned int)v18);
  v34 = v33 + 5;
  v62 = v33 + 5;
  v35 = v63[1];
  v36 = v63[2];
  if ( v35 == -1 )
    v35 = PnpDefaultInterfaceType;
  v33[2] = 0LL;
  v33[1] = a1;
  v71 = v35;
  *(_DWORD *)v33 = v35;
  v58 = v36;
  *((_DWORD *)v33 + 8) = v17;
  *((_DWORD *)v33 + 1) = v36;
  memset(v33 + 5, 0, 8 * v17);
  v37 = v17 - 1;
  v38 = 0;
  if ( v37 < 0 )
  {
LABEL_96:
    v55 = v60;
    IopFreeReqList(v33);
    return v55;
  }
  v39 = v63;
  do
  {
    v40 = (unsigned int *)v61;
    v41 = v61 + 3;
    v67 = v34;
    v42 = v4 + 2;
    v64 = v38;
    v43 = v4[1];
    *v62 = v61;
    *((_DWORD *)v61 + 4) = v38;
    v4 = &v42[8 * v43];
    ++v38;
    v61[1] = v33;
    *((_DWORD *)v61 + 5) = 0;
    v61 += 3;
    ++v62;
    if ( *((_BYTE *)v42 + 1) == 0x80 )
    {
      v44 = v42[2];
      v42 += 8;
      *v40 = v44;
    }
    else
    {
      *v40 = 12288;
    }
    v66 = (int **)v41;
    v45 = (int **)v41;
    v46 = 0;
    if ( v42 >= v4 )
    {
LABEL_69:
      v34 = v62;
      goto LABEL_70;
    }
    while ( 1 )
    {
      if ( *((_BYTE *)v42 + 1) == 0xF0 )
      {
        v35 = v42[2];
        if ( v35 == -1 )
          v35 = PnpDefaultInterfaceType;
        v71 = v35;
        v58 = v42[3];
        goto LABEL_83;
      }
      ++v40[5];
      v47 = v65;
      *v45 = v65;
      v66 = v45 + 1;
      v65[6] = v46;
      v65[1] = v58;
      *((_QWORD *)v65 + 2) = v40;
      *((_QWORD *)v65 + 4) = v65;
      v65[69] = 0;
      *((_QWORD *)v65 + 35) = 0LL;
      *v65 = v35;
      v48 = *((_BYTE *)v42 + 1);
      v65 += 74;
      v59 = v46 + 1;
      v49 = v48 == 0;
      if ( v48 < 0 || (v50 = 1, v49) )
        v50 = 0;
      *((_BYTE *)v47 + 8) = v50;
      v61 = v41 + 1;
      *((_QWORD *)v47 + 6) = v47 + 10;
      *((_QWORD *)v47 + 5) = v47 + 10;
      v47[14] = 0;
      *((_QWORD *)v47 + 8) = v42;
      *((_QWORD *)v47 + 9) = *(_QWORD *)a1;
      v51 = v47 + 34;
      v47[20] = *(_DWORD *)(a1 + 12);
      *((_QWORD *)v47 + 11) = 0LL;
      v47[24] = v35;
      v47[25] = v39[3];
      v52 = v39[2];
      v47[32] = -1;
      v47[26] = v52;
      *((_QWORD *)v47 + 14) = v47 + 34;
      v47[21] = 0;
      if ( *((_BYTE *)v47 + 8) )
        break;
      ++v41;
      *v51 = *((_BYTE *)v42 + 1);
      v46 = v59;
      *((_BYTE *)v47 + 137) = *((_BYTE *)v42 + 2);
      *((_WORD *)v47 + 69) = *((_WORD *)v42 + 2);
      v47[35] = v42[2];
      v47[36] = v42[3];
      v47[37] = v42[4];
      v57 = v70;
      if ( *((_BYTE *)v42 + 1) == 0x84 )
        v57 = 1;
      v70 = v57;
LABEL_83:
      v42 += 8;
LABEL_63:
      if ( v42 >= v4 )
        goto LABEL_69;
      v45 = v66;
    }
    *v51 = 8;
    v53 = (unsigned int)++v47[14];
    v70 = 1;
    while ( 1 )
    {
      v42 += 8;
      if ( v42 >= v4 )
        break;
      if ( *((_BYTE *)v42 + 1) == 0x81 )
      {
        *((_QWORD *)v47 + 35) = v42;
        while ( v42 < v4 && *((_BYTE *)v42 + 1) == 0x81 )
        {
          ++v47[69];
          v42 += 8;
        }
        break;
      }
      if ( (*(_BYTE *)v42 & 8) == 0 )
        break;
      v53 = (unsigned int)(v53 + 1);
      v47[14] = v53;
    }
    v54 = IopSetupArbiterAndTranslators(v47, v47 + 10, v53);
    if ( v54 >= 0 )
    {
      v35 = v71;
      v41 = v61;
      v46 = v59;
      goto LABEL_63;
    }
    v34 = v67;
    --*((_DWORD *)v33 + 8);
    v38 = v64;
    v62 = v67;
    IopFreeReqAlternative((__int64)v40);
    v60 = v54;
LABEL_70:
    --v37;
    v35 = v71;
  }
  while ( v37 >= 0 );
  if ( !v38 )
    goto LABEL_96;
  v55 = 0;
  if ( v70 )
    *a2 = v33;
  else
    IopFreeReqList(v33);
  return v55;
}
