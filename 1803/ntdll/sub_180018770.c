/*
 * XREFs of sub_180018770 @ 0x180018770
 * Callers:
 *     sub_180011EF8 @ 0x180011EF8 (sub_180011EF8.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_1800114B4 @ 0x1800114B4 (sub_1800114B4.c)
 *     sub_180011560 @ 0x180011560 (sub_180011560.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800606E0 @ 0x1800606E0 (sub_1800606E0.c)
 *     sub_1800606EC @ 0x1800606EC (sub_1800606EC.c)
 *     sub_1800609A8 @ 0x1800609A8 (sub_1800609A8.c)
 *     sub_180060A50 @ 0x180060A50 (sub_180060A50.c)
 *     sub_180070AAC @ 0x180070AAC (sub_180070AAC.c)
 *     sub_180073AFC @ 0x180073AFC (sub_180073AFC.c)
 *     sub_18007BA00 @ 0x18007BA00 (sub_18007BA00.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x18009E590 (RtlInterlockedPushEntrySList_0.c)
 */

__int64 __fastcall sub_180018770(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // r9
  unsigned int v5; // r14d
  struct _SLIST_ENTRY *v6; // rdi
  unsigned int v7; // eax
  int v8; // r11d
  signed __int64 v10; // r15
  int v11; // r8d
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // eax
  char v15; // cl
  unsigned __int64 v16; // r10
  int v17; // edx
  unsigned __int16 v18; // cx
  char v19; // cl
  unsigned int v20; // r11d
  __int64 v21; // r10
  __int64 v22; // rbx
  unsigned __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // r13
  int v26; // ebp
  int v27; // esi
  unsigned __int16 v28; // dx
  unsigned int v30; // r12d
  BOOL v31; // r13d
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rsi
  int v36; // ebp
  char *v37; // rdx
  int v38; // esi
  unsigned int v39; // ebx
  char v40; // si
  volatile signed __int64 *v41; // rcx
  signed __int64 Next; // rbx
  signed __int64 v43; // r12
  int v44; // edx
  signed __int64 v45; // r10
  _QWORD *v46; // r11
  struct _SLIST_ENTRY *v47; // rcx
  struct _SLIST_ENTRY **v48; // rax
  volatile signed __int64 *v49; // rcx
  signed __int64 v50; // rax
  __int64 v51; // rbx
  char v52; // dl
  __int64 v53; // rdx
  int v54; // eax
  unsigned int v55; // ebp
  char v56; // r13
  BOOL v57; // r12d
  unsigned int v58; // ebx
  union _SLIST_HEADER *v59; // rsi
  __int64 v60; // rbx
  int v61; // r15d
  char *v62; // rdx
  unsigned __int64 v63; // r8
  char *v64; // rcx
  __int16 v65; // ax
  char *i; // rcx
  __int64 v67; // rbp
  bool v68; // zf
  char *v69; // rbp
  __int64 v70; // rbp
  char v71; // cl
  unsigned int v72; // r13d
  __int64 (__fastcall *v73)(__int64, int, unsigned int); // rax
  unsigned int v74; // r12d
  __int64 v75; // rcx
  char *v76; // rdx
  char v77; // cl
  __int64 v78; // r8
  __int64 v79; // r10
  __int64 v80; // rdx
  unsigned __int64 v81; // rcx
  struct _SLIST_ENTRY **v82; // rax
  int v83; // eax
  __int64 v84; // rcx
  void (__fastcall *v85)(__int64, struct _SLIST_ENTRY *, _QWORD, BOOL); // rax
  char v86; // cl
  unsigned int v87; // ebp
  __int64 (__fastcall *v88)(__int64, int, unsigned int); // rax
  unsigned int v89; // ebx
  __int64 v90; // rcx
  char *v91; // rdx
  struct _SLIST_ENTRY *v92; // rax
  __int64 v93; // rdx
  signed __int64 v94; // rdx
  signed __int64 v95; // rtt
  signed __int64 v96; // rax
  unsigned __int16 v97; // [rsp+30h] [rbp-68h]
  int v99; // [rsp+A8h] [rbp+10h]
  unsigned int v100; // [rsp+B0h] [rbp+18h] BYREF
  int v101; // [rsp+B8h] [rbp+20h]

  v101 = a4;
  v4 = (unsigned __int64)byte_1801190F0;
  v5 = 0;
  v6 = (struct _SLIST_ENTRY *)a2;
  v7 = qword_18015A448 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v97 = qword_18015A448 ^ *(_WORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v8 = a3;
  v10 = 0LL;
  if ( !a3 )
    goto LABEL_13;
  v11 = (unsigned __int16)v7;
  v12 = *(_QWORD *)(a1 + 8LL * byte_1801190F0[(unsigned __int64)((unsigned int)(unsigned __int16)v7 + 15) >> 4] + 224);
  v13 = v8 - HIWORD(v7) - a2;
  v14 = *(_DWORD *)(v12 + 72);
  v15 = *(_BYTE *)(v12 + 76);
  if ( v14 )
  {
    v16 = (v13 * (unsigned __int64)v14) >> v15;
    v17 = v13 - v16 * v11;
  }
  else
  {
    LODWORD(v16) = v13 >> v15;
    v17 = v13 & ((1 << v15) - 1);
  }
  if ( v17 )
    return v5;
  v18 = WORD2(v6[2].Next);
  if ( v18 >= (unsigned __int16)v16 )
    v18 = v16;
  WORD2(v6[2].Next) = v18;
  a3 = ~(3LL << ((2 * v16) & 0x3F));
  v4 = (unsigned __int64)v6 + 8 * ((unsigned __int64)(unsigned int)(2 * v16) >> 6);
  _m_prefetchw((const void *)(v4 + 48));
  if ( (((unsigned __int64)_InterlockedAnd64((volatile signed __int64 *)(v4 + 48), a3) >> ((2 * v16) & 0x3F)) & 1) == 0 )
  {
    sub_18009A5F0(17, *(_QWORD *)a1, v8, (_DWORD)v6, (unsigned int)v16, 0LL);
    return v5;
  }
  if ( *((_BYTE *)&v6[2].Next + 13) <= 1u )
    goto LABEL_13;
  v19 = *((_BYTE *)&v6[2].Next + 12);
  v20 = v8 - (_DWORD)v6;
  a3 = v20 >> v19;
  v21 = 2 * a3;
  v4 = (unsigned __int64)v6 + 2 * a3 + *((unsigned __int16 *)&v6[2].Next + 7);
  _m_prefetchw((const void *)v4);
  LODWORD(v22) = -1;
  v23 = v4 + 2LL * (((v20 + v97 - 1) >> v19) - (unsigned int)a3 + 1);
  v24 = 0;
  if ( v4 >= v23 )
    goto LABEL_13;
  do
  {
    if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v4, 0xFFFFu) == 1 )
    {
      ++v24;
      if ( (_DWORD)v22 == -1 )
        v22 = v21 >> 1;
    }
    v4 += 2LL;
    v21 += 2LL;
  }
  while ( v4 < v23 );
  if ( (_DWORD)v22 == -1 )
    goto LABEL_13;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL),
    (unsigned __int64)(unsigned int)(v24 << *((_BYTE *)&v6[2].Next + 12)) >> 12);
  v99 = 0;
  v30 = (unsigned int)v22 >> 31;
  v31 = v22 == -2;
  if ( (int)v22 < 0 )
  {
    LODWORD(v22) = 1;
  }
  else if ( !(_DWORD)v22 )
  {
    goto LABEL_13;
  }
  if ( (dword_18015A43C & 0x20) != 0 && !v30 )
  {
    v32 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 1) == 0 )
    {
      v4 = 8LL;
      a3 = *(_QWORD *)(v32 + 72);
      v33 = *(_QWORD *)(a3 + 8) >> *(_BYTE *)(v32 + 11);
      if ( v33 <= 8 )
        v33 = 8LL;
      v34 = *(_QWORD *)(a3 + 8) >> *(_BYTE *)(v32 + 12);
      if ( v34 <= 8 )
        v34 = 8LL;
      v35 = *(_QWORD *)(a3 + 24) + *(_QWORD *)(a3 + 16);
      if ( (v35 <= v33 || (int)sub_1800114B4() >= 0) && v35 <= v34 )
        goto LABEL_13;
    }
  }
  if ( (unsigned int)v22 >= *((unsigned __int8 *)&v6[2].Next + 13) )
    goto LABEL_13;
  v36 = 0;
  while ( 1 )
  {
    v38 = sub_1800609A8(v6, (unsigned int)v22, &v100);
    if ( v38 == -1 )
      break;
    v39 = v100;
    if ( v100 >= 2 )
    {
      if ( !v36 )
      {
        LODWORD(v22) = v38;
        v40 = v101;
        if ( (v101 & 1) == 0 )
          RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 96), v37, a3, v4);
        v36 = 2;
        v99 = 2;
        if ( !v31 )
          RtlAcquireSRWLockExclusive(&v6[1].Next + 1);
        goto LABEL_128;
      }
      v86 = *((_BYTE *)&v6[2].Next + 12);
      v87 = v38 << v86;
      v88 = (__int64 (__fastcall *)(__int64, int, unsigned int))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 32));
      v89 = v100 << v86;
      v90 = *(_QWORD *)a1;
      v91 = (char *)v6 + v87;
      if ( v88 == sub_180011560 )
        sub_180011560(v90, (int)v91, v89);
      else
        v88(v90, (int)v91, v89);
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL),
        -(__int64)((unsigned __int64)v89 >> 12));
      sub_180060A50((_DWORD)v6, v87, v89, 1, 0LL);
      v36 = v99;
      if ( !v30 )
        break;
      v39 = v100;
    }
    else if ( !v30 )
    {
      break;
    }
    LODWORD(v22) = v38 + v39;
    v40 = v101;
