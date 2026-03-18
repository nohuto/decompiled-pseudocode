/*
 * XREFs of IopResourceRequirementsListToReqList @ 0x1405596CC
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x14014DF30 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140557750 (PnpGetResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1405D1F00 (IopAllocateBootResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x1406D2B30 (PnpRestoreResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x1406D68B4 (IopQueryConflictListInternal.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopSetupArbiterAndTranslators @ 0x140559C78 (IopSetupArbiterAndTranslators.c)
 *     IopFreeReqList @ 0x14058F240 (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x14058F298 (IopFreeReqAlternative.c)
 */

__int64 __fastcall IopResourceRequirementsListToReqList(__int64 a1, int **a2)
{
  unsigned int *v2; // r13
  unsigned int v3; // r10d
  unsigned int *v4; // rbp
  int v5; // r8d
  unsigned int *v6; // rsi
  unsigned int *v7; // rdx
  int v8; // r14d
  char v9; // r9
  int v10; // r15d
  int v11; // eax
  char v12; // bl
  unsigned int *v13; // rcx
  unsigned int *v14; // rcx
  unsigned int *v15; // rdi
  unsigned int v16; // r8d
  __int64 v17; // r13
  unsigned int v18; // r14d
  unsigned int v19; // edx
  unsigned __int64 v20; // rcx
  signed int v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  unsigned int v24; // edx
  signed int v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // eax
  unsigned int v28; // r8d
  signed int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // edx
  int v32; // eax
  unsigned int v33; // r15d
  int *PoolWithTag; // rax
  int *v35; // rdi
  _DWORD *v36; // rbx
  unsigned int *v37; // r14
  int v38; // ecx
  int v39; // eax
  int v40; // r13d
  int v41; // r15d
  int v42; // r12d
  unsigned int *v43; // rsi
  _QWORD *v44; // rdx
  unsigned int *v45; // rbx
  __int64 v46; // rbp
  char **v47; // rax
  int v48; // r8d
  char *v49; // rcx
  char v50; // al
  bool v51; // zf
  char v52; // al
  _BYTE *v53; // r8
  unsigned int v54; // eax
  __int64 v55; // r8
  int v56; // r14d
  unsigned int v57; // esi
  unsigned int v59; // eax
  int v60; // eax
  unsigned __int64 v61; // rcx
  int v62; // [rsp+20h] [rbp-88h]
  int v63; // [rsp+20h] [rbp-88h]
  int v64; // [rsp+24h] [rbp-84h]
  char *v65; // [rsp+28h] [rbp-80h]
  _QWORD *v66; // [rsp+30h] [rbp-78h]
  int v67; // [rsp+38h] [rbp-70h]
  unsigned int *v68; // [rsp+40h] [rbp-68h]
  char *v69; // [rsp+48h] [rbp-60h]
  char **v70; // [rsp+50h] [rbp-58h]
  _QWORD *v71; // [rsp+58h] [rbp-50h]
  int v74; // [rsp+C0h] [rbp+18h]
  int v75; // [rsp+C8h] [rbp+20h]

  *a2 = 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v74 = 0;
  v68 = v2;
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
  v64 = -1073741823;
  if ( 296 * (unsigned __int64)v16 > 0xFFFFFFFF )
    return 2147483653LL;
  v18 = 296 * v16;
  if ( v16 <= 1 )
  {
    v19 = 0;
    v21 = 0;
  }
  else
  {
    v19 = -1;
    v20 = 8LL * (v16 - 1);
    if ( v20 <= 0xFFFFFFFF )
      v19 = 8 * (v16 - 1);
    v21 = v20 > 0xFFFFFFFF ? 0xC0000095 : 0;
  }
  if ( v21 < 0 )
    return 2147483653LL;
  if ( v19 + 32 < v19 )
    return 2147483653LL;
  v22 = v17 * (v19 + 32);
  if ( v22 > 0xFFFFFFFF )
    return 2147483653LL;
  v23 = (unsigned int)v22;
  if ( (unsigned int)v17 > 1 )
  {
    v24 = -1;
    v61 = 8LL * (unsigned int)(v17 - 1);
    if ( v61 <= 0xFFFFFFFF )
      v24 = 8 * (v17 - 1);
    v25 = v61 > 0xFFFFFFFF ? 0xC0000095 : 0;
  }
  else
  {
    v24 = 0;
    v25 = 0;
  }
  if ( v25 < 0 || v24 + 48 < v24 )
    return 2147483653LL;
  v26 = v24 + 48;
  v27 = v24 + 48 + v23;
  v28 = -1;
  if ( v26 + (unsigned int)v23 >= v26 )
    v28 = v24 + 48 + v23;
  v29 = v27 < v26 ? 0xC0000095 : 0;
  if ( v27 >= v26 )
  {
    v30 = v28 + v18;
    v31 = v28;
    v32 = -1;
    if ( v28 + v18 >= v28 )
      v32 = v28 + v18;
    v28 = v32;
    v29 = v30 < v31 ? 0xC0000095 : 0;
  }
  if ( v29 < 0 )
    return 2147483653LL;
  v33 = v28;
  PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, v28, 0x20207050u);
  v35 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v33);
  v65 = (char *)v35 + v26;
  memset(v65, 0, (unsigned int)v23);
  v69 = &v65[v23];
  memset(&v65[v23], 0, v18);
  v36 = v35 + 10;
  v37 = v68;
  v66 = v35 + 10;
  v38 = v68[1];
  v39 = v68[2];
  if ( v38 == -1 )
    v38 = PnpDefaultInterfaceType;
  *((_QWORD *)v35 + 2) = 0LL;
  v62 = v38;
  *v35 = v38;
  *((_QWORD *)v35 + 1) = a1;
  v75 = v39;
  v35[8] = v17;
  v35[1] = v39;
  memset(v35 + 10, 0, 8 * v17);
  v40 = v17 - 1;
  v41 = 0;
  if ( v40 < 0 )
  {
LABEL_95:
    v57 = v64;
    IopFreeReqList(v35);
    return v57;
  }
  v42 = v62;
  do
  {
    v43 = (unsigned int *)v65;
    v44 = v65 + 24;
    v71 = v36;
    v45 = v4 + 2;
    v67 = v41;
    v46 = v4[1];
    *v66 = v65;
    *((_DWORD *)v65 + 4) = v41;
    v4 = &v45[8 * v46];
    ++v41;
    *((_QWORD *)v65 + 1) = v35;
    *((_DWORD *)v65 + 5) = 0;
    v65 += 24;
    ++v66;
    if ( *((_BYTE *)v45 + 1) == 0x80 )
    {
      v59 = v45[2];
      v45 += 8;
      *v43 = v59;
    }
    else
    {
      *v43 = 12288;
    }
    v70 = (char **)v44;
    v47 = (char **)v44;
    v48 = 0;
    if ( v45 >= v4 )
    {
LABEL_71:
      v36 = v66;
      goto LABEL_72;
    }
    while ( 1 )
    {
      if ( *((_BYTE *)v45 + 1) == 0xF0 )
      {
        v42 = v45[2];
        if ( v42 == -1 )
          v42 = PnpDefaultInterfaceType;
        v75 = v45[3];
        goto LABEL_83;
      }
      ++v43[5];
      v49 = v69;
      *v47 = v69;
      v70 = v47 + 1;
      *((_DWORD *)v69 + 6) = v48;
      *((_DWORD *)v69 + 1) = v75;
      *((_QWORD *)v69 + 2) = v43;
      *((_QWORD *)v69 + 4) = v69;
      *((_DWORD *)v69 + 69) = 0;
      *((_QWORD *)v69 + 35) = 0LL;
      *(_DWORD *)v69 = v42;
      v50 = *((_BYTE *)v45 + 1);
      v69 += 296;
      v63 = v48 + 1;
      v51 = v50 == 0;
      if ( v50 < 0 || (v52 = 1, v51) )
        v52 = 0;
      v49[8] = v52;
      v65 = (char *)(v44 + 1);
      *((_QWORD *)v49 + 6) = v49 + 40;
      *((_QWORD *)v49 + 5) = v49 + 40;
      *((_DWORD *)v49 + 14) = 0;
      *((_QWORD *)v49 + 8) = v45;
      *((_QWORD *)v49 + 9) = *(_QWORD *)a1;
      v53 = v49 + 136;
      *((_DWORD *)v49 + 20) = *(_DWORD *)(a1 + 12);
      *((_QWORD *)v49 + 11) = 0LL;
      *((_DWORD *)v49 + 24) = v42;
      *((_DWORD *)v49 + 25) = v37[3];
      v54 = v37[2];
      *((_DWORD *)v49 + 32) = -1;
      *((_DWORD *)v49 + 26) = v54;
      *((_QWORD *)v49 + 14) = v49 + 136;
      *((_DWORD *)v49 + 21) = 0;
      if ( v49[8] )
        break;
      ++v44;
      *v53 = *((_BYTE *)v45 + 1);
      v48 = v63;
      v49[137] = *((_BYTE *)v45 + 2);
      *((_WORD *)v49 + 69) = *((_WORD *)v45 + 2);
      *((_DWORD *)v49 + 35) = v45[2];
      *((_DWORD *)v49 + 36) = v45[3];
      *((_DWORD *)v49 + 37) = v45[4];
      v60 = v74;
      if ( *((_BYTE *)v45 + 1) == 0x84 )
        v60 = 1;
      v74 = v60;
LABEL_83:
      v45 += 8;
LABEL_65:
      if ( v45 >= v4 )
        goto LABEL_71;
      v47 = v70;
    }
    *v53 = 8;
    v55 = (unsigned int)++*((_DWORD *)v49 + 14);
    v74 = 1;
    while ( 1 )
    {
      v45 += 8;
      if ( v45 >= v4 )
        break;
      if ( *((_BYTE *)v45 + 1) == 0x81 )
      {
        *((_QWORD *)v49 + 35) = v45;
        while ( v45 < v4 && *((_BYTE *)v45 + 1) == 0x81 )
        {
          ++*((_DWORD *)v49 + 69);
          v45 += 8;
        }
        break;
      }
      if ( (*(_BYTE *)v45 & 8) == 0 )
        break;
      v55 = (unsigned int)(v55 + 1);
      *((_DWORD *)v49 + 14) = v55;
    }
    v56 = IopSetupArbiterAndTranslators(v49, v49 + 40, v55);
    if ( v56 >= 0 )
    {
      v37 = v68;
      v44 = v65;
      v48 = v63;
      goto LABEL_65;
    }
    v36 = v71;
    --v35[8];
    v41 = v67;
    v66 = v71;
    IopFreeReqAlternative(v43);
    v64 = v56;
LABEL_72:
    --v40;
    v37 = v68;
  }
  while ( v40 >= 0 );
  if ( !v41 )
    goto LABEL_95;
  v57 = 0;
  if ( v74 )
    *a2 = v35;
  else
    IopFreeReqList(v35);
  return v57;
}
