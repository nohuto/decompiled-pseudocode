/*
 * XREFs of sub_18004BD40 @ 0x18004BD40
 * Callers:
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18004C234 @ 0x18004C234 (sub_18004C234.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x18003B5B0 (RtlCompareUnicodeStrings.c)
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x180044A30 (RtlCopyUnicodeString.c)
 *     sub_1800473D0 @ 0x1800473D0 (sub_1800473D0.c)
 *     sub_18004A930 @ 0x18004A930 (sub_18004A930.c)
 *     sub_18004C4D8 @ 0x18004C4D8 (sub_18004C4D8.c)
 *     sub_18004C508 @ 0x18004C508 (sub_18004C508.c)
 *     sub_18004CACC @ 0x18004CACC (sub_18004CACC.c)
 *     EtwEventWriteNoRegistration @ 0x180088240 (EtwEventWriteNoRegistration.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800DFC34 @ 0x1800DFC34 (sub_1800DFC34.c)
 */

__int64 __fastcall sub_18004BD40(
        __int16 *a1,
        __int64 a2,
        char a3,
        __int16 **a4,
        __m128i *a5,
        __int64 a6,
        unsigned __int16 *a7,
        bool *a8,
        __int64 a9)
{
  __int64 v11; // r14
  __int16 *v12; // rbx
  unsigned __int16 *v13; // r15
  int v14; // ebx
  unsigned int v15; // r8d
  __int16 *v16; // rdx
  __int16 **v17; // rcx
  __int16 *v18; // rcx
  __int16 **v19; // rsi
  __int16 v20; // ax
  int v21; // r9d
  __int64 v22; // rdx
  __int16 *v23; // r12
  __int16 **v24; // rax
  __int16 *v25; // rdi
  _WORD *v26; // rax
  bool v27; // si
  __int16 v28; // cx
  int v29; // eax
  _DWORD *v30; // rsi
  char v31; // al
  int v32; // r10d
  _QWORD *v34; // rax
  _QWORD *v35; // r14
  _QWORD *v36; // rsi
  unsigned __int16 **v37; // rcx
  unsigned __int16 v38; // r15
  unsigned __int16 v39; // ax
  __int64 Heap; // rax
  int v41; // eax
  void *v42; // rdx
  _DWORD *v43; // rdx
  unsigned int v44; // r9d
  _QWORD *v45; // r8
  unsigned __int16 *v49; // [rsp+50h] [rbp-79h]
  __m128i v50; // [rsp+60h] [rbp-69h] BYREF
  __int64 v51; // [rsp+70h] [rbp-59h]
  __int64 v52; // [rsp+78h] [rbp-51h]
  bool *v53; // [rsp+80h] [rbp-49h]
  __int64 v54; // [rsp+88h] [rbp-41h]
  __int64 v55; // [rsp+90h] [rbp-39h] BYREF
  int v56; // [rsp+98h] [rbp-31h]
  int v57; // [rsp+9Ch] [rbp-2Dh]
  __int64 v58; // [rsp+A0h] [rbp-29h]
  int v59; // [rsp+A8h] [rbp-21h]
  int v60; // [rsp+ACh] [rbp-1Dh]
  __int64 v61; // [rsp+B0h] [rbp-19h]
  int v62; // [rsp+B8h] [rbp-11h]
  int v63; // [rsp+BCh] [rbp-Dh]

  v11 = a2;
  v51 = a6;
  v12 = a1;
  v13 = 0LL;
  v53 = a8;
  v54 = a9;
  v49 = 0LL;
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1202,
      (unsigned int)"LdrpSearchPath",
      3,
      "DLL name: %wZ\n",
      a1);
  if ( !*(_QWORD *)v11 )
  {
    v14 = sub_18004CACC(v11);
    if ( v14 < 0 )
      goto LABEL_49;
    v12 = a1;
  }
  v15 = 0;
  if ( a4 && (v16 = *a4) != 0LL )
  {
    v18 = a4[1];
  }
  else
  {
    v17 = (__int16 **)v11;
    if ( *(_QWORD *)(v11 + 16) )
      v17 = (__int16 **)(v11 + 16);
    v16 = *v17;
    v18 = *v17;
  }
  v19 = (__int16 **)(v11 + 16);
  while ( 1 )
  {
    while ( 1 )
    {
      v20 = *v18;
      if ( !*v18 )
        break;
      v21 = (int)v18;
      while ( v20 && v20 != 59 )
        v20 = *++v18;
      if ( (int)v18 - v21 > v15 )
        v15 = (_DWORD)v18 - v21;
      if ( *v18 == 59 )
        ++v18;
    }
    if ( v16 != *v19 || a3 )
      break;
    v16 = *(__int16 **)v11;
    v18 = *(__int16 **)v11;
  }
  v14 = sub_1800473D0((__int64)&v50, (unsigned __int16)*v12 + v15 + 2);
  if ( v14 >= 0 )
  {
    v22 = v50.m128i_i64[1];
    v52 = v50.m128i_i64[1];
    if ( a4 && (v23 = *a4) != 0LL )
    {
      v25 = a4[1];
    }
    else
    {
      v24 = (__int16 **)v11;
      if ( *v19 )
        v24 = (__int16 **)(v11 + 16);
      v23 = *v24;
      v25 = *v24;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( !*v25 )
          {
            if ( v23 != *v19 || a3 )
            {
              v14 = -1073741515;
LABEL_41:
              if ( v13 )
              {
                if ( v14 < 0
                  || (unsigned int)RtlCompareUnicodeStrings(
                                     *((unsigned __int16 **)a7 + 1),
                                     (unsigned __int64)*a7 >> 1,
                                     *((_QWORD *)v13 + 1),
                                     (unsigned __int64)*v13 >> 1,
                                     1) )
                {
                  v57 = 0;
                  v60 = 0;
                  v55 = *(_QWORD *)(qword_18015AE50 + 80);
                  v56 = *(unsigned __int16 *)(qword_18015AE50 + 72) + 2;
                  v58 = *((_QWORD *)v13 + 1);
                  v59 = *v13 + 2;
                  if ( v14 >= 0 )
                  {
                    v61 = *((_QWORD *)a7 + 1);
                    v41 = *a7;
                    v63 = 0;
                    v62 = v41 + 2;
                  }
                  v42 = &unk_180124750;
                  if ( v14 < 0 )
                    v42 = &unk_180124700;
                  EtwEventWriteNoRegistration(&unk_180113E90, v42, (unsigned int)((v14 >> 31) + 3), &v55);
                }
                RtlFreeHeap(qword_18015B328, 0, (unsigned __int64)v13);
              }
              sub_18004C4D8(&v50);
              if ( v14 >= 0 )
              {
                if ( a4 )
                {
                  *a4 = v23;
                  a4[1] = v25;
                }
                if ( v53 )
                  *v53 = v23 == *(__int16 **)(v11 + 16);
              }
              v30 = (_DWORD *)v54;
              if ( v54 )
              {
                v31 = sub_18004C508();
                v32 = 0;
                if ( v31 )
                {
                  v43 = (_DWORD *)(v11 + 40);
                  v44 = 0;
                  if ( *(_WORD *)(v11 + 112) )
                  {
                    v45 = (_QWORD *)(v11 + 64);
                    do
                    {
                      if ( (unsigned __int64)v25 <= *v45 )
                        break;
                      ++v44;
                      v32 |= 16 << *v43;
                      ++v45;
                      ++v43;
                    }
                    while ( v44 < *(unsigned __int16 *)(v11 + 112) );
                  }
                  *v30 = v32;
                }
              }
              goto LABEL_49;
            }
            v23 = *(__int16 **)v11;
            v25 = *(__int16 **)v11;
          }
          if ( *v25 != 59 )
            break;
          ++v25;
        }
        v26 = (_WORD *)v22;
        v27 = v25 == *(__int16 **)(v11 + 8);
        while ( 1 )
        {
          v28 = *v25;
          if ( !*v25 )
            break;
          if ( v28 == 59 )
            goto LABEL_34;
          *v26++ = v28;
          ++v25;
        }
        if ( *v25 == 59 )
LABEL_34:
          ++v25;
        if ( v26 != (_WORD *)v22 )
          break;
        v19 = (__int16 **)(v11 + 16);
      }
      if ( *(v26 - 1) != 92 && *(v26 - 1) != 47 )
      {
        *v26 = 92;
        LOWORD(v26) = (_WORD)v26 + 2;
      }
      v50.m128i_i16[0] = (_WORD)v26 - v22;
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v50, a1);
      v29 = sub_18004A930(&v50, a5, v51, a7, 0LL, 0);
      v14 = v29;
      if ( v27 )
      {
        if ( v29 < 0 )
          goto LABEL_53;
        v34 = (_QWORD *)sub_1800DFC34();
        v35 = v34;
        if ( v34 )
        {
          v36 = (_QWORD *)*v34;
          if ( (_QWORD *)*v34 != v34 )
          {
            v37 = (unsigned __int16 **)a7;
            v38 = *a7 >> 1;
            do
            {
              v39 = *((_WORD *)v36 + 8) >> 1;
              if ( v38 > v39 )
              {
                if ( !(unsigned int)RtlCompareUnicodeStrings(v37[1], v39, v36[3], v39, 1) )
                {
                  v13 = v49;
                  goto LABEL_82;
                }
                v37 = (unsigned __int16 **)a7;
              }
              v36 = (_QWORD *)*v36;
            }
            while ( v36 != v35 );
          }
        }
        Heap = RtlAllocateHeap(qword_18015B328, dword_18015B268 + 0x40000, *a7 + 18LL);
        v49 = (unsigned __int16 *)Heap;
        v13 = (unsigned __int16 *)Heap;
        if ( Heap )
        {
          *(_WORD *)Heap = 0;
          *(_WORD *)(Heap + 2) = *a7;
          *(_QWORD *)(Heap + 8) = Heap + 16;
          RtlCopyUnicodeString((unsigned __int16 *)Heap, a7);
          *(_WORD *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*a7 >> 1)) = 0;
        }
        v14 = -1073741515;
LABEL_82:
        v11 = a2;
      }
      if ( v14 >= 0 )
        goto LABEL_41;
LABEL_53:
      if ( v14 != -1073741515 && v14 != -1073741790 && v14 != -1073741757 && v14 != -1073741715 )
        goto LABEL_41;
      v19 = (__int16 **)(v11 + 16);
      v22 = v52;
      a5->m128i_i16[0] = 0;
    }
  }
LABEL_49:
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1521,
      (unsigned int)"LdrpSearchPath",
      4,
      "Status: 0x%08lx\n",
      v14);
  return (unsigned int)v14;
}
