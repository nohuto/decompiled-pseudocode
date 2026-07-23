/*
 * XREFs of LdrpSearchPath @ 0x18004D43C
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x180035624 (LdrpFindLoadedDllInternal.c)
 *     LdrpMapDllSearchPath @ 0x18004F618 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x18002DA90 (RtlCopyUnicodeString.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x180049F70 (RtlCompareUnicodeStrings.c)
 *     RtlAppendUnicodeStringToString @ 0x18004D9D0 (RtlAppendUnicodeStringToString.c)
 *     LdrpResolveDllName @ 0x18004DA64 (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x18004DCF0 (LdrpAllocateUnicodeString.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18004DE54 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x18004F9BC (LdrpFreeUnicodeString.c)
 *     LdrpComputeLazyDllPath @ 0x18007DED8 (LdrpComputeLazyDllPath.c)
 *     EtwEventWriteNoRegistration @ 0x180087990 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DE5B4 (RtlpLookupSafeCurDirList.c)
 */

__int64 __fastcall LdrpSearchPath(
        const UNICODE_STRING *a1,
        __int64 a2,
        char a3,
        wchar_t **a4,
        _WORD *a5,
        __int64 a6,
        const UNICODE_STRING *a7,
        bool *a8,
        __int64 a9)
{
  __int64 v11; // r14
  const UNICODE_STRING *v12; // rbx
  PCWCH *v13; // r15
  int v14; // ebx
  unsigned int v15; // r8d
  wchar_t *v16; // rdx
  wchar_t **v17; // rax
  wchar_t *v18; // rcx
  wchar_t **v19; // rsi
  wchar_t v20; // ax
  int v21; // r9d
  wchar_t *Buffer; // rdx
  wchar_t *v23; // r12
  wchar_t **v24; // rax
  wchar_t *v25; // rdi
  wchar_t *v26; // rax
  bool v27; // si
  wchar_t v28; // cx
  int v29; // eax
  _DWORD *v30; // rsi
  char IsSecurityEtwLoggingEnabled; // al
  int v32; // r10d
  _QWORD *v34; // rax
  _QWORD *v35; // r14
  _QWORD *v36; // rsi
  const UNICODE_STRING *v37; // rcx
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
  __int64 v51; // [rsp+70h] [rbp-59h]
  wchar_t *v52; // [rsp+78h] [rbp-51h]
  bool *v53; // [rsp+80h] [rbp-49h]
  __int64 v54; // [rsp+88h] [rbp-41h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-39h] BYREF
  PCWCH v56; // [rsp+A0h] [rbp-29h]
  int v57; // [rsp+A8h] [rbp-21h]
  int v58; // [rsp+ACh] [rbp-1Dh]
  wchar_t *v59; // [rsp+B0h] [rbp-19h]
  int v60; // [rsp+B8h] [rbp-11h]
  int v61; // [rsp+BCh] [rbp-Dh]

  v11 = a2;
  v51 = a6;
  v12 = a1;
  v13 = 0LL;
  v53 = a8;
  v54 = a9;
  v49 = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1201,
      (unsigned int)"LdrpSearchPath",
      3,
      "DLL name: %wZ\n",
      a1);
  if ( !*(_QWORD *)v11 )
  {
    v14 = LdrpComputeLazyDllPath(v11);
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
    v17 = (wchar_t **)(v11 + 16);
    if ( !*(_QWORD *)(v11 + 16) )
      v17 = (wchar_t **)v11;
    v16 = *v17;
    v18 = *v17;
  }
  v19 = (wchar_t **)(v11 + 16);
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
    v16 = *(wchar_t **)v11;
    v18 = *(wchar_t **)v11;
  }
  v14 = LdrpAllocateUnicodeString(&Destination, v12->Length + v15 + 2);
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
      v24 = (wchar_t **)(v11 + 16);
      if ( !*v19 )
        v24 = (wchar_t **)v11;
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
                  UserData.Reserved = 0;
                  v58 = 0;
                  UserData.Ptr = *(_QWORD *)(LdrpImageEntry + 80);
                  UserData.Size = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
                  v56 = v13[1];
                  v57 = *(unsigned __int16 *)v13 + 2;
                  if ( v14 >= 0 )
                  {
                    v59 = a7->Buffer;
                    Length = a7->Length;
                    v61 = 0;
                    v60 = Length + 2;
                  }
                  v42 = (const EVENT_DESCRIPTOR *)&CurDirDllLoadFailureWarning;
                  if ( v14 < 0 )
                    v42 = &CurDirDllLoadFailureError;
                  EtwEventWriteNoRegistration(&UserLoaderGuid, v42, (v14 >> 31) + 3, &UserData);
                }
                RtlFreeHeap(LdrpHeap, 0, v13);
              }
              LdrpFreeUnicodeString(&Destination);
              if ( v14 >= 0 )
              {
                if ( a4 )
                {
                  *a4 = v23;
                  a4[1] = v25;
                }
                if ( v53 )
                  *v53 = v23 == *(wchar_t **)(v11 + 16);
              }
              v30 = (_DWORD *)v54;
              if ( v54 )
              {
                IsSecurityEtwLoggingEnabled = LdrpIsSecurityEtwLoggingEnabled();
                v32 = 0;
                if ( IsSecurityEtwLoggingEnabled )
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
            v23 = *(wchar_t **)v11;
            v25 = *(wchar_t **)v11;
          }
          if ( *v25 != 59 )
            break;
          ++v25;
        }
        v26 = Buffer;
        v27 = v25 == *(wchar_t **)(v11 + 8);
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
        v19 = (wchar_t **)(v11 + 16);
      }
      if ( *(v26 - 1) != 92 && *(v26 - 1) != 47 )
      {
        *v26 = 92;
        LOWORD(v26) = (_WORD)v26 + 2;
      }
      Destination.Length = (_WORD)v26 - (_WORD)Buffer;
      RtlAppendUnicodeStringToString(&Destination, a1);
      v29 = LdrpResolveDllName(&Destination, a5, v51, a7, 0);
      v14 = v29;
      if ( v27 )
      {
        if ( v29 < 0 )
          goto LABEL_53;
        v34 = (_QWORD *)RtlpLookupSafeCurDirList();
        v35 = v34;
        if ( v34 )
        {
          v36 = (_QWORD *)*v34;
          if ( (_QWORD *)*v34 != v34 )
          {
            v37 = a7;
            v38 = a7->Length >> 1;
            do
            {
              v39 = *((_WORD *)v36 + 8) >> 1;
              if ( v38 > v39 )
              {
                if ( !RtlCompareUnicodeStrings(v37->Buffer, v39, (PCWCH)v36[3], v39, 1u) )
                {
                  v13 = (PCWCH *)v49;
                  goto LABEL_82;
                }
                v37 = a7;
              }
              v36 = (_QWORD *)*v36;
            }
            while ( v36 != v35 );
          }
        }
        Heap = (_UNICODE_STRING *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, a7->Length + 18LL);
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
      v19 = (wchar_t **)(v11 + 16);
      Buffer = v52;
      *a5 = 0;
    }
  }
LABEL_49:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1519,
      (unsigned int)"LdrpSearchPath",
      4,
      "Status: 0x%08lx\n",
      v14);
  return (unsigned int)v14;
}
