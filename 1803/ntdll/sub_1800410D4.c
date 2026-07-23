/*
 * XREFs of sub_1800410D4 @ 0x1800410D4
 * Callers:
 *     sub_180041F10 @ 0x180041F10 (sub_180041F10.c)
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlCopyUnicodeString @ 0x18001F9C0 (RtlCopyUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 *     sub_18003FCF8 @ 0x18003FCF8 (sub_18003FCF8.c)
 *     sub_18003FEA8 @ 0x18003FEA8 (sub_18003FEA8.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     sub_180042420 @ 0x180042420 (sub_180042420.c)
 *     sub_180042604 @ 0x180042604 (sub_180042604.c)
 *     sub_180043500 @ 0x180043500 (sub_180043500.c)
 *     EtwEventWriteNoRegistration @ 0x180082B90 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800D94B4 @ 0x1800D94B4 (sub_1800D94B4.c)
 */

__int64 __fastcall sub_1800410D4(
        const UNICODE_STRING *a1,
        __int64 a2,
        char a3,
        WCHAR **a4,
        _UNICODE_STRING *a5,
        _UNICODE_STRING *a6,
        UNICODE_STRING *a7,
        bool *a8,
        __int64 a9)
{
  unsigned int v9; // ebx
  const UNICODE_STRING *v13; // rdi
  PCWCH *v14; // r13
  int v15; // edi
  unsigned int v16; // r9d
  WCHAR *v17; // rdx
  WCHAR *v18; // r8
  WCHAR *v19; // rcx
  int v20; // r10d
  unsigned int v21; // eax
  WCHAR *v22; // rax
  PWCH Buffer; // rdx
  WCHAR *v24; // r14
  WCHAR *v25; // rsi
  PWCH v26; // rax
  bool v27; // r15
  WCHAR v28; // cx
  int v29; // eax
  WCHAR **v30; // r15
  _DWORD *v31; // r14
  _QWORD *v33; // rax
  _QWORD *v34; // r13
  _QWORD *v35; // r15
  UNICODE_STRING *v36; // r10
  unsigned __int16 v37; // cx
  unsigned __int16 v38; // ax
  _UNICODE_STRING *Heap; // rax
  int Length; // eax
  const EVENT_DESCRIPTOR *v41; // rdx
  _DWORD *v42; // rdx
  int v43; // r10d
  _QWORD *v44; // r8
  unsigned __int16 v46; // [rsp+32h] [rbp-97h]
  _UNICODE_STRING *v48; // [rsp+48h] [rbp-81h]
  _UNICODE_STRING Destination; // [rsp+58h] [rbp-71h] BYREF
  _UNICODE_STRING *v50; // [rsp+68h] [rbp-61h]
  PWCH v51; // [rsp+70h] [rbp-59h]
  WCHAR **v52; // [rsp+78h] [rbp-51h]
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

  v9 = 0;
  v50 = a6;
  v13 = a1;
  v14 = 0LL;
  v53 = a8;
  v54 = a9;
  v52 = a4;
  v48 = 0LL;
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1201,
      (unsigned int)"LdrpSearchPath",
      3,
      "DLL name: %wZ\n",
      a1);
  if ( !*(_QWORD *)a2 )
  {
    v15 = sub_180043500(a2);
    if ( v15 < 0 )
      goto LABEL_52;
    v13 = a1;
  }
  v16 = 0;
  if ( a4 )
  {
    v17 = *a4;
    if ( *a4 )
    {
      v19 = a4[1];
      v18 = *(WCHAR **)(a2 + 16);
      goto LABEL_11;
    }
  }
  v18 = *(WCHAR **)(a2 + 16);
  v17 = v18;
  if ( v18 )
    goto LABEL_10;
  do
  {
    v17 = *(WCHAR **)a2;
LABEL_10:
    v19 = v17;
LABEL_11:
    if ( *v19 )
    {
      do
      {
        v20 = (int)v19;
        while ( *v19 && *v19 != 59 )
          ++v19;
        v21 = (_DWORD)v19 - v20;
        if ( (int)v19 - v20 <= v16 )
          v21 = v16;
        v16 = v21;
        v22 = v19 + 1;
        if ( *v19 != 59 )
          v22 = v19;
        v19 = v22;
      }
      while ( *v22 );
    }
  }
  while ( v17 == v18 && !a3 );
  v15 = sub_18003FEA8((__int64)&Destination, v13->Length + v16 + 2);
  if ( v15 < 0 )
    goto LABEL_52;
  Buffer = Destination.Buffer;
  v51 = Destination.Buffer;
  if ( a4 && (v24 = *a4) != 0LL )
  {
    v25 = a4[1];
  }
  else
  {
    v24 = *(WCHAR **)(a2 + 16);
    if ( !v24 )
      v24 = *(WCHAR **)a2;
    v25 = v24;
  }
  while ( 1 )
  {
    while ( *v25 )
    {
      if ( *v25 == 59 )
      {
        ++v25;
      }
      else
      {
        v26 = Buffer;
        v27 = v25 == *(WCHAR **)(a2 + 8);
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
        {
          if ( *(v26 - 1) != 92 && *(v26 - 1) != 47 )
          {
            *v26 = 92;
            LOWORD(v26) = (_WORD)v26 + 2;
          }
          Destination.Length = (_WORD)v26 - (_WORD)Buffer;
          RtlAppendUnicodeStringToString(&Destination, a1);
          v29 = sub_18003FCF8(&Destination.Length, a5, v50, a7, 0);
          v15 = v29;
          if ( v27 )
          {
            if ( v29 < 0 )
              goto LABEL_41;
            v33 = (_QWORD *)sub_1800D94B4();
            v34 = v33;
            if ( v33 )
            {
              v35 = (_QWORD *)*v33;
              if ( (_QWORD *)*v33 != v33 )
              {
                v36 = a7;
                v37 = a7->Length >> 1;
                v46 = v37;
                do
                {
                  v38 = *((_WORD *)v35 + 8) >> 1;
                  if ( v37 > v38 )
                  {
                    if ( !RtlCompareUnicodeStrings(v36->Buffer, v38, (PCWCH)v35[3], v38, 1u) )
                    {
                      v14 = (PCWCH *)v48;
                      goto LABEL_40;
                    }
                    v37 = v46;
                    v36 = a7;
                  }
                  v35 = (_QWORD *)*v35;
                }
                while ( v35 != v34 );
              }
            }
            Heap = (_UNICODE_STRING *)RtlAllocateHeap(HeapHandle, Flags + 0x40000, a7->Length + 18LL);
            v48 = Heap;
            v14 = (PCWCH *)Heap;
            if ( Heap )
            {
              Heap->Length = 0;
              Heap->MaximumLength = a7->Length;
              Heap->Buffer = &Heap[1].Length;
              RtlCopyUnicodeString(Heap, a7);
              v14[1][(unsigned __int64)a7->Length >> 1] = 0;
            }
            v15 = -1073741515;
          }
LABEL_40:
          if ( v15 >= 0 )
            goto LABEL_44;
LABEL_41:
          if ( v15 != -1073741515 && v15 != -1073741790 && v15 != -1073741757 && v15 != -1073741715 )
            goto LABEL_44;
          Buffer = v51;
          a5->Length = 0;
        }
      }
    }
    if ( v24 != *(WCHAR **)(a2 + 16) || a3 )
      break;
    v24 = *(WCHAR **)a2;
    v25 = *(WCHAR **)a2;
  }
  v15 = -1073741515;
