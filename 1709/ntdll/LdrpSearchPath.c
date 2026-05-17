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
        unsigned __int16 *a1,
        __int64 a2,
        char a3,
        __int16 **a4,
        _WORD *a5,
        __int64 a6,
        unsigned __int16 *a7,
        bool *a8,
        __int64 a9)
{
  __int64 v11; // r14
  unsigned __int16 *v12; // rbx
  unsigned __int16 *v13; // r15
  int v14; // ebx
  unsigned int v15; // r8d
  __int16 *v16; // rdx
  __int16 **v17; // rax
  __int16 *v18; // rcx
  __int16 **v19; // rsi
  __int16 v20; // ax
  int v21; // r9d
  _WORD *v22; // rdx
  __int16 *v23; // r12
  __int16 **v24; // rax
  __int16 *v25; // rdi
  _WORD *v26; // rax
  bool v27; // si
  __int16 v28; // cx
  int v29; // eax
  _DWORD *v30; // rsi
  char IsSecurityEtwLoggingEnabled; // al
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
  __int64 v46; // [rsp+20h] [rbp-A9h]
  unsigned __int16 *v47; // [rsp+28h] [rbp-A1h]
  unsigned __int16 *v51; // [rsp+50h] [rbp-79h]
  __int16 v52; // [rsp+60h] [rbp-69h] BYREF
  _WORD *v53; // [rsp+68h] [rbp-61h]
  __int64 v54; // [rsp+70h] [rbp-59h]
  _WORD *v55; // [rsp+78h] [rbp-51h]
  bool *v56; // [rsp+80h] [rbp-49h]
  __int64 v57; // [rsp+88h] [rbp-41h]
  __int64 v58; // [rsp+90h] [rbp-39h] BYREF
  int v59; // [rsp+98h] [rbp-31h]
  int v60; // [rsp+9Ch] [rbp-2Dh]
  __int64 v61; // [rsp+A0h] [rbp-29h]
  int v62; // [rsp+A8h] [rbp-21h]
  int v63; // [rsp+ACh] [rbp-1Dh]
  __int64 v64; // [rsp+B0h] [rbp-19h]
  int v65; // [rsp+B8h] [rbp-11h]
  int v66; // [rsp+BCh] [rbp-Dh]

  v11 = a2;
  v54 = a6;
  v12 = a1;
  v13 = 0LL;
  v56 = a8;
  v57 = a9;
  v51 = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
  {
    v47 = a1;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1201,
      (unsigned int)"LdrpSearchPath",
      3,
      "DLL name: %wZ\n");
  }
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
    v17 = (__int16 **)(v11 + 16);
    if ( !*(_QWORD *)(v11 + 16) )
      v17 = (__int16 **)v11;
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
  v14 = LdrpAllocateUnicodeString(&v52, *v12 + v15 + 2);
  if ( v14 >= 0 )
  {
    v22 = v53;
    v55 = v53;
    if ( a4 && (v23 = *a4) != 0LL )
    {
      v25 = a4[1];
    }
    else
    {
      v24 = (__int16 **)(v11 + 16);
      if ( !*v19 )
        v24 = (__int16 **)v11;
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
                  v60 = 0;
                  v63 = 0;
                  v58 = *(_QWORD *)(LdrpImageEntry + 80);
                  v59 = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
                  v61 = *((_QWORD *)v13 + 1);
                  v62 = *v13 + 2;
                  if ( v14 >= 0 )
                  {
                    v64 = *((_QWORD *)a7 + 1);
                    v41 = *a7;
                    v66 = 0;
                    v65 = v41 + 2;
                  }
                  v42 = &CurDirDllLoadFailureWarning;
                  if ( v14 < 0 )
                    v42 = &CurDirDllLoadFailureError;
                  EtwEventWriteNoRegistration(&UserLoaderGuid, v42, (unsigned int)((v14 >> 31) + 3), &v58, v46, v47);
                }
                RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v13);
              }
              LdrpFreeUnicodeString(&v52);
              if ( v14 >= 0 )
              {
                if ( a4 )
                {
                  *a4 = v23;
                  a4[1] = v25;
                }
                if ( v56 )
                  *v56 = v23 == *(__int16 **)(v11 + 16);
              }
              v30 = (_DWORD *)v57;
              if ( v57 )
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
            v23 = *(__int16 **)v11;
            v25 = *(__int16 **)v11;
          }
          if ( *v25 != 59 )
            break;
          ++v25;
        }
        v26 = v22;
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
        if ( v26 != v22 )
          break;
        v19 = (__int16 **)(v11 + 16);
      }
      if ( *(v26 - 1) != 92 && *(v26 - 1) != 47 )
      {
        *v26 = 92;
        LOWORD(v26) = (_WORD)v26 + 2;
      }
      v52 = (_WORD)v26 - (_WORD)v22;
      RtlAppendUnicodeStringToString(&v52, a1);
      v29 = LdrpResolveDllName((unsigned int)&v52, (_DWORD)a5, v54, (_DWORD)a7, 0);
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
            v37 = (unsigned __int16 **)a7;
            v38 = *a7 >> 1;
            do
            {
              v39 = *((_WORD *)v36 + 8) >> 1;
              if ( v38 > v39 )
              {
                if ( !(unsigned int)RtlCompareUnicodeStrings(v37[1], v39, v36[3], v39, 1) )
                {
                  v13 = v51;
                  goto LABEL_82;
                }
                v37 = (unsigned __int16 **)a7;
              }
              v36 = (_QWORD *)*v36;
            }
            while ( v36 != v35 );
          }
        }
        Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, *a7 + 18LL);
        v51 = (unsigned __int16 *)Heap;
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
      v22 = v55;
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
