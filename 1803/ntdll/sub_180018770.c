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

__int64 __fastcall sub_180018770(_RTL_SRWLOCK *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // r9
  unsigned int v5; // r14d
  _SLIST_ENTRY *v6; // rdi
  unsigned int v7; // eax
  int v8; // r11d
  signed __int64 v10; // r15
  int v11; // r8d
  _DWORD *Ptr; // rcx
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
  _RTL_SRWLOCK *v25; // r13
  int v26; // ebp
  int v27; // esi
  unsigned __int16 v28; // dx
  unsigned int v30; // r12d
  BOOL v31; // r13d
  _QWORD *v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rsi
  int v36; // ebp
  int v37; // esi
  unsigned int v38; // ebx
  char v39; // si
  _RTL_SRWLOCK *v40; // rcx
  signed __int64 Next; // rbx
  _RTL_SRWLOCK *v42; // r12
  int v43; // edx
  signed __int64 v44; // r10
  _QWORD *v45; // r11
  _SLIST_ENTRY *v46; // rcx
  _SLIST_ENTRY **v47; // rax
  volatile signed __int64 *v48; // rcx
  signed __int64 v49; // rax
  PVOID v50; // rbx
  char v51; // dl
  __int64 v52; // rdx
  int v53; // eax
  unsigned int v54; // ebp
  char v55; // r13
  BOOL v56; // r12d
  unsigned int v57; // ebx
  _SLIST_HEADER *v58; // rsi
  __int64 v59; // rbx
  int v60; // r15d
  char *v61; // rdx
  unsigned __int64 v62; // r8
  char *v63; // rcx
  __int16 v64; // ax
  char *i; // rcx
  __int64 v66; // rbp
  bool v67; // zf
  char *v68; // rbp
  __int64 v69; // rbp
  char v70; // cl
  unsigned int v71; // r13d
  __int64 (__fastcall *v72)(__int64, int, unsigned int); // rax
  unsigned int v73; // r12d
  __int64 v74; // rcx
  char *v75; // rdx
  char v76; // cl
  __int64 v77; // r8
  __int64 v78; // r10
  __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  _SLIST_ENTRY **v81; // rax
  int v82; // eax
  PVOID v83; // rcx
  void (__fastcall *v84)(PVOID, _SLIST_ENTRY *, _QWORD, BOOL); // rax
  char v85; // cl
  unsigned int v86; // ebp
  __int64 (__fastcall *v87)(__int64, int, unsigned int); // rax
  unsigned int v88; // ebx
  __int64 v89; // rcx
  char *v90; // rdx
  _SLIST_ENTRY *v91; // rax
  __int64 v92; // rdx
  signed __int64 v93; // rdx
  signed __int64 v94; // rtt
  signed __int64 v95; // rax
  unsigned __int16 v96; // [rsp+30h] [rbp-68h]
  int v98; // [rsp+A8h] [rbp+10h]
  unsigned int v99; // [rsp+B0h] [rbp+18h] BYREF
  int v100; // [rsp+B8h] [rbp+20h]

  v100 = a4;
  v4 = (unsigned __int64)byte_1801190F0;
  v5 = 0;
  v6 = (_SLIST_ENTRY *)a2;
  v7 = qword_18015A448 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v96 = qword_18015A448 ^ *(_WORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v8 = a3;
  v10 = 0LL;
  if ( !a3 )
    goto LABEL_13;
  v11 = (unsigned __int16)v7;
  Ptr = a1[byte_1801190F0[(unsigned __int64)((unsigned int)(unsigned __int16)v7 + 15) >> 4] + 28].Ptr;
  v13 = v8 - HIWORD(v7) - a2;
  v14 = Ptr[18];
  v15 = *((_BYTE *)Ptr + 76);
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
    sub_18009A5F0(17, a1->Ptr, v8, (_DWORD)v6, (unsigned int)v16, 0LL);
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
  v23 = v4 + 2LL * (((v20 + v96 - 1) >> v19) - (unsigned int)a3 + 1);
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
    (volatile signed __int64 *)a1[9].Ptr + 3,
    (unsigned __int64)(unsigned int)(v24 << *((_BYTE *)&v6[2].Next + 12)) >> 12);
  v98 = 0;
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
    v32 = a1->Ptr;
    if ( (*((_BYTE *)a1->Ptr + 13) & 1) == 0 )
    {
      v4 = 8LL;
      a3 = v32[9];
      v33 = *(_QWORD *)(a3 + 8) >> *((_BYTE *)v32 + 11);
      if ( v33 <= 8 )
        v33 = 8LL;
      v34 = *(_QWORD *)(a3 + 8) >> *((_BYTE *)v32 + 12);
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
    v37 = sub_1800609A8(v6, (unsigned int)v22, &v99);
    if ( v37 == -1 )
      break;
    v38 = v99;
    if ( v99 >= 2 )
    {
      if ( !v36 )
      {
        LODWORD(v22) = v37;
        v39 = v100;
        if ( (v100 & 1) == 0 )
          RtlAcquireSRWLockShared(a1 + 12);
        v36 = 2;
        v98 = 2;
        if ( !v31 )
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v6[1].Next + 1);
        goto LABEL_128;
      }
      v85 = *((_BYTE *)&v6[2].Next + 12);
      v86 = v37 << v85;
      v87 = (__int64 (__fastcall *)(__int64, int, unsigned int))((unsigned __int64)a1 ^ qword_18015A440 ^ (__int64)a1[4].Ptr);
      v88 = v99 << v85;
      v89 = (__int64)a1->Ptr;
      v90 = (char *)v6 + v86;
      if ( v87 == sub_180011560 )
        sub_180011560(v89, (int)v90, v88);
      else
        v87(v89, (int)v90, v88);
      _InterlockedExchangeAdd64((volatile signed __int64 *)a1[9].Ptr + 3, -(__int64)((unsigned __int64)v88 >> 12));
      sub_180060A50((_DWORD)v6, v86, v88, 1, 0LL);
      v36 = v98;
      if ( !v30 )
        break;
      v38 = v99;
    }
    else if ( !v30 )
    {
      break;
    }
    LODWORD(v22) = v37 + v38;
    v39 = v100;
LABEL_128:
    if ( (unsigned int)v22 >= *((unsigned __int8 *)&v6[2].Next + 13) )
      goto LABEL_45;
  }
  v39 = v100;
