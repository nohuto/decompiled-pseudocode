/*
 * XREFs of sub_18003E060 @ 0x18003E060
 * Callers:
 *     sub_18003D528 @ 0x18003D528 (sub_18003D528.c)
 *     sub_18003D6A4 @ 0x18003D6A4 (sub_18003D6A4.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18003D9F0 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     sub_18004AB20 @ 0x18004AB20 (sub_18004AB20.c)
 *     sub_18007B250 @ 0x18007B250 (sub_18007B250.c)
 *     LdrAddDllDirectory @ 0x18008F390 (LdrAddDllDirectory.c)
 *     sub_1800D6D28 @ 0x1800D6D28 (sub_1800D6D28.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     sub_18003C0F0 @ 0x18003C0F0 (sub_18003C0F0.c)
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     sub_18003F2C4 @ 0x18003F2C4 (sub_18003F2C4.c)
 *     RtlPrefixUnicodeString @ 0x180071E10 (RtlPrefixUnicodeString.c)
 *     sub_18007B108 @ 0x18007B108 (sub_18007B108.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18003E060(
        char a1,
        char a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        _UNICODE_STRING *a5,
        _UNICODE_STRING **a6,
        WCHAR **a7,
        _DWORD *a8)
{
  _UNICODE_STRING *v9; // rbx
  bool v10; // cc
  PWCH Buffer; // rax
  unsigned int v12; // edi
  unsigned int v13; // esi
  unsigned int v14; // r15d
  int v15; // eax
  __int64 v16; // r13
  const UNICODE_STRING *v17; // r12
  unsigned int v18; // esi
  WCHAR *v19; // rax
  USHORT Length; // si
  PWCH v21; // rdx
  int v22; // ecx
  unsigned int MaximumLength; // eax
  __int16 v24; // ax
  unsigned __int64 v25; // r13
  WCHAR *v26; // rdx
  unsigned __int16 v27; // si
  int v28; // ecx
  unsigned int v29; // eax
  WCHAR **v30; // rcx
  _DWORD *v31; // rsi
  bool v32; // zf
  WCHAR v34; // dx
  __int64 v35; // rax
  __int64 v36; // r14
  PWCH v37; // rcx
  __int16 v38; // r15
  PVOID Heap; // rax
  char v40; // [rsp+30h] [rbp-D0h] BYREF
  char v41; // [rsp+31h] [rbp-CFh]
  PVOID BaseAddress; // [rsp+38h] [rbp-C8h]
  _UNICODE_STRING String2; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v44[4]; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING v45; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING **v46; // [rsp+70h] [rbp-90h]
  WCHAR **v47; // [rsp+78h] [rbp-88h]
  _DWORD *v48; // [rsp+80h] [rbp-80h]
  _BYTE v49[528]; // [rsp+90h] [rbp-70h] BYREF

  v9 = a4;
  v10 = a3->Length <= 8u;
  v41 = a2;
  v46 = a6;
  v47 = a7;
  v48 = a8;
  if ( !v10 )
  {
    Buffer = a3->Buffer;
    if ( *Buffer == 92 )
    {
      v34 = Buffer[1];
      if ( (v34 == 92 || v34 == 63) && Buffer[2] == 63 && Buffer[3] == 92 )
        return sub_18003C0F0(a3, a4, a5, a6, a7, (__int64)a8);
    }
  }
  v12 = 0;
  if ( a7 )
    *a7 = 0LL;
  BaseAddress = v49;
  v13 = 520;
  if ( !a1 )
  {
    v14 = sub_18003E520(a3, 520LL, v49, a7, &v40, v44);
    if ( v14 )
    {
      while ( !v40 )
      {
        if ( v14 <= v13 )
        {
          String2.Buffer = (PWCH)BaseAddress;
          String2.Length = v14;
          String2.MaximumLength = v13;
          v15 = sub_18003F2C4(&String2);
          goto LABEL_10;
        }
        if ( NtCurrentPeb()->BitField < 0x80u )
          goto LABEL_55;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
        BaseAddress = Heap;
        if ( !Heap )
          return 3221225495LL;
        v13 = v14;
        v14 = sub_18003E520(a3, v14, Heap, a7, &v40, v44);
        if ( !v14 )
          break;
      }
    }
    v12 = -1073741773;
    goto LABEL_31;
  }
  String2 = *a3;
  v15 = sub_18003F2C4(&String2);
  LOWORD(v14) = String2.Length;
  v44[0] = v15;
LABEL_10:
  if ( v15 == 2 )
    goto LABEL_11;
  if ( v15 != 1 )
  {
    if ( v15 == 6 )
    {
      v16 = 4LL;
      goto LABEL_12;
    }
LABEL_11:
    v16 = 0LL;
LABEL_12:
    v17 = &stru_180110390;
    goto LABEL_13;
  }
  v17 = &stru_180110130;
  v16 = 2LL;
LABEL_13:
  v18 = (unsigned __int16)v14 + v17->Length + 2 * (1 - v16);
  if ( v18 > 0xFFFE )
  {
LABEL_55:
    v12 = -1073741562;
    goto LABEL_31;
  }
  if ( v9 )
  {
    if ( v18 <= v9->MaximumLength )
    {
LABEL_18:
      Length = v17->Length;
      if ( v17->Length )
      {
        if ( v9->Length + (unsigned int)Length <= v9->MaximumLength )
        {
          v21 = v17->Buffer;
          *(_QWORD *)&v45.Length = &v9->Buffer[(unsigned __int64)v9->Length >> 1];
          memmove(*(void **)&v45.Length, v21, Length);
          v22 = (unsigned __int16)(Length + v9->Length);
          MaximumLength = v9->MaximumLength;
          v9->Length = v22;
          if ( v22 + 1 < MaximumLength )
            *(_WORD *)(*(_QWORD *)&v45.Length + 2 * ((unsigned __int64)Length >> 1)) = 0;
        }
      }
      v24 = v16;
      v25 = 2 * v16;
      v45 = String2;
      v24 *= 2;
      v26 = &String2.Buffer[v25 / 2];
      v27 = v14 - v24;
      if ( (_WORD)v14 != v24 && v9->Length + (unsigned int)v27 <= v9->MaximumLength )
      {
        *(_QWORD *)&v45.Length = &v9->Buffer[(unsigned __int64)v9->Length >> 1];
        memmove(*(void **)&v45.Length, v26, v27);
        v28 = (unsigned __int16)(v27 + v9->Length);
        v29 = v9->MaximumLength;
        v9->Length = v28;
        if ( v28 + 1 < v29 )
          *(_WORD *)(*(_QWORD *)&v45.Length + 2 * ((unsigned __int64)v27 >> 1)) = 0;
      }
      if ( v46 )
        *v46 = v9;
      v9->Buffer[(unsigned __int64)v9->Length >> 1] = 0;
      v30 = v47;
      if ( v47 )
      {
        v26 = *v47;
        if ( *v47 )
          *v47 = (PWCH)((char *)v9->Buffer + (unsigned __int64)v26 + v17->Length - v25 - (_QWORD)BaseAddress);
      }
      v31 = v48;
      if ( v48 )
      {
        v32 = v44[0] == 5;
        *v48 = 0;
        *((_QWORD *)v31 + 1) = 0LL;
        *((_QWORD *)v31 + 2) = 0LL;
        *((_QWORD *)v31 + 3) = 0LL;
        if ( v32 )
        {
          LOBYTE(v30) = 1;
          v35 = sub_18007B108(v30, v26);
          v36 = v35;
          if ( v35 )
          {
            if ( !RtlPrefixUnicodeString((PUNICODE_STRING)(v35 + 24), &String2, 1u) )
              goto LABEL_59;
            v37 = (PWCH)((char *)v9->Buffer + v17->Length + *(unsigned __int16 *)(v36 + 24) - v25);
            *((_QWORD *)v31 + 1) = v37;
            v38 = v14 - *(_WORD *)(v36 + 24);
            *(_WORD *)v31 = v38;
            if ( *v37 == 92 )
            {
              *(_WORD *)v31 = v38 - 2;
              *((_QWORD *)v31 + 1) = v37 + 1;
            }
            *((_WORD *)v31 + 1) = *(_WORD *)v31;
            if ( v41 )
            {
              *((_QWORD *)v31 + 3) = v36;
              *((_QWORD *)v31 + 2) = *(_QWORD *)(v36 + 8);
            }
            else
            {
LABEL_59:
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v36, 0xFFFFFFFF) == 1 )
              {
                ZwClose(*(HANDLE *)(v36 + 8));
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v36);
              }
            }
          }
          else
          {
            RtlLeaveCriticalSection(&stru_18015AE60);
          }
        }
      }
      goto LABEL_31;
    }
    if ( !a5 )
    {
      v12 = -1073741562;
      goto LABEL_31;
    }
  }
  else if ( !a5 )
  {
    v12 = -1073741811;
    goto LABEL_31;
  }
  v19 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
  a5->Buffer = v19;
  if ( v19 )
  {
    LOWORD(v14) = String2.Length;
    v9 = a5;
    a5->Length = 0;
    a5->MaximumLength = v18;
    goto LABEL_18;
  }
  v12 = -1073741801;
LABEL_31:
  if ( BaseAddress != v49 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v12;
}
