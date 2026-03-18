/*
 * XREFs of RtlRbRemoveNode @ 0x140048460
 * Callers:
 *     PfSnNameRemove @ 0x140021FFC (PfSnNameRemove.c)
 *     KiRemoveTimer2 @ 0x140047F00 (KiRemoveTimer2.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14004B7C8 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiResetClockInterval @ 0x140067A68 (KiResetClockInterval.c)
 *     KiSetClockInterval @ 0x140067A94 (KiSetClockInterval.c)
 *     MiRescanPageFileBitmapPortion @ 0x14007DABC (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14007E0DC (MiInvalidatePageFileBitmapsCache.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400AC1E0 (MiCoalescePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400AF604 (MiBitmapsCachedEntryLengthChanged.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140114D04 (KiRemoveSchedulingGroupQueue.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14011F070 (KiAbEntryUpdateOwnerTreePosition.c)
 *     IoStopDiskIoAttributionForContext @ 0x14011F498 (IoStopDiskIoAttributionForContext.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140239878 (PspJobIoRateVolumeEntryRemove.c)
 *     RtlpHpVsFreeChunkRemove @ 0x140245ED0 (RtlpHpVsFreeChunkRemove.c)
 *     VmpFaultEntryRemove @ 0x140251DF0 (VmpFaultEntryRemove.c)
 *     VmpRemoveMemoryRange @ 0x140252564 (VmpRemoveMemoryRange.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14048253C (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404F257C (EtwpSetProviderTraitsCommon.c)
 *     EtwpDeleteSessionDemuxObject @ 0x140711550 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x140711984 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlRbRemoveNode(__int64 a1, unsigned __int64 *a2)
{
  char v2; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  char v8; // r10
  unsigned __int64 v9; // rbx
  bool v10; // zf
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  char v14; // r10
  char v15; // r10
  unsigned __int64 v16; // rdx
  char v17; // bl
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int64 *v20; // r14
  char v21; // cl
  unsigned __int64 v22; // rdx
  unsigned __int64 *v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // r10
  unsigned __int64 v27; // rdx
  char v28; // si
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  char v32; // r10
  unsigned __int64 v33; // rax
  char v34; // dl
  unsigned __int64 v35; // rdx
  __int64 v36; // rsi
  unsigned __int64 v37; // rcx
  char v38; // dl
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  char v43; // si
  unsigned __int64 v44; // rbp
  unsigned __int64 *v45; // r14
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  char v49; // dl
  __int64 v50; // rsi
  __int64 v51; // rbx
  unsigned __int64 v52; // r9
  char v53; // cl
  unsigned __int64 v54; // rax
  int v55; // ecx
  __int64 v56; // rax
  unsigned __int64 v57; // r9
  __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rax
  char v62; // dl
  __int64 v63; // rcx
  unsigned __int64 v64; // rax
  int v65; // ecx
  unsigned __int64 v66; // r9
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rsi
  __int64 v72; // r9
  unsigned __int64 v73; // r10
  unsigned __int64 v74; // r10
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // r10
  __int64 v78; // rdi
  unsigned __int64 v79; // rax
  int v80; // ecx
  __int64 *v81; // r15
  __int64 v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // r9
  unsigned __int64 *v88; // r14
  __int64 v89; // rax
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rcx
  __int64 v92; // rbx
  unsigned __int64 v93; // r9
  unsigned __int64 v94; // r9
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // rdi
  unsigned __int64 v98; // r9
  unsigned __int64 v99; // r9

  v2 = *(_BYTE *)(a1 + 8);
  result = *a2;
  if ( (v2 & 1) != 0 && result )
    result ^= (unsigned __int64)a2;
  v6 = a2[1];
  if ( (v2 & 1) != 0 && v6 )
    v6 ^= (unsigned __int64)a2;
  if ( result )
  {
    if ( !v6 )
      goto LABEL_5;
    v9 = v6;
    v7 = v6;
    v13 = 1;
    if ( *(_QWORD *)v6 )
    {
      v13 = 0;
      do
      {
        v71 = *(_QWORD *)v9;
        v7 = v9;
        if ( (v2 & 1) != 0 && v71 )
          v9 ^= v71;
        else
          v9 = *(_QWORD *)v9;
      }
      while ( *(_QWORD *)v9 );
    }
    if ( (v2 & 1) != 0 )
      v25 = result ^ v9;
    else
      v25 = result;
    *(_QWORD *)v9 = v25;
    v26 = *(_QWORD *)(result + 16);
    v27 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
    v28 = *(_BYTE *)(a1 + 8) & 1;
    if ( v28 && v27 )
      v27 ^= result;
    if ( (unsigned __int64 *)v27 != a2 )
      __fastfail(0x1Du);
    v29 = v9;
    if ( v28 )
      v29 = result ^ v9;
    *(_QWORD *)(result + 16) = v29 | v26 & 3;
    v30 = *(_QWORD *)(v6 + 16);
    v31 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
    v32 = *(_BYTE *)(a1 + 8) & 1;
    if ( v32 && v31 )
      v31 ^= v6;
    if ( (unsigned __int64 *)v31 != a2 )
      __fastfail(0x1Du);
    v33 = v9;
    if ( v32 )
      v33 = v6 ^ v9;
    *(_QWORD *)(v6 + 16) = v33 | v30 & 3;
    result = *(_QWORD *)(v9 + 8);
    v34 = *(_BYTE *)(a1 + 8) & 1;
    if ( v34 && result )
      result ^= v9;
    if ( v34 )
      v35 = v6 ^ v9;
    else
      v35 = v6;
    v36 = *(_QWORD *)(v9 + 16);
    *(_QWORD *)(v9 + 8) = v35;
    v37 = v36 & 0xFFFFFFFFFFFFFFFCuLL;
    v38 = *(_BYTE *)(a1 + 8) & 1;
    if ( v38 && v37 )
      v39 = v9 ^ v37;
    else
      v39 = v36 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v39 == v7 )
    {
LABEL_51:
      v14 = *(_BYTE *)(v9 + 16);
      v40 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v38 )
      {
        if ( v40 )
          v40 ^= (unsigned __int64)a2;
        if ( v40 )
          v40 ^= v9;
      }
      v41 = v40 | v36 & 3;
      *(_QWORD *)(v9 + 16) = v41;
      *(_BYTE *)(v9 + 16) ^= (*((_BYTE *)a2 + 16) ^ v41) & 1;
      v42 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v42 )
      {
        v43 = *(_BYTE *)(a1 + 8) & 1;
        if ( v43 )
          v42 ^= (unsigned __int64)a2;
        v44 = *(_QWORD *)(v42 + 8);
        if ( v43 && v44 )
          v44 ^= v42;
        v45 = (unsigned __int64 *)(v42 + 8LL * (v44 == (_QWORD)a2));
        v46 = *v45;
        if ( v43 && v46 )
          v46 ^= v42;
        if ( (unsigned __int64 *)v46 != a2 )
          __fastfail(0x1Du);
        if ( v43 )
          v47 = v9 ^ v42;
        else
          v47 = v9;
        *v45 = v47;
      }
      else
      {
        if ( *(unsigned __int64 **)a1 != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)a1 = v9;
      }
      goto LABEL_22;
    }
    if ( v38 )
    {
      if ( !v37 )
      {
LABEL_205:
        if ( v9 == v7 )
          goto LABEL_51;
LABEL_206:
        __fastfail(0x1Du);
      }
      v37 ^= v9;
    }
    if ( v37 )
      goto LABEL_206;
    goto LABEL_205;
  }
  result = v6;
LABEL_5:
  v7 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  v8 = v2 & 1;
  if ( v8 && v7 )
    v7 ^= (unsigned __int64)a2;
  v9 = (unsigned __int64)a2;
  if ( !v7 )
  {
    if ( result )
      *(_QWORD *)(result + 16) = 0LL;
    if ( *(unsigned __int64 **)a1 != a2 )
      __fastfail(0x1Du);
    v10 = (*(_BYTE *)(a1 + 8) & 1) == 0;
    *(_QWORD *)(a1 + 8) = result;
    if ( !v10 )
      *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = result;
    return result;
  }
  v11 = *(_QWORD *)(v7 + 8);
  if ( v8 && v11 )
    v11 ^= v7;
  if ( (unsigned __int64 *)v11 == a2 )
  {
    v13 = 1;
    goto LABEL_21;
  }
  v12 = *(_QWORD *)v7;
  if ( v8 && v12 )
    v12 ^= v7;
  if ( (unsigned __int64 *)v12 != a2 )
    __fastfail(0x1Du);
  v13 = 0;
  if ( (unsigned __int64 *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL) != a2 )
    goto LABEL_21;
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = result;
    if ( !v8 )
      goto LABEL_21;
LABEL_225:
    *(_BYTE *)(a1 + 8) |= 1u;
    goto LABEL_21;
  }
  *(_QWORD *)(a1 + 8) = v7;
  if ( v8 )
    goto LABEL_225;
LABEL_21:
  v14 = *((_BYTE *)a2 + 16);
LABEL_22:
  v15 = v14 & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && result )
    v16 = result ^ v7;
  else
    v16 = result;
  *(_QWORD *)(v7 + 8LL * v13) = v16;
  if ( result )
  {
    v48 = *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v49 = *(_BYTE *)(a1 + 8) & 1;
    if ( v49 && v48 )
      v48 ^= result;
    if ( v48 != v9 )
      __fastfail(0x1Du);
    if ( v49 && v7 )
      v7 ^= result;
    *(_QWORD *)(result + 16) = v7;
    return result;
  }
  if ( v15 )
    return result;
  while ( 1 )
  {
    v17 = *(_BYTE *)(a1 + 8);
    v18 = v13 ^ 1LL;
    v19 = *(_QWORD *)(v7 + 8 * v18);
    v20 = (unsigned __int64 *)(v7 + 8 * v18);
    v21 = v17 & 1;
    if ( (v17 & 1) != 0 && v19 )
      v22 = v7 ^ v19;
    else
      v22 = *(_QWORD *)(v7 + 8 * v18);
    v23 = (unsigned __int64 *)(v22 + 16);
    if ( (*(_BYTE *)(v22 + 16) & 1) == 0 )
      goto LABEL_29;
    v64 = *v23 & 0xFFFFFFFFFFFFFFFCuLL;
    v65 = v17 & 1;
    if ( (v17 & 1) != 0 && v64 )
      v64 ^= v22;
    if ( v64 != v7 )
      __fastfail(0x1Du);
    if ( (v17 & 1) != 0 && v19 )
      v19 ^= v7;
    if ( v19 != v22 )
      __fastfail(0x1Du);
    v66 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v17 & 1) != 0 )
    {
      if ( !v66 )
        goto LABEL_178;
      v66 ^= v7;
    }
    if ( v66 )
    {
      v67 = *(_QWORD *)(v66 + 8);
      if ( (v17 & 1) != 0 && v67 )
        v67 ^= v66;
      if ( v67 == v7 )
      {
        if ( (v17 & 1) != 0 )
          v68 = v22 ^ v66;
        else
          v68 = v22;
        *(_QWORD *)(v66 + 8) = v68;
      }
      else
      {
        v95 = *(_QWORD *)v66;
        if ( (v17 & 1) != 0 && v95 )
          v95 ^= v66;
        if ( v95 != v7 )
          __fastfail(0x1Du);
        if ( (v17 & 1) != 0 )
          v96 = v22 ^ v66;
        else
          v96 = v22;
        *(_QWORD *)v66 = v96;
      }
      goto LABEL_115;
    }
LABEL_178:
    if ( *(_QWORD *)a1 != v7 )
      __fastfail(0x1Du);
    *(_QWORD *)a1 = v22;
LABEL_115:
    if ( (v17 & 1) != 0 && v66 )
      v66 ^= v22;
    *v23 = v66 | *(_DWORD *)v23 & 3;
    v69 = *(_QWORD *)(v22 + 8LL * v13);
    if ( (v17 & 1) == 0 )
      goto LABEL_117;
    if ( v69 )
    {
      v69 ^= v22;
LABEL_117:
      if ( v69 )
      {
        v92 = *(_QWORD *)(v69 + 16);
        v93 = v92 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v65 && v93 )
          v93 ^= v69;
        if ( v93 != v22 )
          __fastfail(0x1Du);
        if ( v65 )
          v94 = v7 ^ v69;
        else
          v94 = v7;
        *(_QWORD *)(v69 + 16) = v94 | v92 & 3;
      }
    }
    if ( v65 && v69 )
      v69 ^= v7;
    *v20 = v69;
    if ( v65 )
      v70 = v7 ^ v22;
    else
      v70 = v7;
    *(_QWORD *)(v22 + 8LL * v13) = v70;
    if ( v65 )
      v22 ^= v7;
    *(_QWORD *)(v7 + 16) = v22 | *(_DWORD *)(v7 + 16) & 3;
    *(_BYTE *)v23 &= ~1u;
    *(_BYTE *)(v7 + 16) |= 1u;
    v22 = *v20;
    v21 = *(_BYTE *)(a1 + 8) & 1;
    if ( v21 && v22 )
      v22 ^= v7;
LABEL_29:
    v24 = *(_QWORD *)v22;
    if ( *(_QWORD *)v22 )
    {
      if ( v21 )
        v24 ^= v22;
      if ( (*(_BYTE *)(v24 + 16) & 1) != 0 )
        break;
    }
    result = *(_QWORD *)(v22 + 8);
    if ( result )
    {
      if ( v21 )
        result ^= v22;
      result = *(unsigned __int8 *)(result + 16);
      if ( (result & 1) != 0 )
        break;
    }
    if ( (*(_BYTE *)(v7 + 16) & 1) != 0 )
    {
      *(_BYTE *)(v7 + 16) &= ~1u;
      *(_BYTE *)(v22 + 16) |= 1u;
      return result;
    }
    *(_BYTE *)(v22 + 16) |= 1u;
    result = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v62 = *(_BYTE *)(a1 + 8) & 1;
    if ( v62 )
    {
      if ( !result )
        return result;
      result ^= v7;
    }
    if ( !result )
      return result;
    v63 = *(_QWORD *)(result + 8);
    if ( v62 && v63 )
      v63 ^= result;
    v10 = v63 == v7;
    v7 = result;
    v13 = v10;
  }
  v50 = v13;
  v51 = 8 * (v13 ^ 1LL);
  v52 = *(_QWORD *)(v51 + v22);
  v53 = *(_BYTE *)(a1 + 8) & 1;
  if ( v53 && v52 )
    v52 ^= v22;
  if ( !v52 || (*(_BYTE *)(v52 + 16) & 1) == 0 )
  {
    v77 = *(_QWORD *)(v22 + 8LL * v13);
    if ( v53 && v77 )
      v77 ^= v22;
    *(_BYTE *)(v77 + 16) &= ~1u;
    v78 = v13 ^ 1;
    v79 = *(_QWORD *)(v77 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v80 = *(_BYTE *)(a1 + 8) & 1;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v79 )
      v79 ^= v77;
    if ( v79 != v22 )
      __fastfail(0x1Du);
    v81 = (__int64 *)(v22 + 8 * ((unsigned int)v78 ^ 1LL));
    v82 = *v81;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v82 )
      v82 ^= v22;
    if ( v82 != v77 )
      __fastfail(0x1Du);
    v83 = 8 * v78;
    v84 = *(_QWORD *)(v83 + v7);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v84 )
      v84 ^= v7;
    if ( v84 != v22 )
      goto LABEL_319;
    v85 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v85 )
      v85 ^= v22;
    if ( v85 != v7 )
LABEL_319:
      __fastfail(0x1Du);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v86 = v77 ^ v7;
    else
      v86 = v77;
    *(_QWORD *)(v83 + v7) = v86;
    if ( v80 && v7 )
      v87 = v77 ^ v7;
    else
      v87 = v7;
    v88 = (unsigned __int64 *)(v83 + v77);
    *(_QWORD *)(v77 + 16) = v87 | *(_DWORD *)(v77 + 16) & 3;
    v89 = *(_QWORD *)(v83 + v77);
    if ( v80 )
    {
      if ( !v89 )
      {
LABEL_155:
        if ( v80 && v89 )
          v89 ^= v22;
        *v81 = v89;
        v90 = v22;
        if ( v80 )
          v90 = v77 ^ v22;
        *v88 = v90;
        if ( v80 )
          v91 = v77 ^ v22;
        else
          v91 = v77;
        v52 = v22;
        *(_QWORD *)(v22 + 16) = v91 | *(_DWORD *)(v22 + 16) & 3;
        v22 = v77;
        goto LABEL_72;
      }
      v89 ^= v77;
    }
    if ( v89 )
    {
      v97 = *(_QWORD *)(v89 + 16);
      v98 = v97 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v80 && v98 )
        v98 ^= v89;
      if ( v98 != v77 )
        __fastfail(0x1Du);
      if ( v80 )
        v99 = v22 ^ v89;
      else
        v99 = v22;
      *(_QWORD *)(v89 + 16) = v99 | v97 & 3;
    }
    goto LABEL_155;
  }
LABEL_72:
  *(_BYTE *)(v22 + 16) ^= (*(_BYTE *)(v22 + 16) ^ *(_BYTE *)(v7 + 16)) & 1;
  *(_BYTE *)(v7 + 16) &= ~1u;
  *(_BYTE *)(v52 + 16) &= ~1u;
  v54 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v55 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v54 )
    v54 ^= v22;
  if ( v54 != v7 )
    __fastfail(0x1Du);
  v56 = *(_QWORD *)(v51 + v7);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v56 )
    v56 ^= v7;
  if ( v56 != v22 )
    __fastfail(0x1Du);
  v57 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( v57 )
    {
      v57 ^= v7;
      goto LABEL_77;
    }
  }
  else
  {
LABEL_77:
    if ( v57 )
    {
      v58 = *(_QWORD *)(v57 + 8);
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v58 )
        v58 ^= v57;
      if ( v58 == v7 )
      {
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          v59 = v22 ^ v57;
        else
          v59 = v22;
        *(_QWORD *)(v57 + 8) = v59;
      }
      else
      {
        v75 = *(_QWORD *)v57;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v75 )
          v75 ^= v57;
        if ( v75 != v7 )
          __fastfail(0x1Du);
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          v76 = v22 ^ v57;
        else
          v76 = v22;
        *(_QWORD *)v57 = v76;
      }
      goto LABEL_83;
    }
  }
  if ( *(_QWORD *)a1 != v7 )
    __fastfail(0x1Du);
  *(_QWORD *)a1 = v22;
LABEL_83:
  if ( v55 && v57 )
    v57 ^= v22;
  *(_QWORD *)(v22 + 16) = v57 | *(_DWORD *)(v22 + 16) & 3;
  v60 = *(_QWORD *)(v22 + 8 * v50);
  if ( v55 )
  {
    if ( v60 )
    {
      v60 ^= v22;
      goto LABEL_85;
    }
  }
  else
  {
LABEL_85:
    if ( v60 )
    {
      v72 = *(_QWORD *)(v60 + 16);
      v73 = v72 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v55 && v73 )
        v73 ^= v60;
      if ( v73 != v22 )
        __fastfail(0x1Du);
      if ( v55 )
        v74 = v7 ^ v60;
      else
        v74 = v7;
      *(_QWORD *)(v60 + 16) = v74 | v72 & 3;
    }
  }
  if ( v55 && v60 )
    v60 ^= v7;
  *(_QWORD *)(v51 + v7) = v60;
  if ( v55 )
    v61 = v7 ^ v22;
  else
    v61 = v7;
  *(_QWORD *)(v22 + 8 * v50) = v61;
  if ( v55 )
    v22 ^= v7;
  result = v22 | *(_DWORD *)(v7 + 16) & 3;
  *(_QWORD *)(v7 + 16) = result;
  return result;
}
