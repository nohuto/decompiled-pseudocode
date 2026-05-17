/*
 * XREFs of sub_18003D190 @ 0x18003D190
 * Callers:
 *     sub_18003C228 @ 0x18003C228 (sub_18003C228.c)
 *     sub_18003C82C @ 0x18003C82C (sub_18003C82C.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18003D120 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 *     sub_180076D50 @ 0x180076D50 (sub_180076D50.c)
 *     LdrAddDllDirectory @ 0x180089810 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 *     sub_18003E414 @ 0x18003E414 (sub_18003E414.c)
 *     sub_1800400E0 @ 0x1800400E0 (sub_1800400E0.c)
 *     RtlPrefixUnicodeString @ 0x18006CD90 (RtlPrefixUnicodeString.c)
 *     sub_180076A28 @ 0x180076A28 (sub_180076A28.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_18003D190(
        int a1,
        __int128 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        _QWORD *a5,
        _QWORD *a6,
        _DWORD *a7)
{
  unsigned __int16 *v8; // rbx
  bool v10; // cc
  _WORD *v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // ebp
  unsigned int v14; // r15d
  _BYTE *v15; // r13
  int v16; // eax
  unsigned int v17; // r13d
  const wchar_t *v18; // r12
  int v19; // esi
  unsigned int v20; // ebp
  __int64 v21; // rax
  __int64 v22; // rdx
  void *v23; // r14
  int v24; // ecx
  unsigned int v25; // eax
  bool v26; // zf
  unsigned __int16 v27; // si
  __int64 v28; // r13
  void *v29; // r14
  int v30; // ecx
  unsigned int v31; // eax
  _BYTE *v32; // rsi
  _QWORD *v33; // rcx
  _DWORD *v34; // r14
  __int16 v36; // cx
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned __int64 v39; // rbp
  _WORD *v40; // rcx
  __int16 v41; // r15
  __int64 Heap; // rax
  _BYTE v43[4]; // [rsp+30h] [rbp-298h] BYREF
  int v44; // [rsp+34h] [rbp-294h]
  _BYTE *v45; // [rsp+38h] [rbp-290h]
  __int128 v46; // [rsp+40h] [rbp-288h] BYREF
  int v47; // [rsp+50h] [rbp-278h] BYREF
  _QWORD *v48; // [rsp+58h] [rbp-270h]
  _QWORD *v49; // [rsp+60h] [rbp-268h]
  _DWORD *v50; // [rsp+68h] [rbp-260h]
  _BYTE v51[528]; // [rsp+70h] [rbp-258h] BYREF

  v8 = a3;
  v44 = a1;
  v10 = *(_WORD *)a2 <= 8u;
  v48 = a5;
  v49 = a6;
  v50 = a7;
  if ( !v10 )
  {
    v11 = (_WORD *)*((_QWORD *)a2 + 1);
    if ( *v11 == 92 )
    {
      v36 = v11[1];
      if ( (v36 == 92 || v36 == 63) && v11[2] == 63 && v11[3] == 92 )
        return sub_1800400E0((_DWORD)a2, (_DWORD)a3, (_DWORD)a4, (_DWORD)a5, (__int64)a6, (__int64)a7);
      LOBYTE(a1) = v44;
    }
  }
  v12 = 0;
  if ( a6 )
    *a6 = 0LL;
  v45 = v51;
  v13 = 520;
  if ( (a1 & 1) == 0 )
  {
    v14 = sub_18003D640(a2, 520LL, v51, a6, v43, &v47);
    if ( v14 )
    {
      v15 = v51;
      while ( !v43[0] )
      {
        if ( v14 <= v13 )
        {
          LOWORD(v46) = v14;
          WORD1(v46) = v13;
          *((_QWORD *)&v46 + 1) = v15;
          v16 = sub_18003E414(&v46);
          goto LABEL_11;
        }
        if ( (v44 & 4) == 0 && ((v44 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
          goto LABEL_54;
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
        v45 = (_BYTE *)Heap;
        v15 = (_BYTE *)Heap;
        if ( !Heap )
          return 3221225495LL;
        v13 = v14;
        v14 = sub_18003D640(a2, v14, Heap, a6, v43, &v47);
        if ( !v14 )
          break;
      }
    }
    v32 = v45;
    v12 = -1073741773;
    goto LABEL_33;
  }
  v46 = *a2;
  v16 = sub_18003E414(&v46);
  LOWORD(v14) = v46;
  v47 = v16;
LABEL_11:
  if ( v16 == 2 )
    goto LABEL_12;
  if ( v16 != 1 )
  {
    if ( v16 == 6 )
    {
      v17 = 4;
      goto LABEL_13;
    }
LABEL_12:
    v17 = 0;
LABEL_13:
    v18 = L"\b\n";
    goto LABEL_14;
  }
  v18 = (const wchar_t *)&unk_180110040;
  v17 = 2;
LABEL_14:
  v19 = *v18;
  v20 = (unsigned __int16)v14 + v19 + 2 * (1 - v17);
  if ( v20 > 0xFFFE )
  {
LABEL_54:
    v12 = -1073741562;
    goto LABEL_55;
  }
  if ( v8 )
  {
    if ( v20 <= v8[1] )
    {
LABEL_19:
      if ( (_WORD)v19 )
      {
        v22 = *v8;
        if ( (unsigned int)v22 + (unsigned __int16)v19 > v8[1] )
          goto LABEL_24;
        v23 = (void *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1));
        memmove(v23, *((const void **)v18 + 1), (unsigned __int16)v19);
        v24 = (unsigned __int16)(v19 + *v8);
        v25 = v8[1];
        *v8 = v24;
        if ( v24 + 1 < v25 )
          *((_WORD *)v23 + ((unsigned __int64)(unsigned __int16)v19 >> 1)) = 0;
      }
      v22 = *v8;
LABEL_24:
      v27 = v14 - 2 * v17;
      v26 = (_WORD)v14 == (unsigned __int16)(2 * v17);
      v28 = 2LL * v17;
      if ( !v26 && v27 + (unsigned int)(unsigned __int16)v22 <= v8[1] )
      {
        v29 = (void *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v22 >> 1));
        memmove(v29, (const void *)(v28 + *((_QWORD *)&v46 + 1)), v27);
        v30 = (unsigned __int16)(v27 + *v8);
        v31 = v8[1];
        *v8 = v30;
        if ( v30 + 1 < v31 )
          *((_WORD *)v29 + ((unsigned __int64)v27 >> 1)) = 0;
      }
      if ( v48 )
        *v48 = v8;
      v32 = v45;
      *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1)) = 0;
      v33 = v49;
      if ( v49 )
      {
        v22 = *v49;
        if ( *v49 )
          *v49 = *((_QWORD *)v8 + 1) + v22 + *v18 - v28 - (_QWORD)v32;
      }
      v34 = v50;
      if ( v50 )
      {
        v26 = v47 == 5;
        *v50 = 0;
        *((_QWORD *)v34 + 1) = 0LL;
        *((_QWORD *)v34 + 2) = 0LL;
        *((_QWORD *)v34 + 3) = 0LL;
        if ( v26 )
        {
          LOBYTE(v33) = 1;
          v37 = sub_180076A28(v33, v22);
          v39 = v37;
          if ( v37 )
          {
            LOBYTE(v38) = 1;
            if ( !(unsigned __int8)RtlPrefixUnicodeString(v37 + 24, &v46, v38) )
              goto LABEL_70;
            v40 = (_WORD *)(*((_QWORD *)v8 + 1) + *(unsigned __int16 *)(v39 + 24) + *v18 - v28);
            *((_QWORD *)v34 + 1) = v40;
            v41 = v14 - *(_WORD *)(v39 + 24);
            *(_WORD *)v34 = v41;
            if ( *v40 == 92 )
            {
              v41 -= 2;
              *(_WORD *)v34 = v41;
              *((_QWORD *)v34 + 1) = v40 + 1;
            }
            v26 = (v44 & 2) == 0;
            *((_WORD *)v34 + 1) = v41;
            if ( v26 )
            {
LABEL_70:
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v39, 0xFFFFFFFF) == 1 )
              {
                ZwClose(*(_QWORD *)(v39 + 8));
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v39);
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
            RtlLeaveCriticalSection((__int64)&unk_18015BE80);
          }
        }
      }
      goto LABEL_33;
    }
    if ( !a4 )
    {
      v12 = -1073741562;
      goto LABEL_55;
    }
  }
  else if ( !a4 )
  {
    v12 = -1073741811;
    goto LABEL_55;
  }
  v21 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v20);
  *((_QWORD *)a4 + 1) = v21;
  if ( v21 )
  {
    LOWORD(v14) = v46;
    v8 = a4;
    *a4 = 0;
    a4[1] = v20;
    LOWORD(v19) = *v18;
    goto LABEL_19;
  }
  v12 = -1073741801;
LABEL_55:
  v32 = v45;
LABEL_33:
  if ( v32 != v51 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v32);
  return v12;
}