LABEL_45:
  v10 = 0LL;
  if ( v36 )
  {
    if ( !v31 )
    {
      v40 = (_RTL_SRWLOCK *)(&v6[1].Next + 1);
      if ( v36 == 2 )
        RtlReleaseSRWLockExclusive(v40);
      else
        RtlReleaseSRWLockShared(v40);
    }
    v25 = a1;
    if ( (v39 & 1) == 0 )
      RtlReleaseSRWLockShared(a1 + 12);
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
          v42 = (_RTL_SRWLOCK *)(Next + 16);
          v10 = Next;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(Next + 16));
          Next = (signed __int64)v6[1].Next;
          if ( v10 == Next )
            goto LABEL_55;
          RtlReleaseSRWLockExclusive(v42);
        }
        v95 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&v6[1],
                Next & 1 | (Next + 2) & 0xFFFFFFFFFFFFFFFEuLL,
                Next);
        v67 = Next == v95;
        Next = v95;
      }
      while ( !v67 );
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
    v43 = 2;
  }
  else
  {
    v43 = 0;
  }
  switch ( BYTE6(v6[2].Next) )
  {
    case 0:
      v44 = v10 + 24;
      a3 = v10 + 8;
      goto LABEL_60;
    case 1:
      v44 = v10 + 40;
      a3 = 0LL;
      goto LABEL_60;
    case 2:
      v44 = 0LL;
      a3 = 0LL;
LABEL_60:
      if ( v43 )
      {
        v4 = 0LL;
        v45 = 0LL;
      }
      else
      {
        v4 = v10 + 24;
        v45 = (_QWORD *)(v10 + 8);
      }
      if ( v44 )
      {
        v46 = v6->Next;
        if ( *(&v6->Next->Next + 1) != v6 || (v47 = (_SLIST_ENTRY **)*((_QWORD *)&v6->Next + 1), *v47 != v6) )
          __fastfail(3u);
        *v47 = v46;
        *((_QWORD *)&v46->Next + 1) = v47;
        if ( a3 )
          --*(_QWORD *)a3;
      }
      BYTE6(v6[2].Next) = v43;
      if ( v4 )
      {
        v81 = *(_SLIST_ENTRY ***)(v4 + 8);
        if ( *v81 != (_SLIST_ENTRY *)v4 )
          __fastfail(3u);
        v6->Next = (_SLIST_ENTRY *)v4;
        *((_QWORD *)&v6->Next + 1) = v81;
        *v81 = v6;
        *(_QWORD *)(v4 + 8) = v6;
        if ( v45 )
          ++*v45;
        v6 = 0LL;
      }
      if ( (*(_BYTE *)v10 & 1) == 0 && *(_QWORD *)(v10 + 8) > 8uLL )
      {
        v6 = *(_SLIST_ENTRY **)v4;
        if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v91 = v6->Next, *(&v6->Next->Next + 1) != v6) )
          __fastfail(3u);
        *(_QWORD *)v4 = v91;
        *((_QWORD *)&v91->Next + 1) = v4;
        --*v45;
        BYTE6(v6[2].Next) = 2;
      }
      if ( v6 && BYTE6(v6[2].Next) == 2 )
        v6[1].Next = 0LL;
      break;
  }
  v48 = (volatile signed __int64 *)(v10 + 16);
  v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 16), 0LL, 1LL);
  if ( v49 != 1 )
  {
    v4 = -1LL;
    do
    {
      v92 = 3LL;
      a3 = v49 & 6;
      if ( a3 != 2 )
        v92 = -1LL;
      v93 = v49 + v92;
      v94 = v49;
      v49 = _InterlockedCompareExchange64(v48, v93, v49);
    }
    while ( v94 != v49 );
    if ( a3 == 2 )
      sub_180070AAC(v48, v93, 0LL);
  }
  v10 = 0LL;
  if ( !v6 )
    goto LABEL_21;
  v50 = v25[byte_1801190F0[(unsigned __int64)((unsigned int)v96 + 15) >> 4] + 28].Ptr;
  if ( LOWORD(v6[2].Next) != WORD1(v6[2].Next) )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v50 + 2);
    sub_18007BA00(v6, v50);
    if ( LOWORD(v6[2].Next) == WORD1(v6[2].Next) )
      v6[1].Next = 0LL;
    else
      v6 = (_SLIST_ENTRY *)sub_180073AFC(v50, v6, 0LL);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v50 + 2);
  }
  if ( !v6 )
    goto LABEL_21;
  v51 = v100;
  _InterlockedDecrement64((volatile signed __int64 *)v50 + 8);
  v52 = 2 * (v51 & 1u);
  v53 = -SWORD1(v6[2].Next);
  v100 = v52;
  _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 7, v53);
  v54 = *((unsigned __int8 *)&v6[2].Next + 13);
  v55 = *((_BYTE *)&v6[2].Next + 12);
  v56 = v52 != 0;
  v57 = v54 << v55;
  _BitScanForward((unsigned int *)&v53, v54 << v55);
  v58 = (_SLIST_HEADER *)&a1[2 * (unsigned int)(v53 - 12) + 14];
  if ( LOWORD(v58->Alignment) )
  {
    v82 = sub_1800606EC(v6, v52, a3, v4);
    if ( v82 && (unsigned __int8)v54 > 1u )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)a1[9].Ptr + 3,
        -(__int64)((unsigned __int64)(unsigned int)(v82 << v55) >> 12));
    v83 = a1->Ptr;
    v84 = (void (__fastcall *)(PVOID, _SLIST_ENTRY *, _QWORD, BOOL))((unsigned __int64)a1 ^ qword_18015A440 ^ (__int64)a1[2].Ptr);
    if ( (char *)v84 == (char *)sub_1800606E0 )
      sub_1800606E0(v83, v6, v57, v56);
    else
      v84(v83, v6, v57, v56);
    goto LABEL_21;
  }
  LODWORD(v59) = 1;
  if ( v54 <= 1 )
    goto LABEL_100;
  v60 = v52;
  while ( 2 )
  {
    v61 = (char *)v6 + *((unsigned __int16 *)&v6[2].Next + 7);
    v62 = (unsigned __int64)&v61[2 * (unsigned __int8)v54];
    v63 = &v61[2 * (unsigned int)v59];
    v64 = *(_WORD *)v63;
    if ( !*(_WORD *)v63 )
    {
      for ( i = v63 - 2; !*(_WORD *)i; i -= 2 )
      {
        if ( i <= v61 )
          break;
      }
      v63 = i + 2;
LABEL_84:
      v66 = (unsigned int)v59 + 1LL;
      v67 = *(_WORD *)&v61[2 * v66] == 0;
      v68 = &v61[2 * v66];
      if ( v67 )
      {
        do
        {
          if ( (unsigned __int64)v68 >= v62 )
            break;
          v68 += 2;
        }
        while ( !*(_WORD *)v68 );
      }
      v59 = (v63 - v61) >> 1;
      v69 = (v68 - v63) >> 1;
      if ( (_DWORD)v59 == -1 )
        goto LABEL_97;
      if ( (_DWORD)v69 )
      {
        if ( v5 )
        {
          v70 = *((_BYTE *)&v6[2].Next + 12);
          v71 = (_DWORD)v59 << v70;
          v72 = (__int64 (__fastcall *)(__int64, int, unsigned int))((unsigned __int64)a1 ^ qword_18015A440 ^ (__int64)a1[4].Ptr);
          v73 = (_DWORD)v69 << v70;
          v74 = (__int64)a1->Ptr;
          v75 = (char *)v6 + v71;
          if ( v72 == sub_180011560 )
            sub_180011560(v74, (int)v75, v73);
          else
            ((void (__fastcall *)(__int64, char *, _QWORD, unsigned __int64))v72)(v74, v75, v73, v4);
          _InterlockedExchangeAdd64((volatile signed __int64 *)a1[9].Ptr + 3, -(__int64)((unsigned __int64)v73 >> 12));
          v76 = *((_BYTE *)&v6[2].Next + 12);
          v77 = v71 >> v76;
          v78 = 2 * v77;
          v4 = (unsigned __int64)v6 + 2 * v77 + *((unsigned __int16 *)&v6[2].Next + 7);
          _m_prefetchw((const void *)v4);
          LODWORD(v79) = -1;
          v80 = v4 + 2LL * (((v73 + v71 - 1) >> v76) - (unsigned int)v77 + 1);
          if ( v4 < v80 )
          {
            do
            {
              if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v4, 0xFFFFu) == 1 && (_DWORD)v79 == -1 )
                v79 = v78 >> 1;
              v4 += 2LL;
              v78 += 2LL;
            }
            while ( v4 < v80 );
            v60 = v100;
          }
          goto LABEL_95;
        }
        if ( !v60 )
          RtlAcquireSRWLockShared(a1 + 12);
        v5 = 2;
      }
      else
      {
LABEL_95:
        LODWORD(v59) = v69 + v59;
      }
      LOBYTE(v54) = *((_BYTE *)&v6[2].Next + 13);
      if ( (unsigned int)v59 >= (unsigned __int8)v54 )
        goto LABEL_97;
      continue;
    }
    break;
  }
  if ( (unsigned __int64)v63 < v62 )
  {
    while ( v64 )
    {
      v63 += 2;
      if ( (unsigned __int64)v63 >= v62 )
        goto LABEL_97;
      v64 = *(_WORD *)v63;
    }
    if ( (unsigned __int64)v63 < v62 )
    {
      v59 = (v63 - v61) >> 1;
      goto LABEL_84;
    }
  }
LABEL_97:
  if ( v5 && !v60 )
    RtlReleaseSRWLockShared(a1 + 12);
LABEL_100:
  RtlInterlockedPushEntrySList_0(v58, v6);
  v10 = 0LL;
LABEL_21:
  v5 = 1;
  if ( v10 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v10 + 16));
  return v5;
}
