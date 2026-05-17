/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName @ 0x180032C90
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180031E9C (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800324B0 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x1800325F0 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     LdrpGetNtPathFromDosPath @ 0x18004DC14 (LdrpGetNtPathFromDosPath.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x18007AC3C (RtlDosPathNameToRelativeNtPathName.c)
 *     LdrAddDllDirectory @ 0x18008C4E0 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180033160 (RtlGetFullPathName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180033F0C (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlpWin32NtNameToNtPathName @ 0x18004D868 (RtlpWin32NtNameToNtPathName.c)
 *     RtlPrefixUnicodeString @ 0x18006D410 (RtlPrefixUnicodeString.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007A934 (RtlpReferenceCurrentDirectory.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName(
        int a1,
        __int128 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        _QWORD *a5,
        const void **a6,
        _DWORD *a7)
{
  unsigned __int16 *v8; // rbx
  bool v10; // cc
  _WORD *v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int FullPathName_Ustr; // r15d
  int v18; // eax
  __int64 v19; // r13
  const wchar_t *v20; // r12
  unsigned int v21; // esi
  __int64 v22; // rax
  wchar_t v23; // si
  const void *v24; // rdx
  int v25; // ecx
  unsigned int v26; // eax
  __int16 v27; // ax
  __int64 v28; // r13
  char *v29; // rdx
  unsigned __int16 v30; // si
  int v31; // ecx
  unsigned int v32; // eax
  const void **v33; // rcx
  _DWORD *v34; // rsi
  bool v35; // zf
  __int16 v37; // cx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r14
  _WORD *v41; // rcx
  __int16 v42; // r15
  __int64 Heap; // rax
  _BYTE v44[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v45; // [rsp+34h] [rbp-CCh]
  _BYTE *v46; // [rsp+38h] [rbp-C8h]
  __int128 v47; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v48[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v49; // [rsp+60h] [rbp-A0h]
  _QWORD *v50; // [rsp+70h] [rbp-90h]
  const void **v51; // [rsp+78h] [rbp-88h]
  _DWORD *v52; // [rsp+80h] [rbp-80h]
  _BYTE v53[528]; // [rsp+90h] [rbp-70h] BYREF

  v8 = a3;
  v45 = a1;
  v10 = *(_WORD *)a2 <= 8u;
  v50 = a5;
  v51 = a6;
  v52 = a7;
  if ( !v10 )
  {
    v11 = (_WORD *)*((_QWORD *)a2 + 1);
    if ( *v11 == 92 )
    {
      v37 = v11[1];
      if ( (v37 == 92 || v37 == 63) && v11[2] == 63 && v11[3] == 92 )
        return RtlpWin32NtNameToNtPathName((_DWORD)a2, (_DWORD)a3, (_DWORD)a4, (_DWORD)a5, (__int64)a6, (__int64)a7);
      LOBYTE(a1) = v45;
    }
  }
  v12 = 0;
  if ( a6 )
    *a6 = 0LL;
  v46 = v53;
  v13 = 520;
  if ( (a1 & 1) == 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, 520LL, v53, a6, v44, v48);
    if ( FullPathName_Ustr )
    {
      while ( !v44[0] )
      {
        if ( FullPathName_Ustr <= v13 )
        {
          *((_QWORD *)&v47 + 1) = v46;
          LOWORD(v47) = FullPathName_Ustr;
          WORD1(v47) = v13;
          v18 = RtlDetermineDosPathNameType_Ustr(&v47, v14, v15, v16);
          goto LABEL_10;
        }
        if ( (v45 & 4) == 0 && ((v45 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
          goto LABEL_60;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, FullPathName_Ustr);
        v46 = (_BYTE *)Heap;
        if ( !Heap )
          return 3221225495LL;
        v13 = FullPathName_Ustr;
        FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, FullPathName_Ustr, Heap, a6, v44, v48);
        if ( !FullPathName_Ustr )
          break;
      }
    }
    v12 = -1073741773;
    goto LABEL_31;
  }
  v47 = *a2;
  v18 = RtlDetermineDosPathNameType_Ustr(&v47, a7, a5, a4);
  LOWORD(FullPathName_Ustr) = v47;
  v48[0] = v18;
LABEL_10:
  if ( v18 == 2 )
    goto LABEL_11;
  if ( v18 != 1 )
  {
    if ( v18 == 6 )
    {
      v19 = 4LL;
      goto LABEL_12;
    }
LABEL_11:
    v19 = 0LL;
LABEL_12:
    v20 = L"\b\n";
    goto LABEL_13;
  }
  v20 = (const wchar_t *)&RtlpDosDevicesUncPrefix;
  v19 = 2LL;
LABEL_13:
  v21 = (unsigned __int16)FullPathName_Ustr + *v20 + 2 * (1 - v19);
  if ( v21 > 0xFFFE )
  {
LABEL_60:
    v12 = -1073741562;
    goto LABEL_31;
  }
  if ( v8 )
  {
    if ( v21 <= v8[1] )
    {
LABEL_18:
      v23 = *v20;
      if ( *v20 )
      {
        if ( *v8 + (unsigned int)v23 <= v8[1] )
        {
          v24 = (const void *)*((_QWORD *)v20 + 1);
          *(_QWORD *)&v49 = *((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1);
          memmove((void *)v49, v24, v23);
          v25 = (unsigned __int16)(v23 + *v8);
          v26 = v8[1];
          *v8 = v25;
          if ( v25 + 1 < v26 )
            *(_WORD *)(v49 + 2 * ((unsigned __int64)v23 >> 1)) = 0;
        }
      }
      v27 = v19;
      v28 = 2 * v19;
      v49 = v47;
      v27 *= 2;
      v29 = (char *)(v28 + *((_QWORD *)&v47 + 1));
      v30 = FullPathName_Ustr - v27;
      if ( (_WORD)FullPathName_Ustr != v27 && *v8 + (unsigned int)v30 <= v8[1] )
      {
        *(_QWORD *)&v49 = *((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1);
        memmove((void *)v49, v29, v30);
        v31 = (unsigned __int16)(v30 + *v8);
        v32 = v8[1];
        *v8 = v31;
        if ( v31 + 1 < v32 )
          *(_WORD *)(v49 + 2 * ((unsigned __int64)v30 >> 1)) = 0;
      }
      if ( v50 )
        *v50 = v8;
      *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1)) = 0;
      v33 = v51;
      if ( v51 )
      {
        v29 = (char *)*v51;
        if ( *v51 )
          *v51 = &v29[*((_QWORD *)v8 + 1) + *v20 - v28 - (_QWORD)v46];
      }
      v34 = v52;
      if ( v52 )
      {
        v35 = v48[0] == 5;
        *v52 = 0;
        *((_QWORD *)v34 + 1) = 0LL;
        *((_QWORD *)v34 + 2) = 0LL;
        *((_QWORD *)v34 + 3) = 0LL;
        if ( v35 )
        {
          LOBYTE(v33) = 1;
          v38 = RtlpReferenceCurrentDirectory(v33, v29);
          v40 = v38;
          if ( v38 )
          {
            LOBYTE(v39) = 1;
            if ( !(unsigned __int8)RtlPrefixUnicodeString(v38 + 24, &v47, v39) )
              goto LABEL_61;
            v41 = (_WORD *)(*((_QWORD *)v8 + 1) + *v20 + *(unsigned __int16 *)(v40 + 24) - v28);
            *((_QWORD *)v34 + 1) = v41;
            v42 = FullPathName_Ustr - *(_WORD *)(v40 + 24);
            *(_WORD *)v34 = v42;
            if ( *v41 == 92 )
            {
              *(_WORD *)v34 = v42 - 2;
              *((_QWORD *)v34 + 1) = v41 + 1;
            }
            v35 = (v45 & 2) == 0;
            *((_WORD *)v34 + 1) = *(_WORD *)v34;
            if ( v35 )
            {
LABEL_61:
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v40, 0xFFFFFFFF) == 1 )
              {
                NtClose(*(HANDLE *)(v40 + 8));
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v40);
              }
            }
            else
            {
              *((_QWORD *)v34 + 3) = v40;
              *((_QWORD *)v34 + 2) = *(_QWORD *)(v40 + 8);
            }
          }
          else
          {
            RtlLeaveCriticalSection(&FastPebLock);
          }
        }
      }
      goto LABEL_31;
    }
    if ( !a4 )
    {
      v12 = -1073741562;
      goto LABEL_31;
    }
  }
  else if ( !a4 )
  {
    v12 = -1073741811;
    goto LABEL_31;
  }
  v22 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v21);
  *((_QWORD *)a4 + 1) = v22;
  if ( v22 )
  {
    LOWORD(FullPathName_Ustr) = v47;
    v8 = a4;
    *a4 = 0;
    a4[1] = v21;
    goto LABEL_18;
  }
  v12 = -1073741801;
LABEL_31:
  if ( v46 != v53 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v46);
  return v12;
}
