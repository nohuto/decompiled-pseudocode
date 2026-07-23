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
        const UNICODE_STRING *a1,
        __int64 a2,
        char a3,
        WCHAR **a4,
        __m128i *a5,
        _UNICODE_STRING *a6,
        UNICODE_STRING *a7,
        bool *a8,
        __int64 a9)
{
  __int64 v11; // r14
  const UNICODE_STRING *v12; // rbx
  PCWCH *v13; // r15
  int v14; // ebx
  unsigned int v15; // r8d
  WCHAR *v16; // rdx
  WCHAR **v17; // rcx
  WCHAR *v18; // rcx
  WCHAR **v19; // rsi
  WCHAR v20; // ax
  int v21; // r9d
  PWCH Buffer; // rdx
  WCHAR *v23; // r12
  WCHAR **v24; // rax
  WCHAR *v25; // rdi
  PWCH v26; // rax
  bool v27; // si
  WCHAR v28; // cx
  int v29; // eax
  _DWORD *v30; // rsi
  char v31; // al
  int v32; // r10d
  _QWORD *v34; // rax
  _QWORD *v35; // r14
  _QWORD *v36; // rsi
  PCWCH *v37; // rcx
  unsigned __int16 v38; // r15
  unsigned __int16 v39; // ax
  _UNICODE_STRING *Heap; // rax
  int Length; // eax
  const EVENT_DESCRIPTOR *v42; // rdx
  _DWORD *v43; // rdx
  unsigned int v44; // r9d
  _QWORD *v45; // r8
  _UNICODE_STRING *v49; // [rsp+50h] [rbp-79h]
  _UNICODE_STRING Destination; // [rsp+60h] [rbp-69h] BYREF
  _UNICODE_STRING *v51; // [rsp+70h] [rbp-59h]
  PWCH v52; // [rsp+78h] [rbp-51h]
  bool *v53; // [rsp+80h] [rbp-49h]
  __int64 v54; // [rsp+88h] [rbp-41h]
  __int64 v55; // [rsp+90h] [rbp-39h] BYREF
  int v56; // [rsp+98h] [rbp-31h]
  int v57; // [rsp+9Ch] [rbp-2Dh]
  PCWCH v58; // [rsp+A0h] [rbp-29h]
  int v59; // [rsp+A8h] [rbp-21h]
  int v60; // [rsp+ACh] [rbp-1Dh]
  PWCH v61; // [rsp+B0h] [rbp-19h]
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
    v17 = (WCHAR **)v11;
    if ( *(_QWORD *)(v11 + 16) )
      v17 = (WCHAR **)(v11 + 16);
    v16 = *v17;
    v18 = *v17;
  }
  v19 = (WCHAR **)(v11 + 16);
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
    v16 = *(WCHAR **)v11;
    v18 = *(WCHAR **)v11;
  }
  v14 = sub_1800473D0((__int64)&Destination, v12->Length + v15 + 2);
  if ( v14 >= 0 )
  {
    Buffer = Destination.Buffer;
    v52 = Destination.Buffer;
    if ( a4 && (v23 = *a4) != 0LL )
    {
      v25 = a4[1];
    }
    else
    {
      v24 = (WCHAR **)v11;
      if ( *v19 )
        v24 = (WCHAR **)(v11 + 16);
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
                  || RtlCompareUnicodeStrings(
                       a7->Buffer,
                       (unsigned __int64)a7->Length >> 1,
                       v13[1],
                       (unsigned __int64)*(unsigned __int16 *)v13 >> 1,
                       1u) )
                {
                  v57 = 0;
                  v60 = 0;
                  v55 = *(_QWORD *)(qword_18015AE50 + 80);
                  v56 = *(unsigned __int16 *)(qword_18015AE50 + 72) + 2;
                  v58 = v13[1];
                  v59 = *(unsigned __int16 *)v13 + 2;
                  if ( v14 >= 0 )
                  {
                    v61 = a7->Buffer;
                    Length = a7->Length;
                    v63 = 0;
                    v62 = Length + 2;
                  }
                  v42 = (const EVENT_DESCRIPTOR *)&unk_180124750;
                  if ( v14 < 0 )
                    v42 = &stru_180124700;
                  EtwEventWriteNoRegistration(&stru_180113E90, v42, (v14 >> 31) + 3, (PEVENT_DATA_DESCRIPTOR)&v55);
                }
                RtlFreeHeap(HeapHandle, 0, v13);
              }
              sub_18004C4D8(&Destination);
              if ( v14 >= 0 )
              {
                if ( a4 )
                {
                  *a4 = v23;
                  a4[1] = v25;
                }
                if ( v53 )
                  *v53 = v23 == *(WCHAR **)(v11 + 16);
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
            v23 = *(WCHAR **)v11;
            v25 = *(WCHAR **)v11;
          }
          if ( *v25 != 59 )
            break;
          ++v25;
        }
        v26 = Buffer;
        v27 = v25 == *(WCHAR **)(v11 + 8);
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
        if ( v26 != Buffer )
          break;
        v19 = (WCHAR **)(v11 + 16);
      }
      if ( *(v26 - 1) != 92 && *(v26 - 1) != 47 )
      {
        *v26 = 92;
        LOWORD(v26) = (_WORD)v26 + 2;
      }
      Destination.Length = (_WORD)v26 - (_WORD)Buffer;
      RtlAppendUnicodeStringToString(&Destination, a1);
      v29 = sub_18004A930((__m128i *)&Destination, a5, v51, a7, 0LL, 0);
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
            v37 = (PCWCH *)a7;
            v38 = a7->Length >> 1;
            do
            {
              v39 = *((_WORD *)v36 + 8) >> 1;
              if ( v38 > v39 )
              {
                if ( !RtlCompareUnicodeStrings(v37[1], v39, (PCWCH)v36[3], v39, 1u) )
                {
                  v13 = (PCWCH *)v49;
                  goto LABEL_82;
                }
                v37 = (PCWCH *)a7;
              }
              v36 = (_QWORD *)*v36;
            }
            while ( v36 != v35 );
          }
        }
        Heap = (_UNICODE_STRING *)RtlAllocateHeap(HeapHandle, dword_18015B268 + 0x40000, a7->Length + 18LL);
        v49 = Heap;
        v13 = (PCWCH *)Heap;
        if ( Heap )
        {
          Heap->Length = 0;
          Heap->MaximumLength = a7->Length;
          Heap->Buffer = &Heap[1].Length;
          RtlCopyUnicodeString(Heap, a7);
          v13[1][(unsigned __int64)a7->Length >> 1] = 0;
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
      v19 = (WCHAR **)(v11 + 16);
      Buffer = v52;
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