LABEL_128:
    if ( (unsigned int)v22 >= *((unsigned __int8 *)&v6[2].Next + 13) )
      goto LABEL_45;
  }
  v40 = v101;
LABEL_45:
  v10 = 0LL;
  if ( v36 )
  {
    if ( !v31 )
    {
      v41 = (volatile signed __int64 *)(&v6[1].Next + 1);
      if ( v36 == 2 )
        RtlReleaseSRWLockExclusive(v41);
      else
        RtlReleaseSRWLockShared(v41);
    }
    v25 = a1;
    if ( (v40 & 1) == 0 )
      RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 96));
    goto LABEL_14;
  }
LABEL_13:
  v25 = a1;
LABEL_14:
  v26 = WORD1(v6[2].Next);
  LOWORD(v27) = v6[2].Next;
  do
  {
    if ( !v10 && (!(_WORD)v27 || (unsigned __int16)v27 == v26 - 1) )
    {
      Next = (signed __int64)v6[1].Next;
      do
      {
        while ( 1 )
        {
          while ( !Next )
          {
            Next = _InterlockedCompareExchange64((volatile signed __int64 *)&v6[1], 3LL, 0LL);
            if ( !Next )
            {
              v10 = 0LL;
              goto LABEL_21;
            }
          }
          if ( (Next & 1) != 0 )
            break;
          v43 = Next + 16;
          v10 = Next;
          RtlAcquireSRWLockExclusive(Next + 16);
          Next = (signed __int64)v6[1].Next;
          if ( v10 == Next )
            goto LABEL_55;
          RtlReleaseSRWLockExclusive(v43);
        }
        v96 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&v6[1],
                Next & 1 | (Next + 2) & 0xFFFFFFFFFFFFFFFEuLL,
                Next);
        v68 = Next == v96;
        Next = v96;
      }
      while ( !v68 );
      v10 = 0LL;
LABEL_55:
      if ( !v10 )
        goto LABEL_21;
    }
    v28 = v27 + 1;
    v27 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)&v6[2], v27 + 1, v27);
  }
  while ( v28 != v27 + 1 );
  if ( (_WORD)v27 )
  {
    if ( (unsigned __int16)v27 != v26 - 1 )
      goto LABEL_21;
    v44 = 2;
  }
  else
  {
    v44 = 0;
  }
  switch ( BYTE6(v6[2].Next) )
  {
    case 0:
      v45 = v10 + 24;
      a3 = v10 + 8;
      goto LABEL_60;
    case 1:
      v45 = v10 + 40;
      a3 = 0LL;
      goto LABEL_60;
    case 2:
      v45 = 0LL;
      a3 = 0LL;
LABEL_60:
      if ( v44 )
      {
        v4 = 0LL;
        v46 = 0LL;
      }
      else
      {
        v4 = v10 + 24;
        v46 = (_QWORD *)(v10 + 8);
      }
      if ( v45 )
      {
        v47 = v6->Next;
        if ( *(&v6->Next->Next + 1) != v6 || (v48 = (struct _SLIST_ENTRY **)*((_QWORD *)&v6->Next + 1), *v48 != v6) )
          __fastfail(3u);
        *v48 = v47;
        *((_QWORD *)&v47->Next + 1) = v48;
        if ( a3 )
          --*(_QWORD *)a3;
      }
      BYTE6(v6[2].Next) = v44;
      if ( v4 )
      {
        v82 = *(struct _SLIST_ENTRY ***)(v4 + 8);
        if ( *v82 != (struct _SLIST_ENTRY *)v4 )
          __fastfail(3u);
        v6->Next = (struct _SLIST_ENTRY *)v4;
        *((_QWORD *)&v6->Next + 1) = v82;
        *v82 = v6;
        *(_QWORD *)(v4 + 8) = v6;
        if ( v46 )
          ++*v46;
        v6 = 0LL;
      }
      if ( (*(_BYTE *)v10 & 1) == 0 && *(_QWORD *)(v10 + 8) > 8uLL )
      {
        v6 = *(struct _SLIST_ENTRY **)v4;
        if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v92 = v6->Next, *(&v6->Next->Next + 1) != v6) )
          __fastfail(3u);
        *(_QWORD *)v4 = v92;
        *((_QWORD *)&v92->Next + 1) = v4;
        --*v46;
        BYTE6(v6[2].Next) = 2;
      }
      if ( v6 && BYTE6(v6[2].Next) == 2 )
        v6[1].Next = 0LL;
      break;
  }
  v49 = (volatile signed __int64 *)(v10 + 16);
  v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 16), 0LL, 1LL);
  if ( v50 != 1 )
  {
    v4 = -1LL;
    do
    {
      v93 = 3LL;
      a3 = v50 & 6;
      if ( a3 != 2 )
        v93 = -1LL;
      v94 = v50 + v93;
      v95 = v50;
      v50 = _InterlockedCompareExchange64(v49, v94, v50);
    }
    while ( v95 != v50 );
    if ( a3 == 2 )
      sub_180070AAC(v49, v94, 0LL);
  }
  v10 = 0LL;
  if ( !v6 )
    goto LABEL_21;
  v51 = *(_QWORD *)(v25 + 8LL * byte_1801190F0[(unsigned __int64)((unsigned int)v97 + 15) >> 4] + 224);
  if ( LOWORD(v6[2].Next) != WORD1(v6[2].Next) )
  {
    RtlAcquireSRWLockExclusive(v51 + 16);
    sub_18007BA00(v6, v51);
    if ( LOWORD(v6[2].Next) == WORD1(v6[2].Next) )
      v6[1].Next = 0LL;
    else
      v6 = (struct _SLIST_ENTRY *)sub_180073AFC(v51, v6, 0LL);
    RtlReleaseSRWLockExclusive(v51 + 16);
  }
  if ( !v6 )
    goto LABEL_21;
  v52 = v101;
  _InterlockedDecrement64((volatile signed __int64 *)(v51 + 64));
  v53 = 2 * (v52 & 1u);
  v54 = -SWORD1(v6[2].Next);
  v101 = v53;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 56), v54);
  v55 = *((unsigned __int8 *)&v6[2].Next + 13);
  v56 = *((_BYTE *)&v6[2].Next + 12);
  v57 = v53 != 0;
  v58 = v55 << v56;
  _BitScanForward((unsigned int *)&v54, v55 << v56);
  v59 = (union _SLIST_HEADER *)(a1 + 16 * ((unsigned int)(v54 - 12) + 7LL));
  if ( LOWORD(v59->Alignment) )
  {
    v83 = sub_1800606EC(v6, v53, a3, v4);
    if ( v83 && (unsigned __int8)v55 > 1u )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL),
        -(__int64)((unsigned __int64)(unsigned int)(v83 << v56) >> 12));
    v84 = *(_QWORD *)a1;
    v85 = (void (__fastcall *)(__int64, struct _SLIST_ENTRY *, _QWORD, BOOL))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 16));
    if ( (char *)v85 == (char *)sub_1800606E0 )
      sub_1800606E0(v84, v6, v58, v57);
    else
      v85(v84, v6, v58, v57);
    goto LABEL_21;
  }
  LODWORD(v60) = 1;
  if ( v55 <= 1 )
    goto LABEL_100;
  v61 = v53;
  while ( 2 )
  {
    v62 = (char *)v6 + *((unsigned __int16 *)&v6[2].Next + 7);
    v63 = (unsigned __int64)&v62[2 * (unsigned __int8)v55];
    v64 = &v62[2 * (unsigned int)v60];
    v65 = *(_WORD *)v64;
    if ( !*(_WORD *)v64 )
    {
      for ( i = v64 - 2; !*(_WORD *)i; i -= 2 )
      {
        if ( i <= v62 )
          break;
      }
      v64 = i + 2;
LABEL_84:
      v67 = (unsigned int)v60 + 1LL;
      v68 = *(_WORD *)&v62[2 * v67] == 0;
      v69 = &v62[2 * v67];
      if ( v68 )
      {
        do
        {
          if ( (unsigned __int64)v69 >= v63 )
            break;
          v69 += 2;
        }
        while ( !*(_WORD *)v69 );
      }
      v60 = (v64 - v62) >> 1;
      v70 = (v69 - v64) >> 1;
      if ( (_DWORD)v60 == -1 )
        goto LABEL_97;
      if ( (_DWORD)v70 )
      {
        if ( v5 )
        {
          v71 = *((_BYTE *)&v6[2].Next + 12);
          v72 = (_DWORD)v60 << v71;
          v73 = (__int64 (__fastcall *)(__int64, int, unsigned int))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 32));
          v74 = (_DWORD)v70 << v71;
          v75 = *(_QWORD *)a1;
          v76 = (char *)v6 + v72;
          if ( v73 == sub_180011560 )
            sub_180011560(v75, (int)v76, v74);
          else
            ((void (__fastcall *)(__int64, char *, _QWORD, unsigned __int64))v73)(v75, v76, v74, v4);
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL),
            -(__int64)((unsigned __int64)v74 >> 12));
          v77 = *((_BYTE *)&v6[2].Next + 12);
          v78 = v72 >> v77;
          v79 = 2 * v78;
          v4 = (unsigned __int64)v6 + 2 * v78 + *((unsigned __int16 *)&v6[2].Next + 7);
          _m_prefetchw((const void *)v4);
          LODWORD(v80) = -1;
          v81 = v4 + 2LL * (((v74 + v72 - 1) >> v77) - (unsigned int)v78 + 1);
          if ( v4 < v81 )
          {
            do
            {
              if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v4, 0xFFFFu) == 1 && (_DWORD)v80 == -1 )
                v80 = v79 >> 1;
              v4 += 2LL;
              v79 += 2LL;
            }
            while ( v4 < v81 );
            v61 = v101;
          }
          goto LABEL_95;
        }
        if ( !v61 )
          RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 96), v62, v63, v4);
        v5 = 2;
      }
      else
      {
LABEL_95:
        LODWORD(v60) = v70 + v60;
      }
      LOBYTE(v55) = *((_BYTE *)&v6[2].Next + 13);
      if ( (unsigned int)v60 >= (unsigned __int8)v55 )
        goto LABEL_97;
      continue;
    }
    break;
  }
  if ( (unsigned __int64)v64 < v63 )
  {
    while ( v65 )
    {
      v64 += 2;
      if ( (unsigned __int64)v64 >= v63 )
        goto LABEL_97;
      v65 = *(_WORD *)v64;
    }
    if ( (unsigned __int64)v64 < v63 )
    {
      v60 = (v64 - v62) >> 1;
      goto LABEL_84;
    }
  }
LABEL_97:
  if ( v5 && !v61 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 96));
LABEL_100:
  RtlInterlockedPushEntrySList_0(v59, v6);
  v10 = 0LL;
LABEL_21:
  v5 = 1;
  if ( v10 )
    RtlReleaseSRWLockExclusive(v10 + 16);
  return v5;
}
