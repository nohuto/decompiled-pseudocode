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
        __m128i *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 **a6,
        const void **a7,
        _DWORD *a8)
{
  unsigned __int16 *v9; // rbx
  bool v10; // cc
  _WORD *v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // esi
  unsigned int v14; // r15d
  int v15; // eax
  __int64 v16; // r13
  const wchar_t *v17; // r12
  unsigned int v18; // esi
  __int64 v19; // rax
  wchar_t v20; // si
  const void *v21; // rdx
  int v22; // ecx
  unsigned int v23; // eax
  __int16 v24; // ax
  __int64 v25; // r13
  char *v26; // rdx
  unsigned __int16 v27; // si
  int v28; // ecx
  unsigned int v29; // eax
  const void **v30; // rcx
  _DWORD *v31; // rsi
  bool v32; // zf
  __int16 v34; // dx
  __int64 v35; // rax
  __int64 v36; // r8
  unsigned __int64 v37; // r14
  _WORD *v38; // rcx
  __int16 v39; // r15
  __int64 Heap; // rax
  char v41; // [rsp+30h] [rbp-D0h] BYREF
  char v42; // [rsp+31h] [rbp-CFh]
  _BYTE *v43; // [rsp+38h] [rbp-C8h]
  __m128i v44; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v45[4]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v46; // [rsp+60h] [rbp-A0h]
  unsigned __int16 **v47; // [rsp+70h] [rbp-90h]
  const void **v48; // [rsp+78h] [rbp-88h]
  _DWORD *v49; // [rsp+80h] [rbp-80h]
  _BYTE v50[528]; // [rsp+90h] [rbp-70h] BYREF

  v9 = a4;
  v10 = a3->m128i_i16[0] <= 8u;
  v42 = a2;
  v47 = a6;
  v48 = a7;
  v49 = a8;
  if ( !v10 )
  {
    v11 = (_WORD *)a3->m128i_i64[1];
    if ( *v11 == 92 )
    {
      v34 = v11[1];
      if ( (v34 == 92 || v34 == 63) && v11[2] == 63 && v11[3] == 92 )
        return sub_18003C0F0(a3, a4, a5, a6, a7, (__int64)a8);
    }
  }
  v12 = 0;
  if ( a7 )
    *a7 = 0LL;
  v43 = v50;
  v13 = 520;
  if ( !a1 )
  {
    v14 = sub_18003E520(a3, 520LL, v50, a7, &v41, v45);
    if ( v14 )
    {
      while ( !v41 )
      {
        if ( v14 <= v13 )
        {
          v44.m128i_i64[1] = (__int64)v43;
          v44.m128i_i16[0] = v14;
          v44.m128i_i16[1] = v13;
          v15 = sub_18003F2C4(&v44);
          goto LABEL_10;
        }
        if ( NtCurrentPeb()->BitField < 0x80u )
          goto LABEL_55;
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
        v43 = (_BYTE *)Heap;
        if ( !Heap )
          return 3221225495LL;
        v13 = v14;
        v14 = sub_18003E520(a3, v14, Heap, a7, &v41, v45);
        if ( !v14 )
          break;
      }
    }
    v12 = -1073741773;
    goto LABEL_31;
  }
  v44 = *a3;
  v15 = sub_18003F2C4(&v44);
  LOWORD(v14) = v44.m128i_i16[0];
  v45[0] = v15;
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
    v17 = L"\b\n";
    goto LABEL_13;
  }
  v17 = (const wchar_t *)&unk_180110130;
  v16 = 2LL;
LABEL_13:
  v18 = (unsigned __int16)v14 + *v17 + 2 * (1 - v16);
  if ( v18 > 0xFFFE )
  {
LABEL_55:
    v12 = -1073741562;
    goto LABEL_31;
  }
  if ( v9 )
  {
    if ( v18 <= v9[1] )
    {
LABEL_18:
      v20 = *v17;
      if ( *v17 )
      {
        if ( *v9 + (unsigned int)v20 <= v9[1] )
        {
          v21 = (const void *)*((_QWORD *)v17 + 1);
          v46.m128i_i64[0] = *((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1);
          memmove((void *)v46.m128i_i64[0], v21, v20);
          v22 = (unsigned __int16)(v20 + *v9);
          v23 = v9[1];
          *v9 = v22;
          if ( v22 + 1 < v23 )
            *(_WORD *)(v46.m128i_i64[0] + 2 * ((unsigned __int64)v20 >> 1)) = 0;
        }
      }
      v24 = v16;
      v25 = 2 * v16;
      v46 = v44;
      v24 *= 2;
      v26 = (char *)(v25 + v44.m128i_i64[1]);
      v27 = v14 - v24;
      if ( (_WORD)v14 != v24 && *v9 + (unsigned int)v27 <= v9[1] )
      {
        v46.m128i_i64[0] = *((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1);
        memmove((void *)v46.m128i_i64[0], v26, v27);
        v28 = (unsigned __int16)(v27 + *v9);
        v29 = v9[1];
        *v9 = v28;
        if ( v28 + 1 < v29 )
          *(_WORD *)(v46.m128i_i64[0] + 2 * ((unsigned __int64)v27 >> 1)) = 0;
      }
      if ( v47 )
        *v47 = v9;
      *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1)) = 0;
      v30 = v48;
      if ( v48 )
      {
        v26 = (char *)*v48;
        if ( *v48 )
          *v48 = &v26[*v17 - v25 - (_QWORD)v43 + *((_QWORD *)v9 + 1)];
      }
      v31 = v49;
      if ( v49 )
      {
        v32 = v45[0] == 5;
        *v49 = 0;
        *((_QWORD *)v31 + 1) = 0LL;
        *((_QWORD *)v31 + 2) = 0LL;
        *((_QWORD *)v31 + 3) = 0LL;
        if ( v32 )
        {
          LOBYTE(v30) = 1;
          v35 = sub_18007B108(v30, v26);
          v37 = v35;
          if ( v35 )
          {
            LOBYTE(v36) = 1;
            if ( !(unsigned __int8)RtlPrefixUnicodeString(v35 + 24, &v44, v36) )
              goto LABEL_59;
            v38 = (_WORD *)(*((_QWORD *)v9 + 1) + *v17 + *(unsigned __int16 *)(v37 + 24) - v25);
            *((_QWORD *)v31 + 1) = v38;
            v39 = v14 - *(_WORD *)(v37 + 24);
            *(_WORD *)v31 = v39;
            if ( *v38 == 92 )
            {
              *(_WORD *)v31 = v39 - 2;
              *((_QWORD *)v31 + 1) = v38 + 1;
            }
            *((_WORD *)v31 + 1) = *(_WORD *)v31;
            if ( v42 )
            {
              *((_QWORD *)v31 + 3) = v37;
              *((_QWORD *)v31 + 2) = *(_QWORD *)(v37 + 8);
            }
            else
            {
LABEL_59:
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v37, 0xFFFFFFFF) == 1 )
              {
                ZwClose(*(_QWORD *)(v37 + 8));
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v37);
              }
            }
          }
          else
          {
            RtlLeaveCriticalSection((__int64)&unk_18015AE60);
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
  v19 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v18);
  *((_QWORD *)a5 + 1) = v19;
  if ( v19 )
  {
    LOWORD(v14) = v44.m128i_i16[0];
    v9 = a5;
    *a5 = 0;
    a5[1] = v18;
    goto LABEL_18;
  }
  v12 = -1073741801;
LABEL_31:
  if ( v43 != v50 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v43);
  return v12;
}
