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
        _UNICODE_STRING *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        _QWORD *a5,
        wchar_t **a6,
        _DWORD *a7)
{
  unsigned __int16 *v8; // rbx
  bool v10; // cc
  wchar_t *Buffer; // rax
  unsigned int v12; // edi
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int FullPathName_Ustr; // r15d
  int v18; // eax
  __int64 v19; // r13
  const _UNICODE_STRING *v20; // r12
  unsigned int v21; // esi
  PVOID v22; // rax
  unsigned __int16 Length; // si
  wchar_t *v24; // rdx
  int v25; // ecx
  unsigned int v26; // eax
  __int16 v27; // ax
  unsigned __int64 v28; // r13
  wchar_t *v29; // rdx
  unsigned __int16 v30; // si
  int v31; // ecx
  unsigned int v32; // eax
  wchar_t **v33; // rcx
  _DWORD *v34; // rsi
  bool v35; // zf
  wchar_t v37; // cx
  __int64 v38; // rax
  __int64 v39; // r14
  _WORD *v40; // rcx
  __int16 v41; // r15
  PVOID Heap; // rax
  _BYTE v43[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v44; // [rsp+34h] [rbp-CCh]
  PVOID BaseAddress; // [rsp+38h] [rbp-C8h]
  _UNICODE_STRING String2; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v47[4]; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING v48; // [rsp+60h] [rbp-A0h]
  _QWORD *v49; // [rsp+70h] [rbp-90h]
  wchar_t **v50; // [rsp+78h] [rbp-88h]
  _DWORD *v51; // [rsp+80h] [rbp-80h]
  _BYTE v52[528]; // [rsp+90h] [rbp-70h] BYREF

  v8 = a3;
  v44 = a1;
  v10 = a2->Length <= 8u;
  v49 = a5;
  v50 = a6;
  v51 = a7;
  if ( !v10 )
  {
    Buffer = a2->Buffer;
    if ( *Buffer == 92 )
    {
      v37 = Buffer[1];
      if ( (v37 == 92 || v37 == 63) && Buffer[2] == 63 && Buffer[3] == 92 )
        return RtlpWin32NtNameToNtPathName(a2, a3, a4, a5, a6, a7);
      LOBYTE(a1) = v44;
    }
  }
  v12 = 0;
  if ( a6 )
    *a6 = 0LL;
  BaseAddress = v52;
  v13 = 520;
  if ( (a1 & 1) == 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, 520LL, v52, a6, v43, v47);
    if ( FullPathName_Ustr )
    {
      while ( !v43[0] )
      {
        if ( FullPathName_Ustr <= v13 )
        {
          String2.Buffer = (wchar_t *)BaseAddress;
          String2.Length = FullPathName_Ustr;
          String2.MaximumLength = v13;
          v18 = RtlDetermineDosPathNameType_Ustr(&String2, v14, v15, v16);
          goto LABEL_10;
        }
        if ( (v44 & 4) == 0 && ((v44 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
          goto LABEL_60;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, FullPathName_Ustr);
        BaseAddress = Heap;
        if ( !Heap )
          return 3221225495LL;
        v13 = FullPathName_Ustr;
        FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, FullPathName_Ustr, Heap, a6, v43, v47);
        if ( !FullPathName_Ustr )
          break;
      }
    }
    v12 = -1073741773;
    goto LABEL_31;
  }
  String2 = *a2;
  v18 = RtlDetermineDosPathNameType_Ustr(&String2, a7, a5, a4);
  LOWORD(FullPathName_Ustr) = String2.Length;
  v47[0] = v18;
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
    v20 = &RtlpDosDevicesPrefix;
    goto LABEL_13;
  }
  v20 = &RtlpDosDevicesUncPrefix;
  v19 = 2LL;
LABEL_13:
  v21 = (unsigned __int16)FullPathName_Ustr + v20->Length + 2 * (1 - v19);
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
      Length = v20->Length;
      if ( v20->Length )
      {
        if ( *v8 + (unsigned int)Length <= v8[1] )
        {
          v24 = v20->Buffer;
          *(_QWORD *)&v48.Length = *((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1);
          memmove(*(void **)&v48.Length, v24, Length);
          v25 = (unsigned __int16)(Length + *v8);
          v26 = v8[1];
          *v8 = v25;
          if ( v25 + 1 < v26 )
            *(_WORD *)(*(_QWORD *)&v48.Length + 2 * ((unsigned __int64)Length >> 1)) = 0;
        }
      }
      v27 = v19;
      v28 = 2 * v19;
      v48 = String2;
      v27 *= 2;
      v29 = &String2.Buffer[v28 / 2];
      v30 = FullPathName_Ustr - v27;
      if ( (_WORD)FullPathName_Ustr != v27 && *v8 + (unsigned int)v30 <= v8[1] )
      {
        *(_QWORD *)&v48.Length = *((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1);
        memmove(*(void **)&v48.Length, v29, v30);
        v31 = (unsigned __int16)(v30 + *v8);
        v32 = v8[1];
        *v8 = v31;
        if ( v31 + 1 < v32 )
          *(_WORD *)(*(_QWORD *)&v48.Length + 2 * ((unsigned __int64)v30 >> 1)) = 0;
      }
      if ( v49 )
        *v49 = v8;
      *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1)) = 0;
      v33 = v50;
      if ( v50 )
      {
        v29 = *v50;
        if ( *v50 )
          *v50 = (wchar_t *)((char *)v29 + *((_QWORD *)v8 + 1) + v20->Length - v28 - (_QWORD)BaseAddress);
      }
      v34 = v51;
      if ( v51 )
      {
        v35 = v47[0] == 5;
        *v51 = 0;
        *((_QWORD *)v34 + 1) = 0LL;
        *((_QWORD *)v34 + 2) = 0LL;
        *((_QWORD *)v34 + 3) = 0LL;
        if ( v35 )
        {
          LOBYTE(v33) = 1;
          v38 = RtlpReferenceCurrentDirectory(v33, v29);
          v39 = v38;
          if ( v38 )
          {
            if ( !RtlPrefixUnicodeString((PUNICODE_STRING)(v38 + 24), &String2, 1u) )
              goto LABEL_61;
            v40 = (_WORD *)(*((_QWORD *)v8 + 1) + v20->Length + *(unsigned __int16 *)(v39 + 24) - v28);
            *((_QWORD *)v34 + 1) = v40;
            v41 = FullPathName_Ustr - *(_WORD *)(v39 + 24);
            *(_WORD *)v34 = v41;
            if ( *v40 == 92 )
            {
              *(_WORD *)v34 = v41 - 2;
              *((_QWORD *)v34 + 1) = v40 + 1;
            }
            v35 = (v44 & 2) == 0;
            *((_WORD *)v34 + 1) = *(_WORD *)v34;
            if ( v35 )
            {
LABEL_61:
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v39, 0xFFFFFFFF) == 1 )
              {
                NtClose(*(HANDLE *)(v39 + 8));
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v39);
              }
            }
            else
            {
              *((_QWORD *)v34 + 3) = v39;
              *((_QWORD *)v34 + 2) = *(_QWORD *)(v39 + 8);
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
  v22 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
  *((_QWORD *)a4 + 1) = v22;
  if ( v22 )
  {
    LOWORD(FullPathName_Ustr) = String2.Length;
    v8 = a4;
    *a4 = 0;
    a4[1] = v21;
    goto LABEL_18;
  }
  v12 = -1073741801;
LABEL_31:
  if ( BaseAddress != v52 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v12;
}
