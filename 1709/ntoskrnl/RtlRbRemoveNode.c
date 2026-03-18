/*
 * XREFs of RtlRbRemoveNode @ 0x14005EF60
 * Callers:
 *     IoStopDiskIoAttributionForContext @ 0x140007C70 (IoStopDiskIoAttributionForContext.c)
 *     PfSnNameRemove @ 0x14001292C (PfSnNameRemove.c)
 *     KiRemoveTimer2 @ 0x14005DBF0 (KiRemoveTimer2.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1400A9504 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400AA8CC (KiAbEntryUpdateWaiterTreePosition.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400C0700 (MiCoalescePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400C300C (MiBitmapsCachedEntryLengthChanged.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400D2A58 (KiRemoveSchedulingGroupQueue.c)
 *     KiResetClockInterval @ 0x14010F138 (KiResetClockInterval.c)
 *     KiSetClockInterval @ 0x14010F168 (KiSetClockInterval.c)
 *     MiRescanPageFileBitmapPortion @ 0x14011A238 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14011A84C (MiInvalidatePageFileBitmapsCache.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x14024E828 (PspJobIoRateVolumeEntryRemove.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14025D3C4 (RtlpHpVsFreeChunkRemove.c)
 *     VmpFaultEntryRemove @ 0x140278C5C (VmpFaultEntryRemove.c)
 *     VmpRemoveMemoryRange @ 0x1402799A0 (VmpRemoveMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x14048E848 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140492018 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14074F0A0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x14074F4D4 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlRbRemoveNode(__int64 a1, unsigned __int64 a2)
{
  char v4; // dl
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 result; // rax
  char v8; // dl
  unsigned __int64 v9; // r11
  bool v10; // zf
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  BOOL v13; // edi
  char v14; // bl
  char v15; // bl
  unsigned __int64 v16; // rdx
  char v17; // bl
  unsigned __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned __int64 *v21; // r14
  char v22; // dl
  unsigned __int64 v23; // r8
  unsigned __int64 *v24; // r11
  __int64 v25; // rcx
  __int64 v26; // rcx
  char v27; // cl
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  __int64 v30; // rbx
  unsigned __int64 v31; // rdx
  char v32; // si
  unsigned __int64 v33; // rdx
  __int64 v34; // r9
  unsigned __int64 v35; // rdx
  char v36; // bl
  unsigned __int64 v37; // rdx
  char v38; // dl
  unsigned __int64 v39; // rdx
  __int64 v40; // rsi
  unsigned __int64 v41; // rcx
  char v42; // dl
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rdx
  char v47; // si
  unsigned __int64 v48; // rbp
  __int64 v49; // rcx
  unsigned __int64 *v50; // r14
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  char v54; // dl
  _BOOL8 v55; // rsi
  __int64 v56; // rbx
  unsigned __int64 v57; // r9
  char v58; // dl
  unsigned __int64 v59; // rcx
  int v60; // edx
  __int64 v61; // rcx
  unsigned __int64 v62; // r9
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rcx
  char v68; // dl
  __int64 v69; // rcx
  __int64 v70; // r9
  unsigned __int64 v71; // r10
  unsigned __int64 v72; // r10
  unsigned __int64 v73; // rcx
  int v74; // edx
  unsigned __int64 v75; // r9
  __int64 v76; // rcx
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rcx
  __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // r11
  unsigned int v83; // edi
  unsigned __int64 v84; // rcx
  int v85; // edx
  __int64 v86; // r9
  __int64 *v87; // rdi
  __int64 v88; // rcx
  __int64 v89; // r14
  __int64 v90; // rcx
  unsigned __int64 v91; // rcx
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // r9
  __int64 v94; // rcx
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // rdx
  __int64 v97; // rbx
  unsigned __int64 v98; // r9
  unsigned __int64 v99; // r9
  __int64 v100; // rcx
  unsigned __int64 v101; // rcx
  __int64 v102; // rbp
  unsigned __int64 v103; // r9
  unsigned __int64 v104; // r9

  v4 = *(_BYTE *)(a1 + 8);
  v5 = *(_QWORD *)a2;
  if ( (v4 & 1) != 0 && v5 )
    v5 ^= a2;
  v6 = *(_QWORD *)(a2 + 8);
  if ( (v4 & 1) != 0 && v6 )
    v6 ^= a2;
  if ( v5 )
  {
    if ( !v6 )
      goto LABEL_5;
    v9 = v6;
    result = v6;
    v13 = 1;
    if ( *(_QWORD *)v6 )
    {
      v13 = 0;
      do
      {
        v28 = *(_QWORD *)v9;
        result = v9;
        if ( (v4 & 1) != 0 && v28 )
          v9 ^= v28;
        else
          v9 = *(_QWORD *)v9;
      }
      while ( *(_QWORD *)v9 );
    }
    if ( (v4 & 1) != 0 )
      v29 = v5 ^ v9;
    else
      v29 = v5;
    *(_QWORD *)v9 = v29;
    v30 = *(_QWORD *)(v5 + 16);
    v31 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
    v32 = *(_BYTE *)(a1 + 8) & 1;
    if ( v32 && v31 )
      v31 ^= v5;
    if ( v31 != a2 )
      __fastfail(0x1Du);
    v33 = v9;
    if ( v32 )
      v33 = v5 ^ v9;
    *(_QWORD *)(v5 + 16) = v33 | v30 & 3;
    v34 = *(_QWORD *)(v6 + 16);
    v35 = v34 & 0xFFFFFFFFFFFFFFFCuLL;
    v36 = *(_BYTE *)(a1 + 8) & 1;
    if ( v36 && v35 )
      v35 ^= v6;
    if ( v35 != a2 )
      __fastfail(0x1Du);
    v37 = v9;
    if ( v36 )
      v37 = v6 ^ v9;
    *(_QWORD *)(v6 + 16) = v37 | v34 & 3;
    v5 = *(_QWORD *)(v9 + 8);
    v38 = *(_BYTE *)(a1 + 8) & 1;
    if ( v38 && v5 )
      v5 ^= v9;
    if ( v38 )
      v39 = v6 ^ v9;
    else
      v39 = v6;
    v40 = *(_QWORD *)(v9 + 16);
    *(_QWORD *)(v9 + 8) = v39;
    v41 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
    v42 = *(_BYTE *)(a1 + 8) & 1;
    if ( v42 && v41 )
      v43 = v9 ^ v41;
    else
      v43 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v43 == result )
    {
LABEL_55:
      v14 = *(_BYTE *)(v9 + 16);
      v44 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v42 )
      {
        if ( v44 )
          v44 ^= a2;
        if ( v44 )
          v44 ^= v9;
      }
      v45 = v44 | v40 & 3;
      *(_QWORD *)(v9 + 16) = v45;
      *(_BYTE *)(v9 + 16) ^= (*(_BYTE *)(a2 + 16) ^ v45) & 1;
      v46 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v46 )
      {
        v47 = *(_BYTE *)(a1 + 8) & 1;
        if ( v47 )
          v46 ^= a2;
        v48 = *(_QWORD *)(v46 + 8);
        if ( v47 && v48 )
          v48 ^= v46;
        v49 = 0LL;
        if ( v48 == a2 )
          v49 = 8LL;
        v50 = (unsigned __int64 *)(v49 + v46);
        v51 = *(_QWORD *)(v49 + v46);
        if ( v47 && v51 )
          v51 ^= v46;
        if ( v51 != a2 )
          __fastfail(0x1Du);
        if ( v47 )
          v52 = v9 ^ v46;
        else
          v52 = v9;
        *v50 = v52;
      }
      else
      {
        if ( *(_QWORD *)a1 != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)a1 = v9;
      }
      goto LABEL_22;
    }
    if ( v42 )
    {
      if ( !v41 )
      {
LABEL_207:
        if ( v9 == result )
          goto LABEL_55;
LABEL_208:
        __fastfail(0x1Du);
      }
      v41 ^= v9;
    }
    if ( v41 )
      goto LABEL_208;
    goto LABEL_207;
  }
  v5 = v6;
LABEL_5:
  result = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v8 = v4 & 1;
  if ( v8 && result )
    result ^= a2;
  v9 = a2;
  if ( !result )
  {
    if ( v5 )
      *(_QWORD *)(v5 + 16) = 0LL;
    if ( *(_QWORD *)a1 != a2 )
      __fastfail(0x1Du);
    v10 = (*(_BYTE *)(a1 + 8) & 1) == 0;
    *(_QWORD *)(a1 + 8) = v5;
    if ( !v10 )
      *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v5;
    return result;
  }
  v11 = *(_QWORD *)(result + 8);
  if ( v8 && v11 )
    v11 ^= result;
  if ( v11 == a2 )
  {
    v13 = 1;
    goto LABEL_21;
  }
  v12 = *(_QWORD *)result;
  if ( v8 && v12 )
    v12 ^= result;
  if ( v12 != a2 )
    __fastfail(0x1Du);
  v13 = 0;
  if ( (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL) != a2 )
    goto LABEL_21;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 8) = v5;
    if ( !v8 )
      goto LABEL_21;
LABEL_227:
    *(_BYTE *)(a1 + 8) |= 1u;
    goto LABEL_21;
  }
  *(_QWORD *)(a1 + 8) = result;
  if ( v8 )
    goto LABEL_227;
LABEL_21:
  v14 = *(_BYTE *)(a2 + 16);
LABEL_22:
  v15 = v14 & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v5 )
    v16 = v5 ^ result;
  else
    v16 = v5;
  *(_QWORD *)(result + 8LL * v13) = v16;
  if ( v5 )
  {
    v53 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v54 = *(_BYTE *)(a1 + 8) & 1;
    if ( v54 && v53 )
      v53 ^= v5;
    if ( v53 != v9 )
      __fastfail(0x1Du);
    if ( v54 && result )
      result ^= v5;
    *(_QWORD *)(v5 + 16) = result;
    return result;
  }
  if ( v15 )
    return result;
  while ( 1 )
  {
    v17 = *(_BYTE *)(a1 + 8);
    v18 = result;
    v19 = !v13;
    v20 = *(_QWORD *)(result + 8 * v19);
    v21 = (unsigned __int64 *)(result + 8 * v19);
    v22 = v17 & 1;
    if ( (v17 & 1) != 0 && v20 )
      v23 = result ^ v20;
    else
      v23 = *(_QWORD *)(result + 8 * v19);
    v24 = (unsigned __int64 *)(v23 + 16);
    if ( (*(_BYTE *)(v23 + 16) & 1) == 0 )
      goto LABEL_29;
    v73 = *v24 & 0xFFFFFFFFFFFFFFFCuLL;
    v74 = v17 & 1;
    if ( (v17 & 1) != 0 && v73 )
      v73 ^= v23;
    if ( v73 != result )
      __fastfail(0x1Du);
    if ( (v17 & 1) != 0 && v20 )
      v20 ^= result;
    if ( v20 != v23 )
      __fastfail(0x1Du);
    v75 = *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v17 & 1) != 0 )
    {
      if ( !v75 )
        goto LABEL_180;
      v75 ^= result;
    }
    if ( v75 )
    {
      v76 = *(_QWORD *)(v75 + 8);
      if ( (v17 & 1) != 0 && v76 )
        v76 ^= v75;
      if ( v76 == result )
      {
        if ( (v17 & 1) != 0 )
          v77 = v23 ^ v75;
        else
          v77 = v23;
        *(_QWORD *)(v75 + 8) = v77;
      }
      else
      {
        v100 = *(_QWORD *)v75;
        if ( (v17 & 1) != 0 && v100 )
          v100 ^= v75;
        if ( v100 != result )
          __fastfail(0x1Du);
        if ( (v17 & 1) != 0 )
          v101 = v23 ^ v75;
        else
          v101 = v23;
        *(_QWORD *)v75 = v101;
      }
      goto LABEL_127;
    }
LABEL_180:
    if ( *(_QWORD *)a1 != result )
      __fastfail(0x1Du);
    *(_QWORD *)a1 = v23;
LABEL_127:
    if ( (v17 & 1) != 0 && v75 )
      v75 ^= v23;
    *v24 = v75 | *(_DWORD *)v24 & 3;
    v78 = *(_QWORD *)(v23 + 8LL * v13);
    if ( (v17 & 1) == 0 )
      goto LABEL_129;
    if ( v78 )
    {
      v78 ^= v23;
LABEL_129:
      if ( v78 )
      {
        v97 = *(_QWORD *)(v78 + 16);
        v98 = v97 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v74 && v98 )
          v98 ^= v78;
        if ( v98 != v23 )
          __fastfail(0x1Du);
        if ( v74 )
          v99 = result ^ v78;
        else
          v99 = result;
        *(_QWORD *)(v78 + 16) = v99 | v97 & 3;
      }
    }
    if ( v74 && v78 )
      v78 ^= result;
    *v21 = v78;
    if ( v74 )
      v79 = result ^ v23;
    else
      v79 = result;
    *(_QWORD *)(v23 + 8LL * v13) = v79;
    if ( v74 )
      v23 ^= result;
    *(_QWORD *)(result + 16) = v23 | *(_DWORD *)(result + 16) & 3;
    *(_BYTE *)v24 &= ~1u;
    *(_BYTE *)(result + 16) |= 1u;
    v23 = *v21;
    v22 = *(_BYTE *)(a1 + 8) & 1;
    if ( v22 && v23 )
      v23 ^= result;
LABEL_29:
    v25 = *(_QWORD *)v23;
    if ( *(_QWORD *)v23 )
    {
      if ( v22 )
        v25 ^= v23;
      if ( (*(_BYTE *)(v25 + 16) & 1) != 0 )
        break;
    }
    v26 = *(_QWORD *)(v23 + 8);
    if ( v26 )
    {
      if ( v22 )
        v26 ^= v23;
      if ( (*(_BYTE *)(v26 + 16) & 1) != 0 )
        break;
    }
    v27 = *(_BYTE *)(result + 16);
    if ( (v27 & 1) != 0 )
    {
      *(_BYTE *)(result + 16) = v27 & 0xFE;
      *(_BYTE *)(v23 + 16) |= 1u;
      return result;
    }
    *(_BYTE *)(v23 + 16) |= 1u;
    v67 = *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v68 = *(_BYTE *)(a1 + 8) & 1;
    if ( v68 && v67 )
      result ^= v67;
    else
      result = *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !result )
      return result;
    v69 = *(_QWORD *)(result + 8);
    if ( v68 && v69 )
      v69 ^= result;
    v13 = v69 == v18;
  }
  v55 = v13;
  v56 = 8 * !v13;
  v57 = *(_QWORD *)(v56 + v23);
  v58 = *(_BYTE *)(a1 + 8) & 1;
  if ( v58 )
  {
    if ( v57 )
    {
      v57 ^= v23;
      goto LABEL_80;
    }
  }
  else
  {
LABEL_80:
    if ( v57 && (*(_BYTE *)(v57 + 16) & 1) != 0 )
      goto LABEL_82;
  }
  v82 = *(_QWORD *)(v23 + 8LL * v13);
  if ( v58 && v82 )
    v82 ^= v23;
  *(_BYTE *)(v82 + 16) &= ~1u;
  v83 = !v13;
  v84 = *(_QWORD *)(v82 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v85 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v84 )
    v84 ^= v82;
  if ( v84 != v23 )
    __fastfail(0x1Du);
  v86 = v83;
  v87 = (__int64 *)(v23 + 8 * (v83 ^ 1LL));
  v88 = *v87;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v88 )
    v88 ^= v23;
  if ( v88 != v82 )
    __fastfail(0x1Du);
  v89 = 8 * v86;
  v90 = *(_QWORD *)(8 * v86 + result);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v90 )
    v90 ^= result;
  if ( v90 != v23 )
    goto LABEL_321;
  v91 = *(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v91 )
    v91 ^= v23;
  if ( v91 != result )
LABEL_321:
    __fastfail(0x1Du);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    v92 = v82 ^ result;
  else
    v92 = v82;
  *(_QWORD *)(v89 + result) = v92;
  if ( v85 && result )
    v93 = v82 ^ result;
  else
    v93 = result;
  *(_QWORD *)(v82 + 16) = v93 | *(_DWORD *)(v82 + 16) & 3;
  v94 = *(_QWORD *)(v89 + v82);
  if ( v85 )
  {
    if ( v94 )
    {
      v94 ^= v82;
      goto LABEL_156;
    }
  }
  else
  {
LABEL_156:
    if ( v94 )
    {
      v102 = *(_QWORD *)(v94 + 16);
      v103 = v102 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v85 && v103 )
        v103 ^= v94;
      if ( v103 != v82 )
        __fastfail(0x1Du);
      if ( v85 )
        v104 = v23 ^ v94;
      else
        v104 = v23;
      *(_QWORD *)(v94 + 16) = v104 | v102 & 3;
    }
  }
  if ( v85 && v94 )
    v94 ^= v23;
  *v87 = v94;
  v95 = v23;
  if ( v85 )
    v95 = v82 ^ v23;
  *(_QWORD *)(v89 + v82) = v95;
  if ( v85 )
    v96 = v82 ^ v23;
  else
    v96 = v82;
  v57 = v23;
  *(_QWORD *)(v23 + 16) = v96 | *(_DWORD *)(v23 + 16) & 3;
  v23 = v82;
LABEL_82:
  *(_BYTE *)(v23 + 16) ^= (*(_BYTE *)(result + 16) ^ *(_BYTE *)(v23 + 16)) & 1;
  *(_BYTE *)(result + 16) &= ~1u;
  *(_BYTE *)(v57 + 16) &= ~1u;
  v59 = *(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v60 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v59 )
    v59 ^= v23;
  if ( v59 != result )
    __fastfail(0x1Du);
  v61 = *(_QWORD *)(v56 + result);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v61 )
    v61 ^= result;
  if ( v61 != v23 )
    __fastfail(0x1Du);
  v62 = *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( v62 )
    {
      v62 ^= result;
      goto LABEL_87;
    }
  }
  else
  {
LABEL_87:
    if ( v62 )
    {
      v63 = *(_QWORD *)(v62 + 8);
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v63 )
        v63 ^= v62;
      if ( v63 == result )
      {
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          v64 = v23 ^ v62;
        else
          v64 = v23;
        *(_QWORD *)(v62 + 8) = v64;
      }
      else
      {
        v80 = *(_QWORD *)v62;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v80 )
          v80 ^= v62;
        if ( v80 != result )
          __fastfail(0x1Du);
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          v81 = v23 ^ v62;
        else
          v81 = v23;
        *(_QWORD *)v62 = v81;
      }
      goto LABEL_93;
    }
  }
  if ( *(_QWORD *)a1 != result )
    __fastfail(0x1Du);
  *(_QWORD *)a1 = v23;
LABEL_93:
  if ( v60 && v62 )
    v62 ^= v23;
  *(_QWORD *)(v23 + 16) = v62 | *(_DWORD *)(v23 + 16) & 3;
  v65 = *(_QWORD *)(v23 + 8 * v55);
  if ( v60 )
  {
    if ( v65 )
    {
      v65 ^= v23;
      goto LABEL_95;
    }
  }
  else
  {
LABEL_95:
    if ( v65 )
    {
      v70 = *(_QWORD *)(v65 + 16);
      v71 = v70 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v60 && v71 )
        v71 ^= v65;
      if ( v71 != v23 )
        __fastfail(0x1Du);
      if ( v60 )
        v72 = result ^ v65;
      else
        v72 = result;
      *(_QWORD *)(v65 + 16) = v72 | v70 & 3;
    }
  }
  if ( v60 && v65 )
    v65 ^= result;
  *(_QWORD *)(v56 + result) = v65;
  if ( v60 )
    v66 = result ^ v23;
  else
    v66 = result;
  *(_QWORD *)(v23 + 8 * v55) = v66;
  if ( v60 )
    v23 ^= result;
  *(_QWORD *)(result + 16) = v23 | *(_DWORD *)(result + 16) & 3;
  return result;
}
