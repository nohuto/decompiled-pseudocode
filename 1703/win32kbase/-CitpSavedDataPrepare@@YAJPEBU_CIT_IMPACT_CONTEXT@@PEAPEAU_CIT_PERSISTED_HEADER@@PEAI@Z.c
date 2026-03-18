/*
 * XREFs of ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C0155758
 * Callers:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0087604 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 * Callees:
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C0053F28 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ??$CitpBaseDataOutput@UCIT_PERSISTED_SYSTEM_DATA@@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONTEXT@@PEAUCIT_PERSISTED_SYSTEM_DATA@@PEBU_CIT_SYSTEM_DATA@@@Z @ 0x1C0152FB4 (--$CitpBaseDataOutput@UCIT_PERSISTED_SYSTEM_DATA@@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAV.c)
 *     ??$CitpBaseDataOutput@UCIT_PERSISTED_USE_DATA@@U_CIT_USE_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONTEXT@@PEAUCIT_PERSISTED_USE_DATA@@PEBU_CIT_USE_DATA@@@Z @ 0x1C01530CC (--$CitpBaseDataOutput@UCIT_PERSISTED_USE_DATA@@U_CIT_USE_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONT.c)
 *     ?AdvanceToNext@?$CIT_PERSISTED_SECTION@UCIT_PERSISTED_USE_DATA@@@@QEAAXXZ @ 0x1C0153560 (-AdvanceToNext@-$CIT_PERSISTED_SECTION@UCIT_PERSISTED_USE_DATA@@@@QEAAXXZ.c)
 *     ?CitPersistedDataComputeCrc@@YAIPEBXI@Z @ 0x1C0153738 (-CitPersistedDataComputeCrc@@YAIPEBXI@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0154590 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpSavedDataPrepare(
        const struct _CIT_IMPACT_CONTEXT *a1,
        union _LARGE_INTEGER **a2,
        unsigned int *a3)
{
  const struct _CIT_IMPACT_CONTEXT *v3; // r12
  unsigned int v4; // esi
  int v5; // r11d
  DWORD v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  const char *v12; // rdx
  unsigned int v13; // r14d
  unsigned int v14; // r13d
  unsigned int v15; // edi
  int v16; // r8d
  union _LARGE_INTEGER *v17; // rax
  union _LARGE_INTEGER *v18; // r15
  int v19; // ecx
  int v20; // eax
  union _LARGE_INTEGER *v21; // rdx
  _DWORD *v22; // r9
  unsigned int v23; // edx
  _DWORD *v24; // r9
  unsigned int v25; // r15d
  unsigned int *QuadPart; // r11
  void *v27; // rcx
  unsigned int v28; // r10d
  DWORD v29; // r8d
  unsigned int v30; // r13d
  __int64 v31; // r14
  unsigned int *v32; // r12
  __int64 v33; // rax
  int v34; // edi
  unsigned int v35; // edi
  unsigned int v36; // eax
  __int64 v37; // rax
  int v38; // edi
  unsigned int v39; // edi
  unsigned int v40; // eax
  _DWORD *v41; // rcx
  _DWORD *v42; // r9
  unsigned int v44; // [rsp+20h] [rbp-E0h]
  char *v45; // [rsp+20h] [rbp-E0h]
  union _LARGE_INTEGER LocalTime; // [rsp+28h] [rbp-D8h] BYREF
  int v47; // [rsp+30h] [rbp-D0h]
  _DWORD *v48; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v49; // [rsp+40h] [rbp-C0h]
  unsigned int v50; // [rsp+48h] [rbp-B8h] BYREF
  int v51; // [rsp+4Ch] [rbp-B4h]
  __int64 v52; // [rsp+50h] [rbp-B0h]
  char *v53; // [rsp+58h] [rbp-A8h]
  unsigned int v54; // [rsp+60h] [rbp-A0h]
  int v55; // [rsp+70h] [rbp-90h]
  unsigned int v56; // [rsp+74h] [rbp-8Ch]
  void *v57; // [rsp+78h] [rbp-88h]
  unsigned __int64 v58; // [rsp+80h] [rbp-80h]
  unsigned __int64 v59; // [rsp+88h] [rbp-78h]
  union _LARGE_INTEGER *v60; // [rsp+90h] [rbp-70h]
  _QWORD v61[13]; // [rsp+A0h] [rbp-60h] BYREF
  int v62; // [rsp+10Ch] [rbp+Ch]
  union _LARGE_INTEGER *v63; // [rsp+110h] [rbp+10h]
  DWORD LowPart; // [rsp+124h] [rbp+24h]
  union _LARGE_INTEGER v65; // [rsp+128h] [rbp+28h]
  union _LARGE_INTEGER *v66; // [rsp+140h] [rbp+40h]
  union _LARGE_INTEGER SystemTime; // [rsp+1B8h] [rbp+B8h] BYREF

  v3 = a1;
  memset(v61, 0, 0x60uLL);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( (_DWORD)qword_1C018E85C )
  {
    v7 = *((_QWORD *)v3 + 38) + 35LL;
    v8 = (unsigned int)qword_1C018E85C;
    do
    {
      if ( *(_BYTE *)(v7 - 1) || *(_BYTE *)v7 )
      {
        ++v6;
        v9 = -1LL;
        do
          ++v9;
        while ( *(_WORD *)(*(_QWORD *)(v7 + 5) + 2 * v9) );
        v10 = *(_QWORD *)(v7 + 13);
        v5 += 2 * v9 + 2;
        if ( v10 )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( *(_WORD *)(v10 + 2 * v11) );
          v5 += 2 * v11 + 2;
        }
      }
      v7 += 176LL;
      --v8;
    }
    while ( v8 );
  }
  v53 = 0LL;
  v12 = (const char *)(8 * (v6 + 7));
  v51 = 24 * (v6 + 1);
  HIDWORD(v61[0]) = (_DWORD)v12;
  v58 = 16 * v6 + 112;
  SystemTime.QuadPart = (v58 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
  v50 = (16 * v6 + 115) & 0xFFFFFFFC;
  v52 = v51 + SystemTime.LowPart;
  HIDWORD(v61[9]) = *(_DWORD *)((char *)&qword_1C018E8BA + 2) * (v6 + 7);
  LocalTime.QuadPart = (v52 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
  v59 = 28 * v6 + LocalTime.LowPart;
  v49 = (v59 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
  LODWORD(v61[0]) = (v59 + 3) & 0xFFFFFFFC;
  LODWORD(v61[1]) = (_DWORD)v12 + v49;
  v13 = ((_DWORD)v12 + v49 + 3) & 0xFFFFFFFC;
  HIDWORD(v61[3]) = 48 * (v6 + 1) + 88;
  LODWORD(v61[3]) = v13;
  LODWORD(v61[4]) = HIDWORD(v61[3]) + v13;
  v14 = (HIDWORD(v61[3]) + v13 + 1) & 0xFFFFFFFE;
  HIDWORD(v61[6]) = v51 + 28;
  LODWORD(v61[6]) = v14;
  LODWORD(v61[7]) = v51 + 28 + v14;
  v44 = (LODWORD(v61[7]) + 1) & 0xFFFFFFFE;
  v55 = v5 + v44;
  v48 = (_DWORD *)(v5 + v44);
  LODWORD(v61[9]) = v5 + v44;
  v15 = (_DWORD)v48 + HIDWORD(v61[9]);
  v54 = (_DWORD)v48 + HIDWORD(v61[9]);
  LODWORD(v61[10]) = (_DWORD)v48 + HIDWORD(v61[9]);
  if ( (unsigned int)((_DWORD)v48 + HIDWORD(v61[9])) >= 0x400000 )
  {
    v4 = -1073739516;
    v16 = 5513;
LABEL_14:
    CitpLogFailureWorker(v4, v12, v16);
    return v4;
  }
  v17 = (union _LARGE_INTEGER *)CitAllocZero(v15);
  v60 = v17;
  v18 = v17;
  if ( !v17 )
  {
    v4 = -1073741670;
    v16 = 5524;
    goto LABEL_14;
  }
  HIDWORD(v52) = SystemTime.LowPart;
  v66 = v17 + 11;
  v63 = v17 + 14;
  v53 = (char *)v17 + SystemTime.LowPart;
  LowPart = LocalTime.LowPart;
  v65.QuadPart = (LONGLONG)v17 + LocalTime.LowPart;
  HIDWORD(v61[1]) = v49;
  v61[2] = (char *)v17 + (unsigned int)v49;
  v56 = (v51 + 28 + v14 + 1) & 0xFFFFFFFE;
  v17->LowPart = 786442;
  v17->HighPart = v15;
  v62 = 112;
  v61[5] = (char *)v17 + v13;
  HIDWORD(v61[4]) = v13;
  v61[8] = (char *)v17 + v14;
  v57 = (char *)v17 + v44;
  HIDWORD(v61[10]) = (_DWORD)v48;
  v61[11] = (char *)v17 + (unsigned int)v48;
  HIDWORD(v61[7]) = v14;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  v19 = -1;
  v18[1] = LocalTime;
  v18[10].LowPart = 88;
  v18[7] = *(union _LARGE_INTEGER *)&qword_1C018E8E0;
  v18[6] = *(union _LARGE_INTEGER *)((char *)v3 + 608);
  v20 = -1;
  if ( qword_1C018E870 / 0x989680uLL <= 0xFFFFFFFF )
    v20 = qword_1C018E870 / 0x989680uLL;
  v18[8].LowPart = v20;
  if ( qword_1C018E878 / 0x989680uLL <= 0xFFFFFFFF )
    v19 = qword_1C018E878 / 0x989680uLL;
  v21 = v66;
  v18[8].HighPart = v19;
  v18[9].LowPart = *(_DWORD *)((char *)&qword_1C018E8BA + 2);
  v18[9].HighPart = qword_1C018E85C;
  v18[4].LowPart = 24;
  v18[4].HighPart = 88;
  CitpBaseDataOutput<CIT_PERSISTED_SYSTEM_DATA,_CIT_SYSTEM_DATA>((__int64)v61, v21, (unsigned int *)v3);
  v18[5].HighPart = v50;
  v18[5].LowPart = 24;
  CIT_PERSISTED_SECTION<CIT_PERSISTED_USE_DATA>::AdvanceToNext((__int64)&v50);
  CitpBaseDataOutput<CIT_PERSISTED_USE_DATA,_CIT_USE_DATA>((__int64)v61, v22, (__int64)v3 + 216, (__int64)v22);
  v18[2].HighPart = 16;
  v18[3].LowPart = v6;
  v18[3].HighPart = 112;
  v23 = qword_1C018E85C;
  if ( (_DWORD)qword_1C018E85C )
  {
    v24 = v63;
    v25 = 0;
    QuadPart = (unsigned int *)v65.QuadPart;
    v27 = v57;
    v28 = v62;
    v29 = LowPart;
    v30 = v56;
    v49 = (unsigned __int64)v63;
    LocalTime = v65;
    v45 = (char *)v57;
    v47 = v62;
    SystemTime.LowPart = LowPart;
    do
    {
      v31 = *((_QWORD *)v3 + 38) + 176LL * v25;
      if ( *(_BYTE *)(v31 + 34) || *(_BYTE *)(v31 + 35) )
      {
        v48 = v24;
        if ( (unsigned __int64)v28 + 16 <= v58 )
        {
          v49 = (unsigned __int64)(v24 + 4);
          v47 = v28 + 16;
        }
        v32 = QuadPart;
        *v24 = v29;
        v24[2] = 28;
        if ( (unsigned __int64)v29 + 28 <= v59 )
        {
          LocalTime.QuadPart = (LONGLONG)(QuadPart + 7);
          SystemTime.LowPart = v29 + 28;
        }
        QuadPart[4] = *(_DWORD *)(v31 + 64);
        QuadPart[5] = *(_DWORD *)(v31 + 68);
        QuadPart[6] = *(_DWORD *)(v31 + 72);
        v33 = -1LL;
        *QuadPart = v30;
        do
          ++v33;
        while ( *(_WORD *)(*(_QWORD *)(v31 + 40) + 2 * v33) );
        v34 = v55;
        QuadPart[1] = v33;
        v35 = v34 - v30;
        v36 = 2 * v33 + 2;
        if ( v36 < v35 )
          v35 = v36;
        memmove(v27, *(const void **)(v31 + 40), v35);
        v45 += v35;
        v30 += v35;
        if ( *(_QWORD *)(v31 + 48) )
        {
          v32[2] = v30;
          v37 = -1LL;
          do
            ++v37;
          while ( *(_WORD *)(*(_QWORD *)(v31 + 48) + 2 * v37) );
          v38 = v55;
          v32[3] = v37;
          v39 = v38 - v30;
          v40 = 2 * v37 + 2;
          if ( v40 < v39 )
            v39 = v40;
          memmove(v45, *(const void **)(v31 + 48), v39);
          v30 += v39;
          v45 += v39;
        }
        v41 = v48;
        v48[1] = HIDWORD(v52);
        v41[3] = 24;
        CIT_PERSISTED_SECTION<CIT_PERSISTED_USE_DATA>::AdvanceToNext((__int64)&v50);
        CitpBaseDataOutput<CIT_PERSISTED_USE_DATA,_CIT_USE_DATA>((__int64)v61, v42, v31 + 88, (__int64)v42);
        v23 = qword_1C018E85C;
        v27 = v45;
        v29 = SystemTime.LowPart;
        v24 = (_DWORD *)v49;
        v28 = v47;
        QuadPart = (unsigned int *)LocalTime.QuadPart;
        v3 = a1;
      }
      ++v25;
    }
    while ( v25 < v23 );
    v18 = v60;
    v15 = v54;
  }
  v18[2].LowPart = CitPersistedDataComputeCrc((PUCHAR)v18, v15);
  *a3 = v15;
  *a2 = v18;
  return v4;
}