LABEL_44:
  if ( v14 )
  {
    if ( v15 < 0
      || RtlCompareUnicodeStrings(
           a7->Buffer,
           (unsigned __int64)a7->Length >> 1,
           v14[1],
           (unsigned __int64)*(unsigned __int16 *)v14 >> 1,
           1u) )
    {
      v57 = 0;
      v60 = 0;
      v55 = *(_QWORD *)(qword_18015BF88 + 80);
      v56 = *(unsigned __int16 *)(qword_18015BF88 + 72) + 2;
      v58 = v14[1];
      v59 = *(unsigned __int16 *)v14 + 2;
      if ( v15 >= 0 )
      {
        v61 = a7->Buffer;
        Length = a7->Length;
        v63 = 0;
        v62 = Length + 2;
      }
      v41 = (const EVENT_DESCRIPTOR *)&unk_180123FD0;
      if ( v15 < 0 )
        v41 = &stru_180123F80;
      EtwEventWriteNoRegistration(&stru_1801160F8, v41, (v15 >> 31) + 3, (PEVENT_DATA_DESCRIPTOR)&v55);
    }
    RtlFreeHeap(HeapHandle, 0, v14);
  }
  sub_180042420(&Destination);
  if ( v15 >= 0 )
  {
    v30 = v52;
    if ( v52 )
    {
      *v52 = v24;
      v30[1] = v25;
    }
    if ( v53 )
      *v53 = v24 == *(WCHAR **)(a2 + 16);
  }
  v31 = (_DWORD *)v54;
  if ( v54 && (unsigned __int8)sub_180042604() )
  {
    v42 = (_DWORD *)(a2 + 40);
    v43 = 0;
    if ( *(_WORD *)(a2 + 112) )
    {
      v44 = (_QWORD *)(a2 + 64);
      do
      {
        if ( (unsigned __int64)v25 <= *v44 )
          break;
        ++v9;
        v43 |= 16 << *v42;
        ++v44;
        ++v42;
      }
      while ( v9 < *(unsigned __int16 *)(a2 + 112) );
    }
    *v31 = v43;
  }
LABEL_52:
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1519,
      (unsigned int)"LdrpSearchPath",
      4,
      "Status: 0x%08lx\n",
      v15);
  return (unsigned int)v15;
}
