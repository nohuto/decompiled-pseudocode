/*
 * XREFs of IopResourceRequirementsListToReqList @ 0x1406168D4
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x14016F33C (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1405DB5D0 (PnpGetResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x140616020 (IopAllocateBootResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x14073A6C4 (PnpRestoreResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x14074071C (IopQueryConflictListInternal.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IopFreeReqList @ 0x140616150 (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x1406161A8 (IopFreeReqAlternative.c)
 *     IopSetupArbiterAndTranslators @ 0x140616EB4 (IopSetupArbiterAndTranslators.c)
 */

__int64 __fastcall IopResourceRequirementsListToReqList(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // r13
  unsigned int v3; // edi
  unsigned int *v4; // rsi
  unsigned int *v5; // r14
  unsigned int v6; // r10d
  unsigned int *v7; // rdx
  int v8; // r8d
  int v9; // ebp
  unsigned int *v10; // rcx
  unsigned int *v11; // rbx
  char v12; // di
  unsigned int *v13; // rcx
  char v14; // r9
  int v15; // r15d
  int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // r13d
  unsigned int v19; // r15d
  unsigned int v20; // edx
  unsigned __int64 v21; // rcx
  signed int v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rbp
  unsigned int v25; // edx
  signed int v26; // eax
  unsigned int v27; // ebx
  unsigned int v28; // eax
  unsigned int v29; // r8d
  signed int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // eax
  unsigned int v34; // r12d
  _QWORD *PoolWithTag; // rax
  _QWORD *v36; // rsi
  unsigned int *v37; // r12
  __int64 *v38; // rbx
  int v39; // ecx
  unsigned int v40; // eax
  int v41; // ebp
  int *v42; // rdx
  __int64 v43; // r15
  unsigned int *v44; // rbx
  __int64 v45; // r14
  _QWORD *v46; // r10
  int *v47; // rax
  int v48; // ecx
  _QWORD *v49; // rax
  int v50; // edx
  __int64 v51; // rcx
  __int64 v52; // r8
  char v53; // al
  bool v54; // zf
  char v55; // al
  unsigned int v56; // eax
  __int64 v57; // r8
  int v58; // edi
  bool v59; // zf
  int v61; // eax
  unsigned __int64 v62; // rcx
  int v63; // r9d
  unsigned int v64; // [rsp+20h] [rbp-88h]
  int v65; // [rsp+24h] [rbp-84h]
  int v66; // [rsp+28h] [rbp-80h]
  __int64 *v67; // [rsp+30h] [rbp-78h]
  __int64 v68; // [rsp+38h] [rbp-70h]
  int v69; // [rsp+40h] [rbp-68h]
  __int64 v70; // [rsp+48h] [rbp-60h]
  _QWORD *v71; // [rsp+50h] [rbp-58h]
  __int64 *v72; // [rsp+58h] [rbp-50h]
  int v75; // [rsp+C0h] [rbp+18h]
  unsigned int *v76; // [rsp+C8h] [rbp+20h]
  int v77; // [rsp+C8h] [rbp+20h]

  *a2 = 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v75 = 0;
  v76 = v2;
  v3 = v2[7];
  if ( !v3 )
    return 0LL;
  v4 = (unsigned int *)((char *)v2 + *v2);
  v5 = v2 + 8;
  v6 = v3 - 1;
  v7 = v2 + 8;
  v8 = 0;
  v9 = 0;
  if ( (int)(v3 - 1) >= 0 )
  {
    while ( 1 )
    {
      v10 = v7 + 2;
      v7 += 8 * v7[1] + 2;
      if ( v10 == v7 )
        return 0LL;
      if ( v10 > v7 || v10 > v4 || v7 > v4 )
        return 3221225485LL;
      v11 = v10 + 8;
      v12 = 1;
      if ( *((_BYTE *)v10 + 1) != 0x80 )
        v11 = v10;
      if ( v11 < v7 )
        break;
LABEL_18:
      if ( (--v6 & 0x80000000) != 0 )
      {
        v3 = v2[7];
        goto LABEL_20;
      }
    }
    v13 = v11;
    while ( 1 )
    {
      v14 = *((_BYTE *)v13 + 1);
      v15 = v8;
      if ( (unsigned __int8)v14 == 128 )
        return 3221225485LL;
      if ( *((unsigned __int8 *)v13 + 1) == 129 )
        break;
      v16 = ++v8;
      if ( v14 <= 0 )
      {
        v8 = v15;
        *(_BYTE *)v13 = 1;
        v13 += 8;
        if ( v14 != -16 )
          v8 = v16;
LABEL_66:
        v12 = 1;
        goto LABEL_17;
      }
      if ( (*(_BYTE *)v13 & 8) != 0 )
      {
        if ( v12 )
          return 3221225485LL;
        ++v9;
      }
      else
      {
        v12 = 0;
      }
      v13 += 8;
LABEL_17:
      if ( v13 >= v7 )
        goto LABEL_18;
    }
    while ( v13 < v7 && *((_BYTE *)v13 + 1) == 0x81 )
    {
      if ( v13 == v11 )
        return 3221225485LL;
      ++v8;
      v13 += 8;
    }
    goto LABEL_66;
  }
LABEL_20:
  v17 = v8 - v9;
  v18 = -1073741823;
  if ( 296 * (unsigned __int64)v17 > 0xFFFFFFFF )
    return 2147483653LL;
  v19 = 296 * v17;
  if ( v17 <= 1 )
  {
    v20 = 0;
    v22 = 0;
  }
  else
  {
    v20 = -1;
    v21 = 8LL * (v17 - 1);
    if ( v21 <= 0xFFFFFFFF )
      v20 = 8 * (v17 - 1);
    v22 = v21 > 0xFFFFFFFF ? 0xC0000095 : 0;
  }
  if ( v22 < 0 )
    return 2147483653LL;
  if ( v20 + 32 < v20 )
    return 2147483653LL;
  v23 = v3 * (unsigned __int64)(v20 + 32);
  if ( v23 > 0xFFFFFFFF )
    return 2147483653LL;
  v24 = (unsigned int)v23;
  if ( v3 > 1 )
  {
    v25 = -1;
    v62 = 8LL * (v3 - 1);
    if ( v62 <= 0xFFFFFFFF )
      v25 = 8 * (v3 - 1);
    v26 = v62 > 0xFFFFFFFF ? 0xC0000095 : 0;
  }
  else
  {
    v25 = 0;
    v26 = 0;
  }
  if ( v26 < 0 || v25 + 48 < v25 )
    return 2147483653LL;
  v27 = v25 + 48;
  v28 = v25 + 48 + v24;
  v29 = -1;
  if ( v27 + (unsigned int)v24 >= v27 )
    v29 = v25 + 48 + v24;
  v30 = v28 < v27 ? 0xC0000095 : 0;
  if ( v28 >= v27 )
  {
    v31 = v29 + v19;
    v32 = v29;
    v33 = -1;
    if ( v29 + v19 >= v29 )
      v33 = v29 + v19;
    v29 = v33;
    v30 = v31 < v32 ? 0xC0000095 : 0;
  }
  if ( v30 < 0 )
    return 2147483653LL;
  v34 = v29;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v29, 0x20207050u);
  v36 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v34);
  v68 = (__int64)v36 + v27;
  memset((void *)v68, 0, (unsigned int)v24);
  v70 = v68 + v24;
  memset((void *)(v68 + v24), 0, v19);
  v37 = v76;
  v38 = v36 + 5;
  v67 = v36 + 5;
  v39 = v76[1];
  v40 = v76[2];
  if ( v39 == -1 )
    v39 = PnpDefaultInterfaceType;
  v36[2] = 0LL;
  v77 = v39;
  *(_DWORD *)v36 = v39;
  v36[1] = a1;
  v64 = v40;
  *((_DWORD *)v36 + 8) = v3;
  *((_DWORD *)v36 + 1) = v40;
  memset(v36 + 5, 0, 8LL * v3);
  v41 = 0;
  v66 = v3 - 1;
  if ( (int)(v3 - 1) < 0 )
    goto LABEL_69;
  do
  {
    v42 = (int *)v68;
    v72 = v38;
    v43 = v68;
    v44 = v5 + 2;
    v69 = v41;
    v45 = v5[1];
    v46 = (_QWORD *)(v68 + 24);
    *v67 = v68;
    *(_DWORD *)(v68 + 16) = v41;
    v5 = &v44[8 * v45];
    ++v41;
    *(_QWORD *)(v68 + 8) = v36;
    *(_DWORD *)(v68 + 20) = 0;
    v68 += 24LL;
    ++v67;
    if ( *((_BYTE *)v44 + 1) == 0x80 )
    {
      v47 = (int *)(v44 + 2);
      v44 += 8;
      v48 = *v47;
    }
    else
    {
      v48 = 12288;
    }
    *v42 = v48;
    v49 = v46;
    v71 = v46;
    v50 = 0;
    if ( v44 >= v5 )
    {
LABEL_67:
      v38 = v67;
      goto LABEL_68;
    }
    while ( 1 )
    {
      if ( *((_BYTE *)v44 + 1) == 0xF0 )
      {
        v63 = v44[2];
        if ( v63 == -1 )
          v63 = PnpDefaultInterfaceType;
        v77 = v63;
        v64 = v44[3];
        goto LABEL_89;
      }
      ++*(_DWORD *)(v43 + 20);
      v51 = v70;
      v52 = v70;
      *v49 = v70;
      v70 += 296LL;
      v71 = v49 + 1;
      *(_DWORD *)(v52 + 24) = v50;
      *(_DWORD *)(v52 + 4) = v64;
      *(_QWORD *)(v52 + 16) = v43;
      *(_QWORD *)(v52 + 32) = v52;
      *(_DWORD *)(v52 + 276) = 0;
      *(_QWORD *)(v52 + 280) = 0LL;
      *(_DWORD *)v52 = v77;
      v53 = *((_BYTE *)v44 + 1);
      v65 = v50 + 1;
      v54 = v53 == 0;
      if ( v53 < 0 || (v55 = 1, v54) )
        v55 = 0;
      *(_BYTE *)(v51 + 8) = v55;
      ++v46;
      *(_QWORD *)(v51 + 48) = v51 + 40;
      *(_QWORD *)(v51 + 40) = v51 + 40;
      *(_DWORD *)(v51 + 56) = 0;
      *(_QWORD *)(v51 + 64) = v44;
      *(_QWORD *)(v51 + 72) = *(_QWORD *)a1;
      *(_DWORD *)(v51 + 80) = *(_DWORD *)(a1 + 12);
      *(_QWORD *)(v51 + 88) = 0LL;
      *(_DWORD *)(v51 + 96) = v77;
      *(_DWORD *)(v51 + 100) = v37[3];
      v56 = v37[2];
      *(_DWORD *)(v51 + 128) = -1;
      *(_DWORD *)(v51 + 104) = v56;
      *(_QWORD *)(v51 + 112) = v51 + 136;
      *(_DWORD *)(v51 + 84) = 0;
      v68 = (__int64)v46;
      if ( *(_BYTE *)(v51 + 8) )
        break;
      ++v50;
      *(_BYTE *)(v52 + 136) = *((_BYTE *)v44 + 1);
      *(_BYTE *)(v51 + 137) = *((_BYTE *)v44 + 2);
      *(_WORD *)(v51 + 138) = *((_WORD *)v44 + 2);
      *(_DWORD *)(v51 + 140) = v44[2];
      *(_DWORD *)(v51 + 144) = v44[3];
      *(_DWORD *)(v51 + 148) = v44[4];
      v61 = v75;
      if ( *((_BYTE *)v44 + 1) == 0x84 )
        v61 = 1;
      v75 = v61;
LABEL_89:
      v44 += 8;
LABEL_56:
      if ( v44 >= v5 )
        goto LABEL_67;
      v49 = v71;
    }
    *(_BYTE *)(v52 + 136) = 8;
    v57 = (unsigned int)++*(_DWORD *)(v51 + 56);
    v75 = 1;
    while ( 1 )
    {
      v44 += 8;
      if ( v44 >= v5 )
        break;
      if ( *((_BYTE *)v44 + 1) == 0x81 )
      {
        *(_QWORD *)(v51 + 280) = v44;
        while ( v44 < v5 && *((_BYTE *)v44 + 1) == 0x81 )
        {
          ++*(_DWORD *)(v51 + 276);
          v44 += 8;
        }
        break;
      }
      if ( (*(_BYTE *)v44 & 8) == 0 )
        break;
      v57 = (unsigned int)(v57 + 1);
      *(_DWORD *)(v51 + 56) = v57;
    }
    v58 = IopSetupArbiterAndTranslators(v51, v51 + 40, v57);
    if ( v58 >= 0 )
    {
      v46 = (_QWORD *)v68;
      v50 = v65;
      goto LABEL_56;
    }
    v38 = v72;
    --*((_DWORD *)v36 + 8);
    v41 = v69;
    v67 = v72;
    IopFreeReqAlternative(v43);
    v18 = v58;
LABEL_68:
    --v66;
  }
  while ( v66 >= 0 );
LABEL_69:
  v59 = v41 == 0;
  if ( !v41 )
  {
    IopFreeReqList(v36);
    v59 = 1;
  }
  if ( !v59 )
    v18 = 0;
  if ( !v18 )
  {
    if ( v75 )
      *a2 = v36;
    else
      IopFreeReqList(v36);
  }
  return v18;
}
